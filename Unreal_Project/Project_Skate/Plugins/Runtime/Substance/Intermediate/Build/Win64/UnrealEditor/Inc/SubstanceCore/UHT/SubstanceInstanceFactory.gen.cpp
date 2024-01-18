// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/SubstanceInstanceFactory.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceGraphDesc();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceGenerationMode;
	static UEnum* ESubstanceGenerationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubstanceGenerationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubstanceGenerationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceGenerationMode"));
		}
		return Z_Registration_Info_UEnum_ESubstanceGenerationMode.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceGenerationMode>()
	{
		return ESubstanceGenerationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enumerators[] = {
		{ "SGM_PlatformDefault", (int64)SGM_PlatformDefault },
		{ "SGM_Baked", (int64)SGM_Baked },
		{ "SGM_OnLoadSync", (int64)SGM_OnLoadSync },
		{ "SGM_OnLoadSyncAndCache", (int64)SGM_OnLoadSyncAndCache },
		{ "SGM_OnLoadAsync", (int64)SGM_OnLoadAsync },
		{ "SGM_OnLoadAsyncAndCache", (int64)SGM_OnLoadAsyncAndCache },
		{ "SGM_MAX", (int64)SGM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "SGM_Baked.Name", "SGM_Baked" },
		{ "SGM_MAX.Name", "SGM_MAX" },
		{ "SGM_OnLoadAsync.Name", "SGM_OnLoadAsync" },
		{ "SGM_OnLoadAsyncAndCache.Name", "SGM_OnLoadAsyncAndCache" },
		{ "SGM_OnLoadSync.Name", "SGM_OnLoadSync" },
		{ "SGM_OnLoadSyncAndCache.Name", "SGM_OnLoadSyncAndCache" },
		{ "SGM_PlatformDefault.Name", "SGM_PlatformDefault" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		"ESubstanceGenerationMode",
		"ESubstanceGenerationMode",
		Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode()
	{
		if (!Z_Registration_Info_UEnum_ESubstanceGenerationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceGenerationMode.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubstanceGenerationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceGraphDesc;
class UScriptStruct* FSubstanceGraphDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceGraphDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceGraphDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceGraphDesc>()
{
	return FSubstanceGraphDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthorUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuthorUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceGraphDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceGraphDesc, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceGraphDesc, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceGraphDesc, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceGraphDesc, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Keywords_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceGraphDesc, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceGraphDesc, Author), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_AuthorUrl_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_AuthorUrl = { "AuthorUrl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceGraphDesc, AuthorUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_AuthorUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_AuthorUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_UserTag_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceGraphDesc, UserTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_UserTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_UserTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_Author,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_AuthorUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewProp_UserTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		&NewStructOps,
		"SubstanceGraphDesc",
		sizeof(FSubstanceGraphDesc),
		alignof(FSubstanceGraphDesc),
		Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceGraphDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubstanceGraphDesc.InnerSingleton;
	}
	DEFINE_FUNCTION(USubstanceInstanceFactory::execCreateGraphInstance)
	{
		P_GET_STRUCT(FSubstanceGraphDesc,Z_Param_GraphDesc);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USubstanceGraphInstance**)Z_Param__Result=P_THIS->CreateGraphInstance(Z_Param_GraphDesc,Z_Param_PackageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceInstanceFactory::execGetGraphInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USubstanceGraphInstance*>*)Z_Param__Result=P_THIS->GetGraphInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceInstanceFactory::execGetGraphDescs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSubstanceGraphDesc>*)Z_Param__Result=P_THIS->GetGraphDescs();
		P_NATIVE_END;
	}
	void USubstanceInstanceFactory::StaticRegisterNativesUSubstanceInstanceFactory()
	{
		UClass* Class = USubstanceInstanceFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGraphInstance", &USubstanceInstanceFactory::execCreateGraphInstance },
			{ "GetGraphDescs", &USubstanceInstanceFactory::execGetGraphDescs },
			{ "GetGraphInstances", &USubstanceInstanceFactory::execGetGraphInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics
	{
		struct SubstanceInstanceFactory_eventCreateGraphInstance_Parms
		{
			FSubstanceGraphDesc GraphDesc;
			FString PackageName;
			USubstanceGraphInstance* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphDesc;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_GraphDesc = { "GraphDesc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceInstanceFactory_eventCreateGraphInstance_Parms, GraphDesc), Z_Construct_UScriptStruct_FSubstanceGraphDesc, METADATA_PARAMS(nullptr, 0) }; // 379415621
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceInstanceFactory_eventCreateGraphInstance_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceInstanceFactory_eventCreateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_GraphDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Creates a graph instance from a graph description */" },
		{ "DisplayName", "Create Graph Instance from Desc" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Creates a graph instance from a graph description" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceInstanceFactory, nullptr, "CreateGraphInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::SubstanceInstanceFactory_eventCreateGraphInstance_Parms), Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics
	{
		struct SubstanceInstanceFactory_eventGetGraphDescs_Parms
		{
			TArray<FSubstanceGraphDesc> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubstanceGraphDesc, METADATA_PARAMS(nullptr, 0) }; // 379415621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceInstanceFactory_eventGetGraphDescs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue_MetaData)) }; // 379415621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Returns the array of current associated graphs */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Returns the array of current associated graphs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceInstanceFactory, nullptr, "GetGraphDescs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::SubstanceInstanceFactory_eventGetGraphDescs_Parms), Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics
	{
		struct SubstanceInstanceFactory_eventGetGraphInstances_Parms
		{
			TArray<USubstanceGraphInstance*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceInstanceFactory_eventGetGraphInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Returns the array of current associated graphs */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Returns the array of current associated graphs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceInstanceFactory, nullptr, "GetGraphInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::SubstanceInstanceFactory_eventGetGraphInstances_Parms), Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceInstanceFactory);
	UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister()
	{
		return USubstanceInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGraphInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGraphInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mGraphInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeSourceFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RelativeSourceFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteSourceFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteSourceFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubstanceInstanceFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceInstanceFactory_CreateGraphInstance, "CreateGraphInstance" }, // 2874023285
		{ &Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphDescs, "GetGraphDescs" }, // 2510865656
		{ &Z_Construct_UFunction_USubstanceInstanceFactory_GetGraphInstances, "GetGraphInstances" }, // 786716056
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_Inner = { "mGraphInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_MetaData[] = {
		{ "Comment", "/** Stores references to the instances that are created with this factory */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Stores references to the instances that are created with this factory" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances = { "mGraphInstances", nullptr, (EPropertyFlags)0x0040000000200000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, mGraphInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath_MetaData[] = {
		{ "Comment", "/** Used for reimporting sbs files within editor */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Used for reimporting sbs files within editor" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath = { "RelativeSourceFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, RelativeSourceFilePath), METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath_MetaData[] = {
		{ "Comment", "/** Used for reimporting sbs files within editor */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Used for reimporting sbs files within editor" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath = { "AbsoluteSourceFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, AbsoluteSourceFilePath), METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Used to store when the file was created */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Used to store when the file was created" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, SourceFileTimestamp), METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode_MetaData[] = {
		{ "Comment", "/** Flag for the format used to save asset data */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Flag for the format used to save asset data" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode = { "GenerationMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceInstanceFactory, GenerationMode), Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode_MetaData)) }; // 3438640653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceInstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::ClassParams = {
		&USubstanceInstanceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceInstanceFactory()
	{
		if (!Z_Registration_Info_UClass_USubstanceInstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceInstanceFactory.OuterSingleton, Z_Construct_UClass_USubstanceInstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubstanceInstanceFactory.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceInstanceFactory>()
	{
		return USubstanceInstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceInstanceFactory);
	USubstanceInstanceFactory::~USubstanceInstanceFactory() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceInstanceFactory)
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::EnumInfo[] = {
		{ ESubstanceGenerationMode_StaticEnum, TEXT("ESubstanceGenerationMode"), &Z_Registration_Info_UEnum_ESubstanceGenerationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3438640653U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::ScriptStructInfo[] = {
		{ FSubstanceGraphDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceGraphDesc_Statics::NewStructOps, TEXT("SubstanceGraphDesc"), &Z_Registration_Info_UScriptStruct_SubstanceGraphDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceGraphDesc), 379415621U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceInstanceFactory, USubstanceInstanceFactory::StaticClass, TEXT("USubstanceInstanceFactory"), &Z_Registration_Info_UClass_USubstanceInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceInstanceFactory), 3816354483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_1601430621(TEXT("/Script/SubstanceCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceInstanceFactory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
