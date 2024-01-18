// Copyright 2018 Allegorithmic Inc. All rights reserved.
// File: SSubstanceEditorPanel.cpp

#include "SSubstanceEditorPanel.h"
#include "SubstanceEditorPrivatePCH.h"
#include "SubstanceEditorModule.h"
#include "SubstanceCoreModule.h"
#include "SubstanceCoreClasses.h"
#include "SubstanceCoreHelpers.h"
#include "SubstancePreset.h"

#include "PropertyCustomizationHelpers.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "MouseDeltaTracker.h"
#include "MaterialGraph/MaterialGraph.h"
#include "ScopedTransaction.h"
#include "LevelEditor.h"
#include "SAssetDropTarget.h"
#include "Misc/ScopedSlowTask.h"
#include "Runtime/Launch/Resources/Version.h"

#include "substance/framework/graph.h"
#include "substance/framework/input.h"
#include "substance/framework/typedefs.h"

#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Colors/SColorPicker.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Layout/SGridPanel.h"

#include "Misc/MessageDialog.h"

#include "Engine/Selection.h"
#include "Editor.h"
#include "EditorStyleSet.h"

#include "SubstanceInput.inl"

#define LOC_NAMESPACE TEXT("SubstanceEditor")
#define LOCTEXT_NAMESPACE "SubstanceEditor"

SSubstanceEditorPanel::~SSubstanceEditorPanel()
{
	if (Graph && HasPresetChanged())
	{
		FinalizeSubstanceChanges();
	}
}

TWeakPtr<ISubstanceEditor> SSubstanceEditorPanel::GetSubstanceEditor() const
{
	return SubstanceEditorPtr;
}

void SSubstanceEditorPanel::OnRedo()
{
	OnUndo();
}

void SSubstanceEditorPanel::OnUndo()
{
	//The input instances with the graph and their desc
	for (const auto& ItInInst : Graph->Instance->getInputs())
	{
		if (ItInInst->mDesc.isImage())
		{
			SubstanceAir::InputInstanceImage* ImgInput = (SubstanceAir::InputInstanceImage*)ItInInst;
			if (!Graph->LinkImageInput(ImgInput))
			{
				ImgInput->reset();
			}
		}
	}

	ConstructInputs();
	ConstructWidget();
	Substance::Helpers::RenderAsync(Graph->Instance);
}

void SSubstanceEditorPanel::Construct(const FArguments& InArgs)
{
	SubstanceEditorPtr = InArgs._SubstanceEditor;

	OutputSizePow2Min = 5;
	OutputSizePow2Max = FMath::FloorLog2(FModuleManager::GetModuleChecked<ISubstanceCore>("SubstanceCore").GetMaxOutputTextureSize());

	Graph = SubstanceEditorPtr.Pin()->GetGraph();

	if (!Graph->ParentFactory || !Graph->Instance)
	{
		UE_LOG(LogSubstanceEditor, Error, TEXT("Invalid Substance Graph Instance, cannot edit the instance."));
		return;
	}

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
#if ENGINE_MAJOR_VERSION > 4
	ThumbnailPool = UThumbnailManager::Get().GetSharedThumbnailPool();
#else
	ThumbnailPool = LevelEditorModule.GetFirstLevelEditor()->GetThumbnailPool();
#endif
	CachePresetValues();
	ConstructDescription();
	ConstructPresets();
	ConstructOutputs();
	ConstructInputs();
	ConstructWidget();
}

void SSubstanceEditorPanel::CachePresetValues()
{
	LastCachedValuesPreset = Graph->GetCurrentPresetAsString();
}

bool SSubstanceEditorPanel::HasPresetChanged()
{
	return (LastCachedValuesPreset != Graph->GetCurrentPresetAsString());
}

void SSubstanceEditorPanel::ConstructDescription()
{
	DescArea = SNew(SExpandableArea)
	           .AreaTitle(FText::FromString(TEXT("Graph Description:")))
	           .InitiallyCollapsed(false)
	           .BodyContent()
	           [
	               SNew(SBorder)
	               .Content()
	               [
	                   SNew(SVerticalBox)
	                   + SVerticalBox::Slot()
	                   .Padding(0.1f)
	                   .AutoHeight()
	                   [
	                       SNew(SHorizontalBox)
	                       + SHorizontalBox::Slot()
	                       .FillWidth(0.3f)
	                       [
	                           SNew(STextBlock)
	                           .Text(FText::FromString(TEXT("Label:")))
	                       ]
	                       + SHorizontalBox::Slot()
	                       .Padding(0.1f)
	                       [
	                           SNew(STextBlock)
	                           .Text(FText::FromString(Graph->Instance->mDesc.mLabel.c_str()))
	                       ]
	                   ]
	                   + SVerticalBox::Slot()
	                   .Padding(0.1f)
	                   .AutoHeight()
	                   [
	                       SNew(SHorizontalBox)
	                       + SHorizontalBox::Slot()
	                       .FillWidth(0.3f)
	                       [
	                           SNew(STextBlock)
	                           .Text(FText::FromString(TEXT("Description:")))
	                       ]
	                       + SHorizontalBox::Slot()
	                       .Padding(0.1f)
	                       [
	                           SNew(STextBlock)
	                           .AutoWrapText(true)
	                           .Text(Graph->Instance->mDesc.mDescription.length() ? FText::FromString(Graph->Instance->mDesc.mDescription.c_str()) : FText::FromString(TEXT("N/A")))
	                       ]
	                   ]
	                   + SVerticalBox::Slot()
	                   .AutoHeight()
	                   .Padding(0.0f, 3.0f)
	                   [
	                       SNew(SHorizontalBox)
	                       + SHorizontalBox::Slot()
	                       .FillWidth(0.3f)
	                       [
	                           SNew(STextBlock)
	                           .Text(FText::FromString(TEXT("Runtime modifications:")))
	                       ]
	                       + SHorizontalBox::Slot()
	                       .Padding(0.1f)
	                       [
	                           SNew(SCheckBox)
	                           .OnCheckStateChanged(this, &SSubstanceEditorPanel::OnFreezeGraphValueChanged)
	                           .IsChecked(this, &SSubstanceEditorPanel::GetFreezeGraphValue)
	                           .Content()
	                           [
	                               SNew(STextBlock)
	                               .Text(FText::FromString(TEXT("Disable")))
	                           ]
	                       ]
	                   ]
	               ]
	           ];
}

TSharedRef<ITableRow> SSubstanceEditorPanel::GeneratePresetWidget(TSharedPtr<STextBlock> presetLabel, const TSharedRef<STableViewBase>& OwnerTable)
{
	auto row =
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Center)
		.Padding(FMargin(0.f, 0.f, 0.f, 0.f))
		[
			presetLabel.ToSharedRef()
		];
	if (presetLabel->GetText().EqualTo(Graph->CurrentPreset)) {
		row->AddSlot()
			.AutoWidth()
			.HAlign(HAlign_Left)
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock).Text(FText::FromString(TEXT(" \u2713")))
			];
	}
	return SNew(STableRow<TSharedPtr<FString>>, OwnerTable).Content()[row];
}

void SSubstanceEditorPanel::OnPresetSelectionChanged(
	TSharedPtr<STextBlock> selectedBlock,
	ESelectInfo::Type SelectionType
) const {
	bool OneSelected       = PresetSelectionList && PresetSelectionList->GetNumItemsSelected() == 1;
	bool OneOrMoreSelected = PresetSelectionList && PresetSelectionList->GetNumItemsSelected() >= 1;
	PresetApplyButton->SetEnabled(OneSelected);
	PresetUpdateButton->SetEnabled(OneSelected);
	PresetDeleteButton->SetEnabled(OneOrMoreSelected);
	PresetExportButton->SetEnabled(OneOrMoreSelected);
}

void SSubstanceEditorPanel::SetPresetButtonsEnabled(bool value)
{
	PresetApplyButton->SetEnabled(value);
	PresetUpdateButton->SetEnabled(value);
	PresetDeleteButton->SetEnabled(value);
	PresetExportButton->SetEnabled(value);
	PresetCreateButton->SetEnabled(value);
	PresetImportButton->SetEnabled(value);
}

void SSubstanceEditorPanel::InvalidateCurrentPreset()
{
	Graph->InvalidateCurrentPreset();
	PresetSelectionList->RebuildList();
}

void SSubstanceEditorPanel::OnPresetApply()
{
	if (PresetSelectionList && PresetSelectionList->GetNumItemsSelected()) {
		auto text = PresetSelectionList->GetSelectedItems()[0]->GetText();
		Graph->ApplyPreset(text.ToString());
		PresetSelectionList->RebuildList();
		UE_LOG(LogSubstanceEditor, Log, TEXT("Preset apply: %s"), *text.ToString());
	}
	// Reset combo selections
	WidgetSizeX->ClearSelection();
	WidgetSizeY->ClearSelection();
}

void SSubstanceEditorPanel::OnPresetUpdateRequest()
{
	SetPresetButtonsEnabled(false);
	PresetUpdateButton->SetVisibility(EVisibility::Collapsed);
	PresetConfirmUpdateBox->SetVisibility(EVisibility::Visible);
	if (PresetSelectionList && PresetSelectionList->GetNumItemsSelected()) {
		auto text = PresetSelectionList->GetSelectedItems()[0]->GetText();
		PresetUpdateNameInput->SetText(text);
		UE_LOG(LogSubstanceEditor, Log, TEXT("Preset update request: %s"), *text.ToString());
	}
}

void SSubstanceEditorPanel::OnPresetUpdateCancel()
{
	SetPresetButtonsEnabled(true);
	PresetUpdateButton->SetVisibility(EVisibility::Visible);
	PresetConfirmUpdateBox->SetVisibility(EVisibility::Collapsed);
	UE_LOG(LogSubstanceEditor, Log, TEXT("Preset update canceled"));
}

