// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "CoreMinimal.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/GameViewportClient.h"
#include "Engine/LocalPlayer.h"
#include "Framework/Application/SlateApplication.h"
#include "UnrealClient.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Launch/Resources/Version.h"
#include "HAL/PlatformFileManager.h"
#include "HAL/ThreadSafeBool.h"
#include "Async/Async.h"
#include "ControllerList.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "InputCoreTypes.h"
#include "UObject/UObjectThreadContext.h"
#include "Engine/DeveloperSettings.h"
#include "Components/InputComponent.h"
#include "Components/Widget.h"
#include "Components/PanelWidget.h"
#if ENGINE_MAJOR_VERSION >= 5 & ENGINE_MINOR_VERSION > 0
#include "GenericPlatform/GenericPlatformInputDeviceMapper.h"
#endif
#include "GenericPlatform/GenericPlatformFile.h"



#if PLATFORM_UNIX & !PLATFORM_ANDROID
THIRD_PARTY_INCLUDES_START
#include "SDL.h"
THIRD_PARTY_INCLUDES_END
#endif

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_ANDROID | PLATFORM_IOS
THIRD_PARTY_INCLUDES_START
#include "ThirdParty/include/SDL.h"
THIRD_PARTY_INCLUDES_END
#endif

#include "SimpleController.generated.h"


class FSDLEventsThread;
class FPersistentEventsThread;
class USimpleControllerWheel; 
class USimpleControllerUI; 
class USimpleControllerMobile;
class USimpleControllerMappedButtonAsyncEvent;
class USimpleControllerMappingAxisEvents;
class USimpleControllerGamepadStickAxisEvents;
class USimpleControllerGamepadTriggerAxisEvents;
class USimpleControllerGamepadFaceButtonEvents;
class USimpleControllerGamepadControlButtonEvents;
class USimpleControllerGamepadStickButtonEvents;
class USimpleControllerGamepadShoulderButtonEvents;
class USimpleControllerGamepadDpadButtonEvents;
class USimpleControllerGamepadSpecialButtonEvents;
class USimpleControllerStatusAsyncEvent;
class USimpleControllerButtonAsyncEvent;
class USimpleControllerAxisAsyncEvent;
class USimpleControllerMappingButton;
class USimpleControllerMappingAxis;
class USimpleControllerMappingCalibrateAxis;



UENUM(BlueprintType)
enum class ESimpleControllerEventType : uint8
{
	OnChange		UMETA(DisplayName = "The axis value changes"),
	OnTick 			UMETA(DisplayName = "Tick (Once per frame)"),
	Persistent30  	UMETA(DisplayName = "Persistent 30 FPS"),
	Persistent60  	UMETA(DisplayName = "Persistent 60 FPS"),
	Persistent120  	UMETA(DisplayName = "Persistent 120 FPS")
};



UENUM(BlueprintType)
enum class ESimpleControllerMapDoubleAction : uint8
{
	IgnoreInput			UMETA(DisplayName = "Ignore Input"),
	DeleteOtherMapping  UMETA(DisplayName = "Delete other mapping")
};

UENUM(BlueprintType)
enum class ESimpleControllerMapActionType : uint8
{
	Button	UMETA(DisplayName = "Button"),
	Axis  UMETA(DisplayName = "Axis")
};



UENUM(BlueprintType)
enum class ESimpleControllerButtonStatus : uint8
{
	Pressed		UMETA(DisplayName = "Pressed"),
	Released 	UMETA(DisplayName = "Released")
};


UENUM(BlueprintType)
enum class ESimpleControllerType : uint8
{
	UNKNOWN			UMETA(DisplayName = "UNKNOWN"),
	GAMECONTROLLER 	UMETA(DisplayName = "GAMECONTROLLER"),
	WHEEL			UMETA(DisplayName = "WHEEL"),
	ARCADE_STICK 	UMETA(DisplayName = "ARCADE_STICK"),
	FLIGHT_STICK	UMETA(DisplayName = "FLIGHT_STICK"),
	DANCE_PAD 		UMETA(DisplayName = "DANCE_PAD"),
	GUITAR			UMETA(DisplayName = "GUITAR"),
	DRUM_KIT 		UMETA(DisplayName = "DRUM_KIT"),
	ARCADE_PAD		UMETA(DisplayName = "ARCADE_PAD"),
	THROTTLE 		UMETA(DisplayName = "THROTTLE"),
	KEYBOARD		UMETA(DisplayName = "KEYBOARD"),
	MOUSE			UMETA(DisplayName = "MOUSE")
};


