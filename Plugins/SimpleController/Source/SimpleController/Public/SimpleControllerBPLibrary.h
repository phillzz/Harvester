// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "SimpleController.h"


#ifndef __SimpleControllerMapping
#define __SimpleControllerMapping
#include "SimpleControllerMapping.h"
#endif

#ifndef __SimpleControllerAsyncEvents
#define __SimpleControllerAsyncEvents
#include "SimpleControllerAsyncEvents.h"
#endif

#include "SimpleControllerBPLibrary.generated.h"



UCLASS()
class SIMPLECONTROLLER_API USimpleControllerBPLibrary : public UBlueprintFunctionLibrary, public FTickableGameObject
{
	GENERATED_UCLASS_BODY()

public:

	void beginPlay(UGameInstance* gameInstance);
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;

	static USimpleControllerBPLibrary* controllerTarget;
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin")
		static USimpleControllerBPLibrary* getSimpleControllerTarget();


	//UGameInstance* gameInstance = nullptr;
	/*UWorld* getWorldSimpleController(); */

	////test only
/*
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		int32 testController(FSimpleControllerDevice device, int32 number) {
			return SDL_GameControllerGetPlayerIndex(device.sdlGameController);
	};
*/

	//Delegates
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FbuttonDownEventDelegate, FString, deviceID, int32, buttonID, int32, deviceIndex, FSimpleControllerDevice, device, int32, connectionIndex);
	UFUNCTION()
		void buttonDownEventDelegate(const FString deviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device,const int32 connectionIndex);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|ButtonDown")
		FbuttonDownEventDelegate onButtonDownEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FbuttonUpEventDelegate, FString, deviceID, int32, buttonID, int32, deviceIndex, FSimpleControllerDevice, device, int32, connectionIndex);
	UFUNCTION()
		void buttonUpEventDelegate(const FString deviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device, const int32 connectionIndex);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|ButtonUp")
		FbuttonUpEventDelegate onButtonUpEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FdirectionalPadEventDelegate, FString, deviceID, int32, directionalPadValue, int32, directionalPadIndex, int32, deviceIndex,  FSimpleControllerDevice, device, int32, connectionIndex);
	UFUNCTION()
		void directionalPadEventDelegate(const FString deviceID, const int32 directionalPadValue, int32 directionalPadIndex, const int32 deviceIndex, const FSimpleControllerDevice device, const int32 connectionIndex);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|DirectionalPad")
		FdirectionalPadEventDelegate onDirectionalPadEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FballMovedEventDelegate, FString, deviceID, int32, ballID, float, xRel, int32, yRel, FSimpleControllerDevice, device);
	UFUNCTION()
		void ballMovedEventDelegate(const FString deviceID, const int32 ballID, const int32 xRel, const int32 yRel, const FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|ballMoved")
		FballMovedEventDelegate onBallMovedEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FaxisMovedEventDelegate, FString, deviceID, int32, axisID, float, axisValue, int32, deviceIndex, FSimpleControllerDevice, device, int32, connectionIndex);
	UFUNCTION()
		void axisMovedEventDelegate(const FString deviceID, const int32 axisID, const float axisValue, const int32 deviceIndex, const FSimpleControllerDevice device, const int32 connectionIndex);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|AxisMoved")
		FaxisMovedEventDelegate onaxisMovedEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FdeviceAttachedEventDelegate, FSimpleControllerDevice, device, int32, connectionIndex);
	UFUNCTION()
		void deviceAttachedEventDelegate(const FSimpleControllerDevice device, const int32 connectionIndex);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|DeviceAttached")
		FdeviceAttachedEventDelegate ondeviceAttachedEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FdeviceDetachedEventDelegate, FSimpleControllerDevice, device, int32, connectionIndex);
	UFUNCTION()
		void deviceDetachedEventDelegate(const FSimpleControllerDevice device, const int32 connectionIndex);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|DeviceDetached")
		FdeviceDetachedEventDelegate ondeviceDetachedEventDelegate;


	DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FaccelerationSensorEventDelegate, FString, deviceID, float, valueA, float, valueB, float, valueC, int32, deviceIndex, FSimpleControllerDevice, device);
	UFUNCTION()
		void accelerationSensorEventDelegate(const FString deviceID, const float valueA, const float valueB, const float valueC, const int32 deviceIndex, const FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|SensorAccerlation")
		FaccelerationSensorEventDelegate onaccelerationSensorEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FgyroSensorEventDelegate, FString, deviceID, float, valueA, float, valueB, float, valueC, int32, deviceIndex, FSimpleControllerDevice, device);
	UFUNCTION()
		void gyroSensorEventDelegate(const FString deviceID, const float valueA, const float valueB, const float valueC, const int32 deviceIndex, const FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|SensorGyro")
		FgyroSensorEventDelegate ongyroSensorEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FtouchpadMotionEventDelegate, FString, deviceID, int32, touchpadIndex, int32, finger, float, x, float, y, float, pressure, int32, deviceIndex, FSimpleControllerDevice, device);
	UFUNCTION()
		void touchpadMotionEventDelegate(const FString deviceID, const int32 touchpadIndex, const int32 finger, const float x, const float y, const float pressure, const int32 deviceIndex, const FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|TouchpadMotion")
		FtouchpadMotionEventDelegate ontouchpadMotionEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FtouchpadDownEventDelegate, FString, deviceID, int32, touchpadIndex, int32, finger, float, x, float, y, float, pressure, int32, deviceIndex, FSimpleControllerDevice, device);
	UFUNCTION()
		void touchpadDownEventDelegate(const FString deviceID, const int32 touchpadIndex, const int32 finger, const float x, const float y, const float pressure, const int32 deviceIndex, const FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|TouchpadDown")
		FtouchpadDownEventDelegate ontouchpadDownEventDelegate;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FtouchpadUpEventDelegate, FString, deviceID, int32, touchpadIndex, int32, finger, float, x, float, y, float, pressure, int32, deviceIndex, FSimpleControllerDevice, device);
	UFUNCTION()
		void touchpadUpEventDelegate(const FString deviceID, const int32 touchpadIndex, const int32 finger, const float x, const float y, const float pressure, const int32 deviceIndex, const FSimpleControllerDevice device);
	UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|TouchpadUp")
		FtouchpadUpEventDelegate ontouchpadUpEventDelegate;

	////UI
	//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FselectedWidgetEventDelegate, UWidget*, mainWidget, UWidget*, selectedWidget, int32, connectionIndex);
	//UFUNCTION()
	//void selectedWidgetEventDelegate(const UWidget* mainWidget, const UWidget* selectedWidget, const int32 connectionIndex);
	//UPROPERTY(BlueprintAssignable, Category = "SimpleControllerPlugin|Events|UI")
	//FselectedWidgetEventDelegate onSelectedWidgetEventDelegate;

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin", Meta = (ExpandEnumAsExecs = "direction"))
		static void directinalPadValueToDirection(int32 directionalPadValue, ESimpleControllerDirectionalPad& direction);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin", Meta = (ExpandEnumAsExecs = "buttons"))
		static void buttonIDToButton(int32 buttonID, ESimpleControllerButtons& buttons);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mouse")
		static void fireMouseButtonEvent(ESimpleControllerMouseTriggerButton button, ESimpleControllerMouseTriggerType type);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mouse")
		static void setMousePosition(int32 x, int32 y);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mouse")
		static void getMousePosition(int32& x, int32& y);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mouse")
		static void addMousePosition(int32 x, int32 y);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Keyboard")
		static void fireKeyboardButtonEvent(int32 keycode, ESimpleControllerKeyboardTriggerType type, int32 userIndex = 0);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void removeAxisCorrection(FSimpleControllerDevice device, int32 axisID, ESimpleControllerAxisCorrection type);

	/**
	* If the axis 1 returns a value between -1 and 1 but you want to have a value between 0 and 1 then set the axisID to 1 and the type to negative. 
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void addAxisCorrection(FSimpleControllerDevice device, int32 axisID, ESimpleControllerAxisCorrection type);

	/**
	* Read the current Axis value. IMPORTANT! Some devices only return a value after they have been used once (button pressed, axis moved) and otherwise return 0 as a value. 
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void getAxisValues(FSimpleControllerDevice device, TMap<int32, float>& axisValues);
	void getAxisValuesNonStatic(FSimpleControllerDevice device, TMap<int32, float>& axisValues);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static float getAxisValueBySDL(FSimpleControllerDevice device, int32 axisID);
		float getAxisValueBySDLNonStatic(FSimpleControllerDevice device, int32 axisID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static ESimpleControllerButtonStatus getButtonValueBySDL(FSimpleControllerDevice device, int32 buttonID);
		ESimpleControllerButtonStatus getButtonValueBySDLNonStatic(FSimpleControllerDevice device, int32 buttonID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static int32 getHatValueBySDL(FSimpleControllerDevice device, int32 directionalPadIndex);
		int32 getHatValueBySDLNonStatic(FSimpleControllerDevice device, int32 directionalPadIndex);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void getBallValueBySDL(FSimpleControllerDevice device, int32 ballIndex, int32& xRel, int32& yRel);
		void getBallValueBySDLNonStatic(FSimpleControllerDevice device, int32 ballIndex, int32& xRel, int32& yRel);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static TArray<FSimpleControllerDevice> getConnectedControllers();

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static FSimpleControllerDevice findControllerByDeviceIndex(int32 deviceIndex, bool& found);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static FSimpleControllerDevice findControllerByDeviceID(FString deviceID, bool& found);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin", meta =(KeyWords="find device"))
		static FSimpleControllerDevice findControllerByConnectionIndex(int32 connectionIndex, bool& found);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin")
		static void findDeviceIndexByConnectionIndex(int32 connectionIndex, bool& found, int32& deviceIndex);


	/**
	* This redirects the Unreal keyboard and mouse events to the ControllerButtonAsyncEvent. To undo this, the parameters must be set to False and the editor must be restarted. 
	* @param keyboardButtons Keyboard inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus. 
	* @param mousedButtons Mouse inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus. 
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin", meta = (WorldContext = "WorldContextObject"))
	static void setUnrealKeyboardAndMouseEvents(UObject* WorldContextObject, bool keyboardButtons = false, bool mousedButtons = false);

	/**
	* This allows you to set the deadzone. The value 0 resets the setting. 
	* @param deadZoneMaxPositive 0 - 1 All values above this are ignored.
	* @param deadZoneMinPositive 0 - 1 All values below this are ignored.
	* @param deadZoneMaxNegative -1 - 0 All values below this are ignored.
	* @param deadZoneMaxNegative -1 - 0 All values above this are ignored.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
	static FSimpleControllerDevice setDeadZone(FSimpleControllerDevice device, int32 axisID, float deadZoneMaxPositive = 0.9, float deadZoneMaxNegative = -0.9,
		float deadZoneMinPositive = 0.1, float deadZoneMinNegative = -0.1);



	/**
	* Some devices like the PS5 Gamepad Dualsense have an LED. With this function you can change the color.
	* @param color RGB
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void setLEDColor(bool& successful, FString& errorMessage, FSimpleControllerDevice device, FColor color);

	/**
	* Some devices like the PS5 Gamepad Dualsense have acceleration or gyro sensors. This function allows you to activate and deactivate them. What is gyro and what is acceleration was taken over from SDL. I think the designation is the wrong way round. 
	* @param color RGB
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void setSensor(FSimpleControllerDevice device, ESimpleControllerSensorType type, bool enable);


	/**
	* This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.
	* @param strengthSmallMotor Values in percent between 0 and 1
	* @param strengthLargeMotor Values in percent between 0 and 1
	* @param lengthInMilliseconds duration of the effect in milliseconds
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
	static void rumbleByConnectionIndex(bool& successful, FString& errorMessage, int32 connectionIndex, float strengthSmallMotor = 0.5f, float strengthLargeMotor = 0.5f, int32 lengthInMilliseconds = 2000);


	/**
	* This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.
	* @param strengthSmallMotor Values in percent between 0 and 1
	* @param strengthLargeMotor Values in percent between 0 and 1
	* @param lengthInMilliseconds duration of the effect in milliseconds
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void rumble(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthSmallMotor = 0.5f, float strengthLargeMotor = 0.5f, int32 lengthInMilliseconds = 2000);

	/**
	* Gamepads like the Xbox One gamepad have motors in the L1 and R1 triggers. With this function you can vibrate the motors.
	* @param strengthLeft Values in percent between 0 and 1
	* @param strengthRight Values in percent between 0 and 1
	* @param lengthInMilliseconds duration of the effect in milliseconds
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void rumbleTrigger(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthLeft, float strengthRight, int32 lengthInMilliseconds);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Commands")
		static void executeCommandOnController(bool& successful, FString& errorMessage, FSimpleControllerDevice device, TArray<uint8> bytes);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin|Commands")
		static TArray<uint8> generateDualSenseTriggerCommandOFF(bool left = true, bool right = true);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin|Commands")
		static TArray<uint8> generateDualSenseTriggerCommandFeedback(SCDualSenseTriggerEffectStartZone startingZone ,
			SCDualSenseTriggerEffectStrength strength = SCDualSenseTriggerEffectStrength::Value_8,
			bool left = true, bool right = true);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin|Commands")
		static TArray<uint8> generateDualSenseTriggerCommandWeapon(
			SCDualSenseTriggerEffectStartPosition startPosition = SCDualSenseTriggerEffectStartPosition::Value_2,
			SCDualSenseTriggerEffectEndPosition endPosition = SCDualSenseTriggerEffectEndPosition::Value_6,
			SCDualSenseTriggerEffectStrength strength = SCDualSenseTriggerEffectStrength::Value_8,
			bool left = true, bool right = true);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin|Commands")
		static TArray<uint8> generateDualSenseTriggerCommandVibration(SCDualSenseTriggerEffectStartZone startingZone, 
			SCDualSenseTriggerEffectStrength strength = SCDualSenseTriggerEffectStrength::Value_8,
			uint8 frequency = 20, bool left = true, bool right = true);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin|Commands")
		static TArray<uint8> generateDualSenseTriggerCommandMultiFeedback(
			SCDualSenseTriggerEffectStrengthMulti strength_0 = SCDualSenseTriggerEffectStrengthMulti::Value_8,
			SCDualSenseTriggerEffectStrengthMulti strength_1 = SCDualSenseTriggerEffectStrengthMulti::Value_7,
			SCDualSenseTriggerEffectStrengthMulti strength_2 = SCDualSenseTriggerEffectStrengthMulti::Value_6,
			SCDualSenseTriggerEffectStrengthMulti strength_3 = SCDualSenseTriggerEffectStrengthMulti::Value_5,
			SCDualSenseTriggerEffectStrengthMulti strength_4 = SCDualSenseTriggerEffectStrengthMulti::Value_4,
			SCDualSenseTriggerEffectStrengthMulti strength_5 = SCDualSenseTriggerEffectStrengthMulti::Value_3,
			SCDualSenseTriggerEffectStrengthMulti strength_6 = SCDualSenseTriggerEffectStrengthMulti::Value_2,
			SCDualSenseTriggerEffectStrengthMulti strength_7 = SCDualSenseTriggerEffectStrengthMulti::Value_1,
			SCDualSenseTriggerEffectStrengthMulti strength_8 = SCDualSenseTriggerEffectStrengthMulti::Value_0,
			SCDualSenseTriggerEffectStrengthMulti strength_9 = SCDualSenseTriggerEffectStrengthMulti::Value_0,
			bool left = true, bool right = true);


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin|Commands")
		static TArray<uint8> generateDualSenseTriggerCommandMultiVibration(
			uint8 frequency = 20,
			SCDualSenseTriggerEffectStrengthMulti strength_0 = SCDualSenseTriggerEffectStrengthMulti::Value_0,
			SCDualSenseTriggerEffectStrengthMulti strength_1 = SCDualSenseTriggerEffectStrengthMulti::Value_0,
			SCDualSenseTriggerEffectStrengthMulti strength_2 = SCDualSenseTriggerEffectStrengthMulti::Value_1,
			SCDualSenseTriggerEffectStrengthMulti strength_3 = SCDualSenseTriggerEffectStrengthMulti::Value_2,
			SCDualSenseTriggerEffectStrengthMulti strength_4 = SCDualSenseTriggerEffectStrengthMulti::Value_3,
			SCDualSenseTriggerEffectStrengthMulti strength_5 = SCDualSenseTriggerEffectStrengthMulti::Value_4,
			SCDualSenseTriggerEffectStrengthMulti strength_6 = SCDualSenseTriggerEffectStrengthMulti::Value_5,
			SCDualSenseTriggerEffectStrengthMulti strength_7 = SCDualSenseTriggerEffectStrengthMulti::Value_6,
			SCDualSenseTriggerEffectStrengthMulti strength_8 = SCDualSenseTriggerEffectStrengthMulti::Value_7,
			SCDualSenseTriggerEffectStrengthMulti strength_9 = SCDualSenseTriggerEffectStrengthMulti::Value_8,
			bool left = true, bool right = true);



	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void disableForceFeedbackOnDevice(FSimpleControllerDevice device);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void enableForceFeedbackOnDevice(FSimpleControllerDevice device);


	/**
	* This creates the SDL Force Feedback SDL_HapticConstant. The direction can also be controlled via the level parameter. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticConstant
	* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.
	* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionZ For CARTESIAN values -1,0,1.
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds
	* @param level strength of the constant effect in percent between -1 and 1
	* @param attackLength duration of the attack in milliseconds
	* @param attackLevel level at the start of the attack in percent between 0 and 1
	* @param fadeLength duration of the fade in milliseconds
	* @param fadeLevel level at the end of the fade in percent between 0 and 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void createForceFeedbackEffectConstant(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
			bool& successful,
			FString& errorMessage,
			FSimpleControllerDevice device,
			ESimpleControllerForceFeedbackDirectionType directionType,
			int32 directionX,
			int32 directionY,
			int32 directionZ,
			int32 length,
			int32 delay,
			float level,
			int32 attackLength,
			float attackLevel,
			int32 fadeLength,
			float fadeLevel);

	void createForceFeedbackEffectConstantNonStatic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
		bool& successful,
		FString& errorMessage,
		FSimpleControllerDevice device,
		ESimpleControllerForceFeedbackDirectionType directionType,
		int32 directionX,
		int32 directionY,
		int32 directionZ,
		int32 length,
		int32 delay,
		float level,
		int32 attackLength,
		float attackLevel,
		int32 fadeLength,
		float fadeLevel);

	/**
	* This creates the SDL Force Feedback SDL_HapticPeriodic. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticPeriodic
	* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.
	* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionZ For CARTESIAN values -1,0,1.
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds
	* @param period period of the wave in milliseconds
	* @param magnitude peak value in percent between 0 and 1
	* @param offset mean value of the wave in milliseconds
	* @param phase positive phase shift given by hundredth of a degree. 0 = No phase displacement. 9000 = Displaced 25% of its period. 18000 = Displaced 50% of its period. 27000 = Displaced 75% of its period. 36000 = Displaced 100% of its period, same as 0, but 0 is preferred
	* @param level strength of the constant effect in percent between -1 and 1
	* @param attackLength duration of the attack in milliseconds
	* @param attackLevel level at the start of the attack in percent between 0 and 1
	* @param fadeLength duration of the fade in milliseconds
	* @param fadeLevel level at the end of the fade in percent between 0 and 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void createForceFeedbackEffectPeriodic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
			bool& successful,
			FString& errorMessage,
			FSimpleControllerDevice device,
			ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType,
			ESimpleControllerForceFeedbackDirectionType directionType,
			int32 directionX,
			int32 directionY,
			int32 directionZ,
			int32 length,
			int32 delay,
			int32 period,
			float magnitude,
			int32 offset,
			int32 phase,
			int32 attackLength,
			float attackLevel,
			int32 fadeLength,
			float fadeLevel);

	void createForceFeedbackEffectPeriodicNonStatic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
		bool& successful,
		FString& errorMessage,
		FSimpleControllerDevice device,
		ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType,
		ESimpleControllerForceFeedbackDirectionType directionType,
		int32 directionX,
		int32 directionY,
		int32 directionZ,
		int32 length,
		int32 delay,
		int32 period,
		float magnitude,
		int32 offset,
		int32 phase,
		int32 attackLength,
		float attackLevel,
		int32 fadeLength,
		float fadeLevel);

	/**
	* This creates the SDL Force Feedback SDL_HapticCondition. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticCondition
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds

	* @param rightLevel level when joystick is to the positive side in percent between 0 and 1
	* @param leftLevel level when joystick is to the negative side in percent between 0 and 1
	* @param rightLevelIncreaseSpeed how fast to increase the force towards the positive side in milliseconds
	* @param leftLevelIncreaseSpeed how fast to increase the force towards the negative side
	* @param deadband size of the dead zone in percent between 0 and 1
	* @param center position of the dead zone
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void createForceFeedbackEffectCondition(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
			bool& successful,
			FString& errorMessage,
			FSimpleControllerDevice device,
			ESimpleControllerForceFeedbackEffectConditionType ConditionType,
			bool useDirectionX,
			bool useDirectionY,
			bool useDirectionZ,
			int32 length,
			int32 delay,
			float rightLevel,
			float leftLevel,
			int32 rightLevelIncreaseSpeed,
			int32 leftLevelIncreaseSpeed,
			float deadband,
			int32 center);

	void createForceFeedbackEffectConditionNonStatic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
		bool& successful,
		FString& errorMessage,
		FSimpleControllerDevice device,
		ESimpleControllerForceFeedbackEffectConditionType ConditionType,
		bool useDirectionX,
		bool useDirectionY,
		bool useDirectionZ,
		int32 length,
		int32 delay,
		float rightLevel,
		float leftLevel,
		int32 rightLevelIncreaseSpeed,
		int32 leftLevelIncreaseSpeed,
		float deadband,
		int32 center);

	/**
	* This creates the SDL Force Feedback SDL_HapticRamp. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticRamp
	* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.
	* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree
	* @param directionZ For CARTESIAN values -1,0,1.
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds
	* @param startLevel beginning strength level in percent between 0 and 1
	* @param endLevel ending strength level in percent between 0 and 1
	* @param attackLength duration of the attack in milliseconds
	* @param attackLevel level at the start of the attack in percent between 0 and 1
	* @param fadeLength duration of the fade in milliseconds
	* @param fadeLevel level at the end of the fade in percent between 0 and 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void createForceFeedbackEffectRamp(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
			bool& successful,
			FString& errorMessage,
			FSimpleControllerDevice device,
			ESimpleControllerForceFeedbackDirectionType directionType,
			int32 directionX,
			int32 directionY,
			int32 directionZ,
			int32 length,
			int32 delay,
			float startLevel,
			float endLevel,
			int32 attackLength,
			float attackLevel,
			int32 fadeLength,
			float fadeLevel);

	void createForceFeedbackEffectRampNonStatic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
		bool& successful,
		FString& errorMessage,
		FSimpleControllerDevice device,
		ESimpleControllerForceFeedbackDirectionType directionType,
		int32 directionX,
		int32 directionY,
		int32 directionZ,
		int32 length,
		int32 delay,
		float startLevel,
		float endLevel,
		int32 attackLength,
		float attackLevel,
		int32 fadeLength,
		float fadeLevel);



	/**
	* Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
	static struct FSimpleControllerForceFeedbackEffect uploadForceFeedbackEffect(bool& successful, FString& errorMessage, struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect);

	/**
	* Starts an uploaded or stopped effect.
	* @param iterations This allows the effect to be repeated x times
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
	static struct FSimpleControllerForceFeedbackEffect runForceFeedbackEffect(bool& successful, FString& errorMessage, struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32 iterations = 1);

	/**
	* Stops an uploaded effect.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
	static struct FSimpleControllerForceFeedbackEffect stopForceFeedbackEffect(bool& successful, FString& errorMessage, struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect);


	/**
	* Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect.
	* @param iterations This allows the effect to be repeated x times
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static struct FSimpleControllerForceFeedbackEffect uploadAndRunForceFeedbackEffect(bool& successful, FString& errorMessage, struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32 iterations = 1);



	/**
	* This allows the FF Constant effect to be updated with new values. This is faster than creating a new effect. 
	* @param forceFeedbackEffect The uploaded FF Effect to be updated
	* @param directionX For values -1,0,1. 
	* @param directionY For values -1,0,1. 
	* @param directionZ For values -1,0,1.
	* @param length duration of the effect in milliseconds
	* @param delay delay before starting the effect in milliseconds
	* @param level strength of the constant effect in percent between 0 and 1
	* @param attackLength duration of the attack in milliseconds
	* @param attackLevel level at the start of the attack in percent between 0 and 1
	* @param fadeLength duration of the fade in milliseconds
	* @param fadeLevel level at the end of the fade in percent between 0 and 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void updateConstantForceFeedbackEffect(bool& successful, FString & errorMessage, struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect,
			int32 directionX,
			int32 directionY,
			int32 directionZ,
			int32 length,
			int32 delay,
			float level,
			int32 attackLength,
			float attackLevel,
			int32 fadeLength,
			float fadeLevel );

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void destroyForceFeedbackEffect(struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect);


	
	//do not work
	///**
	//* The SDL framework determines the axis for the steering wheel. In the SDL code it looks like it is always a 3, but it seems to work.
	//*/
	//UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
	//static int32 getWheelAxisIdBySDL();

	/**
	* With this function, the FF Constant effect is always applied in the opposite direction of the last movement to make the steering wheel more sluggish. Since it is not possible to distinguish between human movements and movements by the electric motor, it may be that the steering wheel moves back and forth a little by itself when released.
	* @param force min 1 max 100
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
		static bool enableConstantForceOnWheel(FSimpleControllerDevice device, int32 force, int32 wheelAxisID = 0);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
		static void disableConstantForceOnWheel(FSimpleControllerDevice device);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
		static void rumbleWheel(bool& successful, FString& errorMessage, FSimpleControllerDevice device,
			float strengthLeftMotor = 0.5f, float strengthRightMotor = 0.5f, int32 lengthInMilliseconds = 2000, int32 timeBetweenDirectionChangeInMilliseconds = 10);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
		static void stopRumbleWheel();

	/**
	* Use this function to set the global autocenter of the device. Device must support the SDL_HAPTIC_AUTOCENTER feature.
	* @param device device to set autocentering on
	* @param autocenter value to set autocenter to (0-100), 0 disables autocentering
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void setAutocenterForceFeedbackSDL(FSimpleControllerDevice device, int32 autocenter);

	/**
	* Use this function to set the global gain of the specified haptic device. 
	* @param device device to set autocentering on
	* @param gain value to set the gain to, should be between 0 and 100
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback")
		static void setGainForceFeedback(FSimpleControllerDevice device, int32 gain);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
	static void breakDeviceForceFeedbackInfo(FSimpleControllerDevice device, bool& forceFeedback_CONSTANT, bool& forceFeedback_SINE, bool& forceFeedback_LEFTRIGHT, bool& forceFeedback_TRIANGLE, bool& forceFeedback_SAWTOOTHUP, bool& forceFeedback_SAWTOOTHDOWN, bool& forceFeedback_RAMP, bool& forceFeedback_SPRING, bool& forceFeedback_DAMPER, bool& forceFeedback_INERTIA, bool& forceFeedback_FRICTION, bool& forceFeedback_CUSTOM, bool& forceFeedback_GAIN, bool& forceFeedback_AUTOCENTER, bool& forceFeedback_STATUS, bool& forceFeedback_PAUSE, bool& forceFeedback_POLAR, bool& forceFeedback_CARTESIAN, bool& forceFeedback_SPHERICAL, bool& forceFeedback_INFINITY, int32& maxSimultaneouslyEffects);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
	static void getCurrentPowerLevel(FSimpleControllerDevice device, ESimpleControllerPowerLevel& powerLevel);

	/**
	* @param deviceIndex Unique device identifier for application session, starting at 0 for the first device attached and incrementing by 1 for each additional device. If a device is removed and subsequently reattached during the same application session, it will have a new deviceID.
	* @param connectionIndex Returns the connection order based on the deviceIndex. First controller that is connected gets 0, the second gets 1 and so on. If there are three controllers 0,1,2 and the second (the 1) is disconnected then the gap is not closed. If the same or a new controller is connected, it gets the smallest free space, i.e. number 1 in this example.
	* @param deviceName Human-readable device name
	* @param vendorID USB vendor/product IDs as returned by the driver. Can be used to determine the particular model of device represented.
	* @param numAxes Number of axis elements belonging to the device
	* @param numButtons Number of button elements belonging to the device
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void breakDeviceInfo(FSimpleControllerDevice device, int32& deviceIndex, int32& connectionIndex, FString& deviceID,
			FString& deviceName, FString& controllerName, int32& vendorID, int32& productID/*, int32& firmwareVersion*/, int32& numAxes, int32& numButtons,
			int32& numDirectionalPadAxes, int32& numBalls, bool& hasHaptic, bool& hasRumble, bool& hasRumbleTriggers, bool& hasAccelerationSensor, bool& hasGyroSensor,
			bool& hasLED, bool& gamepadAPI_Support,	bool& isXinput, ESimpleControllerType& type);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void breakButtonAction(FSimpleControllerMappingButtonAction action, FString& actionName, FString& description, FString& tag, int32& connectionIndex, int32& buttonID,
			FString& buttonName, FString& deviceName, FString& controllerName, int32& vendorID, int32& productID);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void breakAxisAction(FSimpleControllerMappingAxisAction action, FString& actionName, FString& description,FString& tag, int32& connectionIndex, int32& axisID, 
			bool& invertAxis, FString& deviceName, FString& controllerName, int32& vendorID, int32& productID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void changeAxisActionSettings(FSimpleControllerMappingProfile mappingProfile, FString actionName, bool invertAxis);

	

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void breakMappingProfile(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingButtonAction>& buttonActions, TMap<FString, FSimpleControllerMappingAxisAction>& axisActions);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleControllerPlugin|Mapping")
		static void getButtonActions(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingButtonAction>& buttonActions);
		void getButtonActionsNonStatic(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingButtonAction>& buttonActions);

	UFUNCTION(BlueprintCallable, BlueprintPure,Category = "SimpleControllerPlugin|Mapping")
		static void getAxisActions(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingAxisAction>& axisActions);
		void getAxisActionsNonStatic(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingAxisAction>& axisActions);



	
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static bool deleteMappingFile(FString profileName);

	/**
	* This allows you to create a standard mapping. Create a mapping and copy the content of the mapping file into the fileData parameter of this function.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static bool createMappingFile(FString profileName, FString fileData, bool overwriteExistingFile);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void cancelMapping();
	void cancelMappingNonStatic();

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void getMappedButtonActions(bool& isMapped, TArray<FString>& actionNames, int32 buttonID, int32 connectionIndex);
	void getMappedButtonActionsNonStatic(bool& isMapped, TArray<FString>& actionNames, int32 buttonID, int32 connectionIndex);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void getMappedAxisActions(bool& isMapped, TArray<FString>& actionNames, int32 axisID, int32 connectionIndex);
	void getMappedAxisActionsNonStatic(bool& isMapped, TArray<FString>& actionNames, int32 axisID, int32 connectionIndex);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
	static void getMappingActionsByTag(FSimpleControllerMappingProfile mappingProfile,FString tag, TArray<FSimpleControllerMappingButtonAction>& buttonActions, TArray<FSimpleControllerMappingAxisAction>& axisActions);
	void getMappingActionsByTagNonStatic(FSimpleControllerMappingProfile mappingProfile,FString tag, TArray<FSimpleControllerMappingButtonAction>& buttonActions, TArray<FSimpleControllerMappingAxisAction>& axisActions);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void removeButtonMapping(FSimpleControllerMappingProfile mappingProfile, FString actionName);
	void removeButtonMappingNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static bool isButtonMapped(FSimpleControllerMappingProfile mappingProfile, FString actionName);
	bool isButtonMappedNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName);

	/**
	* This allows you to map an button manually.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
	static bool mapButton(FSimpleControllerMappingProfile mappingProfile, FString actionName, FSimpleControllerDevice device, int32 buttonID);
	bool mapButtonNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName, FSimpleControllerDevice device, int32 buttonID);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static void removeAxisMapping(FSimpleControllerMappingProfile mappingProfile, FString actionName);
	void removeAxisMappingNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
		static bool isAxisMapped(FSimpleControllerMappingProfile mappingProfile, FString actionName);
	bool isAxisMappedNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName);

	/**
	* This allows you to map an axis manually.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
	static bool mapAxis(FSimpleControllerMappingProfile mappingProfile, FString actionName, FSimpleControllerDevice device, int32 axisID);
	bool mapAxisNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName, FSimpleControllerDevice device, int32 axisID);




	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static void breakForceFeedbackEffect(struct FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32& effectID,bool& successful);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin")
		static FString getButtonName(FSimpleControllerDevice device,int32 buttonID);

	/** Initializes the gamepad functions on ios. These do not run via SDL but via Unreal and are therefore severely restricted.
	* A player controller is required for each gamepad. This function automatically creates a player controller if none is found. 
	* The input mode must be set to Game or Game and UI for the inputs to be recognized.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin", meta = (WorldContext = "WorldContextObject"))
		static void initIOSPart(UObject* WorldContextObject);

		
	USimpleControllerPluginSettings const* sdlSettings = nullptr;

	APlayerController* keyboardPlayerController = nullptr;
	APlayerController* mousePlayerController = nullptr;
	//TMap<APlayerController*,TArray<USimpleControllerKeyBoardEvent*>> keyboardEvents;

	UPROPERTY()
	USimpleControllerWheel*  simpleControllerWheel = nullptr;
	USimpleControllerMobile* simpleControllerMobile = nullptr;
	//USimpleControllerUI* simpleControllerUI = nullptr;

	/*SimpleControllerUI*/
	bool UIaxisIsMovingH = false;
	bool UIaxisIsMovingV = false;


	bool isRun = false;
	bool runTicks = false;
	TMap<int32, FSimpleControllerDevice*> controllerDeviceStructMap;
	//TMap<int32, FSimpleControllerDevice*> controllerDeviceAttachedCheckMap;
	SimpleControllerList* simpleControllerList = nullptr;

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	FSimpleControllerDevice* generateControllerStruct(int32 deviceIndex, SDL_Joystick* joystick, SDL_GameController* sdlGameController);
#endif

	void deviceAttachedEvent(int32 deviceIndex);
	void fireDeviceAttachedEvent(FSimpleControllerDevice* simpleControllerDevice);
	void fireDeviceDetachedEvent(FSimpleControllerDevice* simpleControllerDevice);
	void removeDeviceInternal(int32 deviceIndex);
	void deviceDetachedEvent();
	void buttonDownEvent(int32 deviceIndex, int32 buttonID, bool joystickEvent = true);	
	void buttonUpEvent(int32 deviceIndex, int32 buttonID, bool joystickEvent = true);
	void controllerButtonEvent(bool pressDown, int32 deviceIndex, int32 buttonID);
	void controllerButtonEventSubFunction(bool pressDown, FSimpleControllerDevice* d, int32 buttonID);
	void directionalPadEvent(int32 deviceIndex, int32 directinalPadValue, int32 directionalPadIndex, bool sdlCall = true);
	void ballEvent(int32 deviceIndex, int32 ballIndex, int32 xRel, int32 yRel);
	void axisMovedEvent(int32 deviceIndex, int32 axisID, int32 axisValue);
	void axisMovedEventSubFunction(FSimpleControllerDevice* d, int32 axisID, float axisValue);
	void axisMovedEventPersistent(ESimpleControllerEventType triggerEventIf);
	void controllerAxisMovedEvent(int32 deviceIndex, int32 axisID, int32 axisValueSDL);
	void controllerAxisMovedEventSubFunction(FSimpleControllerDevice* d, int32 axisID, float axisValue);

	void accelerationSensorEvent(int32 deviceIndex, float valueA, float valueB, float valueC);
	void gyroSensorEvent(int32 deviceIndex, float valueA, float valueB, float valueC);
	void touchMoveEvent(int32 deviceIndex, int32 touchpadIndex, int32 finger, float x, float y, float pressure);
	void touchDownEvent(int32 deviceIndex, int32 touchpadIndex, int32 finger, float x, float y, float pressure);
	void touchUpEvent(int32 deviceIndex, int32 touchpadIndex, int32 finger, float x, float y, float pressure);

	void removeDeviceFromConnectionIndex(int32 deviceIndex);



	FSimpleControllerMappingButtonAction* createMappingButtonActionInstance(FSimpleControllerMappingButtonAction action);
	FSimpleControllerMappingAxisAction* createMappingAxisActionInstance(FSimpleControllerMappingAxisAction action);


	FSimpleControllerMappingProfile* getMappingProfileInstance(FSimpleControllerMappingProfile mappingProfile);

	void registerButtonMappingEvent(USimpleControllerMappingButton* asyncEvent);
	void unregisterButtonMappingEvent();

	void registerAxisMappingEvent(USimpleControllerMappingAxis* asyncEvent);
	void unregisterAxisMappingEvent();

	void registerAxisCalibrateEvent(USimpleControllerMappingCalibrateAxis* asyncEvent);
	void unregisterAxisCalibrateEvent();

	void registerActionButtonEvent(FSimpleControllerMappingProfile* profile, FSimpleControllerMappingButtonAction* action);
	bool isRegisterActionButtonEvent(FSimpleControllerMappingButtonAction* action);
	void unregisterActionButtonEvent(FSimpleControllerMappingButtonAction* action);

	void registerActionAxisEvent(FSimpleControllerMappingProfile* profile, FSimpleControllerMappingAxisAction* action);
	bool isRegisterActionAxisEvent(FSimpleControllerMappingAxisAction* action);
	void unregisterActionAxisEvent(FSimpleControllerMappingAxisAction* action);

	void unregisterAllMappedEvents(FSimpleControllerMappingProfile* mappingProfile);


	void registerGamepadStickAxisEvents(USimpleControllerGamepadStickAxisEvents* gamepadEvent);
	void registerGamepadTriggerAxisEvents(USimpleControllerGamepadTriggerAxisEvents* gamepadEvent);

	void registerGamepadFaceButtonEvents(USimpleControllerGamepadFaceButtonEvents* gamepadEvent);
	void registerGamepadControlButtonEvents(USimpleControllerGamepadControlButtonEvents* gamepadEvent);
	void registerGamepadStickButtonEvents(USimpleControllerGamepadStickButtonEvents* gamepadEvent);
	void registerGamepadShoulderButtonEvents(USimpleControllerGamepadShoulderButtonEvents* gamepadEvent);
	void registerGamepadDpadButtonEvents(USimpleControllerGamepadDpadButtonEvents* gamepadEvent);
	void registerGamepadSpecialButtonEvents(USimpleControllerGamepadSpecialButtonEvents* gamepadEvent);

	void registerAsycEventStatus(USimpleControllerStatusAsyncEvent* asyncEvent);
	void unRegisterAsycEventStatus(USimpleControllerStatusAsyncEvent* asyncEvent);
	void registerAsycEventButton(USimpleControllerButtonAsyncEvent* asyncEvent);
	void unRegisterAsycEventButton(USimpleControllerButtonAsyncEvent* asyncEvent);
	void registerAsycEventAxis(USimpleControllerAxisAsyncEvent* asyncEvent);
	void unRegisterAsycEventAxis(USimpleControllerAxisAsyncEvent* asyncEvent);

	void initKeyboardEvents(UObject* WorldContextObject, bool keyboard, bool mouse);
	void initKeyboardEventsInternal(UObject* WorldContextObject, bool keyboard, bool mouse);

	void setConnectionIndex(FSimpleControllerDevice* scd);
	FString getControllerName(int32 vendorID, int32 productID);


	TMap<int32, TArray<USimpleControllerGamepadStickAxisEvents*>> registeredGamepadStickAxisEvents;
	TMap<int32, TArray<USimpleControllerGamepadTriggerAxisEvents*>> registeredGamepadTriggerAxisEvents;

	TMap<int32, TArray<USimpleControllerGamepadFaceButtonEvents*>> registeredGamepadFaceButtonEvents;
	TMap<int32, TArray<USimpleControllerGamepadControlButtonEvents*>> registeredGamepadControlButtonEvents;
	TMap<int32, TArray<USimpleControllerGamepadStickButtonEvents*>> registeredGamepadStickButtonEvents;
	TMap<int32, TArray<USimpleControllerGamepadShoulderButtonEvents*>> registeredGamepadShoulderButtonEvents;
	TMap<int32, TArray<USimpleControllerGamepadDpadButtonEvents*>> registeredGamepadDpadButtonEvents;
	TMap<int32, TArray<USimpleControllerGamepadSpecialButtonEvents*>> registeredGamepadSpecialButtonEvents;


	//TArray<int32> sdlAttachedDevices;
	//TMap<int32,int32> thisRunDeviceIDs;
	//TMap<int32,int32> lastRunDeviceIDs;
	int32 lastNumJoysticks = 0;
	int32 lastDeviceID = -1;

private:


	void initControllerInternal();
	void loadSDLHints();



	float sdlAxisValueToUE4AxisValueX(Sint16 sdlVal);
	float sdlAxisValueToUE4AxisValueY(Sint16 sdlVal);
	float sdlAxisValueToUE4AxisValueTrigger(Sint16 sdlVal);

	
	FSDLEventsThread* SDLEventsThread = nullptr;
	USimpleControllerMappingButton* simpleControllerMappingButton = nullptr;
	USimpleControllerMappingAxis* simpleControllerMappingAxis = nullptr;
	USimpleControllerMappingCalibrateAxis* simpleControllerCalibrateAxis = nullptr;


	TMap<FString, FString> controllerNames;

	float maxAxisValuePositive = 32767.f;
	float maxAxisValueNegative = -32768.f;

	TArray<bool> connectionIndexArray;
	TMap<int32, int32> connectionIndexMap;
	TMap<int32, int32> connectionIndexMapReverse;
	FPersistentEventsThread* persistentEventsThread = nullptr;

	TMap<FString, FSimpleControllerMappingProfile*> mappingProfileInstances;

	TMap<int32, TMap<int32, TArray<FSimpleControllerMappingButtonAction*>>> registeredButtonActions;
	TMap<int32, TMap<int32, TArray<FSimpleControllerMappingAxisAction*>>> registeredAxisActions;

	TArray<USimpleControllerStatusAsyncEvent*> registeredAsyncEventsStatus;
	TArray<USimpleControllerButtonAsyncEvent*> registeredAsyncEventsButton;
	TArray<USimpleControllerAxisAsyncEvent*> registeredAsyncEventsAxis;

	TArray<FSimpleControllerMappingAxisAction*> persistentAxisActions;
	TArray<USimpleControllerGamepadStickAxisEvents*> persistentGamepadStickEvents;
	TArray<USimpleControllerGamepadTriggerAxisEvents*> persistentGamepadTriggerEvents;
};


UCLASS()
class SIMPLECONTROLLER_API USimpleControllerUnrealEvents : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	FKey key;

	void onKeyPressed();
	void onKeyReleased();
};