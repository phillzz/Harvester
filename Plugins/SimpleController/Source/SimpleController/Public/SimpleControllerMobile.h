// Copyright 2018 David Romanski(Socke). All Rights Reserved.
#pragma once

#include "SimpleController.h"

#ifndef __SimpleControllerBPLibrary
#define __SimpleControllerBPLibrary
#include "SimpleControllerBPLibrary.h"
#endif
#if PLATFORM_ANDROID
//#include "AndroidPlatform.h"
#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"
#include "Android/AndroidJava.h"
#include <android_native_app_glue.h>
#endif

#include "SimpleControllerMobile.generated.h"


#if PLATFORM_ANDROID
extern struct android_app* GNativeAndroidApp;
#endif

class FAndroidConnectStatusThread;

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerMobile : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	static USimpleControllerMobile* mobileTarget;

	void initIOS(UObject* WorldContextObject);
	void initAndroid();
#if ENGINE_MAJOR_VERSION >= 5 & ENGINE_MINOR_VERSION > 0
	void mobileConnectionEvent(EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId);
#endif
	void rumble(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds);
	void rumbleAndroid(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds);

	static void nativeAndroidEvents(struct android_app* app, struct android_poll_source* source);

	void nativAndroidCreateDeviceStruct(int32 deviceID);
	void nativAndroidDisconnect(int32 deviceID);
	void getCurrentPowerLevel(FSimpleControllerDevice device, ESimpleControllerPowerLevel& powerLevel);

private:
	void nativAndroidButtonEvents(int32 deviceID, int32 buttonID, int32 actionType);
	void nativAndroidDpadEvents(int32 deviceID, int32 leftRight, int32 upDown);
	void nativAndroidAxisEvents(int32 deviceID, int32 axisID, float axisValue);
	bool JNI_getDeviceInfo(int32 deviceID, FString& deviceName, int32& productID, int32& vendorID, bool& hasRumble);
	TMap<int32, bool> nativAndroidButtonDownMap;
	TMap<int32, bool> nativAndroidButtonUpMap;
	TMap<int32, bool> nativAndroidDPadMap;
	TMap<int32, float> nativAndroidAxisMap;
#if PLATFORM_ANDROID
	TMap<int32, jobject> nativAndroidVibrator;
#endif


	void refreshBinds();
	void initMobileEventsInternal(FSimpleControllerDevice* simpleControllerDevice, APlayerController* playerController);
	void createDevice(int32 id);
	APlayerController* getPlayerController(int32 id);
	UObject* WorldContextObject = nullptr;
	int32 controllerInQueue = 0;

	TMap<FSimpleControllerDevice*,int32> createdPlayerControllers;


	FAndroidConnectStatusThread* androidConnectStatusThread = nullptr;
	
};


UCLASS()
class SIMPLECONTROLLER_API USimpleControllerUnrealMobileEvents : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	FSimpleControllerDevice* simpleControllerDevice = nullptr;
	APlayerController* playerController = nullptr;
	FKey key;
	FString actionType;
	TMap<FString, float> lastAxisValueMap;

	void onButtonPressed();
	void onButtonReleased();


	void onAxisMoved(float value);


	void fireFaceButtonEvent(FString& buttonName, bool pressed);
	void fireDpadEvent(FString& buttonName, bool pressed);
	void fireControllButtonEvent(FString& buttonName, bool pressed);
	void fireStickButtonEvent(FString& buttonName, bool pressed);
	void fireShoulderButtonEvent(FString& buttonName, bool pressed);
	//void fireSpecialButtonEvent(FString& buttonName, bool pressed);
};

class SIMPLECONTROLLER_API FAndroidConnectStatusThread : public FRunnable {

public:


	FAndroidConnectStatusThread(USimpleControllerMobile* simpleControllerMobile);

	~FAndroidConnectStatusThread();

	virtual uint32 Run() override;



private:
	float sleepTime = 1;

	bool run = true;

	USimpleControllerMobile* simpleControllerMobile = nullptr;  
	FRunnableThread* thread = nullptr;



};