UENUM(BlueprintType)
enum class ESimpleControllerPowerLevel : uint8
{
	UNKNOWN		UMETA(DisplayName = "UNKNOWN"),
	EMPTY		UMETA(DisplayName = "EMPTY"),
	LOW			UMETA(DisplayName = "LOW"),
	MEDIUM 		UMETA(DisplayName = "MEDIUM"),
	FULL		UMETA(DisplayName = "FULL"),
	WIRED 		UMETA(DisplayName = "WIRED"),
	MAX			UMETA(DisplayName = "MAX")
};

UENUM(BlueprintType)
enum class ESimpleControllerWheelFFDirection : uint8
{
	Left		UMETA(DisplayName = "Left"),
	Right		UMETA(DisplayName = "Right")
};


UENUM(BlueprintType)
enum class ESimpleControllerAxisCorrection : uint8
{
	Negative	UMETA(DisplayName = "Negative"),
	Positive	UMETA(DisplayName = "Positive")
};

UENUM(BlueprintType)
enum class ESimpleControllerMouseTriggerButton : uint8
{
	LeftMouseButton		UMETA(DisplayName = "LeftMouseButton"),
	RightMouseButton	UMETA(DisplayName = "RightMouseButton"),
	MiddleMouseButton	UMETA(DisplayName = "MiddleMouseButton"),
	ThumbMouseButton	UMETA(DisplayName = "ThumbMouseButton"),
	ThumbMouseButton2	UMETA(DisplayName = "ThumbMouseButton2")
};

UENUM(BlueprintType)
enum class ESimpleControllerMouseTriggerType : uint8
{
	Down		UMETA(DisplayName = "Down"),
	Up			UMETA(DisplayName = "Up"),
	DoubleClick	UMETA(DisplayName = "DoubleClick")
};

UENUM(BlueprintType)
enum class ESimpleControllerKeyboardTriggerType : uint8
{
	Down		UMETA(DisplayName = "Down"),
	Up			UMETA(DisplayName = "Up")
};

//copy from SDL_gamecontroller.h
typedef enum
{
	SimpleControllerPlugin_CONTROLLER_BUTTON_INVALID = -1,
	SimpleControllerPlugin_CONTROLLER_BUTTON_A,
	SimpleControllerPlugin_CONTROLLER_BUTTON_B,
	SimpleControllerPlugin_CONTROLLER_BUTTON_X,
	SimpleControllerPlugin_CONTROLLER_BUTTON_Y,
	SimpleControllerPlugin_CONTROLLER_BUTTON_BACK,
	SimpleControllerPlugin_CONTROLLER_BUTTON_GUIDE,
	SimpleControllerPlugin_CONTROLLER_BUTTON_START,
	SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSTICK,
	SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSTICK,
	SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSHOULDER,
	SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSHOULDER,
	SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_UP,
	SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_DOWN,
	SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_LEFT,
	SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_RIGHT,
	SimpleControllerPlugin_CONTROLLER_BUTTON_MISC1,    /* Xbox Series X share button, PS5 microphone button, Nintendo Switch Pro capture button, Amazon Luna microphone button */
	SimpleControllerPlugin_CONTROLLER_BUTTON_PADDLE1,  /* Xbox Elite paddle P1 (upper left, facing the back) */
	SimpleControllerPlugin_CONTROLLER_BUTTON_PADDLE2,  /* Xbox Elite paddle P3 (upper right, facing the back) */
	SimpleControllerPlugin_CONTROLLER_BUTTON_PADDLE3,  /* Xbox Elite paddle P2 (lower left, facing the back) */
	SimpleControllerPlugin_CONTROLLER_BUTTON_PADDLE4,  /* Xbox Elite paddle P4 (lower right, facing the back) */
	SimpleControllerPlugin_CONTROLLER_BUTTON_TOUCHPAD, /* PS4/PS5 touchpad button */
	SimpleControllerPlugin_CONTROLLER_BUTTON_MAX
} SimpleControllerPlugin_GameControllerButton;

