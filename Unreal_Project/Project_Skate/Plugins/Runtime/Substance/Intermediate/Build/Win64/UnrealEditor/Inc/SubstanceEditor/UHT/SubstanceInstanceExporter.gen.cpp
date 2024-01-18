// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Classes/SubstanceInstanceExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceExporter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceInstanceExporter();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceInstanceExporter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	void USubstanceInstanceExporter::StaticRegisterNativesUSubstanceInstanceExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceInstanceExporter);
	UClass* Z_Construct_UClass_USubstanceInstanceExporter_NoRegister()
	{
		return USubstanceInstanceExporter::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceInstanceExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceInstanceExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubstanceInstanceExporter.h" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceExporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceInstanceExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceInstanceExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceInstanceExporter_Statics::ClassParams = {
		&USubstanceInstanceExporter::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceInstanceExporter()
	{
		if (!Z_Registration_Info_UClass_USubstanceInstanceExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceInstanceExporter.OuterSingleton, Z_Construct_UClass_USubstanceInstanceExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubstanceInstanceExporter.OuterSingleton;
	}
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<USubstanceInstanceExporter>()
	{
		return USubstanceInstanceExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceInstanceExporter);
	USubstanceInstanceExporter::~USubstanceInstanceExporter() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceInstanceExporter, USubstanceInstanceExporter::StaticClass, TEXT("USubstanceInstanceExporter"), &Z_Registration_Info_UClass_USubstanceInstanceExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceInstanceExporter), 2382508683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h_3529774484(TEXT("/Script/SubstanceEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
