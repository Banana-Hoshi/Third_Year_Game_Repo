// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/SubstanceOutputData.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceOutputData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References
	void USubstanceOutputData::StaticRegisterNativesUSubstanceOutputData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceOutputData);
	UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister()
	{
		return USubstanceOutputData::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceOutputData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceOutputData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Output structure for substance data to connect with material expressions*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceOutputData.h" },
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
		{ "ToolTip", "Output structure for substance data to connect with material expressions" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject = { "ConnectedObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceOutputData, ConnectedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo = { "ParamInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceOutputData, ParamInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo_MetaData)) }; // 1695244105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance = { "ParentInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceOutputData, ParentInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid = { "CacheGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceOutputData, CacheGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceOutputData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceOutputData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceOutputData_Statics::ClassParams = {
		&USubstanceOutputData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceOutputData()
	{
		if (!Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton, Z_Construct_UClass_USubstanceOutputData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceOutputData>()
	{
		return USubstanceOutputData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceOutputData);
	USubstanceOutputData::~USubstanceOutputData() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceOutputData, USubstanceOutputData::StaticClass, TEXT("USubstanceOutputData"), &Z_Registration_Info_UClass_USubstanceOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceOutputData), 3570653866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h_728228080(TEXT("/Script/SubstanceCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