//copy from SDL_gamecontroller.h
typedef enum
{
	SimpleControllerPlugin_CONTROLLER_AXIS_INVALID = -1,
	SimpleControllerPlugin_CONTROLLER_AXIS_LEFTX,
	SimpleControllerPlugin_CONTROLLER_AXIS_LEFTY,
	SimpleControllerPlugin_CONTROLLER_AXIS_RIGHTX,
	SimpleControllerPlugin_CONTROLLER_AXIS_RIGHTY,
	SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERLEFT,
	SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERRIGHT,
	SimpleControllerPlugin_CONTROLLER_AXIS_MAX
} SimpleControllerPlugin_GameControllerAxis;


USTRUCT(BlueprintType, Category = Basic)
struct FSimpleControllerMappingButtonAction
{
public:
	GENERATED_USTRUCT_BODY()

	//FSimpleControllerMappingButtonAction() {
	//	if (structID.ToString().Equals("00000000000000000000000000000000")) {
	//		structID = FGuid::NewGuid();
	//	}
	//}

	FString actionName;

	UPROPERTY(EditDefaultsOnly, Category = "SimpleControllerPlugin")
		FString description;

	/*This is for sorting/categorizing. You can find this action with the function "getMappingActionsByTag". */
	UPROPERTY(EditDefaultsOnly, Category = "SimpleControllerPlugin")
	FString tag;

	/** If empty Please enter a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored. */
	UPROPERTY()
	bool bStructID = false;

	FGuid structID;

	int32 connectionIndex = -1;
	int32 buttonID = -1;

	FString buttonName;
	FString deviceName;
	FString controllerName;

	int32 vendorID = -1;
	int32 productID = -1;
	//bool bindToDevice = false;

	TArray<USimpleControllerMappedButtonAsyncEvent*> buttonEvents;
};

USTRUCT(BlueprintType, Category = Basic)
struct FSimpleControllerMappingAxisAction
{
	GENERATED_USTRUCT_BODY()

	//FSimpleControllerMappingAxisAction() {
	//	if (structID.ToString().Equals("00000000000000000000000000000000")) {
	//		structID = FGuid::NewGuid();
	//	}
	//}

	FString actionName;

	UPROPERTY(EditDefaultsOnly, Category = "SimpleControllerPlugin")
		FString description;

	/*This is for sorting/categorizing. You can find this action with the function "getMappingActionsByTag". */
	UPROPERTY(EditDefaultsOnly, Category = "SimpleControllerPlugin")
		FString tag;

	UPROPERTY(EditDefaultsOnly, Category = "SimpleControllerPlugin")
		bool invertAxis = false;

	/** If empty Please enter a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored. */
	UPROPERTY()
	bool bStructID = false;

	FGuid structID;

	int32 connectionIndex = -1;
	int32 axisID = -1;

	FString deviceName;
	FString controllerName;
	int32 vendorID = -1;
	int32 productID = -1;
	float persistentAxisValue = 0;
	//bool bindToDevice = false;

	//Only for loading and saving
	bool calibrationNegative = false;
	bool calibrationPositive = false;

	ESimpleControllerEventType triggerEventIf = ESimpleControllerEventType::OnChange;
	TArray<USimpleControllerMappingAxisEvents*> axisEvents;
};

USTRUCT(BlueprintType, Category = Basic)
struct FSimpleControllerMappingProfile
{
public:

	GENERATED_USTRUCT_BODY()


	//FSimpleControllerMappingProfile() {
	//	if (structID.ToString().Equals("00000000000000000000000000000000")) {
	//		structID = FGuid::NewGuid();
	//		//UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin: Found a mapping profile that has no StructID. Please fill this variable with a unique value otherwise it can lead to misbehavior when changing the values in the profile."));
	//	}
	//}


	/** If empty {00000000-0000-0000-0000-000000000000} Please create a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored. */
	UPROPERTY(EditDefaultsOnly, Category = "SimpleControllerPlugin")
	FGuid structID;


	UPROPERTY(EditDefaultsOnly, Category = "SimpleControllerPlugin")
		TMap<FString, FSimpleControllerMappingButtonAction> buttonActions;

	UPROPERTY(EditDefaultsOnly, Category = "SimpleControllerPlugin")
		TMap<FString, FSimpleControllerMappingAxisAction> axisActions;



	TMap<FString, FSimpleControllerMappingButtonAction*> buttonActionsInstances;
	TMap<FString, FSimpleControllerMappingAxisAction*> axisActionsInstances;
};

struct FSimpleControllerTouchEvent
{
	int32 finger = 0;
	float x = 0;
	float y = 0;
	float pressure = 0;
};


