// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/SubstanceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings_NoRegister();
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize();
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceEngineType;
	static UEnum* ESubstanceEngineType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceEngineType"));
		}
		return Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceEngineType>()
	{
		return ESubstanceEngineType_StaticEnum();
	}
	struct Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enumerators[] = {
		{ "SET_CPU", (int64)SET_CPU },
		{ "SET_GPU", (int64)SET_GPU },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
		{ "SET_CPU.DisplayName", "CPU Engine" },
		{ "SET_CPU.Name", "SET_CPU" },
		{ "SET_GPU.DisplayName", "GPU Engine" },
		{ "SET_GPU.Name", "SET_GPU" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		"ESubstanceEngineType",
		"ESubstanceEngineType",
		Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType()
	{
		if (!Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize;
	static UEnum* EDefaultSubstanceTextureSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("EDefaultSubstanceTextureSize"));
		}
		return Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<EDefaultSubstanceTextureSize>()
	{
		return EDefaultSubstanceTextureSize_StaticEnum();
	}
	struct Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enumerators[] = {
		{ "SIZE_0", (int64)SIZE_0 },
		{ "SIZE_16", (int64)SIZE_16 },
		{ "SIZE_32", (int64)SIZE_32 },
		{ "SIZE_64", (int64)SIZE_64 },
		{ "SIZE_128", (int64)SIZE_128 },
		{ "SIZE_256", (int64)SIZE_256 },
		{ "SIZE_512", (int64)SIZE_512 },
		{ "SIZE_1024", (int64)SIZE_1024 },
		{ "SIZE_2048", (int64)SIZE_2048 },
		{ "SIZE_4096", (int64)SIZE_4096 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
		{ "SIZE_0.Hidden", "" },
		{ "SIZE_0.Name", "SIZE_0" },
		{ "SIZE_1024.DisplayName", "1024" },
		{ "SIZE_1024.Name", "SIZE_1024" },
		{ "SIZE_128.DisplayName", "128" },
		{ "SIZE_128.Name", "SIZE_128" },
		{ "SIZE_16.DisplayName", "16" },
		{ "SIZE_16.Name", "SIZE_16" },
		{ "SIZE_2048.DisplayName", "2048" },
		{ "SIZE_2048.Name", "SIZE_2048" },
		{ "SIZE_256.DisplayName", "256" },
		{ "SIZE_256.Name", "SIZE_256" },
		{ "SIZE_32.DisplayName", "32" },
		{ "SIZE_32.Name", "SIZE_32" },
		{ "SIZE_4096.DisplayName", "4096" },
		{ "SIZE_4096.Name", "SIZE_4096" },
		{ "SIZE_512.DisplayName", "512" },
		{ "SIZE_512.Name", "SIZE_512" },
		{ "SIZE_64.DisplayName", "64" },
		{ "SIZE_64.Name", "SIZE_64" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		"EDefaultSubstanceTextureSize",
		"EDefaultSubstanceTextureSize",
		Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize()
	{
		if (!Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton, Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton;
	}
	void USubstanceSettings::StaticRegisterNativesUSubstanceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceSettings);
	UClass* Z_Construct_UClass_USubstanceSettings_NoRegister()
	{
		return USubstanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryBudgetMb_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryBudgetMb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPUCores_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CPUCores;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadMipClip_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AsyncLoadMipClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAsyncSubstancesRenderedPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubstanceEngine_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubstanceEngine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubstanceOutputSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSubstanceOutputSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubstanceOutputSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSubstanceOutputSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTemplateMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultTemplateMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Implements the settings for the Substance plugin. */" },
		{ "IncludePath", "SubstanceSettings.h" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
		{ "ToolTip", "Implements the settings for the Substance plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb_MetaData[] = {
		{ "Category", "Hardware Budget" },
		{ "ClampMax", "2048" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb = { "MemoryBudgetMb", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceSettings, MemoryBudgetMb), METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores_MetaData[] = {
		{ "Category", "Hardware Budget" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores = { "CPUCores", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceSettings, CPUCores), METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Mip levels count removed during cooking." },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip = { "AsyncLoadMipClip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceSettings, AsyncLoadMipClip), METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "4" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame = { "MaxAsyncSubstancesRenderedPerFrame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceSettings, MaxAsyncSubstancesRenderedPerFrame), METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine_MetaData[] = {
		{ "Category", "Cooking" },
		{ "DisplayName", "Substance Engine (requires editor restart to take effect.)" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine = { "SubstanceEngine", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceSettings, SubstanceEngine), Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine_MetaData)) }; // 2270779404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX_MetaData[] = {
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance output width" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX = { "DefaultSubstanceOutputSizeX", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceSettings, DefaultSubstanceOutputSizeX), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX_MetaData)) }; // 2027053105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY_MetaData[] = {
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance output height" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY = { "DefaultSubstanceOutputSizeY", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceSettings, DefaultSubstanceOutputSizeY), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY_MetaData)) }; // 2027053105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial_MetaData[] = {
		{ "AllowedClasses", "Material,MaterialInstance,MaterialInterface" },
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance Material Template" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial = { "DefaultTemplateMaterial", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceSettings, DefaultTemplateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceSettings_Statics::ClassParams = {
		&USubstanceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceSettings()
	{
		if (!Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton, Z_Construct_UClass_USubstanceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceSettings>()
	{
		return USubstanceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceSettings);
	USubstanceSettings::~USubstanceSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_Statics::EnumInfo[] = {
		{ ESubstanceEngineType_StaticEnum, TEXT("ESubstanceEngineType"), &Z_Registration_Info_UEnum_ESubstanceEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2270779404U) },
		{ EDefaultSubstanceTextureSize_StaticEnum, TEXT("EDefaultSubstanceTextureSize"), &Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2027053105U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceSettings, USubstanceSettings::StaticClass, TEXT("USubstanceSettings"), &Z_Registration_Info_UClass_USubstanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceSettings), 1445801371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_773045813(TEXT("/Script/SubstanceCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