void SSubstanceEditorPanel::OnPresetUpdateConfirm()
{
	SetPresetButtonsEnabled(true);
	PresetUpdateButton->SetVisibility(EVisibility::Visible);
	PresetConfirmUpdateBox->SetVisibility(EVisibility::Collapsed);
	auto text = PresetUpdateNameInput->GetText();
	for (int i = 0; i < PresetSelectionList->GetNumItemsSelected(); i++) {
		auto existingText = PresetSelectionList->GetSelectedItems()[i]->GetText();
		PresetSelectionList->RebuildList();
		if (text.EqualTo(existingText)) {
			Graph->PresetUpdate(text.ToString());
			UE_LOG(LogSubstanceEditor, Log, TEXT("Preset update existing: %s"), *text.ToString());
			return;
		} else {
			Graph->CreatePreset(text.ToString());
			PresetItems.Add(SNew(STextBlock).Text(text));
			PresetSelectionList->RequestListRefresh();
			UE_LOG(LogSubstanceEditor, Log, TEXT("Preset update new: %s"), *text.ToString());
			return;
		}
	}
}

void SSubstanceEditorPanel::OnPresetDeleteRequest()
{
	SetPresetButtonsEnabled(false);
	PresetDeleteButton->SetVisibility(EVisibility::Collapsed);
	PresetConfirmDeleteBox->SetVisibility(EVisibility::Visible);
}

void SSubstanceEditorPanel::OnPresetDeleteCancel()
{
	SetPresetButtonsEnabled(true);
	PresetDeleteButton->SetVisibility(EVisibility::Visible);
	PresetConfirmDeleteBox->SetVisibility(EVisibility::Collapsed);
	UE_LOG(LogSubstanceEditor, Log, TEXT("Preset deleted canceled"));
}

void SSubstanceEditorPanel::OnPresetDeleteConfirm()
{
	SetPresetButtonsEnabled(true);
	PresetDeleteButton->SetVisibility(EVisibility::Visible);
	PresetConfirmDeleteBox->SetVisibility(EVisibility::Collapsed);
	if (PresetSelectionList && PresetSelectionList->GetNumItemsSelected()) {
		for (auto& presetItr : PresetSelectionList->GetSelectedItems()) {
			auto text = presetItr->GetText();
			Graph->RemovePreset(text.ToString());
			for (int i = 0; i < PresetItems.Num(); i++) {
				if (PresetItems[i]->GetText().EqualTo(text)) {
					PresetItems.RemoveAt(i);
					i--;
				}
			}
			UE_LOG(LogSubstanceEditor, Log, TEXT("Preset remove: %s"), *text.ToString());
		}
		PresetSelectionList->RequestListRefresh();
	}
}

void SSubstanceEditorPanel::OnPresetExport()
{
	TArray<FString> SelectedPresets;
	if (PresetSelectionList && PresetSelectionList->GetNumItemsSelected()) {
		for (auto& presetItr : PresetSelectionList->GetSelectedItems()) {
			auto text = presetItr->GetText();
			SelectedPresets.AddUnique(text.ToString());
		}
	}
	Substance::Helpers::ExportSelectedPresets(Graph, SelectedPresets);
}

void SSubstanceEditorPanel::OnPresetCreateRequest()
{
	SetPresetButtonsEnabled(false);
	PresetCreateButton->SetVisibility(EVisibility::Collapsed);
	PresetConfirmCreateBox->SetVisibility(EVisibility::Visible);
}

void SSubstanceEditorPanel::OnPresetCreateCancel()
{
	SetPresetButtonsEnabled(true);
	PresetCreateButton->SetVisibility(EVisibility::Visible);
	PresetConfirmCreateBox->SetVisibility(EVisibility::Collapsed);
	UE_LOG(LogSubstanceEditor, Log, TEXT("Preset create canceled"));
}

void SSubstanceEditorPanel::OnPresetCreateConfirm()
{
	SetPresetButtonsEnabled(true);
	PresetCreateButton->SetVisibility(EVisibility::Visible);
	PresetConfirmCreateBox->SetVisibility(EVisibility::Collapsed);
	FText currentInput = PresetCreateNameInput->GetText();
	if (!currentInput.IsEmpty()) {
		Graph->CreatePreset(currentInput.ToString());
		PresetCreateNameInput->SetText(FText::FromString(TEXT("")));
		PresetItems.Add(SNew(STextBlock).Text(currentInput));
		PresetSelectionList->RequestListRefresh();
		PresetSelectionList->RebuildList();
		UE_LOG(LogSubstanceEditor, Log, TEXT("Preset create: %s"), *currentInput.ToString());
	}
}

void SSubstanceEditorPanel::OnPresetImport()
{
	TArray<FString> ImportedPresets = Substance::Helpers::ImportPresets(Graph);
	for (auto& labelItr : ImportedPresets) {
		PresetItems.Add(SNew(STextBlock)
			.Text(FText::FromString(labelItr)));
	}
	PresetSelectionList->RequestListRefresh();
}