USTRUCT(BlueprintType)
struct FSimpleControllerDevice
{
	GENERATED_USTRUCT_BODY()

		SDL_Joystick* sdlJoystick = nullptr;
	SDL_GameController* sdlGameController = nullptr;
	SDL_Haptic* sdlHaptic = nullptr;


	/*Unique device identifier for application session, starting at 0 for the first device attached and
	incrementing by 1 for each additional device. If a device is removed and subsequently reattached
	during the same application session, it will have a new deviceID.*/
	int32 deviceIndex = -1;

	/**
	* Returns the connection order based on the deviceIndex.
	* The first controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.
	*/
	int32 connectionIndex = -1;

	FString deviceID = FString();


	// Human-readable device name
	FString deviceName = FString();
	FString controllerName = FString();

	// USB vendor/product IDs as returned by the driver. Can be used to determine the particular model of device represented.
	int32 vendorID = -1;
	int32 productID = -1;

	int32 firmwareVersion = -1;

	// Number of axis elements belonging to the device
	int32 numAxes = -1;

	// Number of button elements belonging to the device
	int32 numButtons = -1;

	int32 numDirectionalPadAxes = -1;
	int32 numBalls = -1;
	int32 numHats = -1;
	int32 numTouchpads = -1;

	int32 lastDpadValue = 0;

	TMap <int32, int32> deadZoneMaxPositive;
	TMap <int32, int32> deadZoneMaxNegative;
	TMap <int32, int32> deadZoneMinPositive;
	TMap <int32, int32> deadZoneMinNegative;

	//Some axes (triggers on the controller, pedals on the steering wheel) do not return 0 as default values. These are stored here
	TMap <int32, bool> isNegativeAxis;
	TMap <int32, bool> isPositiveAxis;

	bool isXinput = false;

	ESimpleControllerType controllerType = ESimpleControllerType::UNKNOWN;

	bool hasHaptic = false;
	bool hasRumble = false;
	bool hasRumbleTriggers = false;
	bool hasAccelerationSensor = false;
	bool hasGyroSensor = false;
	bool hasLED = false;
	bool forceFeedback_CONSTANT = false;
	bool forceFeedback_SINE = false;
	bool forceFeedback_LEFTRIGHT = false;
	bool forceFeedback_TRIANGLE = false;
	bool forceFeedback_SAWTOOTHUP = false;
	bool forceFeedback_SAWTOOTHDOWN = false;
	bool forceFeedback_RAMP = false;
	bool forceFeedback_SPRING = false;
	bool forceFeedback_DAMPER = false;
	bool forceFeedback_INERTIA = false;
	bool forceFeedback_FRICTION = false;
	bool forceFeedback_CUSTOM = false;
	bool forceFeedback_GAIN = false;
	bool forceFeedback_AUTOCENTER = false;
	bool forceFeedback_STATUS = false;
	bool forceFeedback_PAUSE = false;
	bool forceFeedback_POLAR = false;
	bool forceFeedback_CARTESIAN = false;
	bool forceFeedback_SPHERICAL = false;
	bool forceFeedback_INFINITY = false;
	int32 maxSimultaneouslyEffects = 0;
	int32 maxStoreEffects = 0;
	int32 hapticAxes = 0;
	int32 effectID = -1;

	bool wheelMovedByForce = false;

	
	TArray<bool> lastButtonJoystickStates;
	TArray<bool> lastButtonControllerStates;

	TArray<int16> lastAxisJoystickStates;
	TArray<int16> lastAxisControllerStates;

	TArray<uint8> lastHatJoystickStates;
	TArray<TArray<int>> lastBallJoystickStates;
	TArray<TArray<FSimpleControllerTouchEvent*>> lastTouchStates;

	int lastDPadState = 0;

	float lastAccelData = 0;
	float lastGyroData = 0;
};


UENUM(BlueprintType)
enum class ESimpleControllerSensorType : uint8
{
	ACCELATOR,
	GYRO
};

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectType : uint8
{
	CONSTANT,
	LEFTRIGHT
};

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectPeriodicType : uint8
{
	SINE,
	TRIANGLE,
	SAWTOOTHUP,
	SAWTOOTHDOWN
};

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackEffectConditionType : uint8
{
	SPRING,
	DAMPER,
	INERTIA,
	FRICTION
};

