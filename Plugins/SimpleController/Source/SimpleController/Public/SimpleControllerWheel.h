// Copyright 2018 David Romanski(Socke). All Rights Reserved.
#pragma once

#include "SimpleController.h"

#ifndef __SimpleControllerBPLibrary
#define __SimpleControllerBPLibrary
#include "SimpleControllerBPLibrary.h"
#endif

#include "SimpleControllerWheel.generated.h"


class UMoveWheelToPositionAsyncEvent;
class UAutocenterAsyncEvent;
class FRumbleThread;
class FConstantForceThread;
class FMoveWheelThread;
class FTestWheelThread;


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerWheel : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/**
	* Moves a ForceFeedback steering wheel
	* @param strengt 0 - 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
		static void moveWheel(FSimpleControllerDevice device, ESimpleControllerWheelFFDirection direction, float strengt = 0.5, int32 lengthInMilliseconds = 1000);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
		static void stopAutocenter(FSimpleControllerDevice device);
	void stopAutocenterNonStatic(FSimpleControllerDevice device);

	/**
	* New values for an already running Autocenter effect.
	* @param defaultStrength 0 - 1
	* @param slowdownStrength 0 - 1
	* @param autocenterDesiredEndPosition -1 - 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
	static void updateAutocenterWheel(bool stopWhenCentered = true,
		float defaultStrength = 1.0, float slowdownStrength = 0.12, float autocenterDesiredEndPosition = 0);
	void updateAutocenterWheelNonStatic(bool stopWhenCentered = true,
		float defaultStrength = 1.0, float slowdownStrength = 0.12, float autocenterDesiredEndPosition = 0);

	/**
	* New values for an already running effect.
	* @param force min 1 max 100
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel")
		static void updateConstantForceOnWheel(int32 force);
		void updateConstantForceNonStatic(int32 force);

	bool autocenterWheel(UAutocenterAsyncEvent* asyncEvent, FSimpleControllerDevice device, bool stopWhenCentered = true,
		float defaultStrength = 1.0, float slowdownStrength = 0.12, float autocenterDesiredEndPosition = 0, bool showLogs = false, int32 wheelAxisID = 0);
	bool enableConstantForce(FSimpleControllerDevice device, int32 force, int32 wheelAxisID = 0);
	void disableConstantForce(FSimpleControllerDevice device);
	bool rumble(FSimpleControllerDevice device, float strengthLeft, float strengthRight, int32 lengthInMilliseconds, int32 timeBetweenDirectionChangeInMilliseconds);

	void stopRumbleThread();
	//void removeRumbleThread(FSimpleControllerDevice* device);

	UFUNCTION()
	void wheelAxisEvent(const FString deviceID, const int32 axisID, const float axisValue, const int32 deviceIndex, const  FSimpleControllerDevice device, const int32 connectionIndex);

//private:

	void testAndSaveFFSettings(FSimpleControllerDevice* device);

	void doAutoCenterWheel( FSimpleControllerDevice device);
	void doConstantForceWheel(FSimpleControllerDevice device);

	UAutocenterAsyncEvent* autocenterAsyncEvent = nullptr;
	FSimpleControllerDevice wheelDevice = {};
	bool showLogs = false;
	/*int64 autocenterStartTime = 0;*/
	int32 wheelAxisID = 0;


	int32 autocenterDeviceIndex = -1;
	int32 autocenterEffectID = -1;
	int32 autocenterStartSpeed = 32767;
	int32 autocenterSpeedSlowSpeed = 4000;
	int32 autocenterSpeed = 0;
	int32 autocenterActiveDirection = 0; //-1,0,1
	float autocenterDesiredEndPosition = 0.5;
	bool stopWhenCentered = true;
	bool autocenterPaused = false;
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	SDL_HapticEffect* autoCenterEffect = nullptr;
#endif


	int32 constantForceDeviceIndex = -1;
	int32 constantForceEffectID = -1;
	int32 constantForceActiveDirection = 0; //-1,0,1
	int32 constantForceLevel = 0;
	int64 constantForceLastDirectionChangeTimestamp = 0;
	float constantForceLastChangeDirectionWheelPostionRight = 0.f;
	float constantForceLastChangeDirectionWheelPostionLeft = 0.f;
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	SDL_HapticEffect* constantForceLeftEffect = nullptr;
#endif
	FConstantForceThread* constantForceThread = nullptr;
	FTestWheelThread* testWheelThread = nullptr;

	FSimpleControllerForceFeedbackEffect moveWheelToPositionEffect;

	//int32 moveWheelToPositionEffectID = -1;
	UMoveWheelToPositionAsyncEvent* moveWheelToPositionAsyncEvent = nullptr;
	float moveWheelToPositionValue = 0;
	float moveWheelStartPositionValue = 0;

	float lastWheelPostionConstantForce = 0;
	float lastWheelPostion = 0;
	TMap<int32, float> wheelPositionsMap;

	//TMap<FSimpleControllerDevice*, FRumbleThread*> rumbleThreadMap;
	FRumbleThread* rumbleThread = nullptr;
	TQueue<FRumbleThread*> oldRumbleThreads;
	TQueue<FMoveWheelThread*> oldMoveWheelTheads;
};


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API UAutocenterAsyncEvent : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/**
	* Centers the steering wheel. It uses FF Constant effect to move the steering wheel to the axis value 0.
	* @param defaultStrength 0 - 1
	* @param slowdownStrength 0 - 1
	* @param autocenterDesiredEndPosition -1 - 1
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|ForceFeedback|Wheel", meta = (BlueprintInternalUseOnly = "true"))
		static UAutocenterAsyncEvent* autocenterWheel(FSimpleControllerDevice device, bool stopWhenCentered = true,
			float defaultStrength = 1.0, float slowdownStrength = 0.12, float autocenterDesiredEndPosition = 0, bool showLogs = false, int32 wheelAxisID = 0);

	virtual void Activate() override;

	void fireEvent();


	FSimpleControllerDevice device;
	bool stopWhenCentered;
	float defaultStrength;
	float slowdownStrength;
	float autocenterDesiredEndPosition;
	bool showLogs;
	int32 wheelAxisID = 0;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAutocenterEvent);

	UPROPERTY(BlueprintAssignable)
		FAutocenterEvent finished;

};


class SIMPLECONTROLLER_API FRumbleThread : public FRunnable {

public:

	FRumbleThread(USimpleControllerWheel* mainWheelClass, FSimpleControllerDevice* device, FSimpleControllerForceFeedbackEffect effect, float strengthLeft, float strengthRight,
		int32 lengthInMilliseconds, int32 timeBetweenDirectionChangeInMilliseconds);

	~FRumbleThread();

	//see cpp file
	virtual uint32 Run() override;

	void stopThread();

private:
	USimpleControllerWheel* mainWheelClass = nullptr;
	FSimpleControllerDevice* device;
	FSimpleControllerForceFeedbackEffect effect;
	float strengthLeft;
	float strengthRight;
	int32 lengthInMilliseconds;
	int32 timeBetweenDirectionChangeInMilliseconds = 10;
	FRunnableThread* thread = nullptr;

	FThreadSafeBool run = true;
};



class SIMPLECONTROLLER_API FMoveWheelThread : public FRunnable {

public:

	FMoveWheelThread(FSimpleControllerDevice device, ESimpleControllerWheelFFDirection direction, float strengt, int32 lengthInMilliseconds);

	~FMoveWheelThread();

	//see cpp file
	virtual uint32 Run() override;


	//void stopThread();

private:
	FSimpleControllerDevice device;
	ESimpleControllerWheelFFDirection direction;
	float strength;
	int32 lengthInMilliseconds;
	FRunnableThread* thread = nullptr;
};


class SIMPLECONTROLLER_API FConstantForceThread : public FRunnable {

public:

	FConstantForceThread(USimpleControllerWheel* mainWheelClass,FSimpleControllerDevice device, int32 axisID, float strengt, int32 lengthInMilliseconds);

	~FConstantForceThread();

	//see cpp file
	virtual uint32 Run() override;


	void stopThread();

private:
	USimpleControllerWheel* mainWheelClass = nullptr;
	FSimpleControllerDevice device;
	int32 axisID;
	float strength;
	int32 lengthInMilliseconds;

	FThreadSafeBool run = true;
	FRunnableThread* thread = nullptr;
};



class SIMPLECONTROLLER_API FTestWheelThread : public FRunnable {

public:

	FTestWheelThread(USimpleControllerWheel* mainWheelClass,FSimpleControllerDevice* device);

	~FTestWheelThread();

	//see cpp file
	virtual uint32 Run() override;



private:
	USimpleControllerWheel* mainWheelClass = nullptr;
	FSimpleControllerDevice* device = nullptr;
	FRunnableThread* thread = nullptr;
	FThreadSafeBool run = true;
};