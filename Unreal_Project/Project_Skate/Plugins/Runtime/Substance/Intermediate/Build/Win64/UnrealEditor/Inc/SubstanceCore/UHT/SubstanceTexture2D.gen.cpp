// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/SubstanceTexture2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// End Cross Module References
	void USubstanceTexture2D::StaticRegisterNativesUSubstanceTexture2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceTexture2D);
	UClass* Z_Construct_UClass_USubstanceTexture2D_NoRegister()
	{
		return USubstanceTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCooked_MetaData[];
#endif
		static void NewProp_bCooked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCooked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2DDynamic,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SubstanceTexture2D.h" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance_MetaData[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Graph that will update this texture */" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "Graph that will update this texture" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance = { "ParentInstance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceTexture2D, ParentInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubstanceTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_MetaData[] = {
		{ "Comment", "/** Whether or not this is a cook asset */" },
		{ "ModuleRelativePath", "Classes/SubstanceTexture2D.h" },
		{ "ToolTip", "Whether or not this is a cook asset" },
	};
#endif
	void Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_SetBit(void* Obj)
	{
		((USubstanceTexture2D*)Obj)->bCooked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked = { "bCooked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USubstanceTexture2D), &Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_ParentInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_AddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceTexture2D_Statics::NewProp_bCooked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceTexture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceTexture2D_Statics::ClassParams = {
		&USubstanceTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceTexture2D()
	{
		if (!Z_Registration_Info_UClass_USubstanceTexture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceTexture2D.OuterSingleton, Z_Construct_UClass_USubstanceTexture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubstanceTexture2D.OuterSingleton;
	}
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceTexture2D>()
	{
		return USubstanceTexture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceTexture2D);
	USubstanceTexture2D::~USubstanceTexture2D() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceTexture2D)
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceTexture2D, USubstanceTexture2D::StaticClass, TEXT("USubstanceTexture2D"), &Z_Registration_Info_UClass_USubstanceTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceTexture2D), 4024120739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_2534635379(TEXT("/Script/SubstanceCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceTexture2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