UENUM(BlueprintType)
enum class ESimpleControllerForceFeedbackDirectionType : uint8
{
	CARTESIAN,
	POLAR,
	SPHERICAL
};


USTRUCT(BlueprintType)
struct FSimpleControllerForceFeedbackEffect
{
	GENERATED_USTRUCT_BODY()

		SDL_Haptic* sdlHaptic = nullptr;
	SDL_HapticEffect* effect = nullptr;
	int32 effectID = -1;
	bool successful = false;
};





UENUM(BlueprintType)
enum class ESimpleControllerDirectionalPad : uint8
{
	CENTERED,
	UP,
	RIGHT,
	DOWN,
	LEFT,
	RIGHTUP,
	RIGHTDOWN,
	LEFTUP,
	LEFTDOWN,
};

UENUM(BlueprintType)
enum class ESimpleControllerButtons : uint8
{
	Button_0,
	Button_1,
	Button_2,
	Button_3,
	Button_4,
	Button_5,
	Button_6,
	Button_7,
	Button_8,
	Button_9,
	Button_10,
	Button_11,
	Button_12,
	Button_13,
	Button_14,
	Button_15,
	Button_16,
	Button_17,
	Button_18,
	Button_19,
	Button_20
};

UENUM(BlueprintType)
enum class SCDualSenseTriggerEffectStartZone : uint8
{
	Value_0		UMETA(DisplayName = "0"),
	Value_1		UMETA(DisplayName = "1"),
	Value_2		UMETA(DisplayName = "2"),
	Value_3		UMETA(DisplayName = "3"),
	Value_4		UMETA(DisplayName = "4"),
	Value_5		UMETA(DisplayName = "5"),
	Value_6		UMETA(DisplayName = "6"),
	Value_7		UMETA(DisplayName = "7"),
	Value_8		UMETA(DisplayName = "8"),
	Value_9		UMETA(DisplayName = "9")
};


UENUM(BlueprintType)
enum class SCDualSenseTriggerEffectStartPosition: uint8
{
	Value_2		UMETA(DisplayName = "2"),
	Value_3		UMETA(DisplayName = "3"),
	Value_4		UMETA(DisplayName = "4"),
	Value_5		UMETA(DisplayName = "5"),
	Value_6		UMETA(DisplayName = "6"),
	Value_7		UMETA(DisplayName = "7")
};

UENUM(BlueprintType)
enum class SCDualSenseTriggerEffectEndPosition : uint8
{
	Value_3		UMETA(DisplayName = "3"),
	Value_4		UMETA(DisplayName = "4"),
	Value_5		UMETA(DisplayName = "5"),
	Value_6		UMETA(DisplayName = "6"),
	Value_7		UMETA(DisplayName = "7"),
	Value_8		UMETA(DisplayName = "8")
};

UENUM(BlueprintType)
enum class SCDualSenseTriggerEffectStrength : uint8
{
	Value_1		UMETA(DisplayName = "1"),
	Value_2		UMETA(DisplayName = "2"),
	Value_3		UMETA(DisplayName = "3"),
	Value_4		UMETA(DisplayName = "4"),
	Value_5		UMETA(DisplayName = "5"),
	Value_6		UMETA(DisplayName = "6"),
	Value_7		UMETA(DisplayName = "7"),
	Value_8		UMETA(DisplayName = "8")
};


UENUM(BlueprintType)
enum class SCDualSenseTriggerEffectStrengthMulti : uint8
{
	Value_0		UMETA(DisplayName = "0"),
	Value_1		UMETA(DisplayName = "1"),
	Value_2		UMETA(DisplayName = "2"),
	Value_3		UMETA(DisplayName = "3"),
	Value_4		UMETA(DisplayName = "4"),
	Value_5		UMETA(DisplayName = "5"),
	Value_6		UMETA(DisplayName = "6"),
	Value_7		UMETA(DisplayName = "7"),
	Value_8		UMETA(DisplayName = "8")
};


struct SCDualSenseCommands {

