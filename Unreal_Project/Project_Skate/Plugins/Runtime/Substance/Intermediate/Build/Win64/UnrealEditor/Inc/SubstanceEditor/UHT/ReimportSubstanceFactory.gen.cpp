// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Classes/ReimportSubstanceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSubstanceFactory() {}
// Cross Module References
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceFactory();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceFactory_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void UReimportSubstanceFactory::StaticRegisterNativesUReimportSubstanceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportSubstanceFactory);
	UClass* Z_Construct_UClass_UReimportSubstanceFactory_NoRegister()
	{
		return UReimportSubstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportSubstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportSubstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubstanceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSubstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//NOTE:: Function definitions located in SubstanceFactory.cpp\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ReimportSubstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/ReimportSubstanceFactory.h" },
		{ "ToolTip", "NOTE:: Function definitions located in SubstanceFactory.cpp" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportSubstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSubstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportSubstanceFactory_Statics::ClassParams = {
		&UReimportSubstanceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportSubstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSubstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportSubstanceFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportSubstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportSubstanceFactory.OuterSingleton, Z_Construct_UClass_UReimportSubstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportSubstanceFactory.OuterSingleton;
	}
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<UReimportSubstanceFactory>()
	{
		return UReimportSubstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSubstanceFactory);
	UReimportSubstanceFactory::~UReimportSubstanceFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportSubstanceFactory, UReimportSubstanceFactory::StaticClass, TEXT("UReimportSubstanceFactory"), &Z_Registration_Info_UClass_UReimportSubstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportSubstanceFactory), 1120870020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h_880511709(TEXT("/Script/SubstanceEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
