// Copyright 2018 David Romanski(Socke). All Rights Reserved.
#pragma once

#include "SimpleController.h"
#include "SimpleControllerGamepadEvents.generated.h"


class USimpleControllerBPLibrary;



UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerGamepadFaceButtonEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad|Buttons", meta = (WorldContext = "WorldContextObject",BlueprintInternalUseOnly = "true"))
		static USimpleControllerGamepadFaceButtonEvents* gamepadEventFaceButtons(/*UObject* WorldContextObject,*/ int32 connectionIndex = 0);


	virtual void Activate() override;

	/*UObject* WorldContextObject = nullptr;*/
	int32 connectionIndex = -1;

	void fireButtonBottomEvent(bool pressDown);
	void fireButtonTopEvent(bool pressDown);
	void fireButtonRightEvent(bool pressDown);
	void fireButtonLeftEvent(bool pressDown);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerButtonEvent);

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent bottomPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent bottomReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent topPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent topReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent rightPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent rightReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent leftPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent leftReleased;
};


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerGamepadControlButtonEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad|Buttons", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerGamepadControlButtonEvents* gamepadEventControlButtons(int32 connectionIndex = 0);


	virtual void Activate() override;

	int32 connectionIndex = -1;

	void fireButtonBackEvent(bool pressDown);
	void fireButtonStartEvent(bool pressDown);
	void fireButtonGuideEvent(bool pressDown);


	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerButtonEvent);


	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent backPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent backReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent startPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent startReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent guidePressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent guideReleased;
};

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerGamepadStickButtonEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad|Buttons", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerGamepadStickButtonEvents* gamepadEventStickButtons(int32 connectionIndex = 0);


	virtual void Activate() override;

	int32 connectionIndex = -1;

	void fireButtonLeftStickEvent(bool pressDown);
	void fireButtonRightEvent(bool pressDown);


	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerButtonEvent);

	
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent leftStickPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent leftStickReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent rightStickPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent rightStickReleased;

	
};


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerGamepadShoulderButtonEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad|Buttons", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerGamepadShoulderButtonEvents* gamepadEventShoulderButtons(int32 connectionIndex = 0);


	virtual void Activate() override;

	int32 connectionIndex = -1;

	void fireButtonLeftShoulderEvent(bool pressDown);
	void fireButtonRightShoulderEvent(bool pressDown);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerButtonEvent);

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent leftShoulderPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent leftShoulderReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent rightShoulderPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent rightShoulderReleased;
};

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerGamepadDpadButtonEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad|Buttons", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerGamepadDpadButtonEvents* gamepadEventDpadButtons(int32 connectionIndex = 0);


	virtual void Activate() override;

	int32 connectionIndex = -1;

	void fireDpadBottomEvent(bool pressDown);
	void fireDpadTopEvent(bool pressDown);
	void fireDpadRightEvent(bool pressDown);
	void fireDpadLeftEvent(bool pressDown);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerButtonEvent);

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent bottomDpadPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent bottomDpadReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent topDpadPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent topDpadReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent rightDpadPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent rightDpadReleased;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent leftDpadPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent leftDpadReleased;
};

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerGamepadSpecialButtonEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad|Buttons", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerGamepadSpecialButtonEvents* gamepadEventSpecialButtons(int32 connectionIndex = 0);


	virtual void Activate() override;

	int32 connectionIndex = -1;

	void fireMisc1Event(bool pressDown);
	void fireXboxElitePaddleP1Event(bool pressDown);
	void fireXboxElitePaddleP2Event(bool pressDown);
	void fireXboxElitePaddleP3Event(bool pressDown);
	void fireXboxElitePaddleP4Event(bool pressDown);
	void firePSTouchpadEvent(bool pressDown);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerButtonEvent);

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent Misc1Pressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent Misc1Released;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent XboxElitePaddleP1Pressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent XboxElitePaddleP1Released;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent XboxElitePaddleP2Pressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent XboxElitePaddleP2Released;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent XboxElitePaddleP3Pressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent XboxElitePaddleP3Released;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent XboxElitePaddleP4Pressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent XboxElitePaddleP4Released;

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent PSTouchpadPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent PSTouchpadReleased;

};

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerGamepadStickAxisEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad|Axis", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerGamepadStickAxisEvents* gamepadEventStickAxis(ESimpleControllerEventType triggerEventIf, int32 connectionIndex = 0);


	ESimpleControllerEventType triggerEventIf;
	int32 connectionIndex = -1;
	float persistentLeftY =0;
	float persistentLeftX = 0;
	float persistentRightY = 0;
	float persistentRightX = 0;

	virtual void Activate() override;

	void fireLeftStickXEvent(float value);
	void fireLeftStickYEvent(float value);
	void fireRightStickXEvent(float value);
	void fireRightStickYEvent(float value);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxisEvent, const float, axisValue);

	UPROPERTY(BlueprintAssignable)
		FControllerAxisEvent leftStickX;

	UPROPERTY(BlueprintAssignable)
		FControllerAxisEvent leftStickY;

	UPROPERTY(BlueprintAssignable)
		FControllerAxisEvent rightStickX;

	UPROPERTY(BlueprintAssignable)
		FControllerAxisEvent rightStickY;


};


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerGamepadTriggerAxisEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Gamepad|Axis", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerGamepadTriggerAxisEvents* gamepadEventTriggerAxis(ESimpleControllerEventType triggerEventIf, int32 connectionIndex = 0);

	ESimpleControllerEventType triggerEventIf;
	int32 connectionIndex = -1;
	float persistentLeft = 0;
	float persistentRight = 0;

	virtual void Activate() override;

	void fireLeftTriggerEvent(float value);
	void fireRightTriggerEvent(float value);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxisEvent, float, axisValue);

	UPROPERTY(BlueprintAssignable)
		FControllerAxisEvent leftTrigger;

	UPROPERTY(BlueprintAssignable)
		FControllerAxisEvent rightTrigger;
};