	uint8 ucEnableBits1;                /* 0 */
	uint8 ucEnableBits2;                /* 1 */
	uint8 ucRumbleRight;                /* 2 */
	uint8 ucRumbleLeft;                 /* 3 */
	uint8 ucHeadphoneVolume;            /* 4 */
	uint8 ucSpeakerVolume;              /* 5 */
	uint8 ucMicrophoneVolume;           /* 6 */
	uint8 ucAudioEnableBits;            /* 7 */
	uint8 ucMicLightMode;               /* 8 */
	uint8 ucAudioMuteBits;              /* 9 */
	uint8 rgucRightTriggerEffect[11];   /* 10 */
	uint8 rgucLeftTriggerEffect[11];    /* 21 */
	uint8 rgucUnknown1[6];              /* 32 */
	uint8 ucLedFlags;                   /* 38 */
	uint8 rgucUnknown2[2];              /* 39 */
	uint8 ucLedAnim;                    /* 41 */
	uint8 ucLedBrightness;              /* 42 */
	uint8 ucPadLights;                  /* 43 */
	uint8 ucLedRed;                     /* 44 */
	uint8 ucLedGreen;                   /* 45 */
	uint8 ucLedBlue;                    /* 46 */
};

struct SCDualSenseTriggerEffectTypes{

	static uint8 Off;
	static uint8 Feedback;
	static uint8 Weapon;
	static uint8 Vibration;
};



UCLASS(config = SimpleController, defaultconfig, meta = (DisplayName = "Simple Controller Plugin"))
class SIMPLECONTROLLER_API USimpleControllerPluginSettings : public UDeveloperSettings {
	GENERATED_BODY()

public:

	/**
	* True runs the SDL events in a separate thread. This allows events to run independently of the tick rate, but it is necessary to constantly switch to the game thread. Do not activate it on linux.  */
	UPROPERTY(config, EditAnywhere, Category = "System. Changes take effect after editor restart")
	bool SDL_EVENTS_THREAD = false;

	/**
	*  IOS only. Creates a Player Controller Object Reference for cheach additional Controller*/
	UPROPERTY(config, EditAnywhere, Category = "Mobile")
	bool CREATE_PLAYER_CONTROLLER = true;

	/**
	*  After connecting a Froce Feedback steering wheel, move it briefly with different settings to determine which settings FF works with. */
	UPROPERTY(config, EditAnywhere, Category = "Wheel")
	bool WHEEL_FF_TEST = true;