void SSubstanceEditorPanel::ConstructPresets()
{
	auto BuildButton = [this](const FString& ButtonText, bool enabled, void(SSubstanceEditorPanel::*OnPressed)(void))
	{
		return
			SNew(SButton)
			.OnReleased(this, OnPressed)
			.IsEnabled(enabled)
			.Content()
			[
				SNew(STextBlock)
				.Margin(FMargin(4.0f))
				.Text(FText::FromString(ButtonText))
				.Justification(ETextJustify::Center)
			];
	};

	auto BuildConfirmBox = [this](
		TSharedPtr<SWidget> titleWidget,
		const FString& ConfirmText,
		void(SSubstanceEditorPanel::* OnCancel)(void),
		void(SSubstanceEditorPanel::* OnConfirm)(void)
	) {
		return SNew(SVerticalBox)
		.Visibility(EVisibility::Collapsed)
		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Center)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			[
				titleWidget.ToSharedRef()
			]
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Center)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.FillWidth(1.0)
			.HAlign(HAlign_Fill)
			[
				SNew(SButton)
				.HAlign(HAlign_Center)
				.OnReleased(this, OnCancel)
				.Content()
				[
					SNew(STextBlock)
					.Margin(FMargin(4.0f))
					.Text(FText::FromString(TEXT("Cancel")))
				]
			]
			+ SHorizontalBox::Slot()
			.FillWidth(1.0)
			.HAlign(HAlign_Fill)
			[
				SNew(SButton)
				.HAlign(HAlign_Center)
				.OnReleased(this, OnConfirm)
				.Content()
				[
					SNew(STextBlock)
					.Margin(FMargin(4.0f))
					.Text(FText::FromString(ConfirmText))
				]
			]
		];
	};

	const float PreseListWidth = 250.0f;
	const float PresetControlWidth = 220.0f;

	for (auto& Preset : Graph->Presets) {
		FString PresetLabel = Preset.GetPresetLabel();
		PresetItems.Add(SNew(STextBlock).Text(FText::FromString(PresetLabel)));
	}

	PresetSelectionList =
		SNew(STileView<TSharedPtr<STextBlock>>)
		.ItemHeight(24)
		.ItemWidth(PreseListWidth)
		.ListItemsSource(&this->PresetItems)
		.SelectionMode(ESelectionMode::Multi)
		.OnGenerateTile(this, &SSubstanceEditorPanel::GeneratePresetWidget)
		.OnSelectionChanged(this, &SSubstanceEditorPanel::OnPresetSelectionChanged);

	PresetApplyButton  = BuildButton("Apply",  false, &SSubstanceEditorPanel::OnPresetApply);
	PresetUpdateButton = BuildButton("Update", false, &SSubstanceEditorPanel::OnPresetUpdateRequest);
	PresetDeleteButton = BuildButton("Delete", false, &SSubstanceEditorPanel::OnPresetDeleteRequest);
	PresetExportButton = BuildButton("Export", false, &SSubstanceEditorPanel::OnPresetExport);
	PresetCreateButton = BuildButton("Create", true,  &SSubstanceEditorPanel::OnPresetCreateRequest);
	PresetImportButton = BuildButton("Import", true,  &SSubstanceEditorPanel::OnPresetImport);
	
	PresetUpdateNameInput =
		SNew(SEditableTextBox)
		.Padding(FMargin(5.0f))
		.Justification(ETextJustify::Left)
		.HintText(FText::FromString(TEXT("Preset Name")));
	PresetDeleteText =
		SNew(STextBlock)
		.Margin(FMargin(5.0f))
		.Justification(ETextJustify::Center)
		.Text(FText::FromString(TEXT("Delete selected presets?")));
	PresetCreateNameInput =
		SNew(SEditableTextBox)
		.Padding(FMargin(5.0f))
		.Justification(ETextJustify::Left)
		.HintText(FText::FromString(TEXT("New Preset")));

	PresetConfirmUpdateBox = BuildConfirmBox(
		PresetUpdateNameInput,
		"Update",
		&SSubstanceEditorPanel::OnPresetUpdateCancel,
		&SSubstanceEditorPanel::OnPresetUpdateConfirm
	);
	PresetConfirmDeleteBox = BuildConfirmBox(
		PresetDeleteText,
		"Delete",
		&SSubstanceEditorPanel::OnPresetDeleteCancel,
		&SSubstanceEditorPanel::OnPresetDeleteConfirm
	);
	PresetConfirmCreateBox = BuildConfirmBox(
		PresetCreateNameInput,
		"Create",
		&SSubstanceEditorPanel::OnPresetCreateCancel,
		&SSubstanceEditorPanel::OnPresetCreateConfirm
	);

	TSharedPtr<SVerticalBox> PresetControlBox =
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			PresetApplyButton.ToSharedRef()
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		[
			PresetUpdateButton.ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.Padding(FMargin(2, 2, 2, 2))
		.AutoHeight()
		[
			PresetConfirmUpdateBox.ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			PresetDeleteButton.ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.Padding(FMargin(2, 2, 2, 2))
		.AutoHeight()
		[
			PresetConfirmDeleteBox.ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			PresetExportButton.ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			PresetCreateButton.ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.Padding(FMargin(2, 2, 2, 2))
		.AutoHeight()
		[
			PresetConfirmCreateBox.ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			PresetImportButton.ToSharedRef()
		];

	PresetArea =
		SNew(SExpandableArea)
		.AreaTitle(FText::FromString(TEXT("Presets:")))
		.InitiallyCollapsed(false)
		.BodyContent()
		[
			SNew(SBorder)
			.BorderBackgroundColor(FLinearColor(0.35, 0.35, 0.35))
			.ForegroundColor(FAppStyle::GetColor("TableView.Header", ".Foreground"))
			.Content()
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.MaxWidth(PreseListWidth)
				[
					PresetSelectionList.ToSharedRef()
				]
				+ SHorizontalBox::Slot()
				.MaxWidth(PresetControlWidth)
				[
					PresetControlBox.ToSharedRef()
				]
			]
		];
}

void SSubstanceEditorPanel::ConstructOutputs()
{
	TSharedPtr<SVerticalBox> OutputsBox = SNew(SVerticalBox);

	for (const auto& OutputItr : Graph->Instance->getOutputs())
	{
		FReferencerInformationList Refs;
		UObject* TextureObject = nullptr;
		if (OutputItr->mUserData != 0 && OutputItr->mDesc.isImage())
		{
			TextureObject = reinterpret_cast<USubstanceOutputData*>(OutputItr->mUserData)->GetData();
		}
		else if(OutputItr->mDesc.isNumerical())
		{
			continue;
		}

		const SubstanceAir::OutputDesc* OutputDesc = &OutputItr->mDesc;

		OutputsBox->AddSlot()
		[
		    SNew(SHorizontalBox)
		    + SHorizontalBox::Slot()
		    .FillWidth(0.3f)
		    [
		        SNew(SHorizontalBox)
		        + SHorizontalBox::Slot()
		        [
		            SNew(STextBlock)
		            .Text(OutputDesc ? FText::FromString(OutputDesc->mLabel.c_str()) : FText::FromString(TEXT("Invalid output")))
		        ]
		        + SHorizontalBox::Slot()
		        .HAlign(HAlign_Right)
		        [
		            PropertyCustomizationHelpers::MakeBrowseButton(FSimpleDelegate::CreateSP(this, &SSubstanceEditorPanel::OnBrowseTexture, OutputItr))
		        ]
		    ]
		    + SHorizontalBox::Slot()
		    [
		        SNew(SCheckBox)
		        .OnCheckStateChanged(this, &SSubstanceEditorPanel::OnToggleOutput, OutputItr)
		        .IsChecked(this, &SSubstanceEditorPanel::GetOutputState, OutputItr)
		        .IsEnabled(nullptr != OutputDesc)
		        .ToolTipText(FText::FromString(OutputDesc->mIdentifier.c_str()))
		    ]
		];
	}

	OutputsArea = SNew(SExpandableArea)
	              .AreaTitle(FText::FromString(TEXT("Outputs:")))
	              .InitiallyCollapsed(false)
	              .BodyContent()
	              [
	                  SNew(SBorder)
	                  .BorderBackgroundColor(FLinearColor(0.35, 0.35, 0.35))
	                  .ForegroundColor(FAppStyle::GetColor("TableView.Header", ".Foreground"))
	                  .Content()
	                  [
	                      OutputsBox.ToSharedRef()
	                  ]
	              ];
}

void SSubstanceEditorPanel::ConstructWidget()
{
	TSharedPtr<SVerticalBox> ChildWidget = SNew(SVerticalBox);

	auto AddArea = [ChildWidget](TSharedPtr<SExpandableArea> area)
	{
		if (area.IsValid()) {
			ChildWidget->AddSlot()
				.AutoHeight()
				.Padding(0.0f, 3.0f)
				[
					area.ToSharedRef()
				];
		}
	};

	AddArea(DescArea);
	AddArea(PresetArea);
	AddArea(OutputsArea);
	AddArea(InputsArea);
	AddArea(ImageInputsArea);

	ChildSlot
	[
	    SNew(SScrollBox)
	    + SScrollBox::Slot()
	    .Padding(0.0f)
	    [
	        SNew(SVerticalBox)
	        + SVerticalBox::Slot()
	        .AutoHeight()
	        .Padding(0.0f)
	        [
	            ChildWidget.ToSharedRef()
	        ]
	    ]
	];
}

void ActualizeMaterialGraph(SubstanceAir::shared_ptr<SubstanceAir::GraphInstance> Instance)
{
	for (const auto& OutputItr : Instance->getOutputs())
	{
		if (OutputItr->mUserData == 0)
			continue;

		FReferencerInformationList Refs;
		UObject* TextureObject = reinterpret_cast<USubstanceOutputData*>(OutputItr->mUserData)->GetData();

		//Check and see whether we are referenced by any objects that won't be garbage collected.
		bool bIsReferenced = TextureObject ? IsReferenced(TextureObject, GARBAGE_COLLECTION_KEEPFLAGS, EInternalObjectFlags::GarbageCollectionKeepFlags, true, &Refs) : false;

		TArray<UMaterial*> RefMaterials;

		for (const auto& RefItr : Refs.ExternalReferences)
		{
			UMaterial* Material = Cast<UMaterial>(RefItr.Referencer);

			if (Material && Material->MaterialGraph)
			{
				RefMaterials.AddUnique(Material);
			}
		}

		for (const auto& MatItr : RefMaterials)
		{
			MatItr->MaterialGraph->RebuildGraph();
		}
	}
}

void SSubstanceEditorPanel::OnToggleOutput(ECheckBoxState InNewState, SubstanceAir::OutputInstance* Output)
{
	UTexture* Texture = nullptr;
	USubstanceOutputData* OutputData = reinterpret_cast<USubstanceOutputData*>(Output->mUserData);
	if (Output->mUserData != 0 && OutputData->GetData())
		Texture = Cast<UTexture>(OutputData->GetData());

	if (InNewState == ECheckBoxState::Checked)
	{
		Substance::Helpers::EnableTexture(Output, Graph);

		FinalizeSubstanceChanges();

		OutputData = reinterpret_cast<USubstanceOutputData*>(Output->mUserData);

		if (Output->mDesc.mType == Substance_IOType_Image)
		{
			TArray<UObject*> NewTexture;
			NewTexture.Add(OutputData->GetData());

			FContentBrowserModule& ContentBrowserModule = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
			ContentBrowserModule.Get().SyncBrowserToAssets(NewTexture);
		}

		// Should rebuild the graph of any material using a substance output
		Substance::Helpers::GenerateMaterialExpressions(Graph->Instance.get(), Graph->ConstantCreatedMaterial, Graph);
	}
	else if (InNewState == ECheckBoxState::Unchecked)
	{

		if (reinterpret_cast<USubstanceOutputData*>(Output->mUserData)->GetData())
		{
			OutputData = reinterpret_cast<USubstanceOutputData*>(Output->mUserData);
			auto Texture2D = Cast<UTexture2D>(OutputData->GetData());
			Substance::Helpers::RegisterForDeletion(Texture2D);
			auto mat = Graph->ConstantCreatedMaterial;
			for (int i = 0; i < mat->TextureParameterValues.Num(); i++)
			{
				if (mat->TextureParameterValues[i].ParameterInfo == OutputData->ParamInfo)
				{
					mat->TextureParameterValues.RemoveAt(i);
					break;
				}
			}
			mat->PostEditChange();
			OutputData->CacheGuid.Invalidate();
			OutputData->SetData(nullptr);
		}
		Output->mEnabled = false;
		ActualizeMaterialGraph(Graph->Instance);
	}
}

ECheckBoxState SSubstanceEditorPanel::GetOutputState(SubstanceAir::OutputInstance* Output) const
{
	ECheckBoxState CurrentState = ECheckBoxState::Unchecked;
	USubstanceOutputData* data = reinterpret_cast<USubstanceOutputData*>(Output->mUserData);
	if (data != 0)
	{
		(data->GetData() != 0) ? CurrentState = ECheckBoxState::Checked : CurrentState = ECheckBoxState::Unchecked;
	}
	return CurrentState;
}

void SSubstanceEditorPanel::OnBrowseTexture(SubstanceAir::OutputInstance* Output)
{
	if (Output->mUserData && reinterpret_cast<USubstanceOutputData*>(Output->mUserData)->GetData())
	{
		TArray<UObject*> Objects;
		Objects.Add(reinterpret_cast<USubstanceOutputData*>(Output->mUserData)->GetData());
		GEditor->SyncBrowserToObjects(Objects);
	}
}

void SSubstanceEditorPanel::OnBrowseImageInput(SubstanceAir::InputInstanceImage* ImageInput)
{
	if (ImageInput->getImage())
	{
		TArray<UObject*> Objects;
		Objects.Add(reinterpret_cast<UObject*>(ImageInput->getImage().get()->mUserData));
		GEditor->SyncBrowserToObjects(Objects);
	}
}

TSharedRef<SHorizontalBox> SSubstanceEditorPanel::GetBaseInputWidget(SubstanceAir::InputInstanceBase* Input, FString InputLabel)
{
	if (0 == InputLabel.Len())
	{
		InputLabel = Input->mDesc.mLabel.c_str();
	}

	return SNew(SHorizontalBox)
	       + SHorizontalBox::Slot()
	       [
	           SNew(STextBlock)
	           .Text(FText::FromString(InputLabel))
	           .ToolTipText(FText::FromString(Input->mDesc.mIdentifier.c_str()))
	           .Font(FAppStyle::GetFontStyle("BoldFont"))
	       ]
	       + SHorizontalBox::Slot()
	       .AutoWidth()
	       .HAlign(HAlign_Left)
	       .VAlign(VAlign_Center)
	       [
	           SNew(SButton)
	           .ToolTipText(NSLOCTEXT("PropertyEditor", "ResetToDefaultToolTip", "Reset to Default"))
	           .ButtonStyle(FAppStyle::Get(), "NoBorder")
	           .OnClicked(this, &SSubstanceEditorPanel::OnResetInput, Input)
	           .Content()
	           [
	               SNew(SImage)
	               .Image(FAppStyle::GetBrush("PropertyWindow.DiffersFromDefault"))
	           ]
	       ];
}

void SSubstanceEditorPanel::ConstructInputs()
{
	InputsArea      = TSharedPtr<SExpandableArea>(nullptr);
	ImageInputsArea = TSharedPtr<SExpandableArea>(nullptr);
	TSharedPtr<SScrollBox> InputsBox      = TSharedPtr<SScrollBox>(nullptr);
	TSharedPtr<SScrollBox> ImageInputsBox = TSharedPtr<SScrollBox>(nullptr);
	TMap<FString, TSharedPtr<SVerticalBox>> Groups;

	// make a copy of the list of inputs to sort them by index
	std::vector<SubstanceAir::InputInstanceBase*> IdxSortedInputs;
	for (const auto& Sptr : Graph->Instance->getInputs())
	{
		IdxSortedInputs.push_back(Sptr);
	}

	struct FCompareInputIdx
	{
		FORCEINLINE bool operator()(const SubstanceAir::InputInstanceBase* A, const SubstanceAir::InputInstanceBase* B) const
		{
			return atoi(A->mDesc.mUserTag.c_str()) < atoi(B->mDesc.mUserTag.c_str());
		}
	};
	std::sort(IdxSortedInputs.begin(), IdxSortedInputs.begin() + Graph->Instance->getInputs().size(), FCompareInputIdx());

	for (SubstanceAir::InputInstanceBase* ItIn : IdxSortedInputs)
	{
        TArray<TSharedPtr<SWidget>> InputAssociatedWidgets; // keep track of widgets to update their visibility later
		if (ItIn->mDesc.mIdentifier == "$pixelsize" || ItIn->mDesc.mIdentifier == "$time" || ItIn->mDesc.mIdentifier == "$normalformat")
		{
			continue;
		}

		if (ItIn->mDesc.isNumerical())
		{
			TSharedPtr<SWidget> inputWidget = GetInputWidget(ItIn);
			TSharedPtr<SWidget> separator = SNew(SSeparator).Orientation(EOrientation::Orient_Horizontal);
			InputAssociatedWidgets.Add(inputWidget);
			InputAssociatedWidgets.Add(separator);

			if (false == InputsBox.IsValid())
			{
				InputsBox =
					SNew(SScrollBox).IsEnabled(this, &SSubstanceEditorPanel::GetInputsEnabled);
				InputsArea =
					SNew(SExpandableArea)
					.AreaTitle(FText::FromString(TEXT("Inputs:")))
					.InitiallyCollapsed(false)
					.BodyContent()
					[
						SNew(SBorder)
						.Content()
						[
							InputsBox.ToSharedRef()
						]
					];
			}

			FString GroupName = ItIn->mDesc.mGuiGroup.c_str();
			if (GroupName.Len())
			{
				TSharedPtr<SVerticalBox> GroupBox;
				if (Groups.Contains(GroupName))
				{
					GroupBox = *Groups.Find(GroupName);
				}
				else
				{
					GroupBox = SNew(SVerticalBox);
					Groups.Add(GroupName, GroupBox);
				}
				GroupBox->AddSlot()
				[
					separator.ToSharedRef()
				];
				GroupBox->AddSlot()
				.AutoHeight()
				.Padding(10.0f, 0.0f)
				[
					inputWidget.ToSharedRef()
				];
			}
			else
			{
				InputsBox->AddSlot()
				[
					inputWidget.ToSharedRef()
				];
				InputsBox->AddSlot()
				[
					separator.ToSharedRef()
				];
			}
		}
		else if (ItIn->mDesc.isString())
		{
			TSharedPtr<SWidget> inputWidget = GetInputWidget(ItIn);
			TSharedPtr<SWidget> separator = SNew(SSeparator).Orientation(EOrientation::Orient_Horizontal);
			InputAssociatedWidgets.Add(inputWidget);
			InputAssociatedWidgets.Add(separator);

			if (false == InputsBox.IsValid())
			{
				InputsBox =
					SNew(SScrollBox)
					.IsEnabled(this, &SSubstanceEditorPanel::GetInputsEnabled);

				InputsArea =
					SNew(SExpandableArea)
					.AreaTitle(FText::FromString(TEXT("Inputs:")))
					.InitiallyCollapsed(false)
					.BodyContent()
					[
						SNew(SBorder)
						.Content()
						[
							InputsBox.ToSharedRef()
						]
					];
			}

			FString GroupName = ItIn->mDesc.mGuiGroup.c_str();
			if (GroupName.Len())
			{
				TSharedPtr<SVerticalBox> GroupBox;

				if (Groups.Contains(GroupName))
				{
					GroupBox = *Groups.Find(GroupName);
				}
				else
				{
					GroupBox = SNew(SVerticalBox);
					Groups.Add(GroupName, GroupBox);
				}
				GroupBox->AddSlot()
				[
					separator.ToSharedRef()
				];
				GroupBox->AddSlot()
				.AutoHeight()
				.Padding(10.0f, 0.0f)
				[
					inputWidget.ToSharedRef()
				];
			}
			else
			{
				InputsBox->AddSlot()
				[
					inputWidget.ToSharedRef()
				];
				InputsBox->AddSlot()
				[
					separator.ToSharedRef()
				];
			}
		}
		else
		{
			TSharedPtr<SWidget> inputWidget = GetImageInputWidget(ItIn);
			InputAssociatedWidgets.Add(inputWidget);

			if (false == ImageInputsBox.IsValid())
			{
				ImageInputsBox = SNew(SScrollBox);
				ImageInputsArea = SNew(SExpandableArea)
				.AreaTitle(FText::FromString(TEXT("Image Inputs:")))
				.InitiallyCollapsed(false)
				.BodyContent()
				[
					SNew(SBorder)
					.Content()
					[
						ImageInputsBox.ToSharedRef()
					]
				];
			}

			ImageInputsBox->AddSlot()
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				[
					inputWidget.ToSharedRef()
				]
			];
		}
		InputWidgets.Add(ItIn, InputAssociatedWidgets);
	}

	TMap< FString, TSharedPtr< SVerticalBox >>::TIterator ItGroups(Groups);

	FLinearColor OddColor(.35, .35, .35, 0.0f);
	FLinearColor EvenColor(.4, .4, .4, 0.0f);

	int32 Idx = 0;

	for (; ItGroups; ++ItGroups)
	{
		InputsBox->AddSlot()
		[
		    SNew(SExpandableArea)
		    .AreaTitle(FText::FromString(ItGroups.Key()))
		    .InitiallyCollapsed(false)
		    .BodyContent()
		    [
		        ItGroups.Value().ToSharedRef()
		    ]
		];

		InputsBox->AddSlot()
		[
		    SNew(SSeparator)
		    .Orientation(EOrientation::Orient_Horizontal)
		];
	}
}

