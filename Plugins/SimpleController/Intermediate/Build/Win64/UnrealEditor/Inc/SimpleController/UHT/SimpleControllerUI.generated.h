// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleControllerUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USimpleControllerUIEnableSelection;
class UWidget;
enum class ESimpleControllerUIDirection : uint8;
struct FSimpleControllerDevice;
#ifdef SIMPLECONTROLLER_SimpleControllerUI_generated_h
#error "SimpleControllerUI.generated.h already included, missing '#pragma once' in SimpleControllerUI.h"
#endif
#define SIMPLECONTROLLER_SimpleControllerUI_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_45_DELEGATE \
static void FselectedWidgetEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& selectedWidgetEventDelegate, UWidget* mainWidget, UWidget* selectedWidget, int32 connectionIndex, bool hasNewSelection, ESimpleControllerUIDirection lastDirection);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execselectUIElement); \
	DECLARE_FUNCTION(execselectNextUIElement); \
	DECLARE_FUNCTION(execresumeSimpleControllerUISelection); \
	DECLARE_FUNCTION(execpauseSimpleControllerUISelection); \
	DECLARE_FUNCTION(execdestroySimpleControllerUISelection); \
	DECLARE_FUNCTION(execenableSimpleControllerUISelection); \
	DECLARE_FUNCTION(execuiDirectionalPadEvent); \
	DECLARE_FUNCTION(execuiAxisEvent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleControllerUIEnableSelection(); \
	friend struct Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerUIEnableSelection, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerUIEnableSelection)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleControllerUIEnableSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerUIEnableSelection(USimpleControllerUIEnableSelection&&); \
	NO_API USimpleControllerUIEnableSelection(const USimpleControllerUIEnableSelection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerUIEnableSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerUIEnableSelection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleControllerUIEnableSelection) \
	NO_API virtual ~USimpleControllerUIEnableSelection();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_37_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECONTROLLER_API UClass* StaticClass<class USimpleControllerUIEnableSelection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h


#define FOREACH_ENUM_ESIMPLECONTROLLERUIDIRECTION(op) \
	op(ESimpleControllerUIDirection::NONE) \
	op(ESimpleControllerUIDirection::RIGHT) \
	op(ESimpleControllerUIDirection::LEFT) \
	op(ESimpleControllerUIDirection::TOP) \
	op(ESimpleControllerUIDirection::BOTTOM) 

enum class ESimpleControllerUIDirection : uint8;
template<> struct TIsUEnumClass<ESimpleControllerUIDirection> { enum { Value = true }; };
template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerUIDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
