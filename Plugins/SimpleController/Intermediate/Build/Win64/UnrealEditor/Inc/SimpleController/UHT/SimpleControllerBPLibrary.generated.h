// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleControllerBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
 struct FSimpleControllerMappingAxisAction;
 struct FSimpleControllerMappingButtonAction;
class UObject;
class USimpleControllerBPLibrary;
enum class ESimpleControllerAxisCorrection : uint8;
enum class ESimpleControllerButtons : uint8;
enum class ESimpleControllerButtonStatus : uint8;
enum class ESimpleControllerDirectionalPad : uint8;
enum class ESimpleControllerForceFeedbackDirectionType : uint8;
enum class ESimpleControllerForceFeedbackEffectConditionType : uint8;
enum class ESimpleControllerForceFeedbackEffectPeriodicType : uint8;
enum class ESimpleControllerKeyboardTriggerType : uint8;
enum class ESimpleControllerMouseTriggerButton : uint8;
enum class ESimpleControllerMouseTriggerType : uint8;
enum class ESimpleControllerPowerLevel : uint8;
enum class ESimpleControllerSensorType : uint8;
enum class ESimpleControllerType : uint8;
enum class SCDualSenseTriggerEffectEndPosition : uint8;
enum class SCDualSenseTriggerEffectStartPosition : uint8;
enum class SCDualSenseTriggerEffectStartZone : uint8;
enum class SCDualSenseTriggerEffectStrength : uint8;
enum class SCDualSenseTriggerEffectStrengthMulti : uint8;
struct FColor;
struct FSimpleControllerDevice;
struct FSimpleControllerForceFeedbackEffect;
struct FSimpleControllerMappingAxisAction;
struct FSimpleControllerMappingButtonAction;
struct FSimpleControllerMappingProfile;
#ifdef SIMPLECONTROLLER_SimpleControllerBPLibrary_generated_h
#error "SimpleControllerBPLibrary.generated.h already included, missing '#pragma once' in SimpleControllerBPLibrary.h"
#endif
#define SIMPLECONTROLLER_SimpleControllerBPLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_51_DELEGATE \
static void FbuttonDownEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& buttonDownEventDelegate, const FString& deviceID, int32 buttonID, int32 deviceIndex, FSimpleControllerDevice device, int32 connectionIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_57_DELEGATE \
static void FbuttonUpEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& buttonUpEventDelegate, const FString& deviceID, int32 buttonID, int32 deviceIndex, FSimpleControllerDevice device, int32 connectionIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_63_DELEGATE \
static void FdirectionalPadEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& directionalPadEventDelegate, const FString& deviceID, int32 directionalPadValue, int32 directionalPadIndex, int32 deviceIndex, FSimpleControllerDevice device, int32 connectionIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_69_DELEGATE \
static void FballMovedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ballMovedEventDelegate, const FString& deviceID, int32 ballID, float xRel, int32 yRel, FSimpleControllerDevice device);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_75_DELEGATE \
static void FaxisMovedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& axisMovedEventDelegate, const FString& deviceID, int32 axisID, float axisValue, int32 deviceIndex, FSimpleControllerDevice device, int32 connectionIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_81_DELEGATE \
static void FdeviceAttachedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& deviceAttachedEventDelegate, FSimpleControllerDevice device, int32 connectionIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_87_DELEGATE \
static void FdeviceDetachedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& deviceDetachedEventDelegate, FSimpleControllerDevice device, int32 connectionIndex);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_94_DELEGATE \
static void FaccelerationSensorEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& accelerationSensorEventDelegate, const FString& deviceID, float valueA, float valueB, float valueC, int32 deviceIndex, FSimpleControllerDevice device);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_100_DELEGATE \
static void FgyroSensorEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& gyroSensorEventDelegate, const FString& deviceID, float valueA, float valueB, float valueC, int32 deviceIndex, FSimpleControllerDevice device);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_106_DELEGATE \
static void FtouchpadMotionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& touchpadMotionEventDelegate, const FString& deviceID, int32 touchpadIndex, int32 finger, float x, float y, float pressure, int32 deviceIndex, FSimpleControllerDevice device);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_112_DELEGATE \
static void FtouchpadDownEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& touchpadDownEventDelegate, const FString& deviceID, int32 touchpadIndex, int32 finger, float x, float y, float pressure, int32 deviceIndex, FSimpleControllerDevice device);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_118_DELEGATE \
static void FtouchpadUpEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& touchpadUpEventDelegate, const FString& deviceID, int32 touchpadIndex, int32 finger, float x, float y, float pressure, int32 deviceIndex, FSimpleControllerDevice device);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execinitIOSPart); \
	DECLARE_FUNCTION(execgetButtonName); \
	DECLARE_FUNCTION(execbreakForceFeedbackEffect); \
	DECLARE_FUNCTION(execmapAxis); \
	DECLARE_FUNCTION(execisAxisMapped); \
	DECLARE_FUNCTION(execremoveAxisMapping); \
	DECLARE_FUNCTION(execmapButton); \
	DECLARE_FUNCTION(execisButtonMapped); \
	DECLARE_FUNCTION(execremoveButtonMapping); \
	DECLARE_FUNCTION(execgetMappingActionsByTag); \
	DECLARE_FUNCTION(execgetMappedAxisActions); \
	DECLARE_FUNCTION(execgetMappedButtonActions); \
	DECLARE_FUNCTION(execcancelMapping); \
	DECLARE_FUNCTION(execcreateMappingFile); \
	DECLARE_FUNCTION(execdeleteMappingFile); \
	DECLARE_FUNCTION(execgetAxisActions); \
	DECLARE_FUNCTION(execgetButtonActions); \
	DECLARE_FUNCTION(execbreakMappingProfile); \
	DECLARE_FUNCTION(execchangeAxisActionSettings); \
	DECLARE_FUNCTION(execbreakAxisAction); \
	DECLARE_FUNCTION(execbreakButtonAction); \
	DECLARE_FUNCTION(execbreakDeviceInfo); \
	DECLARE_FUNCTION(execgetCurrentPowerLevel); \
	DECLARE_FUNCTION(execbreakDeviceForceFeedbackInfo); \
	DECLARE_FUNCTION(execsetGainForceFeedback); \
	DECLARE_FUNCTION(execsetAutocenterForceFeedbackSDL); \
	DECLARE_FUNCTION(execstopRumbleWheel); \
	DECLARE_FUNCTION(execrumbleWheel); \
	DECLARE_FUNCTION(execdisableConstantForceOnWheel); \
	DECLARE_FUNCTION(execenableConstantForceOnWheel); \
	DECLARE_FUNCTION(execdestroyForceFeedbackEffect); \
	DECLARE_FUNCTION(execupdateConstantForceFeedbackEffect); \
	DECLARE_FUNCTION(execuploadAndRunForceFeedbackEffect); \
	DECLARE_FUNCTION(execstopForceFeedbackEffect); \
	DECLARE_FUNCTION(execrunForceFeedbackEffect); \
	DECLARE_FUNCTION(execuploadForceFeedbackEffect); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectRamp); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectCondition); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectPeriodic); \
	DECLARE_FUNCTION(execcreateForceFeedbackEffectConstant); \
	DECLARE_FUNCTION(execenableForceFeedbackOnDevice); \
	DECLARE_FUNCTION(execdisableForceFeedbackOnDevice); \
	DECLARE_FUNCTION(execgenerateDualSenseTriggerCommandMultiVibration); \
	DECLARE_FUNCTION(execgenerateDualSenseTriggerCommandMultiFeedback); \
	DECLARE_FUNCTION(execgenerateDualSenseTriggerCommandVibration); \
	DECLARE_FUNCTION(execgenerateDualSenseTriggerCommandWeapon); \
	DECLARE_FUNCTION(execgenerateDualSenseTriggerCommandFeedback); \
	DECLARE_FUNCTION(execgenerateDualSenseTriggerCommandOFF); \
	DECLARE_FUNCTION(execexecuteCommandOnController); \
	DECLARE_FUNCTION(execrumbleTrigger); \
	DECLARE_FUNCTION(execrumble); \
	DECLARE_FUNCTION(execrumbleByConnectionIndex); \
	DECLARE_FUNCTION(execsetSensor); \
	DECLARE_FUNCTION(execsetLEDColor); \
	DECLARE_FUNCTION(execsetDeadZone); \
	DECLARE_FUNCTION(execsetUnrealKeyboardAndMouseEvents); \
	DECLARE_FUNCTION(execfindDeviceIndexByConnectionIndex); \
	DECLARE_FUNCTION(execfindControllerByConnectionIndex); \
	DECLARE_FUNCTION(execfindControllerByDeviceID); \
	DECLARE_FUNCTION(execfindControllerByDeviceIndex); \
	DECLARE_FUNCTION(execgetConnectedControllers); \
	DECLARE_FUNCTION(execgetBallValueBySDL); \
	DECLARE_FUNCTION(execgetHatValueBySDL); \
	DECLARE_FUNCTION(execgetButtonValueBySDL); \
	DECLARE_FUNCTION(execgetAxisValueBySDL); \
	DECLARE_FUNCTION(execgetAxisValues); \
	DECLARE_FUNCTION(execaddAxisCorrection); \
	DECLARE_FUNCTION(execremoveAxisCorrection); \
	DECLARE_FUNCTION(execfireKeyboardButtonEvent); \
	DECLARE_FUNCTION(execaddMousePosition); \
	DECLARE_FUNCTION(execgetMousePosition); \
	DECLARE_FUNCTION(execsetMousePosition); \
	DECLARE_FUNCTION(execfireMouseButtonEvent); \
	DECLARE_FUNCTION(execbuttonIDToButton); \
	DECLARE_FUNCTION(execdirectinalPadValueToDirection); \
	DECLARE_FUNCTION(exectouchpadUpEventDelegate); \
	DECLARE_FUNCTION(exectouchpadDownEventDelegate); \
	DECLARE_FUNCTION(exectouchpadMotionEventDelegate); \
	DECLARE_FUNCTION(execgyroSensorEventDelegate); \
	DECLARE_FUNCTION(execaccelerationSensorEventDelegate); \
	DECLARE_FUNCTION(execdeviceDetachedEventDelegate); \
	DECLARE_FUNCTION(execdeviceAttachedEventDelegate); \
	DECLARE_FUNCTION(execaxisMovedEventDelegate); \
	DECLARE_FUNCTION(execballMovedEventDelegate); \
	DECLARE_FUNCTION(execdirectionalPadEventDelegate); \
	DECLARE_FUNCTION(execbuttonUpEventDelegate); \
	DECLARE_FUNCTION(execbuttonDownEventDelegate); \
	DECLARE_FUNCTION(execgetSimpleControllerTarget);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleControllerBPLibrary(); \
	friend struct Z_Construct_UClass_USimpleControllerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerBPLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleControllerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleControllerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerBPLibrary(USimpleControllerBPLibrary&&); \
	NO_API USimpleControllerBPLibrary(const USimpleControllerBPLibrary&); \
public: \
	NO_API virtual ~USimpleControllerBPLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_22_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECONTROLLER_API UClass* StaticClass<class USimpleControllerBPLibrary>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_RPC_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleControllerUnrealEvents(); \
	friend struct Z_Construct_UClass_USimpleControllerUnrealEvents_Statics; \
public: \
	DECLARE_CLASS(USimpleControllerUnrealEvents, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleController"), NO_API) \
	DECLARE_SERIALIZER(USimpleControllerUnrealEvents)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleControllerUnrealEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleControllerUnrealEvents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleControllerUnrealEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleControllerUnrealEvents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleControllerUnrealEvents(USimpleControllerUnrealEvents&&); \
	NO_API USimpleControllerUnrealEvents(const USimpleControllerUnrealEvents&); \
public: \
	NO_API virtual ~USimpleControllerUnrealEvents();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_922_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_925_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLECONTROLLER_API UClass* StaticClass<class USimpleControllerUnrealEvents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