void SSubstanceEditorPanel::ResetThumbnailInputs(SubstanceAir::GraphInstance* graphInstance)
{
	for (const auto& InputItr : graphInstance->getInputs())
	{
		if (InputItr->mDesc.isImage())
		{
			SubstanceAir::InputInstanceImage* TypedInput = static_cast<SubstanceAir::InputInstanceImage*>(InputItr);
			ThumbnailInputs[TypedInput]->SetAsset(nullptr);
		}
	}
}

void SSubstanceEditorPanel::OnFocusChanging(const FWeakWidgetPath& PreviousFocusPath, const FWidgetPath& NewWidgetPath, const FFocusEvent& InFocusEvent)
{
	if (!HasPresetChanged() || !Graph || HasKeyboardFocus())
		return;

	bool bCache = true;

	if (NewWidgetPath.TopLevelWindow != nullptr && NewWidgetPath.GetWindow()->GetTitle().ToString() != Graph->GetName())
	{
		TSharedPtr<SWindow> window = NewWidgetPath.GetWindow()->GetParentWindow();
		while (window)
		{
			if (window->GetTitle().ToString() == Graph->GetName())
			{
				bCache = false;
			}
			window = window->GetParentWindow();
		}
	}
	else
	{
		bCache = false;
	}

	if (bCache)
	{
		FinalizeSubstanceChanges();
	}
}

void SSubstanceEditorPanel::FinalizeSubstanceChanges()
{
	FScopedSlowTask SlowTask(1, LOCTEXT("ProcessSubstanceOutputs", "Generating Substance UTexture2D Data"));
	SlowTask.MakeDialog();
	SlowTask.EnterProgressFrame();

	CachePresetValues();
	Graph->PrepareOutputsForSave();
	Substance::Helpers::RenderSync(Graph->Instance, true);
	Graph->SaveAllOutputs();
}


void SSubstanceEditorPanel::OnFreezeGraphValueChanged(ECheckBoxState InNewState)
{
	check(Graph);

	if (Graph)
	{
		Graph->bIsFrozen = ECheckBoxState::Checked == InNewState ? true : false;
		Graph->Modify();
	}
}

ECheckBoxState SSubstanceEditorPanel::GetFreezeGraphValue() const
{
	if (Graph)
	{
		return Graph->bIsFrozen ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
	}

	return ECheckBoxState::Unchecked;
}

template< typename T> void SSubstanceEditorPanel::SetValue(T NewValue, SubstanceAir::InputInstanceBase* Input, int32 Index)
{
	//TODO:: (UE4-300) Check to make sure the value is in range and clamp the value!
	FInputValue<T> value = { NewValue, Input, Index };
	SetValues(1, &value);
}

template<typename T> void SSubstanceEditorPanel::SetValues(uint32 NumInputValues, FInputValue<T>* Inputs)
{
	bool renderAsync = false;

	SubstanceAir::InputInstanceNumericalBase* InputInst = (SubstanceAir::InputInstanceNumericalBase*)Inputs[0].Input;
	TArray<T> NewValueSet;
	Substance::GetNumericalInputValue<T>(InputInst, NewValueSet);

	//Early out
	if (NewValueSet.Num() == 0 || NumInputValues == 0)
	{
		UE_LOG(LogSubstanceEditor, Warning, TEXT("Attempted to update an invalid input parameter"));
		return;
	}

	for (uint32 i = 0; i < NumInputValues; i++)
	{
		FInputValue<T>& currentInput = Inputs[i];

		//Make sure the value has changed
		if (NewValueSet[currentInput.Index] == currentInput.NewValue)
		{
			continue;
		}

		NewValueSet[currentInput.Index] = currentInput.NewValue;
		renderAsync = true;
	}

	Substance::Helpers::SetNumericalInputValue(InputInst, NewValueSet);
	Substance::Helpers::UpdateInput(Graph->Instance, InputInst, NewValueSet);

	if (renderAsync)
	{
		Substance::Helpers::RenderAsync(Graph->Instance);
		Graph->MarkPackageDirty();
	}

	InvalidateCurrentPreset();
	for (auto& pair : InputWidgets)
	{
		EVisibility visibility = Substance::Helpers::IsInputVisible(*(pair.Key)) ? EVisibility::Visible : EVisibility::Collapsed;
		for (auto& widget : pair.Value)
		{
			widget->SetVisibility(visibility);
		}
	}
}

