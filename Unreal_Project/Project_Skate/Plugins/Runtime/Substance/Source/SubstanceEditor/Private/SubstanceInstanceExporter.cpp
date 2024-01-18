// Copyright 2018 Allegorithmic Inc. All rights reserved.
// File: SubstanceInstanceExporter.cpp

#include "SubstanceInstanceExporter.h"
#include "SubstanceEditorPrivatePCH.h"
#include "SubstanceCoreHelpers.h"

USubstanceInstanceExporter::USubstanceInstanceExporter(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{
	SupportedClass = USubstanceGraphInstance::StaticClass();
	bText = true;
	FormatExtension.Add(TEXT("sbsprs"));
	FormatDescription.Add(TEXT("Substance preset"));
}

bool USubstanceInstanceExporter::ExportText(const FExportObjectInnerContext* Context, UObject* Object, const TCHAR* Type, FOutputDevice& Ar, FFeedbackContext* Warn, uint32 PortFlags)
{
	auto graph = CastChecked<USubstanceGraphInstance>(Object);
	if (graph) {
		Substance::Helpers::ExportSelectedPresets(graph, graph->GetAllPresetLabels());
	}
	return true;
}