// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/SubstancePreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstancePreset() {}
// Cross Module References
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstancePreset();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstancePreset;
class UScriptStruct* FSubstancePreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstancePreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstancePreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstancePreset, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstancePreset"));
	}
	return Z_Registration_Info_UScriptStruct_SubstancePreset.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstancePreset>()
{
	return FSubstancePreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubstancePreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedPresetString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavedPresetString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstancePreset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SubstancePreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstancePreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewProp_SavedPresetString_MetaData[] = {
		{ "Comment", "// Used to serialize the preset\n" },
		{ "ModuleRelativePath", "Classes/SubstancePreset.h" },
		{ "ToolTip", "Used to serialize the preset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewProp_SavedPresetString = { "SavedPresetString", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstancePreset, SavedPresetString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewProp_SavedPresetString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewProp_SavedPresetString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstancePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewProp_SavedPresetString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstancePreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		&NewStructOps,
		"SubstancePreset",
		sizeof(FSubstancePreset),
		alignof(FSubstancePreset),
		Z_Construct_UScriptStruct_FSubstancePreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstancePreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstancePreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstancePreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstancePreset()
	{
		if (!Z_Registration_Info_UScriptStruct_SubstancePreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstancePreset.InnerSingleton, Z_Construct_UScriptStruct_FSubstancePreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubstancePreset.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h_Statics::ScriptStructInfo[] = {
		{ FSubstancePreset::StaticStruct, Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewStructOps, TEXT("SubstancePreset"), &Z_Registration_Info_UScriptStruct_SubstancePreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstancePreset), 3586245587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h_3477051068(TEXT("/Script/SubstanceCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