template<typename T> TOptional<T> SSubstanceEditorPanel::GetInputValue(SubstanceAir::InputInstanceBase* Input, int32 Index) const
{
	SubstanceAir::InputInstanceNumerical<T>* TypedInst = (SubstanceAir::InputInstanceNumerical<T>*)Input;

	TArray<T> Values;
	Substance::GetNumericalInputValue<T>((SubstanceAir::InputInstanceNumericalBase*)Input, Values);
	return Values[Index];
}

FText SSubstanceEditorPanel::GetInputValue(SubstanceAir::InputInstanceBase* Input) const
{
	if (Input->mDesc.isString())
	{
		SubstanceAir::InputInstanceString* StringInst = (SubstanceAir::InputInstanceString*)(Input);
		return FText::FromString(StringInst->getString().c_str());
	}

	SubstanceAir::InputInstanceInt* TypedInst = (SubstanceAir::InputInstanceInt*)Input;
	SubstanceAir::InputDescInt* TypedDesc = (SubstanceAir::InputDescInt*)&TypedInst->mDesc;
	int32 CurrentValue = TypedInst->getValue();

	//NOTE:: We cannot index into the enum values as they are not always 0 index based.
	//Instead we much loop through until we find the current value pair.
	auto EnItr = TypedDesc->mEnumValues.begin();
	for (; EnItr != TypedDesc->mEnumValues.end(); ++EnItr)
	{
		if (EnItr->first == CurrentValue)
		{
			return FText::FromString(EnItr->second.c_str());
		}
	}

	return FText();
}

TSharedRef<SWidget> SSubstanceEditorPanel::GetInputWidgetCombobox(SubstanceAir::InputInstanceBase* Input)
{
	FString InputKey = FString(Input->mDesc.mIdentifier.c_str());
	ComboOptionsLabels.Add(InputKey, TArray<TSharedPtr<FString>>());
	SubstanceAir::InputDescInt* TypedDesc = (SubstanceAir::InputDescInt*)&Input->mDesc;
	TSharedPtr<FString> CurrentValue;

	//Get all of the labels for the combo box
	for (const auto& mEnumValue : TypedDesc->mEnumValues)
	{
		TSharedPtr<FString> enumValue = MakeShareable(new FString(mEnumValue.second.c_str()));
		ComboOptionsLabels[InputKey].Emplace(enumValue);
		if (FString(mEnumValue.second.c_str()) == FString(GetInputValue(Input).ToString()))
			CurrentValue = enumValue;
	}

	TSharedRef<SComboBox<TSharedPtr<FString>>> ComboBox =
	    SNew(SComboBox<TSharedPtr<FString>>)
	    .OptionsSource(&ComboOptionsLabels[InputKey])
	    .OnGenerateWidget(this, &SSubstanceEditorPanel::MakeInputComboWidget)
	    .OnSelectionChanged(this, &SSubstanceEditorPanel::OnComboboxSelectionChanged, Input)
	    .InitiallySelectedItem(CurrentValue)
	    .ContentPadding(0)
	    [
	        SNew(STextBlock)
	        .Text(this, &SSubstanceEditorPanel::GetInputValue, Input)
	    ];

	return SNew(SHorizontalBox)
	       + SHorizontalBox::Slot()
	       .FillWidth(0.3f)
	       [
	           GetBaseInputWidget(Input)
	       ]
	       + SHorizontalBox::Slot()
	       [
	           ComboBox
	       ];
}

TSharedRef<SWidget> SSubstanceEditorPanel::MakeInputComboWidget(TSharedPtr<FString> InItem)
{
	return SNew(STextBlock)
	       .Text(FText::FromString(*InItem));
}

bool SSubstanceEditorPanel::OnAssetDraggedOver(TArrayView<FAssetData> InAssets) const
{
	return Cast<UTexture2D>(InAssets[0].GetAsset()) != nullptr;
}

void SSubstanceEditorPanel::OnAssetDropped(const FDragDropEvent& DragEvent, TArrayView<FAssetData> InAssets, SubstanceAir::InputInstanceBase* Input, TSharedPtr<FAssetThumbnail> Thumbnail)
{
	OnSetImageInput(InAssets[0].GetAsset(), Input, Thumbnail);
}

void SSubstanceEditorPanel::OnComboboxSelectionChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectInfo, SubstanceAir::InputInstanceBase* Input/*, TSharedRef<STextBlock> ComboText*/)
{
	SubstanceAir::InputDescInt* TypedDesc = (SubstanceAir::InputDescInt*)&Input->mDesc;

	if (!Item.IsValid() || TypedDesc->mEnumValues.empty())
	{
		return;
	}

	for (const auto& EnItr : TypedDesc->mEnumValues)
	{
		if (EnItr.second.c_str() == *Item)
		{
			FInputValue<int> value = { EnItr.first, Input, 0 };
			SetValues<int>(1, &value);
		}
	}
}

TSharedRef<SWidget> SSubstanceEditorPanel::GetInputWidgetTogglebutton(SubstanceAir::InputInstanceBase* Input)
{
	return SNew(SHorizontalBox)
	       + SHorizontalBox::Slot()
	       .FillWidth(0.3f)
	       [
	           GetBaseInputWidget(Input)
	       ]
	       + SHorizontalBox::Slot()
	       [
	           SNew(SCheckBox)
	           .OnCheckStateChanged(this, &SSubstanceEditorPanel::OnToggleValueChanged, Input)
	           .IsChecked(this, &SSubstanceEditorPanel::GetToggleValue, Input)
	       ];
}

void SSubstanceEditorPanel::OnToggleValueChanged(ECheckBoxState InNewState, SubstanceAir::InputInstanceBase* Input)
{
	FScopedTransaction Transaction(NSLOCTEXT("SubstanceEditor", "SubstanceSetInput", "Substance set input"));
	Graph->Modify();

	FInputValue<int32> value = { 1, Input, 0 };

	if (InNewState == ECheckBoxState::Checked)
	{
		value.NewValue = 1;
		SetValues<int>(1, &value);
	}
	else
	{
		value.NewValue = 0;
		SetValues<int>(1, &value);
	}
}

ECheckBoxState SSubstanceEditorPanel::GetToggleValue(SubstanceAir::InputInstanceBase* Input) const
{
	ECheckBoxState State;
	(GetInputValue<int32>(Input, 0).GetValue() > 0.0f) ? State = ECheckBoxState::Checked : State = ECheckBoxState::Unchecked;
	return State;
}

void SSubstanceEditorPanel::UpdateColor(FLinearColor NewColor, SubstanceAir::InputInstanceBase* Input)
{
	if (Substance_IOType_Float == Input->mDesc.mType)
	{
		FInputValue<float> value = { NewColor.Desaturate(1.0f).R, Input, 0 };
		SetValues<float>(1, &value);
		return;
	}

	FInputValue<float> values[] =
	{
		{ NewColor.R, Input, 0 },
		{ NewColor.G, Input, 1 },
		{ NewColor.B, Input, 2 },
		{ NewColor.A, Input, 3 },
	};

	if (Substance_IOType_Float4 == Input->mDesc.mType)
	{
		SetValues<float>(4, values);
	}
	else
	{
		SetValues<float>(3, values);
	}
}

void SSubstanceEditorPanel::CancelColor(FLinearColor OldColor, SubstanceAir::InputInstanceBase* Input)
{
	UpdateColor(OldColor, Input);
}

void SSubstanceEditorPanel::CloseColorPicker(const TSharedRef<SWindow>&)
{
	if (Graph && HasPresetChanged())
	{
		FinalizeSubstanceChanges();
	}
}

void SSubstanceEditorPanel::UpdateString(const FText& NewValue, SubstanceAir::InputInstanceBase* InputInst)
{
	Substance::Helpers::SetStringInputValue(InputInst, NewValue.ToString());
	Substance::Helpers::UpdateInput(Graph->Instance, InputInst, NewValue.ToString());
	Substance::Helpers::RenderAsync(Graph->Instance);
	Graph->MarkPackageDirty();
}

FReply SSubstanceEditorPanel::PickColor(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent, SubstanceAir::InputInstanceBase* Input)
{
	FColorPickerArgs PickerArgs;

	FLinearColor InputColor = GetColor(Input);

	if (Input->mDesc.mType == Substance_IOType_Float4)
	{
		PickerArgs.bUseAlpha = true;
	}
	else
	{
		PickerArgs.bUseAlpha = false;
	}

	PickerArgs.ParentWidget = this->AsShared();
	PickerArgs.bOnlyRefreshOnOk = false;
	PickerArgs.bOnlyRefreshOnMouseUp = false;
	PickerArgs.InitialColor = InputColor;
	PickerArgs.OnColorCommitted = FOnLinearColorValueChanged::CreateSP(this, &SSubstanceEditorPanel::UpdateColor, Input);
	PickerArgs.OnColorPickerCancelled = FOnColorPickerCancelled::CreateSP(this, &SSubstanceEditorPanel::CancelColor, Input);
	PickerArgs.OnColorPickerWindowClosed = FOnWindowClosed::CreateSP(this, &SSubstanceEditorPanel::CloseColorPicker);
	OpenColorPicker(PickerArgs);

	return FReply::Handled();
}

FText SSubstanceEditorPanel::GetOutputSizeValue(SubstanceAir::InputInstanceBase* Input, int32 Idx) const
{
	SubstanceAir::InputInstanceInt2* TypedInst = (SubstanceAir::InputInstanceInt2*)Input;

	int32 SizeValue = FMath::RoundToInt(FMath::Pow(2.0f, (float)TypedInst->getValue()[Idx]));

	return FText::FromString(FString::Printf(TEXT("%i"), SizeValue));
}