	/**
	* A variable that lets you disable the detection and use of Xinput gamepad devices*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool XINPUT_ENABLED = true;

	/**
	* A variable that lets you disable the detection and use of DirectInput gamepad devices*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool DIRECTINPUT_ENABLED = true;


	/*A variable controlling whether the HIDAPI joystick drivers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI = true;

	/**
	* A variable controlling whether the RAWINPUT joystick drivers should be used for better handling XInput-capable devices.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_RAWINPUT = true;

	/**
	*A variable controlling whether Windows.Gaming.Input should be used for controller handling.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_WGI  = true;
		
	/*A variable controlling whether the HIDAPI driver for Nintendo GameCube controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_GAMECUBE = true;

	/*A variable controlling whether "low_frequency_rumble" and "high_frequency_rumble" is used to implement*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_GAMECUBE_RUMBLE_BRAKE = true;

	/*A variable controlling whether the HIDAPI driver for Nintendo Switch Joy-Cons should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_JOY_CONS = true;

	/*A variable controlling whether Nintendo Switch Joy-Con controllers will be combined into a single Pro-like controller when using the HIDAPI driver*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_COMBINE_JOY_CONS  = true;

	/*A variable controlling whether Nintendo Switch Joy-Con controllers will be in vertical mode when using the HIDAPI driver*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_VERTICAL_JOY_CONS  = true;

	/*A variable controlling whether the HIDAPI driver for Amazon Luna controllers connected via Bluetooth should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_LUNA  = true;

	/*A variable controlling whether the HIDAPI driver for Nintendo Online classic controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_NINTENDO_CLASSIC  = true;

	/*A variable controlling whether the HIDAPI driver for NVIDIA SHIELD controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_SHIELD  = true;

	/*A variable controlling whether the HIDAPI driver for PS3 controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_PS3  = true;

	/*A variable controlling whether the HIDAPI driver for PS4 controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_PS4 = true;

	/**
	*  A variable controlling whether extended input reports should be used for PS4 controllers when using the HIDAPI driver.
	*
	*  This variable can be set to the following values:
	*    false       - extended reports are not enabled (the default)
	*    true       - extended reports
	*
	*  Extended input reports allow rumble on Bluetooth PS4 controllers, but
	*  break DirectInput handling for applications that don't use SDL.
	*
	*  Once extended reports are enabled, they can not be disabled without
	*  power cycling the controller.
	*
	*  For compatibility with applications written for versions of SDL prior
	*  to the introduction of PS5 controller support, this value will also
	*  control the state of extended reports on PS5 controllers when the
	*  SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE hint is not explicitly set.
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_PS4_RUMBLE = true;

	/**
	*  A variable controlling whether extended input reports should be used for PS5 controllers when using the HIDAPI driver.
	*
	*  This variable can be set to the following values:
	*    false       - extended reports are not enabled (the default)
	*    true       - extended reports
	*
	*  Extended input reports allow rumble on Bluetooth PS5 controllers, but
	*  break DirectInput handling for applications that don't use SDL.
	*
	*  Once extended reports are enabled, they can not be disabled without
	*  power cycling the controller.
	*
	*  For compatibility with applications written for versions of SDL prior
	*  to the introduction of PS5 controller support, this value defaults to
	*  the value of SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE.
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_PS5_RUMBLE = true;

	/*A variable controlling whether the HIDAPI driver for PS5 controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_PS5  = true;

	/* A variable controlling whether the player LEDs should be lit to indicate which player is associated with a PS5 controller.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_PS5_PLAYER_LED  = true;

	/* A variable controlling whether the HIDAPI driver for Google Stadia controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_STADIA  = true;

	/**
	*  A variable controlling whether the HIDAPI driver for Bluetooth Steam Controllers should be used.
	*
	*  This variable can be set to the following values:
	*    false       - HIDAPI driver is not used
	*    true       - HIDAPI driver is used for Steam Controllers, which requires Bluetooth access
	*                and may prompt the user for permission on iOS and Android.
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_STEAM  = false;

	/* A variable controlling whether the HIDAPI driver for Nintendo Switch controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_SWITCH = true;

	/**
	*  A variable controlling whether the Home button LED should be turned on when a Nintendo Switch Pro controller is opened
	*
	*  This variable can be set to the following values:
	*    false       - home button LED is turned off
	*    true       - home button LED is turned on
	*
	*  By default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED.
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_SWITCH_HOME_LED = false;

	/**
	*  A variable controlling whether the Home button LED should be turned on when a Nintendo Switch Joy-Con controller is opened
	*
	*  This variable can be set to the following values:
	*    false      - home button LED is turned off
	*    true       - home button LED is turned on
	*
	*  By default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED.
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_JOYCON_HOME_LED = false;

	/**
	*  A variable controlling whether the player LEDs should be lit to indicate which player is associated with a Nintendo Switch controller.
	*
	*  This variable can be set to the following values:
	*    false       - player LEDs are not enabled
	*    true     - player LEDs are enabled (the default)
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_SWITCH_PLAYER_LED = true;

	/**
	*  A variable controlling whether the HIDAPI driver for Nintendo Wii and Wii U controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_WII = false;

	/**
	*  A variable controlling whether the player LEDs should be lit to indicate which player is associated with a Wii controller.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_WII_PLAYER_LED = true;

	/**
	* A variable controlling whether the HIDAPI driver for XBox controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_XBOX = false;

	/**
	*  A variable controlling whether the HIDAPI driver for XBox 360 controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_XBOX_360 = false;

	/**
	*  A variable controlling whether the player LEDs should be lit to indicate which player is associated with an Xbox 360 controller.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED = true;

	/**
	*  A variable controlling whether the HIDAPI driver for XBox 360 wireless controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_XBOX_360_WIRELESS = false;

	/**
	*  A variable controlling whether the HIDAPI driver for XBox One controllers should be used.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_XBOX_ONE = false;

	/**
	*  A variable controlling whether the Home button LED should be turned on when an Xbox One controller is opened
	*
	*  This variable can be set to the following values:
	*    false       - home button LED is turned off
	*    true       - home button LED is turned on
	*
	*  By default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED. The default brightness is 0.4.
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED = false;

	/**
	* A variable controlling whether the RAWINPUT driver should pull correlated data from XInput.
	*
	*  This variable can be set to the following values:
	*    false      - RAWINPUT driver will only use data from raw input APIs
	*    true       - RAWINPUT driver will also pull data from XInput, providing
	*                better trigger axes, guide button presses, and rumble support
	*                for Xbox controllers
	*
	*  The default is true.  This hint applies to any joysticks opened after setting the hint.
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_RAWINPUT_CORRELATE_XINPUT = true;

	/**
	*A variable controlling whether the ROG Chakram mice should show up as joysticks*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_ROG_CHAKRAM  = true;

	/**
	* A variable controlling whether a separate thread should be used
	*          for handling joystick detection and raw input messages on Windows*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_THREAD  = true;

	

	/**
	* A variable controlling whether joysticks on Linux will always treat 'hat' axis inputs (ABS_HAT0X - ABS_HAT3Y) as 8-way digital hats without checking whether they may be analog.
	*
	*  This variable can be set to the following values:
	*    false       - Only map hat axis inputs to digital hat outputs if the input axes appear to actually be digital (the default)
	*    true       - Always handle the input axes numbered ABS_HAT0X to ABS_HAT3Y as digital hats
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool LINUX_DIGITAL_HATS  = false;

	/**
	* A variable controlling whether digital hats on Linux will apply deadzones to their underlying input axes or use unfiltered values.
	*
	*  This variable can be set to the following values:
	*    false       - Return digital hat values based on unfiltered input axis values
	*    true       - Return digital hat values with deadzones on the input axes taken into account (the default)
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool LINUX_HAT_DEADZONES = true;

	/**
	*  A variable controlling whether to use the classic /dev/input/js* joystick interface or the newer /dev/input/event* joystick interface on Linux
	*
	*  This variable can be set to the following values:
	*    false       - Use /dev/input/event*
	*    true       - Use /dev/input/js*
	*
	*  By default the /dev/input/event* interfaces are used
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool LINUX_JOYSTICK_CLASSIC  = false;

	/**
	* A variable controlling whether joysticks on Linux adhere to their HID-defined deadzones or return unfiltered values.*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool LINUX_JOYSTICK_DEADZONES  = true;


	/**
	*A variable that lets you enable joystick (and gamecontroller) events even when your app is in the background.
	*
	*  The variable can be set to the following values:
	*    false       - Disable joystick & gamecontroller input events when the
	*                application is in the background.
	*    true       - Enable joystick & gamecontroller input events when the
	*                application is in the background.
	*
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool JOYSTICK_ALLOW_BACKGROUND_EVENTS = true;

	/**
	* A variable controlling whether the Android / iOS built-in
	*  accelerometer should be listed as a joystick device.
	*
	*  This variable can be set to the following values:
	*    false       - The accelerometer is not listed as a joystick
	*    true       - The accelerometer is available as a 3 axis joystick.
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool ACCELEROMETER_AS_JOYSTICK = false;


	/**
	* A variable that causes SDL to use the old axis and button mapping for XInput devices.
	*
	*  This hint is for backwards compatibility only and will be removed in SDL 2.1
	*/
	UPROPERTY(config, EditAnywhere, Category = "SDL Setting. Changes take effect after editor restart")
	bool XINPUT_USE_OLD_JOYSTICK_MAPPING = false;
};



class FSimpleControllerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static bool moduleIsRun;

private:
	void copyDLL(FString source, FString target, FString dllName);
};


#ifndef __SimpleControllerGamepadEvents
#define __SimpleControllerGamepadEvents
#include "SimpleControllerGamepadEvents.h"
#endif

#ifndef __SimpleControllerWheel
#define __SimpleControllerWheel
#include "SimpleControllerWheel.h"
#endif

#ifndef __SimpleControllerUI
#define __SimpleControllerUI
#include "SimpleControllerUI.h"
#endif

#ifndef __SimpleControllerMobile
#define __SimpleControllerMobile
#include "SimpleControllerMobile.h"
#endif

#ifndef __SimpleControllerPersistentEventsThread
#define __SimpleControllerPersistentEventsThread
#include "SimpleControllerPersistentEventsThread.h"
#endif

#ifndef __SimpleControllerSDLEventsThread
#define __SimpleControllerSDLEventsThread
#include "SimpleControllerSDLEventsThread.h"
#endif

#ifndef __SimpleControllerAsyncEvents
#define __SimpleControllerAsyncEvents
#include "SimpleControllerAsyncEvents.h"
#endif

#ifndef __SimpleControllerMapping
#define __SimpleControllerMapping
#include "SimpleControllerMapping.h"
#endif

#ifndef __SimpleControllerBPLibrary
#define __SimpleControllerBPLibrary
#include "SimpleControllerBPLibrary.h"
#endif

