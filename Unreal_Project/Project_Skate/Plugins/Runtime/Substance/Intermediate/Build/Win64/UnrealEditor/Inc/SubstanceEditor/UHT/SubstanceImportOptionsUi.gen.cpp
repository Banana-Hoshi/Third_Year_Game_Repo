// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Public/SubstanceImportOptionsUi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImportOptionsUi() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister();
	SUBSTANCEEDITOR_API UEnum* Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceMaterialParentType;
	static UEnum* ESubstanceMaterialParentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubstanceMaterialParentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubstanceMaterialParentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType, (UObject*)Z_Construct_UPackage__Script_SubstanceEditor(), TEXT("ESubstanceMaterialParentType"));
		}
		return Z_Registration_Info_UEnum_ESubstanceMaterialParentType.OuterSingleton;
	}
	template<> SUBSTANCEEDITOR_API UEnum* StaticEnum<ESubstanceMaterialParentType>()
	{
		return ESubstanceMaterialParentType_StaticEnum();
	}
	struct Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enumerators[] = {
		{ "ESubstanceMaterialParentType::Default", (int64)ESubstanceMaterialParentType::Default },
		{ "ESubstanceMaterialParentType::Custom", (int64)ESubstanceMaterialParentType::Custom },
		{ "ESubstanceMaterialParentType::Generated", (int64)ESubstanceMaterialParentType::Generated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "ESubstanceMaterialParentType::Custom" },
		{ "Default.Name", "ESubstanceMaterialParentType::Default" },
		{ "Generated.Name", "ESubstanceMaterialParentType::Generated" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SubstanceEditor,
		nullptr,
		"ESubstanceMaterialParentType",
		"ESubstanceMaterialParentType",
		Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType()
	{
		if (!Z_Registration_Info_UEnum_ESubstanceMaterialParentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceMaterialParentType.InnerSingleton, Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubstanceMaterialParentType.InnerSingleton;
	}
	void USubstanceImportOptionsUi::StaticRegisterNativesUSubstanceImportOptionsUi()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceImportOptionsUi);
	UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister()
	{
		return USubstanceImportOptionsUi::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceImportOptionsUi_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFullName_MetaData[];
#endif
		static void NewProp_bOverrideFullName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFullName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstancePath_MetaData[];
#endif
		static void NewProp_bOverrideInstancePath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstancePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterialPath_MetaData[];
#endif
		static void NewProp_bOverrideMaterialPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterialPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateInstance_MetaData[];
#endif
		static void NewProp_bCreateInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterial_MetaData[];
#endif
		static void NewProp_bCreateMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_uMaterialParentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uMaterialParentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_uMaterialParentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceDestinationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialDestinationPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceImportOptionsUi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "General Materials" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceImportOptionsUi.h" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Use the string in \"Name\" field as base name of factory instance and textures */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Use the string in \"Name\" field as base name of factory instance and textures" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bOverrideFullName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName = { "bOverrideFullName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether or not to override instance path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether or not to override instance path" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bOverrideInstancePath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath = { "bOverrideInstancePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether or not to override material path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether or not to override material path" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bOverrideMaterialPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath = { "bOverrideMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to automatically create graph instances for every graph description present in package*/" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether to automatically create graph instances for every graph description present in package" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bCreateInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance = { "bCreateInstance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Whether to automatically create Unreal materials for instances */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether to automatically create Unreal materials for instances" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bCreateMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial = { "bCreateMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Enables Material Selection button for custom templates on import*/" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Enables Material Selection button for custom templates on import" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType = { "uMaterialParentType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, uMaterialParentType), Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_MetaData)) }; // 2479582854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Parent Material used to create Unreal material instances */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Parent Material used to create Unreal material instances" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance suggested name (based on filename) */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Instance suggested name (based on filename)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, InstanceName), METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance suggested name (based on filename) */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Instance suggested name (based on filename)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, MaterialName), METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Force the Graph Instance objects' path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Force the Graph Instance objects' path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath = { "InstanceDestinationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, InstanceDestinationPath), METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Force the Texture Objects objects' path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Force the Texture Objects objects' path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath = { "MaterialDestinationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceImportOptionsUi, MaterialDestinationPath), METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceImportOptionsUi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceImportOptionsUi>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::ClassParams = {
		&USubstanceImportOptionsUi::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceImportOptionsUi()
	{
		if (!Z_Registration_Info_UClass_USubstanceImportOptionsUi.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceImportOptionsUi.OuterSingleton, Z_Construct_UClass_USubstanceImportOptionsUi_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubstanceImportOptionsUi.OuterSingleton;
	}
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<USubstanceImportOptionsUi>()
	{
		return USubstanceImportOptionsUi::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImportOptionsUi);
	USubstanceImportOptionsUi::~USubstanceImportOptionsUi() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_Statics::EnumInfo[] = {
		{ ESubstanceMaterialParentType_StaticEnum, TEXT("ESubstanceMaterialParentType"), &Z_Registration_Info_UEnum_ESubstanceMaterialParentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2479582854U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceImportOptionsUi, USubstanceImportOptionsUi::StaticClass, TEXT("USubstanceImportOptionsUi"), &Z_Registration_Info_UClass_USubstanceImportOptionsUi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceImportOptionsUi), 3770454425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_3407889805(TEXT("/Script/SubstanceEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