/** Creates the combo box for the output texture resolutions */
TSharedRef<SWidget> SSubstanceEditorPanel::GetInputWidgetSizePow2(SubstanceAir::InputInstanceBase* Input)
{
	SizeComboLabels.Empty();

	FString CurX = GetOutputSizeValue(Input, 0).ToString();
	FString CurY = GetOutputSizeValue(Input, 1).ToString();

	TSharedPtr< FString > CurrentX;
	TSharedPtr< FString > CurrentY;

	uint32 CurrentPow2 = OutputSizePow2Min;
	while (CurrentPow2 <= OutputSizePow2Max)
	{
		int32 SizeValue = FMath::Pow(2.0f, (float)CurrentPow2);
		CurrentPow2++;
		SizeComboLabels.Add(MakeShareable(new FString(FString::Printf(TEXT("%i"), SizeValue))));

		if (CurX == FString(FString::Printf(TEXT("%i"), SizeValue)))
		{
			CurrentX = SizeComboLabels.Last();
		}
		if (CurY == FString(FString::Printf(TEXT("%i"), SizeValue)))
		{
			CurrentY = SizeComboLabels.Last();
		}
	}

	WidgetSizeX =
	    SNew(SComboBox<TSharedPtr<FString>>)
	    .InitiallySelectedItem(CurrentX)
	    .OptionsSource(&SizeComboLabels)
	    .OnGenerateWidget(this, &SSubstanceEditorPanel::MakeInputSizeComboWidget)
	    .OnSelectionChanged(this, &SSubstanceEditorPanel::OnSizeComboboxSelectionChanged, Input, 0)
	    .ContentPadding(0)
	    .Content()
	    [
	        SNew(STextBlock)
	        .Text(this, &SSubstanceEditorPanel::GetOutputSizeValue, Input, 0)
	    ];

	WidgetSizeY =
	    SNew(SComboBox<TSharedPtr<FString>>)
	    .InitiallySelectedItem(CurrentY)
	    .OptionsSource(&SizeComboLabels)
	    .OnGenerateWidget(this, &SSubstanceEditorPanel::MakeInputSizeComboWidget)
	    .OnSelectionChanged(this, &SSubstanceEditorPanel::OnSizeComboboxSelectionChanged, Input, 1)
	    .ContentPadding(0)
	    .Content()
	    [
	        SNew(STextBlock)
	        .Text(this, &SSubstanceEditorPanel::GetOutputSizeValue, Input, 1)
	    ];

	RatioLocked.Set(true);

	return SNew(SHorizontalBox)
	       + SHorizontalBox::Slot()
	       .FillWidth(0.3f)
	       [
	           GetBaseInputWidget(Input, TEXT("Output Size"))
	       ]
	       + SHorizontalBox::Slot()
	       [
	           SNew(SHorizontalBox)
	           + SHorizontalBox::Slot()
	           [
	               WidgetSizeX.ToSharedRef()
	           ]
	           + SHorizontalBox::Slot()
	           [
	               WidgetSizeY.ToSharedRef()
	           ]
	           + SHorizontalBox::Slot()
	           [
	               SNew(SCheckBox)
	               .OnCheckStateChanged(this, &SSubstanceEditorPanel::OnLockRatioValueChanged)
	               .IsChecked(this, &SSubstanceEditorPanel::GetLockRatioValue)
	               .Content()
	               [
	                   SNew(STextBlock)
	                   .Text(FText::FromString(TEXT("Lock Ratio")))
	               ]
	           ]
	       ];
}

void SSubstanceEditorPanel::OnLockRatioValueChanged(ECheckBoxState InNewState)
{
	RatioLocked.Set(InNewState == ECheckBoxState::Checked ? true : false);
}

ECheckBoxState SSubstanceEditorPanel::GetLockRatioValue() const
{
	return RatioLocked.Get() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

TSharedRef<SWidget> SSubstanceEditorPanel::MakeInputSizeComboWidget(TSharedPtr<FString> InItem)
{
	return SNew(STextBlock).Text(FText::FromString(*InItem));
}

void SSubstanceEditorPanel::OnSizeComboboxSelectionChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectInfo, SubstanceAir::InputInstanceBase* Input, int Idx)
{
	if (!Item.IsValid())
	{
		return;
	}

	SubstanceAir::InputInstanceInt2* TypedInst = (SubstanceAir::InputInstanceInt2*)Input;

	float PrevValue = (float)TypedInst->getValue()[Idx];

	int32 SizeValue = FCString::Atoi(**Item);
	int32 NewValue = (int32)FMath::FloorLog2(SizeValue);

	FInputValue<int32> values[2];

	values[0].NewValue = NewValue;
	values[0].Input = Input;
	values[0].Index = Idx;

	FScopedTransaction Transaction(TEXT("SubstanceEd"), NSLOCTEXT("SubstanceEditor", "SubstanceSetOutputSize", "Substance change output size"), Graph);
	Graph->Modify();

	if (RatioLocked.Get())
	{
		const float DeltaValue = NewValue - PrevValue;
		const int OtherIdx = Idx == 0 ? 1 : 0;

		values[1].NewValue = NewValue;
		values[1].Input = Input;
		values[1].Index = OtherIdx;

		//Set selection of each input
		if (WidgetSizeY.IsValid() && Idx == 0)
		{
			WidgetSizeY.Get()->SetSelectedItem(Item);
			SetValues<int>(2, values);
		}
		else if (WidgetSizeX.IsValid() && Idx == 1)
		{
			WidgetSizeX.Get()->SetSelectedItem(Item);
			SetValues<int>(2, values);
		}
	}
	else
	{
		SetValues<int>(1, values);
	}

	FSlateApplication::Get().SetAllUserFocus(WidgetSizeX.ToSharedRef());
}

TSharedRef<SWidget> SSubstanceEditorPanel::GetInputWidgetRandomSeed(SubstanceAir::InputInstanceBase* Input)
{
	return SNew(SHorizontalBox)
	       + SHorizontalBox::Slot()
	       .FillWidth(0.3f)
	       [
	           GetBaseInputWidget(Input, TEXT("Random Seed"))
	       ]
	       + SHorizontalBox::Slot()
	       [
	           SNew(SHorizontalBox)
	           + SHorizontalBox::Slot()
	           .AutoWidth()
	           [
	               SNew(SButton)
	               .Text(FText::FromString(TEXT("Randomize Seed")))
	               .OnClicked(this, &SSubstanceEditorPanel::RandomizeSeed, Input)
	           ]
	           + SHorizontalBox::Slot()
	           [
	               GetInputWidgetSlider_internal<int32>(Input, 0)
	           ]
	       ];
}

FReply SSubstanceEditorPanel::RandomizeSeed(SubstanceAir::InputInstanceBase* Input)
{
	const int32 rand = FMath::Rand();
	FScopedTransaction Transaction(NSLOCTEXT("SubstanceEditor", "SubstanceSetInput", "Substance set input"));
	Graph->Modify();

	FInputValue<int32> value = { rand, Input, 0 };
	SetValues<int>(1, &value);

	return FReply::Handled();
}

void SSubstanceEditorPanel::OnGetClassesForAssetPicker(TArray<const UClass*>& OutClasses)
{
	OutClasses.AddUnique(UTexture2D::StaticClass());

	// disable substance output as input feature for now
	//OutClasses.AddUnique(USubstanceTexture2D::StaticClass());
}

void SSubstanceEditorPanel::OnAssetSelected(const FAssetData& AssetData, SubstanceAir::InputInstanceBase* Input, TSharedPtr<FAssetThumbnail> Thumbnail)
{
	OnSetImageInput(AssetData.GetAsset(), Input, Thumbnail);
}

void SSubstanceEditorPanel::OnUseSelectedImageInput(SubstanceAir::InputInstanceBase* Input, TSharedPtr<FAssetThumbnail> Thumbnail)
{
	// Load selected assets
	FEditorDelegates::LoadSelectedAssetsIfNeeded.Broadcast();

	USelection* Selection = GEditor->GetSelectedObjects();
	if (Selection)
	{
		UTexture2D* ImageInput = Selection->GetTop<UTexture2D>();
		if (ImageInput)
		{
			OnSetImageInput(ImageInput, Input, Thumbnail);
		}
	}
}

