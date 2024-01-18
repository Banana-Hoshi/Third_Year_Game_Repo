// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/SubstanceGraphInstance.h"
#include "../Classes/SubstancePreset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceGraphInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister();
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstancePreset();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceInputType;
	static UEnum* ESubstanceInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubstanceInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubstanceInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceInputType"));
		}
		return Z_Registration_Info_UEnum_ESubstanceInputType.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceInputType>()
	{
		return ESubstanceInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enumerators[] = {
		{ "SIT_Float", (int64)SIT_Float },
		{ "SIT_Float2", (int64)SIT_Float2 },
		{ "SIT_Float3", (int64)SIT_Float3 },
		{ "SIT_Float4", (int64)SIT_Float4 },
		{ "SIT_Integer", (int64)SIT_Integer },
		{ "SIT_Image", (int64)SIT_Image },
		{ "SIT_Unused_6", (int64)SIT_Unused_6 },
		{ "SIT_Unused_7", (int64)SIT_Unused_7 },
		{ "SIT_Integer2", (int64)SIT_Integer2 },
		{ "SIT_Integer3", (int64)SIT_Integer3 },
		{ "SIT_Integer4", (int64)SIT_Integer4 },
		{ "SIT_MAX", (int64)SIT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "SIT_Float.Name", "SIT_Float" },
		{ "SIT_Float2.Name", "SIT_Float2" },
		{ "SIT_Float3.Name", "SIT_Float3" },
		{ "SIT_Float4.Name", "SIT_Float4" },
		{ "SIT_Image.Name", "SIT_Image" },
		{ "SIT_Integer.Name", "SIT_Integer" },
		{ "SIT_Integer2.Name", "SIT_Integer2" },
		{ "SIT_Integer3.Name", "SIT_Integer3" },
		{ "SIT_Integer4.Name", "SIT_Integer4" },
		{ "SIT_MAX.Name", "SIT_MAX" },
		{ "SIT_Unused_6.Name", "SIT_Unused_6" },
		{ "SIT_Unused_7.Name", "SIT_Unused_7" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		"ESubstanceInputType",
		"ESubstanceInputType",
		Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceInputType()
	{
		if (!Z_Registration_Info_UEnum_ESubstanceInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceInputType.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubstanceInputType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceInputDesc;
class UScriptStruct* FSubstanceInputDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceInputDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceInputDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceInputDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceInputDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceInputDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceInputDesc>()
{
	return FSubstanceInputDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceInputDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceInputDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceInputDesc, Type), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type_MetaData)) }; // 3538768277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		&NewStructOps,
		"SubstanceInputDesc",
		sizeof(FSubstanceInputDesc),
		alignof(FSubstanceInputDesc),
		Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInputDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_SubstanceInputDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceInputDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubstanceInputDesc.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSubstanceIntInputDesc>() == std::is_polymorphic<FSubstanceInputDesc>(), "USTRUCT FSubstanceIntInputDesc cannot be polymorphic unless super FSubstanceInputDesc is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc;
class UScriptStruct* FSubstanceIntInputDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceIntInputDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceIntInputDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceIntInputDesc>()
{
	return FSubstanceIntInputDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Min;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Max;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceIntInputDesc>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_Inner = { "Min", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceIntInputDesc, Min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_Inner = { "Max", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceIntInputDesc, Max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceIntInputDesc, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewProp_Default,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		Z_Construct_UScriptStruct_FSubstanceInputDesc,
		&NewStructOps,
		"SubstanceIntInputDesc",
		sizeof(FSubstanceIntInputDesc),
		alignof(FSubstanceIntInputDesc),
		Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceIntInputDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSubstanceFloatInputDesc>() == std::is_polymorphic<FSubstanceInputDesc>(), "USTRUCT FSubstanceFloatInputDesc cannot be polymorphic unless super FSubstanceInputDesc is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc;
class UScriptStruct* FSubstanceFloatInputDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceFloatInputDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceFloatInputDesc>()
{
	return FSubstanceFloatInputDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Min;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Max;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Default_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceFloatInputDesc>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_Inner = { "Min", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceFloatInputDesc, Min), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_Inner = { "Max", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceFloatInputDesc, Max), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_Inner = { "Default", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceFloatInputDesc, Default), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewProp_Default,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		Z_Construct_UScriptStruct_FSubstanceInputDesc,
		&NewStructOps,
		"SubstanceFloatInputDesc",
		sizeof(FSubstanceFloatInputDesc),
		alignof(FSubstanceFloatInputDesc),
		Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceFloatInputDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc;
class UScriptStruct* FSubstanceInstanceDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceInstanceDesc, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceInstanceDesc"));
	}
	return Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.OuterSingleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceInstanceDesc>()
{
	return FSubstanceInstanceDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceInstanceDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceInstanceDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubstanceInputDesc, METADATA_PARAMS(nullptr, 0) }; // 710072018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubstanceInstanceDesc, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_MetaData)) }; // 710072018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewProp_Inputs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		&NewStructOps,
		"SubstanceInstanceDesc",
		sizeof(FSubstanceInstanceDesc),
		alignof(FSubstanceInstanceDesc),
		Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceInstanceDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc.InnerSingleton;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execRenderSync)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenderSync();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputImg)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_OBJECT(UObject,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputImg(Z_Param_InputName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execCreateOutputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateOutputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execEnableOutput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableOutput(Z_Param_Identifier,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetOutputNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetOutputNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInstanceDesc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubstanceInstanceDesc*)Z_Param__Result=P_THIS->GetInstanceDesc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetFloatInputDesc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubstanceFloatInputDesc*)Z_Param__Result=P_THIS->GetFloatInputDesc(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetIntInputDesc)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubstanceIntInputDesc*)Z_Param__Result=P_THIS->GetIntInputDesc(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputBool(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetInputColor(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInputString(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetInputFloat(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetInputInt(Z_Param_Identifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_UBOOL(Z_Param_Bool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputBool(Z_Param_Identifier,Z_Param_Bool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputColor(Z_Param_Identifier,Z_Param_Out_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputString(Z_Param_Identifier,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_TARRAY_REF(float,Z_Param_Out_InputValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputFloat(Z_Param_Identifier,Z_Param_Out_InputValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execSetInputInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_TARRAY_REF(int32,Z_Param_Out_InputValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputInt(Z_Param_Identifier,Z_Param_Out_InputValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESubstanceInputType>*)Z_Param__Result=P_THIS->GetInputType(Z_Param_InputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetInputNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetInputNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetDynamicMaterialInstance)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UMaterial,Z_Param_InParentMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterialInstance(Z_Param_Name,Z_Param_InParentMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execDuplicate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USubstanceGraphInstance**)Z_Param__Result=P_THIS->Duplicate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execCreateMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_GET_OBJECT(UMaterial,Z_Param_ParentMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMaterial(Z_Param_PackageName,Z_Param_ParentMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execGetConstantMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceConstant**)Z_Param__Result=P_THIS->GetConstantMaterial();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(USubstanceGraphInstance::execSaveAllOutputs)
	{
		P_GET_UBOOL(Z_Param_ForceSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveAllOutputs(Z_Param_ForceSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceGraphInstance::execPrepareOutputsForSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareOutputsForSave();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void USubstanceGraphInstance::StaticRegisterNativesUSubstanceGraphInstance()
	{
		UClass* Class = USubstanceGraphInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMaterial", &USubstanceGraphInstance::execCreateMaterial },
			{ "CreateOutputs", &USubstanceGraphInstance::execCreateOutputs },
			{ "Duplicate", &USubstanceGraphInstance::execDuplicate },
			{ "EnableOutput", &USubstanceGraphInstance::execEnableOutput },
			{ "GetConstantMaterial", &USubstanceGraphInstance::execGetConstantMaterial },
			{ "GetDynamicMaterialInstance", &USubstanceGraphInstance::execGetDynamicMaterialInstance },
			{ "GetFloatInputDesc", &USubstanceGraphInstance::execGetFloatInputDesc },
			{ "GetInputBool", &USubstanceGraphInstance::execGetInputBool },
			{ "GetInputColor", &USubstanceGraphInstance::execGetInputColor },
			{ "GetInputFloat", &USubstanceGraphInstance::execGetInputFloat },
			{ "GetInputInt", &USubstanceGraphInstance::execGetInputInt },
			{ "GetInputNames", &USubstanceGraphInstance::execGetInputNames },
			{ "GetInputString", &USubstanceGraphInstance::execGetInputString },
			{ "GetInputType", &USubstanceGraphInstance::execGetInputType },
			{ "GetInstanceDesc", &USubstanceGraphInstance::execGetInstanceDesc },
			{ "GetIntInputDesc", &USubstanceGraphInstance::execGetIntInputDesc },
			{ "GetOutputNames", &USubstanceGraphInstance::execGetOutputNames },
#if WITH_EDITOR
			{ "PrepareOutputsForSave", &USubstanceGraphInstance::execPrepareOutputsForSave },
#endif // WITH_EDITOR
			{ "RenderSync", &USubstanceGraphInstance::execRenderSync },
#if WITH_EDITOR
			{ "SaveAllOutputs", &USubstanceGraphInstance::execSaveAllOutputs },
#endif // WITH_EDITOR
			{ "SetInputBool", &USubstanceGraphInstance::execSetInputBool },
			{ "SetInputColor", &USubstanceGraphInstance::execSetInputColor },
			{ "SetInputFloat", &USubstanceGraphInstance::execSetInputFloat },
			{ "SetInputImg", &USubstanceGraphInstance::execSetInputImg },
			{ "SetInputInt", &USubstanceGraphInstance::execSetInputInt },
			{ "SetInputString", &USubstanceGraphInstance::execSetInputString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics
	{
		struct SubstanceGraphInstance_eventCreateMaterial_Parms
		{
			FString PackageName;
			UMaterial* ParentMaterial;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventCreateMaterial_Parms, PackageName), METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_PackageName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventCreateMaterial_Parms, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::NewProp_ParentMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "CreateMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::SubstanceGraphInstance_eventCreateMaterial_Parms), Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "CreateOutputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics
	{
		struct SubstanceGraphInstance_eventDuplicate_Parms
		{
			USubstanceGraphInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventDuplicate_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "DisplayName", "Duplicate Graph Instance" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "Duplicate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::SubstanceGraphInstance_eventDuplicate_Parms), Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_Duplicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_Duplicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics
	{
		struct SubstanceGraphInstance_eventEnableOutput_Parms
		{
			FString Identifier;
			bool value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventEnableOutput_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_value_SetBit(void* Obj)
	{
		((SubstanceGraphInstance_eventEnableOutput_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubstanceGraphInstance_eventEnableOutput_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "EnableOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::SubstanceGraphInstance_eventEnableOutput_Parms), Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics
	{
		struct SubstanceGraphInstance_eventGetConstantMaterial_Parms
		{
			UMaterialInstanceConstant* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetConstantMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetConstantMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::SubstanceGraphInstance_eventGetConstantMaterial_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics
	{
		struct SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms
		{
			FName Name;
			UMaterial* InParentMaterial;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_InParentMaterial = { "InParentMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, InParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_InParentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Create a MaterialDynamicInstance using the passed in Material\n\x09  Name - the name to use for the created material instance\n\x09  InParentMaterial - the material to inherit from, will use the graphs CreatedMaterial if null\n\x09*/" },
		{ "CPP_Default_InParentMaterial", "None" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Create a MaterialDynamicInstance using the passed in Material\n        Name - the name to use for the created material instance\n        InParentMaterial - the material to inherit from, will use the graphs CreatedMaterial if null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetDynamicMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::SubstanceGraphInstance_eventGetDynamicMaterialInstance_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics
	{
		struct SubstanceGraphInstance_eventGetFloatInputDesc_Parms
		{
			FString Identifier;
			FSubstanceFloatInputDesc ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetFloatInputDesc_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetFloatInputDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceFloatInputDesc, METADATA_PARAMS(nullptr, 0) }; // 1327461415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get a float input description converted to a UE wrapper */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get a float input description converted to a UE wrapper" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetFloatInputDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::SubstanceGraphInstance_eventGetFloatInputDesc_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics
	{
		struct SubstanceGraphInstance_eventGetInputBool_Parms
		{
			FString Identifier;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputBool_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubstanceGraphInstance_eventGetInputBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubstanceGraphInstance_eventGetInputBool_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values of a boolean input */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values of a boolean input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::SubstanceGraphInstance_eventGetInputBool_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics
	{
		struct SubstanceGraphInstance_eventGetInputColor_Parms
		{
			FString Identifier;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputColor_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values of a color input */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values of a color input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::SubstanceGraphInstance_eventGetInputColor_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics
	{
		struct SubstanceGraphInstance_eventGetInputFloat_Parms
		{
			FString Identifier;
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputFloat_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values in a float value type array */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values in a float value type array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::SubstanceGraphInstance_eventGetInputFloat_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics
	{
		struct SubstanceGraphInstance_eventGetInputInt_Parms
		{
			FString Identifier;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputInt_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputInt_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values in an int value type array */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values in an int value type array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::SubstanceGraphInstance_eventGetInputInt_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics
	{
		struct SubstanceGraphInstance_eventGetInputNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Returns a list of all of the input identifiers */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Returns a list of all of the input identifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::SubstanceGraphInstance_eventGetInputNames_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics
	{
		struct SubstanceGraphInstance_eventGetInputString_Parms
		{
			FString Identifier;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputString_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get input values of a string input */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get input values of a string input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::SubstanceGraphInstance_eventGetInputString_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics
	{
		struct SubstanceGraphInstance_eventGetInputType_Parms
		{
			FString InputName;
			TEnumAsByte<ESubstanceInputType> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputType_Parms, InputName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInputType_Parms, ReturnValue), Z_Construct_UEnum_SubstanceCore_ESubstanceInputType, METADATA_PARAMS(nullptr, 0) }; // 3538768277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Gets the type of an input */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Gets the type of an input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInputType", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::SubstanceGraphInstance_eventGetInputType_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics
	{
		struct SubstanceGraphInstance_eventGetInstanceDesc_Parms
		{
			FSubstanceInstanceDesc ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetInstanceDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceInstanceDesc, METADATA_PARAMS(nullptr, 0) }; // 1248696274
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get a graph instance description converted to a UE wrapper */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get a graph instance description converted to a UE wrapper" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetInstanceDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::SubstanceGraphInstance_eventGetInstanceDesc_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics
	{
		struct SubstanceGraphInstance_eventGetIntInputDesc_Parms
		{
			FString Identifier;
			FSubstanceIntInputDesc ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetIntInputDesc_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetIntInputDesc_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubstanceIntInputDesc, METADATA_PARAMS(nullptr, 0) }; // 3132062774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Get an Int input description converted to a UE wrapper */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Get an Int input description converted to a UE wrapper" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetIntInputDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::SubstanceGraphInstance_eventGetIntInputDesc_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics
	{
		struct SubstanceGraphInstance_eventGetOutputNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventGetOutputNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "GetOutputNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::SubstanceGraphInstance_eventGetOutputNames_Parms), Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_USubstanceGraphInstance_PrepareOutputsForSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_PrepareOutputsForSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set outputs to render in raw format to allow updating UTexture2D cache data */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set outputs to render in raw format to allow updating UTexture2D cache data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_PrepareOutputsForSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "PrepareOutputsForSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_PrepareOutputsForSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_PrepareOutputsForSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_PrepareOutputsForSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_PrepareOutputsForSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Start the synchronous rendering of a Substance */" },
		{ "DisplayName", "Render sync" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Start the synchronous rendering of a Substance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "RenderSync", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_RenderSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_RenderSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics
	{
		struct SubstanceGraphInstance_eventSaveAllOutputs_Parms
		{
			bool ForceSave;
		};
		static void NewProp_ForceSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::NewProp_ForceSave_SetBit(void* Obj)
	{
		((SubstanceGraphInstance_eventSaveAllOutputs_Parms*)Obj)->ForceSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::NewProp_ForceSave = { "ForceSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubstanceGraphInstance_eventSaveAllOutputs_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::NewProp_ForceSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::NewProp_ForceSave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Force save existing outputs to disk*/" },
		{ "CPP_Default_ForceSave", "false" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Force save existing outputs to disk" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SaveAllOutputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::SubstanceGraphInstance_eventSaveAllOutputs_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics
	{
		struct SubstanceGraphInstance_eventSetInputBool_Parms
		{
			FString Identifier;
			bool Bool;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputBool_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((SubstanceGraphInstance_eventSetInputBool_Parms*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubstanceGraphInstance_eventSetInputBool_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::NewProp_Bool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with a bool value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with a bool value type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::SubstanceGraphInstance_eventSetInputBool_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics
	{
		struct SubstanceGraphInstance_eventSetInputColor_Parms
		{
			FString Identifier;
			FLinearColor Color;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputColor_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with a color value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with a color value type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::SubstanceGraphInstance_eventSetInputColor_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics
	{
		struct SubstanceGraphInstance_eventSetInputFloat_Parms
		{
			FString Identifier;
			TArray<float> InputValues;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputFloat_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_Inner = { "InputValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues = { "InputValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputFloat_Parms, InputValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::NewProp_InputValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with a float value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with a float value type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::SubstanceGraphInstance_eventSetInputFloat_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics
	{
		struct SubstanceGraphInstance_eventSetInputImg_Parms
		{
			FString InputName;
			UObject* Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputImg_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputImg_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubstanceGraphInstance_eventSetInputImg_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubstanceGraphInstance_eventSetInputImg_Parms), &Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Sets the input image with the given name */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Sets the input image with the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputImg", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::SubstanceGraphInstance_eventSetInputImg_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics
	{
		struct SubstanceGraphInstance_eventSetInputInt_Parms
		{
			FString Identifier;
			TArray<int32> InputValues;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputInt_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_Inner = { "InputValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues = { "InputValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputInt_Parms, InputValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::NewProp_InputValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with an int value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with an int value type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::SubstanceGraphInstance_eventSetInputInt_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics
	{
		struct SubstanceGraphInstance_eventSetInputString_Parms
		{
			FString Identifier;
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputString_Parms, Identifier), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceGraphInstance_eventSetInputString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Set an input with a string value type */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Set an input with a string value type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceGraphInstance, nullptr, "SetInputString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::SubstanceGraphInstance_eventSetInputString_Parms), Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceGraphInstance_SetInputString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceGraphInstance_SetInputString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceGraphInstance);
	UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister()
	{
		return USubstanceGraphInstance::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceGraphInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentFactory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageSources_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ImageSources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ImageSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Presets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantCreatedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConstantCreatedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicCreatedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicCreatedMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTextureLinkData_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputTextureLinkData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTextureLinkData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutputTextureLinkData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputInstances_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_OutputInstances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputInstances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutputInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFrozen_MetaData[];
#endif
		static void NewProp_bIsFrozen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFrozen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceGraphInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubstanceGraphInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceGraphInstance_CreateMaterial, "CreateMaterial" }, // 141005112
		{ &Z_Construct_UFunction_USubstanceGraphInstance_CreateOutputs, "CreateOutputs" }, // 3949026750
		{ &Z_Construct_UFunction_USubstanceGraphInstance_Duplicate, "Duplicate" }, // 1655809481
		{ &Z_Construct_UFunction_USubstanceGraphInstance_EnableOutput, "EnableOutput" }, // 3504213720
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetConstantMaterial, "GetConstantMaterial" }, // 715965978
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetDynamicMaterialInstance, "GetDynamicMaterialInstance" }, // 2030459275
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetFloatInputDesc, "GetFloatInputDesc" }, // 1714874989
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputBool, "GetInputBool" }, // 3674827502
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputColor, "GetInputColor" }, // 2269640200
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputFloat, "GetInputFloat" }, // 18709808
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputInt, "GetInputInt" }, // 2448910061
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputNames, "GetInputNames" }, // 2220129760
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputString, "GetInputString" }, // 3729273306
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInputType, "GetInputType" }, // 2505402388
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetInstanceDesc, "GetInstanceDesc" }, // 3070492325
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetIntInputDesc, "GetIntInputDesc" }, // 2156358038
		{ &Z_Construct_UFunction_USubstanceGraphInstance_GetOutputNames, "GetOutputNames" }, // 2354846991
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USubstanceGraphInstance_PrepareOutputsForSave, "PrepareOutputsForSave" }, // 3853145766
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_USubstanceGraphInstance_RenderSync, "RenderSync" }, // 1270344397
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SaveAllOutputs, "SaveAllOutputs" }, // 1154633475
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputBool, "SetInputBool" }, // 3068447617
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputColor, "SetInputColor" }, // 1255586368
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputFloat, "SetInputFloat" }, // 1491681691
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputImg, "SetInputImg" }, // 2783318338
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputInt, "SetInputInt" }, // 1793573603
		{ &Z_Construct_UFunction_USubstanceGraphInstance_SetInputString, "SetInputString" }, // 1885342283
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceGraphInstance.h" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL_MetaData[] = {
		{ "Comment", "/** Use for finding and linking the graph instance with other substance objects */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Use for finding and linking the graph instance with other substance objects" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL = { "PackageURL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, PackageURL), METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory_MetaData[] = {
		{ "Comment", "/** The Factory containing the package which created this Instance */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "The Factory containing the package which created this Instance" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory = { "ParentFactory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, ParentFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_ValueProp = { "ImageSources", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_Key_KeyProp = { "ImageSources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_MetaData[] = {
		{ "Comment", "/** Container for linking all of the input images this class uses */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Container for linking all of the input images this class uses" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources = { "ImageSources", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, ImageSources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Material parent for instancing by the factory */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Material parent for instancing by the factory" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial = { "CreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, CreatedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubstancePreset, METADATA_PARAMS(nullptr, 0) }; // 3586245587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets_MetaData[] = {
		{ "Comment", "/** Array of presets that the user can switch between */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Array of presets that the user can switch between" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets_MetaData)) }; // 3586245587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Constant Material Instance created by the factory */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Constant Material Instance created by the factory" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial = { "ConstantCreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, ConstantCreatedMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Dynamic Material Instance generated by user at runtime to allow numeric output updates */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Dynamic Material Instance generated by user at runtime to allow numeric output updates" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial = { "DynamicCreatedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, DynamicCreatedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_ValueProp = { "OutputTextureLinkData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_Key_KeyProp = { "OutputTextureLinkData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_MetaData[] = {
		{ "Comment", "/** Used to store all of the UID/Guid conversions to link legacy textures and output instances */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Used to store all of the UID/Guid conversions to link legacy textures and output instances" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData = { "OutputTextureLinkData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, OutputTextureLinkData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_ValueProp = { "OutputInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_USubstanceOutputData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_Key_KeyProp = { "OutputInstances_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_MetaData[] = {
		{ "Comment", "/** Used to store all of the output instance data variables */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Used to store all of the output instance data variables" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances = { "OutputInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceGraphInstance, OutputInstances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Flag to determine if this is a graph that has been update disabled through the editor */" },
		{ "ModuleRelativePath", "Classes/SubstanceGraphInstance.h" },
		{ "ToolTip", "Flag to determine if this is a graph that has been update disabled through the editor" },
	};
#endif
	void Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_SetBit(void* Obj)
	{
		((USubstanceGraphInstance*)Obj)->bIsFrozen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen = { "bIsFrozen", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USubstanceGraphInstance), &Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_PackageURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ParentFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ImageSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_CreatedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_Presets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_ConstantCreatedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_DynamicCreatedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputTextureLinkData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_OutputInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceGraphInstance_Statics::NewProp_bIsFrozen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceGraphInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceGraphInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceGraphInstance_Statics::ClassParams = {
		&USubstanceGraphInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceGraphInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceGraphInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceGraphInstance()
	{
		if (!Z_Registration_Info_UClass_USubstanceGraphInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceGraphInstance.OuterSingleton, Z_Construct_UClass_USubstanceGraphInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubstanceGraphInstance.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceGraphInstance>()
	{
		return USubstanceGraphInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceGraphInstance);
	USubstanceGraphInstance::~USubstanceGraphInstance() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceGraphInstance)
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::EnumInfo[] = {
		{ ESubstanceInputType_StaticEnum, TEXT("ESubstanceInputType"), &Z_Registration_Info_UEnum_ESubstanceInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3538768277U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::ScriptStructInfo[] = {
		{ FSubstanceInputDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics::NewStructOps, TEXT("SubstanceInputDesc"), &Z_Registration_Info_UScriptStruct_SubstanceInputDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceInputDesc), 710072018U) },
		{ FSubstanceIntInputDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics::NewStructOps, TEXT("SubstanceIntInputDesc"), &Z_Registration_Info_UScriptStruct_SubstanceIntInputDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceIntInputDesc), 3132062774U) },
		{ FSubstanceFloatInputDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics::NewStructOps, TEXT("SubstanceFloatInputDesc"), &Z_Registration_Info_UScriptStruct_SubstanceFloatInputDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceFloatInputDesc), 1327461415U) },
		{ FSubstanceInstanceDesc::StaticStruct, Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics::NewStructOps, TEXT("SubstanceInstanceDesc"), &Z_Registration_Info_UScriptStruct_SubstanceInstanceDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceInstanceDesc), 1248696274U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceGraphInstance, USubstanceGraphInstance::StaticClass, TEXT("USubstanceGraphInstance"), &Z_Registration_Info_UClass_USubstanceGraphInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceGraphInstance), 2685981103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_2818268137(TEXT("/Script/SubstanceCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
