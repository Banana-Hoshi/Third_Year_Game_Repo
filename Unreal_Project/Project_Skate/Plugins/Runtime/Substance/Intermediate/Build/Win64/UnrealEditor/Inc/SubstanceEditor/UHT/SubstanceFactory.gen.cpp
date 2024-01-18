// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Classes/SubstanceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceFactory() {}
// Cross Module References
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// End Cross Module References
	DEFINE_FUNCTION(USubstanceFactory::execCreateMaterial)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMaterial(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceFactory::execCreateInstance)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInstance(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceFactory::execSuppressImportOverwriteDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuppressImportOverwriteDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceFactory::execImportArchive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_destinationPpath);
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USubstanceInstanceFactory**)Z_Param__Result=P_THIS->ImportArchive(Z_Param_destinationPpath,Z_Param_filename);
		P_NATIVE_END;
	}
	void USubstanceFactory::StaticRegisterNativesUSubstanceFactory()
	{
		UClass* Class = USubstanceFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInstance", &USubstanceFactory::execCreateInstance },
			{ "CreateMaterial", &USubstanceFactory::execCreateMaterial },
			{ "ImportArchive", &USubstanceFactory::execImportArchive },
			{ "SuppressImportOverwriteDialog", &USubstanceFactory::execSuppressImportOverwriteDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics
	{
		struct SubstanceFactory_eventCreateInstance_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::NewProp_value_SetBit(void* Obj)
	{
		((SubstanceFactory_eventCreateInstance_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubstanceFactory_eventCreateInstance_Parms), &Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceFactory, nullptr, "CreateInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::SubstanceFactory_eventCreateInstance_Parms), Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceFactory_CreateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics
	{
		struct SubstanceFactory_eventCreateMaterial_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::NewProp_value_SetBit(void* Obj)
	{
		((SubstanceFactory_eventCreateMaterial_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubstanceFactory_eventCreateMaterial_Parms), &Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceFactory, nullptr, "CreateMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::SubstanceFactory_eventCreateMaterial_Parms), Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceFactory_CreateMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics
	{
		struct SubstanceFactory_eventImportArchive_Parms
		{
			FString destinationPpath;
			FString filename;
			USubstanceInstanceFactory* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_destinationPpath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_destinationPpath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_destinationPpath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_destinationPpath = { "destinationPpath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceFactory_eventImportArchive_Parms, destinationPpath), METADATA_PARAMS(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_destinationPpath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_destinationPpath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceFactory_eventImportArchive_Parms, filename), METADATA_PARAMS(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_filename_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubstanceFactory_eventImportArchive_Parms, ReturnValue), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_destinationPpath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Import an sbsar */" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
		{ "ToolTip", "Import an sbsar" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceFactory, nullptr, "ImportArchive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::SubstanceFactory_eventImportArchive_Parms), Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceFactory_ImportArchive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Suppresses the dialog box that, when importing over an existing texture, asks if the users wishes to overwrite its settings. */" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
		{ "ToolTip", "Suppresses the dialog box that, when importing over an existing texture, asks if the users wishes to overwrite its settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceFactory, nullptr, "SuppressImportOverwriteDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubstanceFactory);
	UClass* Z_Construct_UClass_USubstanceFactory_NoRegister()
	{
		return USubstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubstanceFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceFactory_CreateInstance, "CreateInstance" }, // 3376377837
		{ &Z_Construct_UFunction_USubstanceFactory_CreateMaterial, "CreateMaterial" }, // 246368264
		{ &Z_Construct_UFunction_USubstanceFactory_ImportArchive, "ImportArchive" }, // 1501248554
		{ &Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog, "SuppressImportOverwriteDialog" }, // 3571861203
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceFactory_Statics::ClassParams = {
		&USubstanceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceFactory()
	{
		if (!Z_Registration_Info_UClass_USubstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceFactory.OuterSingleton, Z_Construct_UClass_USubstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubstanceFactory.OuterSingleton;
	}
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<USubstanceFactory>()
	{
		return USubstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceFactory);
	USubstanceFactory::~USubstanceFactory() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceFactory, USubstanceFactory::StaticClass, TEXT("USubstanceFactory"), &Z_Registration_Info_UClass_USubstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceFactory), 427997582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_1518179803(TEXT("/Script/SubstanceEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