TSharedRef<SWidget> SSubstanceEditorPanel::GetImageInputWidget(SubstanceAir::InputInstanceBase* Input)
{
	const int ThumbSize = 64;

	SubstanceAir::InputDescBase* ImgInputDesc = (SubstanceAir::InputDescBase*)&Input->mDesc;
	SubstanceAir::InputInstanceImage* ImageInput = (SubstanceAir::InputInstanceImage*)Input;

	TSharedPtr<FAssetThumbnail> Thumbnail;
	if (ImageInput->getImage() && ImageInput->getImage()->mUserData != 0)
	{
		UObject* inputImageWrapper = reinterpret_cast<UObject*>(ImageInput->getImage()->mUserData);
		Thumbnail = MakeShareable(new FAssetThumbnail(inputImageWrapper, ThumbSize, ThumbSize, ThumbnailPool));
		ThumbnailInputs.Add(ImageInput, Thumbnail);
	}
	else
	{
		Thumbnail = MakeShareable(new FAssetThumbnail(nullptr, ThumbSize, ThumbSize, ThumbnailPool));
		ThumbnailInputs.Add(ImageInput, Thumbnail);
	}



	return SNew(SHorizontalBox)
	       + SHorizontalBox::Slot()
	       .FillWidth(0.3f)
	       [
	           SNew(SHorizontalBox)
	           + SHorizontalBox::Slot()
	           [
	               SNew(STextBlock)
	               .Text(FText::FromString(Input->mDesc.mLabel.c_str()))
	               .Font(FAppStyle::GetFontStyle("BoldFont"))
	           ]
	           + SHorizontalBox::Slot()
	           [
	               SNew(STextBlock)
	               .Text(FText::FromString(ImgInputDesc->mGuiDescription.c_str()))
	           ]
	           + SHorizontalBox::Slot()
	           .AutoWidth()
	           [
	               SNew(SSpacer)
	           ]
	           + SHorizontalBox::Slot()
	           .AutoWidth()
	           .VAlign(VAlign_Center)
	           [
	               SNew(SVerticalBox)
	               + SVerticalBox::Slot()
	               .AutoHeight()
	               .HAlign(HAlign_Center)
	               [
	                   SNew(SAssetDropTarget)
	                   .OnAreAssetsAcceptableForDrop(this, &SSubstanceEditorPanel::OnAssetDraggedOver)
	                   .OnAssetsDropped(this, &SSubstanceEditorPanel::OnAssetDropped, Input, Thumbnail)
	                   [
	                       SNew(SBox)
	                       .WidthOverride(FOptionalSize(ThumbSize))
	                       .HeightOverride(FOptionalSize(ThumbSize))
	                       [
	                           Thumbnail->MakeThumbnailWidget()
	                       ]
	                   ]
	               ]
	           ]

	       ]
	       + SHorizontalBox::Slot()
	       [
	           SNew(SHorizontalBox)
	           + SHorizontalBox::Slot()
	           .AutoWidth()
	           .HAlign(HAlign_Center)
	           .VAlign(VAlign_Center)
	           .Padding(2.0f, 1.0f)
	           [
	               PropertyCustomizationHelpers::MakeAssetPickerAnchorButton(
	                   FOnGetAllowedClasses::CreateSP(this, &SSubstanceEditorPanel::OnGetClassesForAssetPicker),
	                   FOnAssetSelected::CreateSP(this, &SSubstanceEditorPanel::OnAssetSelected, Input, Thumbnail))
	           ]
	           + SHorizontalBox::Slot()
	           .AutoWidth()
	           .HAlign(HAlign_Center)
	           .VAlign(VAlign_Center)
	           .Padding(2.0f, 1.0f)
	           [
	               PropertyCustomizationHelpers::MakeUseSelectedButton(FSimpleDelegate::CreateSP(this, &SSubstanceEditorPanel::OnUseSelectedImageInput, Input, Thumbnail))
	           ]
	           + SHorizontalBox::Slot()
	           .AutoWidth()
	           .HAlign(HAlign_Center)
	           .VAlign(VAlign_Center)
	           .Padding(2.0f, 1.0f)
	           [
	               PropertyCustomizationHelpers::MakeBrowseButton(FSimpleDelegate::CreateSP(this, &SSubstanceEditorPanel::OnBrowseImageInput, ImageInput))
	           ]
	           + SHorizontalBox::Slot()
	           .AutoWidth()
	           .HAlign(HAlign_Left)
	           .VAlign(VAlign_Center)
	           .Padding(2.0f, 1.0f)
	           [
	               SNew(SButton)
	               .ToolTipText(NSLOCTEXT("PropertyEditor", "ResetToDefaultToolTip", "Reset to Default"))
	               .ButtonStyle(FAppStyle::Get(), "NoBorder")
	               .OnClicked(this, &SSubstanceEditorPanel::OnResetImageInput, Input, Thumbnail)
	               .Content()
	               [
	                   SNew(SImage)
	                   .Image(FAppStyle::GetBrush("PropertyWindow.DiffersFromDefault"))
	               ]
	           ]
	           + SHorizontalBox::Slot()
	           .AutoWidth()
	           [
	               SNew(SSpacer)
	           ]
	       ];
}

FString SSubstanceEditorPanel::GetImageInputPath(SubstanceAir::InputInstanceBase* Input)
{
	SubstanceAir::InputInstanceImage* TypedInst = (SubstanceAir::InputInstanceImage*)Input;
	FString PathName;

	if (TypedInst->getImage())
	{
		PathName = reinterpret_cast<UTexture2D*>(TypedInst->getImage()->mUserData)->GetPathName();
	}

	return PathName;
}

FReply SSubstanceEditorPanel::OnResetImageInput(SubstanceAir::InputInstanceBase* Input, TSharedPtr<FAssetThumbnail> Thumbnail)
{
	OnSetImageInput(nullptr, Input, Thumbnail);
	return FReply::Handled();
}

FReply SSubstanceEditorPanel::OnResetInput(SubstanceAir::InputInstanceBase* Input)
{
	FScopedTransaction Transaction(TEXT("SubstanceEd"), NSLOCTEXT("SubstanceEditor", "SubstanceResetInput", "Substance reset input"), Graph);
	Graph->Modify();

	Substance::Helpers::ResetToDefault(Input);

	for (const auto& OutputItr : Graph->Instance->getOutputs())
	{
		OutputItr->flagAsDirty();
	}

	TArray<SubstanceAir::shared_ptr<SubstanceAir::GraphInstance>> Graphs;
	Graphs.AddUnique(Graph->Instance);
	Substance::Helpers::RenderAsync(Graphs);

	return FReply::Handled();
}

void SSubstanceEditorPanel::OnSetImageInput(const UObject* InObject, SubstanceAir::InputInstanceBase* Input, TSharedPtr<FAssetThumbnail> Thumbnail)
{
	FScopedTransaction Transaction(TEXT("SubstanceEd"),
	                               InObject ?
	                               NSLOCTEXT("SubstanceEditor", "SubstanceSetInput", "Substance set image input") :
	                               NSLOCTEXT("SubstanceEditor", "SubstanceSetInput", "Substance reset image input"),
	                               Graph);
	Graph->Modify();

	SubstanceAir::InputInstanceImage* InputInst = (SubstanceAir::InputInstanceImage*)Input;

	UObject* NewInput = Cast<UObject>(const_cast<UObject*>(InObject));

	Substance::Helpers::UpdateInput(Graph->Instance, InputInst, NewInput);

	Substance::Helpers::RenderAsync(Graph->Instance);

	Thumbnail->SetAsset(InObject);
	ThumbnailPool->Tick(0.1f);

	CachePresetValues();
}

TSharedRef<SHorizontalBox> SSubstanceEditorPanel::GetInputWidgetString(SubstanceAir::InputInstanceBase* Input)
{
	check(Input);
	check(Input->mDesc.mType == Substance_IOType_String);

	TSharedPtr<SHorizontalBox> InputContainer = SNew(SHorizontalBox);

	TSharedPtr<SEditableTextBox> TextBox =
	    SNew(SEditableTextBox)
	    .Text(this, &SSubstanceEditorPanel::GetInputValue, Input)
	    .OnTextChanged(this, &SSubstanceEditorPanel::UpdateString, Input);

	InputContainer->AddSlot()
	.Padding(0.0f, 1.0f)
	[
	    SNew(SVerticalBox)
	    + SVerticalBox::Slot()
	    [
	        TextBox->AsShared()
	    ]
	];

	TSharedPtr<SHorizontalBox> WidgetsBox =
	    SNew(SHorizontalBox)
	    + SHorizontalBox::Slot()
	    .FillWidth(0.3f)
	    [
	        GetBaseInputWidget(Input)
	    ]
	    + SHorizontalBox::Slot()
	    [
	        InputContainer.ToSharedRef()
	    ];

	return WidgetsBox.ToSharedRef();
}

TSharedRef<SWidget> SSubstanceEditorPanel::GetInputWidgetAngle(SubstanceAir::InputInstanceBase* Input)
{
	return GetInputWidgetSlider<float>(Input);
}

TSharedRef<SWidget> SSubstanceEditorPanel::GetInputWidget(SubstanceAir::InputInstanceBase* Input)
{
	// special widget for random seed
	if (Input->mDesc.mIdentifier == "$randomseed")
	{
		return GetInputWidgetRandomSeed(Input);
	}
	if (Input->mDesc.mIdentifier == "$outputsize")
	{
		return GetInputWidgetSizePow2(Input);
	}

	switch (Input->mDesc.mGuiWidget)
	{
	default:
	case SubstanceAir::Input_NoWidget:
	case SubstanceAir::Input_Slider:
	case SubstanceAir::Input_Color:

		switch (Input->mDesc.mType)
		{
		case SubstanceIOType::Substance_IOType_String:
			return GetInputWidgetString(Input);

		case SubstanceIOType::Substance_IOType_Float:
		case SubstanceIOType::Substance_IOType_Float2:
		case SubstanceIOType::Substance_IOType_Float3:
		case SubstanceIOType::Substance_IOType_Float4:
			return GetInputWidgetSlider<float>(Input);

		default:
		case SubstanceIOType::Substance_IOType_Integer:
		case SubstanceIOType::Substance_IOType_Integer2:
		case SubstanceIOType::Substance_IOType_Integer3:
		case SubstanceIOType::Substance_IOType_Integer4:
			return GetInputWidgetSlider<int32>(Input);
		}

	case SubstanceAir::Input_Angle:
		return GetInputWidgetAngle(Input);

	case SubstanceAir::Input_Combobox:
		return GetInputWidgetCombobox(Input);

	case SubstanceAir::Input_Togglebutton:
		return GetInputWidgetTogglebutton(Input);
	}
}

template<typename T> TSharedRef<SHorizontalBox> SSubstanceEditorPanel::GetInputWidgetSlider(SubstanceAir::InputInstanceBase* Input)
{
	check(Input);
	check(Input->mDesc.mType != Substance_IOType_Image);

	int32 SliderCount = 1;

	switch (Input->mDesc.mType)
	{
	case Substance_IOType_Integer2:
	case Substance_IOType_Float2:
		SliderCount = 2;
		break;
	case Substance_IOType_Integer3:
	case Substance_IOType_Float3:
		SliderCount = 3;
		break;
	case Substance_IOType_Integer4:
	case Substance_IOType_Float4:
		SliderCount = 4;
		break;
	}

	TSharedPtr<SHorizontalBox> InputContainer = SNew(SHorizontalBox);

	TSharedPtr<SVerticalBox> SlidersBox = SNew(SVerticalBox);
	for (int32 i = 0; i < SliderCount; ++i)
	{
		SlidersBox->AddSlot()
		[
		    SNew(SVerticalBox)
		    + SVerticalBox::Slot()
		    .Padding(0.0f, 1.0f)
		    [
		        GetInputWidgetSlider_internal<T>(Input, i)
		    ]
		];
	}

	InputContainer->AddSlot()
	[
	    SlidersBox.ToSharedRef()
	];

	if (Input->mDesc.mGuiWidget == SubstanceAir::Input_Color)
	{
		InputContainer->AddSlot()
		.FillWidth(0.1f)
		[
		    SNew(SColorBlock)
		    .Color(this, &SSubstanceEditorPanel::GetColor, Input)
		    .ColorIsHSV(false)
		    .ShowBackgroundForAlpha(true)
		    .ToolTipText(FText::FromString(TEXT("Pick Color")))
		    .OnMouseButtonDown(this, &SSubstanceEditorPanel::PickColor, Input)
		    .UseSRGB(false)
		];
	}

	TSharedPtr<SHorizontalBox> WidgetsBox =
	    SNew(SHorizontalBox)
	    + SHorizontalBox::Slot()
	    .FillWidth(0.3f)
	    [
	        GetBaseInputWidget(Input)
	    ]
	    + SHorizontalBox::Slot()
	    [
	        InputContainer.ToSharedRef()
	    ];

	return WidgetsBox.ToSharedRef();
}

