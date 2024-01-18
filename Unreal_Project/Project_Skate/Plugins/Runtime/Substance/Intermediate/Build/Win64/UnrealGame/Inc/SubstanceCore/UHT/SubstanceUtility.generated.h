// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceUtility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UMaterialInterface;
class UObject;
class USubstanceGraphInstance;
class USubstanceInstanceFactory;
class UTexture2D;
struct FSubstanceConnection;
#ifdef SUBSTANCECORE_SubstanceUtility_generated_h
#error "SubstanceUtility.generated.h already included, missing '#pragma once' in SubstanceUtility.h"
#endif
#define SUBSTANCECORE_SubstanceUtility_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceConnection_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceConnection>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSubstanceIncludedMaterials); \
	DECLARE_FUNCTION(execSyncRendering); \
	DECLARE_FUNCTION(execAsyncRendering); \
	DECLARE_FUNCTION(execCreateAggregateSubstanceFactory); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSizeInt); \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSize); \
	DECLARE_FUNCTION(execResetInputParameters); \
	DECLARE_FUNCTION(execCopyInputParameters); \
	DECLARE_FUNCTION(execDisableInstanceOutputs); \
	DECLARE_FUNCTION(execEnableInstanceOutputs); \
	DECLARE_FUNCTION(execDuplicateGraphInstance); \
	DECLARE_FUNCTION(execCreateGraphInstance); \
	DECLARE_FUNCTION(execGetSubstanceLoadingProgress); \
	DECLARE_FUNCTION(execGetFactoryName); \
	DECLARE_FUNCTION(execGetGraphName); \
	DECLARE_FUNCTION(execGetSubstanceTextures); \
	DECLARE_FUNCTION(execGetSubstances);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSubstanceIncludedMaterials); \
	DECLARE_FUNCTION(execSyncRendering); \
	DECLARE_FUNCTION(execAsyncRendering); \
	DECLARE_FUNCTION(execCreateAggregateSubstanceFactory); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSizeInt); \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSize); \
	DECLARE_FUNCTION(execResetInputParameters); \
	DECLARE_FUNCTION(execCopyInputParameters); \
	DECLARE_FUNCTION(execDisableInstanceOutputs); \
	DECLARE_FUNCTION(execEnableInstanceOutputs); \
	DECLARE_FUNCTION(execDuplicateGraphInstance); \
	DECLARE_FUNCTION(execCreateGraphInstance); \
	DECLARE_FUNCTION(execGetSubstanceLoadingProgress); \
	DECLARE_FUNCTION(execGetFactoryName); \
	DECLARE_FUNCTION(execGetGraphName); \
	DECLARE_FUNCTION(execGetSubstanceTextures); \
	DECLARE_FUNCTION(execGetSubstances);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceUtility(); \
	friend struct Z_Construct_UClass_USubstanceUtility_Statics; \
public: \
	DECLARE_CLASS(USubstanceUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), SUBSTANCECORE_API) \
	DECLARE_SERIALIZER(USubstanceUtility)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceUtility(); \
	friend struct Z_Construct_UClass_USubstanceUtility_Statics; \
public: \
	DECLARE_CLASS(USubstanceUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), SUBSTANCECORE_API) \
	DECLARE_SERIALIZER(USubstanceUtility)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBSTANCECORE_API USubstanceUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBSTANCECORE_API, USubstanceUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUBSTANCECORE_API USubstanceUtility(USubstanceUtility&&); \
	SUBSTANCECORE_API USubstanceUtility(const USubstanceUtility&); \
public: \
	SUBSTANCECORE_API virtual ~USubstanceUtility();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBSTANCECORE_API USubstanceUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUBSTANCECORE_API USubstanceUtility(USubstanceUtility&&); \
	SUBSTANCECORE_API USubstanceUtility(const USubstanceUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBSTANCECORE_API, USubstanceUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceUtility) \
	SUBSTANCECORE_API virtual ~USubstanceUtility();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_35_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceUtility."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h


#define FOREACH_ENUM_ESUBSTANCETEXTURESIZE(op) \
	op(ERL_16) \
	op(ERL_32) \
	op(ERL_64) \
	op(ERL_128) \
	op(ERL_256) \
	op(ERL_512) \
	op(ERL_1024) \
	op(ERL_2048) \
	op(ERL_4096) \
	op(ERL_8192) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
