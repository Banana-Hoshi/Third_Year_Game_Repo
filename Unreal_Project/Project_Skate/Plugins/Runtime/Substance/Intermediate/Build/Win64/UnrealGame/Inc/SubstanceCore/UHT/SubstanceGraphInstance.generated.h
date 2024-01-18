// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceGraphInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UObject;
class USubstanceGraphInstance;
struct FLinearColor;
struct FSubstanceFloatInputDesc;
struct FSubstanceInstanceDesc;
struct FSubstanceIntInputDesc;
#ifdef SUBSTANCECORE_SubstanceGraphInstance_generated_h
#error "SubstanceGraphInstance.generated.h already included, missing '#pragma once' in SubstanceGraphInstance.h"
#endif
#define SUBSTANCECORE_SubstanceGraphInstance_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceInputDesc>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceIntInputDesc>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceFloatInputDesc>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<struct FSubstanceInstanceDesc>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenderSync); \
	DECLARE_FUNCTION(execSetInputImg); \
	DECLARE_FUNCTION(execCreateOutputs); \
	DECLARE_FUNCTION(execEnableOutput); \
	DECLARE_FUNCTION(execGetOutputNames); \
	DECLARE_FUNCTION(execGetInstanceDesc); \
	DECLARE_FUNCTION(execGetFloatInputDesc); \
	DECLARE_FUNCTION(execGetIntInputDesc); \
	DECLARE_FUNCTION(execGetInputBool); \
	DECLARE_FUNCTION(execGetInputColor); \
	DECLARE_FUNCTION(execGetInputString); \
	DECLARE_FUNCTION(execGetInputFloat); \
	DECLARE_FUNCTION(execGetInputInt); \
	DECLARE_FUNCTION(execSetInputBool); \
	DECLARE_FUNCTION(execSetInputColor); \
	DECLARE_FUNCTION(execSetInputString); \
	DECLARE_FUNCTION(execSetInputFloat); \
	DECLARE_FUNCTION(execSetInputInt); \
	DECLARE_FUNCTION(execGetInputType); \
	DECLARE_FUNCTION(execGetInputNames); \
	DECLARE_FUNCTION(execGetDynamicMaterialInstance); \
	DECLARE_FUNCTION(execDuplicate); \
	DECLARE_FUNCTION(execCreateMaterial); \
	DECLARE_FUNCTION(execGetConstantMaterial);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenderSync); \
	DECLARE_FUNCTION(execSetInputImg); \
	DECLARE_FUNCTION(execCreateOutputs); \
	DECLARE_FUNCTION(execEnableOutput); \
	DECLARE_FUNCTION(execGetOutputNames); \
	DECLARE_FUNCTION(execGetInstanceDesc); \
	DECLARE_FUNCTION(execGetFloatInputDesc); \
	DECLARE_FUNCTION(execGetIntInputDesc); \
	DECLARE_FUNCTION(execGetInputBool); \
	DECLARE_FUNCTION(execGetInputColor); \
	DECLARE_FUNCTION(execGetInputString); \
	DECLARE_FUNCTION(execGetInputFloat); \
	DECLARE_FUNCTION(execGetInputInt); \
	DECLARE_FUNCTION(execSetInputBool); \
	DECLARE_FUNCTION(execSetInputColor); \
	DECLARE_FUNCTION(execSetInputString); \
	DECLARE_FUNCTION(execSetInputFloat); \
	DECLARE_FUNCTION(execSetInputInt); \
	DECLARE_FUNCTION(execGetInputType); \
	DECLARE_FUNCTION(execGetInputNames); \
	DECLARE_FUNCTION(execGetDynamicMaterialInstance); \
	DECLARE_FUNCTION(execDuplicate); \
	DECLARE_FUNCTION(execCreateMaterial); \
	DECLARE_FUNCTION(execGetConstantMaterial);


#if WITH_EDITOR
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveAllOutputs); \
	DECLARE_FUNCTION(execPrepareOutputsForSave);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveAllOutputs); \
	DECLARE_FUNCTION(execPrepareOutputsForSave);


#else
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_EDITOR_ONLY_RPC_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceGraphInstance, NO_API)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend struct Z_Construct_UClass_USubstanceGraphInstance_Statics; \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ARCHIVESERIALIZER


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend struct Z_Construct_UClass_USubstanceGraphInstance_Statics; \
public: \
	DECLARE_CLASS(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), NO_API) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ARCHIVESERIALIZER


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceGraphInstance(USubstanceGraphInstance&&); \
	NO_API USubstanceGraphInstance(const USubstanceGraphInstance&); \
public: \
	NO_API virtual ~USubstanceGraphInstance();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubstanceGraphInstance(USubstanceGraphInstance&&); \
	NO_API USubstanceGraphInstance(const USubstanceGraphInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance) \
	NO_API virtual ~USubstanceGraphInstance();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_EDITOR_ONLY_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubstanceGraphInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSTANCECORE_API UClass* StaticClass<class USubstanceGraphInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h


#define FOREACH_ENUM_ESUBSTANCEINPUTTYPE(op) \
	op(SIT_Float) \
	op(SIT_Float2) \
	op(SIT_Float3) \
	op(SIT_Float4) \
	op(SIT_Integer) \
	op(SIT_Image) \
	op(SIT_Unused_6) \
	op(SIT_Unused_7) \
	op(SIT_Integer2) \
	op(SIT_Integer3) \
	op(SIT_Integer4) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