FLinearColor SSubstanceEditorPanel::GetColor(SubstanceAir::InputInstanceBase* Input) const
{
	SubstanceAir::InputInstanceFloat4* InputInst = (SubstanceAir::InputInstanceFloat4*)Input;

	TArray<float> Values;
	Substance::GetNumericalInputValue((SubstanceAir::InputInstanceNumericalBase*)Input, Values);

	FLinearColor InputColor;
	if (Values.Num() == 1)
	{
		InputColor = FLinearColor(Values[0], Values[0], Values[0], 1.0f);
	}
	else if (Values.Num() == 3)
	{
		InputColor = FLinearColor(Values[0], Values[1], Values[2], 1.0f);
	}
	else if (Values.Num() == 4)
	{
		InputColor = FLinearColor(Values[0], Values[1], Values[2], Values[3]);
	}

	return InputColor;
}

void SSubstanceEditorPanel::BeginSliderMovement(SubstanceAir::InputInstanceBase* Input)
{
	FScopedTransaction Transaction(NSLOCTEXT("SubstanceEditor", "SubstanceSetInput", "Substance set input"));
	Graph->Modify();
}

template< typename T, typename U> const U GetMinComponent(const SubstanceAir::InputDescBase* Desc, int Idx, bool& Clamped)
{
	const SubstanceAir::InputDescNumerical<T>* TypedDesc = (SubstanceAir::InputDescNumerical<T>*)Desc;
	const U MinValue = TypedDesc->mMinValue[Idx];
	return MinValue;
}

template< typename T, typename U> const U GetMaxComponent(const SubstanceAir::InputDescBase* Desc, int Idx, bool& Clamped)
{
	SubstanceAir::InputDescNumerical<T>* TypedDesc = (SubstanceAir::InputDescNumerical<T>*)Desc;
	const U MaxValue = TypedDesc->mMaxValue[Idx];
	return MaxValue;
}

template< typename T> void GetMinMaxValues(const SubstanceAir::InputDescBase* Desc, const int32 i, T& Min, T& Max, bool& Clamped)
{
	switch (Desc->mType)
	{
	case Substance_IOType_Integer:
		{
			SubstanceAir::InputDescNumerical<int32>* TypedDesc = (SubstanceAir::InputDescNumerical<int32>*)Desc;
			Min = TypedDesc->mMinValue;
			Max = TypedDesc->mMaxValue;
		}
		break;
	case Substance_IOType_Float:
		{
			SubstanceAir::InputDescNumerical<float>* TypedDesc = (SubstanceAir::InputDescNumerical<float>*)Desc;
			Min = TypedDesc->mMinValue;
			Max = TypedDesc->mMaxValue;
		}
		break;
	case Substance_IOType_Integer2:
		{
			Min = GetMinComponent<SubstanceAir::Vec2Int, int>(Desc, i, Clamped);
			Max = GetMaxComponent<SubstanceAir::Vec2Int, int>(Desc, i, Clamped);
		}
		break;
	case Substance_IOType_Float2:
		{
			Min = GetMinComponent<SubstanceAir::Vec2Float, float>(Desc, i, Clamped);
			Max = GetMaxComponent<SubstanceAir::Vec2Float, float>(Desc, i, Clamped);
		}
		break;
	case Substance_IOType_Integer3:
		{
			Min = GetMinComponent<SubstanceAir::Vec3Int, int>(Desc, i, Clamped);
			Max = GetMaxComponent<SubstanceAir::Vec3Int, int>(Desc, i, Clamped);
		}
		break;
	case Substance_IOType_Float3:
		{
			Min = GetMinComponent<SubstanceAir::Vec3Float, float>(Desc, i, Clamped);
			Max = GetMaxComponent<SubstanceAir::Vec3Float, float>(Desc, i, Clamped);
		}
		break;
	case Substance_IOType_Integer4:
		{
			Min = GetMinComponent<SubstanceAir::Vec4Int, int>(Desc, i, Clamped);
			Max = GetMaxComponent<SubstanceAir::Vec4Int, int>(Desc, i, Clamped);
		}
		break;
	case Substance_IOType_Float4:
		{
			Min = GetMinComponent<SubstanceAir::Vec4Float, float>(Desc, i, Clamped);
			Max = GetMaxComponent<SubstanceAir::Vec4Float, float>(Desc, i, Clamped);
		}
		break;
	}
}

template<> TSharedRef<SNumericEntryBox<float>> SSubstanceEditorPanel::GetInputWidgetSlider_internal<float>(SubstanceAir::InputInstanceBase* Input, const int32 SliderIndex)
{
	float delta = 0;
	float SliderMin = 0;
	float SliderMax = 0;
	bool Clamped = false;

	switch (Input->mDesc.mType)
	{
	case Substance_IOType_Float:
		Clamped = static_cast<SubstanceAir::InputInstanceFloat*>(Input)->getDesc().mSliderClamp;
		break;
	case Substance_IOType_Float2:
		Clamped = static_cast<SubstanceAir::InputInstanceFloat2*>(Input)->getDesc().mSliderClamp;
		break;
	case Substance_IOType_Float3:
		Clamped = static_cast<SubstanceAir::InputInstanceFloat3*>(Input)->getDesc().mSliderClamp;
		break;
	case Substance_IOType_Float4:
		Clamped = static_cast<SubstanceAir::InputInstanceFloat4*>(Input)->getDesc().mSliderClamp;
		break;
	default:
		UE_LOG(LogSubstanceEditor, Warning, TEXT("Trying to set clamped value for non float type - Defaults to non-clamped"));
		break;
	}

	GetMinMaxValues(&Input->mDesc, SliderIndex, SliderMin, SliderMax, Clamped);

	float MinValue = SliderMin;
	float MaxValue = SliderMax;

	if (Clamped == false)
	{
		if (Input->mDesc.mGuiWidget == SubstanceAir::Input_Color)
		{
			MinValue = 0.0f;
			MaxValue = 1.0f;
		}
		else
		{
			MinValue = TNumericLimits<float>::Lowest();
			MaxValue = TNumericLimits<float>::Max();
		}
	}

	if (SliderMin == SliderMax || SliderMin > SliderMax)
	{
		if (Input->mDesc.mGuiWidget == SubstanceAir::Input_Color)
		{
			SliderMin = 0.0f;
			SliderMax = 1.0f;
		}
		else
		{
			SliderMin = TNumericLimits<float>::Lowest();
			SliderMax = TNumericLimits<float>::Max();
		}
	}

	return SNew(SNumericEntryBox<float>)
	       .Value(this, &SSubstanceEditorPanel::GetInputValue<float>, Input, SliderIndex)
	       .OnValueChanged(this, &SSubstanceEditorPanel::SetValue<float>, Input, SliderIndex)
	       .OnBeginSliderMovement(this, &SSubstanceEditorPanel::BeginSliderMovement, Input)
	       .ToolTipText(FText::FromString(Input->mDesc.mIdentifier.c_str()))
	       .AllowSpin(true)
	       .Delta(0.001f)
	       .LabelPadding(FMargin(0.0f, 1.1f))
	       .MinValue(MinValue)
	       .MaxValue(MaxValue)
	       .MinSliderValue(SliderMin)
	       .MaxSliderValue(SliderMax);
}

template< > TSharedRef<SNumericEntryBox<int32>> SSubstanceEditorPanel::GetInputWidgetSlider_internal<int32>(SubstanceAir::InputInstanceBase* Input, const int32 SliderIndex)
{
	float delta = 0;
	int32 SliderMin = 0;
	int32 SliderMax = 0;
	bool Clamped = false;

	switch (Input->mDesc.mType)
	{
	case Substance_IOType_Integer:
		Clamped = static_cast<SubstanceAir::InputInstanceInt*>(Input)->getDesc().mSliderClamp;
		break;
	case Substance_IOType_Integer2:
		Clamped = static_cast<SubstanceAir::InputInstanceInt2*>(Input)->getDesc().mSliderClamp;
		break;
	case Substance_IOType_Integer3:
		Clamped = static_cast<SubstanceAir::InputInstanceInt3*>(Input)->getDesc().mSliderClamp;
		break;
	case Substance_IOType_Integer4:
		Clamped = static_cast<SubstanceAir::InputInstanceInt4*>(Input)->getDesc().mSliderClamp;
		break;
	default:
		UE_LOG(LogSubstanceEditor, Warning, TEXT("Trying to set clamped value for non int type - Defaults to non-clamped"));
		break;
	}

	GetMinMaxValues(&Input->mDesc, SliderIndex, SliderMin, SliderMax, Clamped);

	int32 MinValue = SliderMin;
	int32 MaxValue = SliderMax;

	if (Clamped == false)
	{
		MinValue = TNumericLimits<int32>::Lowest();
		MaxValue = TNumericLimits<int32>::Max();
	}

	if (SliderMin == SliderMax || SliderMin > SliderMax)
	{
		SliderMin = TNumericLimits<int32>::Lowest();
		SliderMax = TNumericLimits<int32>::Max();
	}

	return SNew(SNumericEntryBox<int32>)
	       .Value(this, &SSubstanceEditorPanel::GetInputValue<int32>, Input, SliderIndex)
	       .OnValueChanged(this, &SSubstanceEditorPanel::SetValue<int>, Input, SliderIndex)
	       .OnBeginSliderMovement(this, &SSubstanceEditorPanel::BeginSliderMovement, Input)
	       .ToolTipText(FText::FromString(Input->mDesc.mIdentifier.c_str()))
	       .AllowSpin(true)
	       .Delta(0)
	       .LabelPadding(FMargin(0.0f, 1.1f))
	       .MinValue(MinValue)
	       .MaxValue(MaxValue)
	       .MinSliderValue(SliderMin)
	       .MaxSliderValue(SliderMax);
}

#undef LOC_NAMESPACE
