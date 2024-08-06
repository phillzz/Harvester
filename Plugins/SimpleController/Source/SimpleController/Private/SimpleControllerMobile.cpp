// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerMobile.h"

static int32 NDK_AINPUT_SOURCE_HDMI = 0x02000000;
static int32 NDK_AINPUT_SOURCE_KEYBOARD = 0x00000100;
static int32 NDK_AINPUT_SOURCE_TOUCHSCREEN = 0x00001000;
static int32 NDK_AINPUT_SOURCE_JOYSTICK = 0x01000000;


USimpleControllerMobile* USimpleControllerMobile::mobileTarget;
USimpleControllerMobile::USimpleControllerMobile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	mobileTarget = this;
}

void USimpleControllerMobile::initIOS(UObject* WorldContextObjectP){

#if PLATFORM_IOS | PLATFORM_WINDOWS
	if (WorldContextObject != nullptr) {
		if (WorldContextObject != WorldContextObjectP) {
			WorldContextObject = WorldContextObjectP;
			refreshBinds();
		}
		return;
	}
	WorldContextObject = WorldContextObjectP;

	for (int32 i = 0; i < controllerInQueue; i++){
		createDevice(i);
	}
#endif


}

void USimpleControllerMobile::initAndroid(){
#if PLATFORM_ANDROID
	if (androidConnectStatusThread == nullptr) {
		androidConnectStatusThread = new FAndroidConnectStatusThread(this);
	}
	GNativeAndroidApp->inputPollSource.process = &USimpleControllerMobile::nativeAndroidEvents;
#endif
}


void USimpleControllerMobile::refreshBinds(){
	for (auto& element : createdPlayerControllers) {
		APlayerController* playerController  = getPlayerController(element.Value);
		if (playerController == nullptr) {
			continue;
		}
		initMobileEventsInternal(element.Key, playerController);
	}
}

#if ENGINE_MAJOR_VERSION >= 5 & ENGINE_MINOR_VERSION > 0
void USimpleControllerMobile::mobileConnectionEvent(EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId){
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, "mobileConnectionEvent "+FString::FromInt(PlatformUserId)+ " "+FString::FromInt(InputDeviceId.GetId()));
	//UE_LOG(LogTemp, Warning, TEXT("mobileConnectionEvent: %i %i"), PlatformUserId, InputDeviceId.GetId());

	if (WorldContextObject == nullptr) {
		if (NewConnectionState == EInputDeviceConnectionState::Connected) {
			controllerInQueue++;
		}
		return;
	}

	if (NewConnectionState == EInputDeviceConnectionState::Connected) {
		createDevice(PlatformUserId);
		return;
	}

	//disconnected
	int32 id = 1000 + PlatformUserId;
	if (USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(id) != nullptr) {
		FSimpleControllerDevice* scd = *USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(id);
		USimpleControllerBPLibrary::controllerTarget->removeDeviceFromConnectionIndex(scd->deviceIndex);
		USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Remove(scd->deviceIndex);
		USimpleControllerBPLibrary::controllerTarget->fireDeviceDetachedEvent(scd);
	}

}
#endif

void USimpleControllerMobile::initMobileEventsInternal(FSimpleControllerDevice* simpleControllerDevice, APlayerController* playerController){

	if (playerController != nullptr) {

		//TArray<USimpleControllerKeyBoardEvent*> kbEventsArray;
		TArray<FKey> allKeys;
		EKeys::GetAllKeys(allKeys);

		for (int32 i = 0; i < allKeys.Num(); i++) {
			if (allKeys[i].IsGamepadKey() == false) {
				continue;
			}

		/*	if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Red, "Key: " + allKeys[i].ToString());*/

			USimpleControllerUnrealMobileEvents* mobileEvent = NewObject<USimpleControllerUnrealMobileEvents>(USimpleControllerUnrealMobileEvents::StaticClass());
			//kbEventsArray.Add(keyBoardEvent);
			mobileEvent->AddToRoot();
			mobileEvent->playerController = playerController;
			mobileEvent->key = allKeys[i];
			mobileEvent->actionType = allKeys[i].ToString();
			mobileEvent->simpleControllerDevice = simpleControllerDevice;
			mobileEvent->playerController = playerController;
			if (allKeys[i].IsAxis1D()) {
				UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin: Axis: %s"),*allKeys[i].ToString());
				playerController->InputComponent->BindAxisKey(allKeys[i],mobileEvent, &USimpleControllerUnrealMobileEvents::onAxisMoved);
			}
			else {
				//UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin: Key: %s"),*allKeys[i].ToString());
				playerController->InputComponent->BindKey(allKeys[i], IE_Pressed, mobileEvent, &USimpleControllerUnrealMobileEvents::onButtonPressed);
				playerController->InputComponent->BindKey(allKeys[i], IE_Released, mobileEvent, &USimpleControllerUnrealMobileEvents::onButtonReleased);
			}
		}
	}

	//FCoreDelegates::OnControllerConnectionChange.AddUObject(this, &USimpleControllerBPLibrary::ListenForControllerChange);
}

void USimpleControllerMobile::nativeAndroidEvents(android_app* app, android_poll_source* source){



	
#if PLATFORM_ANDROID
	AInputEvent* event = NULL;
	while (AInputQueue_getEvent(app->inputQueue, &event) >= 0) {
	

		int32 eventType = (int32)AInputEvent_getType(event);
		int32 deviceID = (int32)AInputEvent_getDeviceId(event);
		int32 deviceType = (int32)AInputEvent_getSource(event);
		//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, "deviceType: " + FString::FromInt(deviceType));

		if ((deviceType >= NDK_AINPUT_SOURCE_KEYBOARD && deviceType < NDK_AINPUT_SOURCE_TOUCHSCREEN) || (deviceType >= NDK_AINPUT_SOURCE_JOYSTICK && deviceType < NDK_AINPUT_SOURCE_HDMI)) {

			

			//button
			if (eventType == AINPUT_EVENT_TYPE_KEY) {

				int32 buttonID = AKeyEvent_getKeyCode(event);
				int32 actionType = AKeyEvent_getAction(event);
				//AsyncTask(ENamedThreads::GameThread, [deviceID, buttonID, actionType]() {
					USimpleControllerMobile::mobileTarget->nativAndroidButtonEvents(deviceID, buttonID, actionType);
				//});


				/*if (GEngine)
					GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Turquoise,"deviceID: "+FString::FromInt(deviceID)+" buttonKeyCode: " + FString::FromInt(buttonID));*/
						


			}
			else {
				//axis
				if (eventType == AINPUT_EVENT_TYPE_MOTION) {


					USimpleControllerMobile::mobileTarget->nativAndroidAxisEvents(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_LEFTX,AMotionEvent_getAxisValue(event,    AMOTION_EVENT_AXIS_X, 0));
					USimpleControllerMobile::mobileTarget->nativAndroidAxisEvents(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_LEFTY,AMotionEvent_getAxisValue(event,    AMOTION_EVENT_AXIS_Y, 0));
					USimpleControllerMobile::mobileTarget->nativAndroidAxisEvents(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_RIGHTX,AMotionEvent_getAxisValue(event,  AMOTION_EVENT_AXIS_Z, 0));
					USimpleControllerMobile::mobileTarget->nativAndroidAxisEvents(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_RIGHTY,AMotionEvent_getAxisValue(event,   AMOTION_EVENT_AXIS_RZ, 0));
					USimpleControllerMobile::mobileTarget->nativAndroidAxisEvents(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERLEFT,AMotionEvent_getAxisValue(event,  AMOTION_EVENT_AXIS_LTRIGGER, 0));
					USimpleControllerMobile::mobileTarget->nativAndroidAxisEvents(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERRIGHT,AMotionEvent_getAxisValue(event,  AMOTION_EVENT_AXIS_RTRIGGER, 0));

					//dpad
					float dpadX = AMotionEvent_getAxisValue(event, AMOTION_EVENT_AXIS_HAT_X, 0);
					float dpadY = AMotionEvent_getAxisValue(event, AMOTION_EVENT_AXIS_HAT_Y, 0);  
					//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, "dpadX: " + FString::SanitizeFloat(dpadX) + " dpadY: " + FString::SanitizeFloat(dpadY));
				
					USimpleControllerMobile::mobileTarget->nativAndroidDpadEvents(deviceID, dpadX, dpadY);
				}
			}
		}
		else {
			//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, "Not implemented device type: " + FString::FromInt(deviceType));
		}

		if ( AInputQueue_preDispatchEvent(app->inputQueue, event)) {
			continue;
		}

		int32_t handled = 0;
		if (app->onInputEvent != NULL) handled = app->onInputEvent(app, event);
		AInputQueue_finishEvent(app->inputQueue, event, handled);

	}
#endif
}


void USimpleControllerMobile::nativAndroidButtonEvents(int32 deviceID, int32 buttonID, int32 actionType){

	int32 vendorID = 0;
	if (USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(deviceID) != nullptr) {
		FSimpleControllerDevice* device = *USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(deviceID);
		vendorID = device->vendorID;
	}


	//playstation
	if (vendorID == 1356) {
		switch (buttonID)
		{
		case 97:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_A;
			break;
		case 98:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_B;
			break;
		case 99:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_Y;
			break;
		case 96:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_X;
			break;
		case 104:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_BACK;
			break;
		case 105:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_START;
			break;
		case 109:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSTICK;
			break;
		case 108:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSTICK;
			break;
		case 100:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSHOULDER;
			break;
		case 101:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSHOULDER;
			break;
		case 107:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_MISC1;
			break;
		case 102:
			buttonID = 192;
			break;
		case 103:
			buttonID = 193;
			break;
		default:
			//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, "nativAndroidButtonEvents: " + FString::FromInt(deviceID)+" "+FString::FromInt(buttonID)+" "+FString::FromInt(actionType));
			break;
		}
	}
	else {
		switch (buttonID)
		{
		case 96:
		case 190:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_A;
			break;
		case 97:
		case 189:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_B;
			break;
		case 100:
		case 188:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_Y;
			break;
		case 99:
		case 191:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_X;
			break;
		case 109:
		case 196:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_BACK;
			break;
		case 108:
		case 197:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_START;
			break;
		case 106:
		case 198:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSTICK;
			break;
		case 107:
		case 199:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSTICK;
			break;
		case 102:
		case 194:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSHOULDER;
			break;
		case 103:
		case 195:
			buttonID = SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSHOULDER;
			break;
		case 104:
		case 192:
			//digital trigger left
			break;
		case 105:
		case 193:
			//digital trigger right
			break;
		case 23:
			//unknown
			break;
		default:
			//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, "nativAndroidButtonEvents: " + FString::FromInt(deviceID)+" "+FString::FromInt(buttonID)+" "+FString::FromInt(actionType));
			break;
		}
	}



	int32 buttonActionID = deviceID + buttonID;

	//the events are fired several times. We only need down and up once each.
	if (actionType == 0){
		if (nativAndroidButtonDownMap.Find(buttonActionID) != nullptr) {
			return;
		}
	}
	else {
		if (nativAndroidButtonUpMap.Find(buttonActionID) != nullptr) {
			return;
		}
	}



	if (actionType == 0) {
		nativAndroidButtonDownMap.Add(buttonActionID);
		nativAndroidButtonUpMap.Remove(buttonActionID);
		//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, "ButtonDown: " + FString::FromInt(deviceID)+" "+FString::FromInt(buttonID)+" "+FString::FromInt(actionType));
		
		//digital Trigger
		if (buttonID == 104 || buttonID == 192) {
			USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERLEFT, 32767);
			USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERLEFT, 32767);
			return;
		}
		if (buttonID == 105 || buttonID == 193) {
			USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERRIGHT, 32767);
			USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERRIGHT, 32767);
			return;
		}
		USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(deviceID, buttonID, false);
		USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(true, deviceID, buttonID);
	}
	else {
		nativAndroidButtonDownMap.Remove(buttonActionID);
		nativAndroidButtonUpMap.Add(buttonActionID);
		//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, "ButtonUp: " + FString::FromInt(deviceID)+" "+FString::FromInt(buttonID)+" "+FString::FromInt(actionType));

		//digital Trigger
		if (buttonID == 104 || buttonID == 192) {
			USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERLEFT, 0);
			USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERLEFT, 0);
			return;
		}
		if (buttonID == 105 || buttonID == 193) {
			USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERRIGHT, 0);
			USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(deviceID, SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERRIGHT, 0);
			return;
		}

		USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(deviceID, buttonID, false);
		USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(false, deviceID, buttonID);
	}
	
}

void USimpleControllerMobile::nativAndroidDpadEvents(int32 deviceID, int32 leftRight, int32 upDown){


	int32 R = deviceID + SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_RIGHT;
	int32 L = deviceID + SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_LEFT;
	int32 U = deviceID + SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_UP;
	int32 D = deviceID + SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_DOWN;


	switch (leftRight)
	{
	case 0:
		if (nativAndroidDPadMap.Find(R) != nullptr) {
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(false, deviceID, SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_RIGHT);
			nativAndroidDPadMap.Remove(R);
		}
		if (nativAndroidDPadMap.Find(L) != nullptr) {
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(false, deviceID, SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_LEFT);
			nativAndroidDPadMap.Remove(L);
		}
		break;
	case 1:
		if (nativAndroidDPadMap.Find(R) == nullptr) {
			nativAndroidDPadMap.Add(R, true);
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(true, deviceID, SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_RIGHT);
		}
		break;
	case -1:
		if (nativAndroidDPadMap.Find(L) == nullptr) {
			nativAndroidDPadMap.Add(L, true);
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(true, deviceID, SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_LEFT);
		}
		break;
	}
	switch (upDown)
	{
	case 0:
		if (nativAndroidDPadMap.Find(U) != nullptr) {
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(false, deviceID, SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_UP);
			nativAndroidDPadMap.Remove(U);
		}
		if (nativAndroidDPadMap.Find(D) != nullptr) {
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(false, deviceID, SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_DOWN);
			nativAndroidDPadMap.Remove(D);
		}
		break;
	case 1:
		if (nativAndroidDPadMap.Find(D) == nullptr) {
			nativAndroidDPadMap.Add(D, true);
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(true, deviceID, SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_DOWN);
		}
		break;
	case -1:
		if (nativAndroidDPadMap.Find(U) == nullptr) {
			nativAndroidDPadMap.Add(U, true);
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(true, deviceID, SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_UP);
		}
		break;
	}

}

void USimpleControllerMobile::nativAndroidAxisEvents(int32 deviceID, int32 axisID, float axisValue){


	int32 axisActionID = deviceID + axisID;


	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Yellow, "axisID: " + FString::FromInt(axisID)+" axisValue: " + FString::SanitizeFloat(axisValue));

	if (axisValue != 0) {
		axisValue = axisValue * 32767;
	}

	if (nativAndroidAxisMap.Find(axisActionID) == nullptr) {
		nativAndroidAxisMap.Add(axisActionID, axisValue);
		USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(deviceID, axisID, axisValue);
		USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(deviceID, axisID, axisValue);
		return;
	}

	float lastAxisValue = *nativAndroidAxisMap.Find(axisActionID);
	if (lastAxisValue != axisValue) {
		nativAndroidAxisMap.Add(axisActionID, axisValue);
		USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(deviceID, axisID, axisValue);
		USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(deviceID, axisID, axisValue);
	}

}

void USimpleControllerMobile::nativAndroidCreateDeviceStruct(int32 deviceID){

	if (USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(deviceID) != nullptr) {
		return;
	}
	
	FString deviceName = "Mobile Gamepad";
	int32 productID = -1;
	int32 vendorID = -1;
	bool hasRumble = false;

	bool isExternalDevice = JNI_getDeviceInfo(deviceID, deviceName, productID, vendorID, hasRumble);
	if (!isExternalDevice) {
		return;
	}

	FSimpleControllerDevice* scd = new FSimpleControllerDevice();
	scd->controllerType = ESimpleControllerType::GAMECONTROLLER;
	scd->deviceName = deviceName;
	scd->controllerName = USimpleControllerBPLibrary::controllerTarget->getControllerName(vendorID, productID);
	scd->deviceIndex = deviceID;
	scd->productID = productID;
	scd->vendorID = vendorID;
	scd->hasRumble = hasRumble;
	USimpleControllerBPLibrary::controllerTarget->setConnectionIndex(scd);
	USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Add(scd->deviceIndex, scd);


	USimpleControllerBPLibrary::controllerTarget->fireDeviceAttachedEvent(scd);
}

void USimpleControllerMobile::nativAndroidDisconnect(int32 deviceID){
	USimpleControllerBPLibrary::controllerTarget->removeDeviceInternal(deviceID);
#if PLATFORM_ANDROID
	nativAndroidVibrator.Remove(deviceID);
#endif
}

void USimpleControllerMobile::getCurrentPowerLevel(FSimpleControllerDevice device, ESimpleControllerPowerLevel& powerLevel){

	int32 deviceID = device.deviceIndex;
	bool hasBattery = false;
	float capacity = 0;

	FString OSLabel, OSVersion;
	FPlatformMisc::GetOSVersions(OSLabel, OSVersion);
	int32 androidVersion = FCString::Atoi(*OSVersion);
	if (androidVersion < 12) {
		UE_LOG(LogTemp, Error, TEXT("Cannot run getCurrentPowerLevel on Android versions older than 12. Your Android version: %i "),androidVersion);
		powerLevel = ESimpleControllerPowerLevel::UNKNOWN;
		return;
	}

#if PLATFORM_ANDROID
	JNIEnv* env = FAndroidApplication::GetJavaEnv();

	jclass InputDeviceJClass = FJavaWrapper::FindClass(env, "android/view/InputDevice", false);
	jmethodID getDeviceJMethodID = FJavaWrapper::FindStaticMethod(env, InputDeviceJClass, "getDevice", "(I)Landroid/view/InputDevice;", false);
	//jobject InputDeviceJObject =  FJavaWrapper::CallObjectMethod(env, InputDeviceJClass, getDeviceJMethodID, deviceID);

	jobject InputDeviceJObject = env->CallStaticObjectMethod(InputDeviceJClass, getDeviceJMethodID, deviceID);
	if (InputDeviceJObject == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("(JNI) InputDeviceJObject not found."));
		return;
	}

	jclass batteryStateJClass = FJavaWrapper::FindClass(env, "android/hardware/BatteryState", false);
	jmethodID getBatteryStateJMethodID = FJavaWrapper::FindMethod(env, InputDeviceJClass, "getBatteryState", "()Landroid/hardware/BatteryState;", false);
	jobject batteryStateJObject = env->CallObjectMethod(InputDeviceJObject, getBatteryStateJMethodID);
	if (batteryStateJObject == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("(JNI) batteryStateJObject not found."));
		return;
	}

	jmethodID isPresentJMethodID = FJavaWrapper::FindMethod(env, batteryStateJClass, "isPresent", "()Z", false);
	hasBattery = FJavaWrapper::CallBooleanMethod(env, batteryStateJObject, isPresentJMethodID);

	if (hasBattery) {
		jmethodID getCapacityJMethodID = FJavaWrapper::FindMethod(env, batteryStateJClass, "getCapacity", "()F", false);
		capacity = FJavaWrapper::CallFloatMethod(env, batteryStateJObject, getCapacityJMethodID);
	}
#endif


	if (hasBattery == false) {
		//GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Yellow, "Wired");
		powerLevel = ESimpleControllerPowerLevel::WIRED;
		return;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Yellow, "capacity: "+FString::SanitizeFloat(capacity));

	if (capacity < 0.25) {
		powerLevel = ESimpleControllerPowerLevel::EMPTY;
		return;
	}

	if (capacity < 0.5) {
		powerLevel = ESimpleControllerPowerLevel::LOW;
		return;
	}

	if (capacity < 0.75) {
		powerLevel = ESimpleControllerPowerLevel::MEDIUM;
		return;
	}

	powerLevel = ESimpleControllerPowerLevel::FULL;

}

bool USimpleControllerMobile::JNI_getDeviceInfo(int32 deviceID, FString& deviceName, int32& productID, int32& vendorID, bool& hasRumble){
	bool isExternal = false;
	hasRumble = false;

	FString OSLabel, OSVersion;
	FPlatformMisc::GetOSVersions(OSLabel, OSVersion);
	//GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Red, "OSLabel: "+OSLabel+" OSVersion: "+OSVersion);

	int32 androidVersion = FCString::Atoi(*OSVersion);

#if PLATFORM_ANDROID

	JNIEnv* env = FAndroidApplication::GetJavaEnv();

	jclass BuildVersionJClass = FJavaWrapper::FindClass(env, "android/os/Build$VERSION", false);
	jfieldID apiVersionFieldID = env->GetStaticFieldID(BuildVersionJClass, "SDK_INT", "I");
	int32 apiLevel = (int32)env->GetStaticIntField(BuildVersionJClass, apiVersionFieldID);
	//GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Red, "ApiLevel: "+FString::FromInt(apiLevel));

	jclass InputDeviceJClass = FJavaWrapper::FindClass(env, "android/view/InputDevice", false);
	jmethodID getDeviceJMethodID = FJavaWrapper::FindStaticMethod(env, InputDeviceJClass, "getDevice", "(I)Landroid/view/InputDevice;", false);
	//jobject InputDeviceJObject =  FJavaWrapper::CallObjectMethod(env, InputDeviceJClass, getDeviceJMethodID, deviceID);

	jobject InputDeviceJObject = env->CallStaticObjectMethod(InputDeviceJClass, getDeviceJMethodID, deviceID);
	if (InputDeviceJObject == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("(JNI) InputDeviceJObject not found."));
		return isExternal;
	}

	jmethodID isExternalJMethodID = FJavaWrapper::FindMethod(env, InputDeviceJClass, "isExternal", "()Z", false);

	isExternal = FJavaWrapper::CallBooleanMethod(env, InputDeviceJObject, isExternalJMethodID);
	if (!isExternal) {
		return false;
	}

	jmethodID getNameJMethodID = FJavaWrapper::FindMethod(env, InputDeviceJClass, "getName", "()Ljava/lang/String;", false);

	jstring deviceNameJString = (jstring) FJavaWrapper::CallObjectMethod(env, InputDeviceJObject, getNameJMethodID);
	if (deviceNameJString == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("(JNI) deviceNameJString not found."));
		return isExternal;
}
	const char *deviceNameChar = env->GetStringUTFChars(deviceNameJString, 0);
	deviceName = FString(UTF8_TO_TCHAR(deviceNameChar));


	jmethodID getProductIdJMethodID = FJavaWrapper::FindMethod(env, InputDeviceJClass, "getProductId", "()I", false);

	productID = FJavaWrapper::CallIntMethod(env, InputDeviceJObject, getProductIdJMethodID);

	jmethodID getVendorIdJMethodID = FJavaWrapper::FindMethod(env, InputDeviceJClass, "getVendorId", "()I", false);
	vendorID = FJavaWrapper::CallIntMethod(env, InputDeviceJObject, getVendorIdJMethodID);

	

	jobject vibratorJObject = nullptr;
	jclass vibratorJClass = env->FindClass("android/os/Vibrator");
	if (vibratorJClass == nullptr) {
		return isExternal;
	}

	jclass contextJClass = env->FindClass("android/content/Context");
	jmethodID getSystemServiceJMethodID = FJavaWrapper::FindMethod(env, contextJClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;", false);

	
	// handy vibrator?
	//if (androidVersion > 11) {
	//	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, "androidVersion > 11");

	//	jstring jstrParameter;
	//	char jstrValue[] = "vibrator_manager";
	//	jstrParameter = env->NewStringUTF(jstrValue);

	//	jobject vibratorManagerJObject = FJavaWrapper::CallObjectMethod(env, FJavaWrapper::GameActivityThis, getSystemServiceJMethodID, jstrParameter);
	//	if (vibratorManagerJObject == nullptr) {
	//		UE_LOG(LogTemp, Error, TEXT("(JNI) vibratorManagerJObject not found."));
	//		return isExternal;
	//	}
	//	jclass vibratorManagerJClass = env->FindClass("android/os/VibratorManager");
	//	jmethodID getVibratorJMethodID = FJavaWrapper::FindMethod(env, vibratorManagerJClass, "getDefaultVibrator", "()Landroid/os/Vibrator;", false);
	//	vibratorJObject = FJavaWrapper::CallObjectMethod(env, vibratorManagerJObject, getVibratorJMethodID);
	//	if (vibratorJObject == nullptr) {
	//		UE_LOG(LogTemp, Error, TEXT("(JNI) vibratorJObject not found."));
	//		return isExternal;
	//	}

	//	/*jmethodID getVibratorIdsJMethodID = FJavaWrapper::FindMethod(env, vibratorManagerJClass, "getVibratorIds", "()[I", false);

	//	jintArray getVibratorIdsJArray = (jintArray)env->CallObjectMethod(vibratorManagerJObject, getVibratorIdsJMethodID);

	//	jint* JavaInts = env->GetIntArrayElements(getVibratorIdsJArray, 0);
	//	if (JavaInts){
	//		jsize IntsLen = env->GetArrayLength(getVibratorIdsJArray);
	//		for (int32 Idx = 0; Idx < IntsLen; Idx++){
	//			GEngine->AddOnScreenDebugMessage(-1, 15, FColor::White, "VibratorIds: "+FString::FromInt(JavaInts[Idx]));
	//		}
	//		env->ReleaseIntArrayElements(getVibratorIdsJArray, JavaInts, 0);
	//	}
	//	env->DeleteLocalRef(getVibratorIdsJArray);*/
	//}
	//else {
	//	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::White, "androidVersion <= 11");
	//	jstring jstrParameter;
	//	char jstrValue[] = "vibrator";
	//	jstrParameter = env->NewStringUTF(jstrValue);

	//	vibratorJObject = FJavaWrapper::CallObjectMethod(env, FJavaWrapper::GameActivityThis, getSystemServiceJMethodID, jstrParameter);
	//	if (vibratorJObject == nullptr) {
	//		UE_LOG(LogTemp, Error, TEXT("(JNI) vibratorJObject not found."));
	//		return isExternal;
	//	}
	//}
	//

	//jmethodID hasVibratorJMethodID = FJavaWrapper::FindMethod(env, vibratorJClass, "hasVibrator", "()Z", false);


	//hasRumble = FJavaWrapper::CallBooleanMethod(env, vibratorJObject, hasVibratorJMethodID);
	//if (hasRumble) {
	//	nativAndroidVibrator.Add(deviceID, vibratorJObject);
	//	//GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Yellow, "hasVibrator() true");
	//}
	//else {
	//	//GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Red, "hasVibrator() false");
	//}

	
	if (androidVersion > 11){
		//UE_LOG(LogTemp, Error, TEXT("(JNI) 2"));
		jmethodID getVibratorManagerJMethodID = FJavaWrapper::FindMethod(env, InputDeviceJClass, "getVibratorManager", "()Landroid/os/VibratorManager;", false);
		if (getVibratorManagerJMethodID == nullptr) {
			UE_LOG(LogTemp, Error, TEXT("(JNI) getVibratorManagerJMethodID not found."));
			return isExternal;
		}
	

		jclass vibratorManagerJClass = env->FindClass("android/os/VibratorManager");
		jobject vibratorManagerJObject = FJavaWrapper::CallObjectMethod(env, InputDeviceJObject, getVibratorManagerJMethodID);

		jmethodID getVibratorJMethodID = FJavaWrapper::FindMethod(env, vibratorManagerJClass, "getDefaultVibrator", "()Landroid/os/Vibrator;", false);
		vibratorJObject = FJavaWrapper::CallObjectMethod(env, vibratorManagerJObject, getVibratorJMethodID);
		if (vibratorJObject == nullptr) {
			UE_LOG(LogTemp, Error, TEXT("(JNI) vibratorJObject not found."));
			return isExternal;
		}


		//jmethodID getVibratorIdsJMethodID = FJavaWrapper::FindMethod(env, vibratorManagerJClass, "getVibratorIds", "()[I", false);

		//jintArray getVibratorIdsJArray = (jintArray)env->CallObjectMethod(vibratorManagerJObject, getVibratorIdsJMethodID);
	
		//jint* JavaInts = env->GetIntArrayElements(getVibratorIdsJArray, 0);
		//if (JavaInts){
		//	jsize IntsLen = env->GetArrayLength(getVibratorIdsJArray);
		//	for (int32 Idx = 0; Idx < IntsLen; Idx++){
		//		GEngine->AddOnScreenDebugMessage(-1, 15, FColor::White, "VibratorIds: "+FString::FromInt(JavaInts[Idx]));
		//	}
		//	env->ReleaseIntArrayElements(getVibratorIdsJArray, JavaInts, 0);
		//}
		//env->DeleteLocalRef(getVibratorIdsJArray);

	}
	//old api
	else {
		
		jmethodID getVibratorJMethodID = FJavaWrapper::FindMethod(env, InputDeviceJClass, "getVibrator", "()Landroid/os/Vibrator;", false);
		if (getVibratorJMethodID == nullptr) {
			UE_LOG(LogTemp, Error, TEXT("(JNI) getVibratorJMethodID not found."));
			return isExternal;
		}

		vibratorJObject = FJavaWrapper::CallObjectMethod(env, InputDeviceJObject, getVibratorJMethodID);
	}

	if (vibratorJObject != nullptr) {

		jmethodID hasVibratorJMethodID = FJavaWrapper::FindMethod(env, vibratorJClass, "hasVibrator", "()Z", false);
		if (hasVibratorJMethodID == nullptr) {
			UE_LOG(LogTemp, Error, TEXT("(JNI) hasVibratorJMethodID not found."));
			return isExternal;
		}
		

		hasRumble = FJavaWrapper::CallBooleanMethod(env, vibratorJObject, hasVibratorJMethodID);
		if (hasRumble) {
			nativAndroidVibrator.Add(deviceID, vibratorJObject);
			//GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Yellow, "hasVibrator() true");
		}
		else {
			//GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Red, "hasVibrator() false");
		}

		hasRumble = true;
	}
#endif
	return isExternal;
}

void USimpleControllerMobile::createDevice(int32 id){


	APlayerController* playerController  = getPlayerController(id);
	if (playerController == nullptr) {
		return;
	}


	FSimpleControllerDevice* scd = new FSimpleControllerDevice();
	scd->controllerType = ESimpleControllerType::GAMECONTROLLER;
	scd->deviceName = "Mobile Gamepad";
	scd->controllerName = "Mobile Gamepad";
	scd->deviceIndex = 1000 + id;
	scd->productID = 99997;
	scd->vendorID = 99997;
	scd->hasRumble = true;
	USimpleControllerBPLibrary::controllerTarget->setConnectionIndex(scd);
	USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Add(scd->deviceIndex, scd);

	createdPlayerControllers.Add(scd, id);
	initMobileEventsInternal(scd, playerController);

	USimpleControllerBPLibrary::controllerTarget->fireDeviceAttachedEvent(scd);
}

APlayerController* USimpleControllerMobile::getPlayerController(int32 id){
	UGameInstance* gameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	USimpleControllerPluginSettings const* projectSettings = GetDefault<USimpleControllerPluginSettings>();

	

	APlayerController* playerController  = UGameplayStatics::GetPlayerController(WorldContextObject, id);
	if (playerController == nullptr) {
		if (gameInstance == nullptr || projectSettings->CREATE_PLAYER_CONTROLLER == false) {
			return playerController;
		}
		FString error;
		ULocalPlayer* localPlayer = gameInstance->CreateLocalPlayer(id,error,true);
		playerController = localPlayer->GetPlayerController(WorldContextObject->GetWorld());
		if (playerController == nullptr) {
			return playerController;
		}
		FInputModeGameOnly InData;
		playerController->SetInputMode(InData);
	}
	return playerController;
}


void USimpleControllerMobile::rumble(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds){

#if PLATFORM_ANDROID
	rumbleAndroid(successful, errorMessage, device, strengthSmallMotor, strengthLargeMotor, lengthInMilliseconds);
	return;
#endif

	APlayerController* playerController = getPlayerController(device.deviceIndex - 1000);
	if (playerController == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Rumble: PlayerController not found."));
		errorMessage = "PlayerController not found.";
		successful = false;
	}
	float duration = (float)lengthInMilliseconds / 1000;
	bool small = false;
	bool large = false;
	float itensity = 0;
	if (strengthSmallMotor > 0 && strengthLargeMotor > 0) {
		small = true;
		large = true;
		itensity = (strengthSmallMotor + strengthLargeMotor) / 2;
	}
	else {
		if (strengthSmallMotor > 0) {
			small = true;
			itensity = strengthSmallMotor;
		}
		else {
			if (strengthLargeMotor > 0) {
				large = true;
				itensity = strengthLargeMotor;
			}
			else {
				//stop? 
			}
		}
	}

	FDynamicForceFeedbackHandle ActionHandle = 0;
	playerController->PlayDynamicForceFeedback(itensity, duration, large, small, large, small, EDynamicForceFeedbackAction::Type::Start, ActionHandle);
}

void USimpleControllerMobile::rumbleAndroid(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds){
	if (device.hasRumble == false) {
		errorMessage = "Device don't support rumble.";
		successful = false;
		return;
	}


	float itensity = 0;
	if (strengthSmallMotor > 0 && strengthLargeMotor > 0) {
		itensity = (strengthSmallMotor + strengthLargeMotor) / 2;
	}
	else {
		if (strengthSmallMotor > 0) {
			itensity = strengthSmallMotor;
		}
		else {
			if (strengthLargeMotor > 0) {
				itensity = strengthLargeMotor;
			}
			else {
				//stop? 
			}
		}
	}

	if (itensity == 0.0f) {
		//stop(device_id);
		return;
	}

	int vibeValue = FMath::RoundFromZero(itensity * 255);

	if (vibeValue > 255) {
		vibeValue = 255;
	}
	if (vibeValue < 1) {
		//stop(device_id);
		return;
	}
	
#if PLATFORM_ANDROID
	if (nativAndroidVibrator.Find(device.deviceIndex) != nullptr) {
		jobject vibratorJObject = *nativAndroidVibrator.Find(device.deviceIndex);

		JNIEnv* env = FAndroidApplication::GetJavaEnv();

		jclass vibrationEffectJClass = FJavaWrapper::FindClass(env, "android/os/VibrationEffect", false);
		jmethodID createOneShotJMethodID = FJavaWrapper::FindStaticMethod(env, vibrationEffectJClass, "createOneShot", "(JI)Landroid/os/VibrationEffect;", false);

		jobject vibrationEffectJObject = env->CallStaticObjectMethod(vibrationEffectJClass, createOneShotJMethodID, lengthInMilliseconds,vibeValue);
		if (vibrationEffectJObject == nullptr) {
			UE_LOG(LogTemp, Error, TEXT("(JNI) vibrationEffectJObject not found."));
			return;
		}

		/*jclass vibrationAttributesJClass = env->FindClass("android/media/AudioAttributes");
		UE_LOG(LogTemp, Error, TEXT("(JNI) 4 1"));
		jmethodID createForUsageJMethodID = FJavaWrapper::FindStaticMethod(env, vibrationAttributesJClass, "createForUsage", "(I)Landroid/media/AudioAttributes;", false);
		UE_LOG(LogTemp, Error, TEXT("(JNI) 4 2"));

		jobject vibrationAttributesJObject = env->CallStaticObjectMethod(vibrationAttributesJClass, createForUsageJMethodID,19);
		UE_LOG(LogTemp, Error, TEXT("(JNI) 4 3"));
		if (vibrationAttributesJObject == nullptr) {
			UE_LOG(LogTemp, Error, TEXT("(JNI) vibrationAttributesJObject not found."));
			return;
		}*/

		jclass vibratorJClass = env->FindClass("android/os/Vibrator");
		jmethodID vibrateJMethodID = FJavaWrapper::FindMethod(env, vibratorJClass, "vibrate", "(Landroid/os/VibrationEffect;)V", false);
		//jmethodID vibrateJMethodID = FJavaWrapper::FindMethod(env, vibratorJClass, "vibrate", "(J)", false);


		FJavaWrapper::CallVoidMethod(env, vibratorJObject, vibrateJMethodID, vibrationEffectJObject);


		//copilot
		//// Create VibrationAttributes instance
		//jclass vibrationAttrsClass = env->FindClass("android/os/VibrationAttributes");
		//jmethodID builderCtor = env->GetMethodID(vibrationAttrsClass, "<init>", "()V");
		//jobject vibrationAttrs = env->NewObject(vibrationAttrsClass, builderCtor);

		//// Set attributes (for demonstration purposes)
		//jmethodID setUsageMethod = env->GetMethodID(vibrationAttrsClass, "setUsage", "(I)Landroid/os/VibrationAttributes;");
		//env->CallObjectMethod(vibrationAttrs, setUsageMethod, 1); // USAGE_NOTIFICATION
		//// Set other attributes as needed (duration, amplitude, repeat mode, etc.)

		//// Trigger vibration
		//jclass vibratorClass = env->FindClass("android/os/Vibrator");
		//jmethodID vibratorMethod = env->GetStaticMethodID(vibratorClass, "vibrate", "(Landroid/os/VibrationAttributes;)V");
		//env->CallStaticVoidMethod(vibratorClass, vibratorMethod, vibrationAttrs);

		//// Clean up
		//env->DeleteLocalRef(vibrationAttrs);
	}
#endif
}



USimpleControllerUnrealMobileEvents::USimpleControllerUnrealMobileEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}

void USimpleControllerUnrealMobileEvents::onButtonPressed(){
	
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, "Button: "+FString::FromInt(simpleControllerDevice->deviceIndex)+": " + key.ToString());

	UE_LOG(LogTemp, Warning, TEXT("onKeyPressed Plugin: Key: %s"),*key.ToString());
	if (simpleControllerDevice == nullptr) {
		return;
	}

	if (actionType.StartsWith("Gamepad_FaceButton_")){
		fireFaceButtonEvent(actionType, true);
		return;
	}
	if (actionType.StartsWith("Gamepad_DPad_")){
		fireDpadEvent(actionType, true);
		return;
	}
	if (actionType.StartsWith("Gamepad_Special_")){
		fireControllButtonEvent(actionType, true);
		return;
	}
	if (actionType.EndsWith("stick")){
		fireStickButtonEvent(actionType, true);
		return;
	}
	if (actionType.EndsWith("Shoulder")){
		fireShoulderButtonEvent(actionType, true);
		return;
	}
}

void USimpleControllerUnrealMobileEvents::onButtonReleased(){
	
	if (actionType.StartsWith("Gamepad_FaceButton_")){
		fireFaceButtonEvent(actionType, false);
		return;
	}
	if (actionType.StartsWith("Gamepad_DPad_")){
		fireDpadEvent(actionType, false);
		return;
	}
	if (actionType.StartsWith("Gamepad_Special_")){
		fireControllButtonEvent(actionType, false);
		return;
	}
	if (actionType.EndsWith("stick")){
		fireStickButtonEvent(actionType, false);
		return;
	}
	if (actionType.EndsWith("Shoulder")){
		fireShoulderButtonEvent(actionType, false);
		return;
	}
}



void USimpleControllerUnrealMobileEvents::onAxisMoved(float value){
	//fire only on change like SDL
	if (lastAxisValueMap.Find(actionType) != nullptr && *lastAxisValueMap.Find(actionType) != value) {
		/*if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, "Axis: " + key.ToString() + ": " + FString::SanitizeFloat(value));*/

		int32 axisID = -1;
		if (actionType.Equals("Gamepad_LeftX")) {
			axisID = 0;
		}
		else {
			if (actionType.Equals("Gamepad_LeftY")) {
				axisID = 1;
			}
			else {
				if (actionType.Equals("Gamepad_RightX")) {
					axisID = 2;
				}
				else {
					if (actionType.Equals("Gamepad_RightY")) {
						axisID = 3;
					}
					else {
						if (actionType.Equals("Gamepad_LeftTriggerAxis")) {
							axisID = 4;
						}
						else {
							if (actionType.Equals("Gamepad_RightTriggerAxis")) {
								axisID = 5;
							}
							else {

							}
						}
					}
				}
			}
		}
		value = value * 32768;
		USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(simpleControllerDevice->deviceIndex, axisID, value);
		USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(simpleControllerDevice->deviceIndex, axisID, value);
	}
	lastAxisValueMap.Add(actionType, value);
}

void USimpleControllerUnrealMobileEvents::fireFaceButtonEvent(FString& buttonName, bool pressed){
	if (USimpleControllerBPLibrary::controllerTarget->registeredGamepadFaceButtonEvents.Find(simpleControllerDevice->connectionIndex) != nullptr) {

		TArray<USimpleControllerGamepadFaceButtonEvents*> buttonEventsArray = *USimpleControllerBPLibrary::controllerTarget->registeredGamepadFaceButtonEvents.Find(simpleControllerDevice->connectionIndex);

		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {
			if (buttonName.EndsWith("m")) {
				buttonEventsArray[i]->fireButtonBottomEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 0, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 0, false);
				}
				
				break;
			}
			if (buttonName.EndsWith("ht")) {
				buttonEventsArray[i]->fireButtonRightEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 1, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 1, false);
				}
				break;
			}
			if (buttonName.EndsWith("ft")) {
				buttonEventsArray[i]->fireButtonLeftEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 2, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 2, false);
				}
				break;
			}
			if (buttonName.EndsWith("p")) {
				buttonEventsArray[i]->fireButtonTopEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 3, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 3, false);
				}
				break;
			}
		}
		return;
	}
}

void USimpleControllerUnrealMobileEvents::fireDpadEvent(FString& buttonName, bool pressed){
	
	if (USimpleControllerBPLibrary::controllerTarget->registeredGamepadDpadButtonEvents.Find(simpleControllerDevice->connectionIndex) != nullptr) {

		TArray<USimpleControllerGamepadDpadButtonEvents*> buttonEventsArray = *USimpleControllerBPLibrary::controllerTarget->registeredGamepadDpadButtonEvents.Find(simpleControllerDevice->connectionIndex);

		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {
			if (buttonName.EndsWith("p")) {
				buttonEventsArray[i]->fireDpadTopEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 11, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 11, false);
				}
				break;
			}
			if (buttonName.EndsWith("n")) {
				buttonEventsArray[i]->fireDpadBottomEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 12, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 12, false);
				}
				break;
			}
			if (buttonName.EndsWith("ft")) {
				buttonEventsArray[i]->fireDpadLeftEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 13, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 13, false);
				}
				break;
			}
			if (buttonName.EndsWith("ht")) {
				buttonEventsArray[i]->fireDpadRightEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 14, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 14, false);
				}
				break;
			}
		}
	}
}


void USimpleControllerUnrealMobileEvents::fireControllButtonEvent(FString& buttonName, bool pressed){
	if (USimpleControllerBPLibrary::controllerTarget->registeredGamepadControlButtonEvents.Find(simpleControllerDevice->connectionIndex) != nullptr) {

		TArray<USimpleControllerGamepadControlButtonEvents*> buttonEventsArray = *USimpleControllerBPLibrary::controllerTarget->registeredGamepadControlButtonEvents.Find(simpleControllerDevice->connectionIndex);

		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {
			if (buttonName.EndsWith("ft")) {
				buttonEventsArray[i]->fireButtonBackEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 4, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 4, false);
				}
				break;
			}
			//if (buttonName.EndsWith("ht")) {
			//	buttonEventsArray[i]->fireButtonGuideEvent(pressed);
			//	break;
			//}
			if (buttonName.EndsWith("ht")) {
				buttonEventsArray[i]->fireButtonStartEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 6, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 6, false);
				}
				break;
			}
		}
		return;
	}
}


void USimpleControllerUnrealMobileEvents::fireStickButtonEvent(FString& buttonName, bool pressed){
	if (USimpleControllerBPLibrary::controllerTarget->registeredGamepadStickButtonEvents.Find(simpleControllerDevice->connectionIndex) != nullptr) {

		TArray<USimpleControllerGamepadStickButtonEvents*> buttonEventsArray = *USimpleControllerBPLibrary::controllerTarget->registeredGamepadStickButtonEvents.Find(simpleControllerDevice->connectionIndex);

		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {
			if (buttonName.EndsWith("ftThumbstick")) {
				buttonEventsArray[i]->fireButtonLeftStickEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 7, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 7, false);
				}
				break;
			}
			if (buttonName.EndsWith("htThumbstick")) {
				buttonEventsArray[i]->fireButtonRightEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 8, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 8, false);
				}
				break;
			}
		}
		return;
	}
}


void USimpleControllerUnrealMobileEvents::fireShoulderButtonEvent(FString& buttonName, bool pressed){
	if (USimpleControllerBPLibrary::controllerTarget->registeredGamepadShoulderButtonEvents.Find(simpleControllerDevice->connectionIndex) != nullptr) {

		TArray<USimpleControllerGamepadShoulderButtonEvents*> buttonEventsArray = *USimpleControllerBPLibrary::controllerTarget->registeredGamepadShoulderButtonEvents.Find(simpleControllerDevice->connectionIndex);

		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {
			if (buttonName.EndsWith("ftShoulder")) {
				buttonEventsArray[i]->fireButtonLeftShoulderEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 9, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 9, false);
				}
				break;
			}
			if (buttonName.EndsWith("htShoulder")) {
				buttonEventsArray[i]->fireButtonRightShoulderEvent(pressed);
				if (pressed) {
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(simpleControllerDevice->deviceIndex, 10, false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(simpleControllerDevice->deviceIndex, 10, false);
				}
				break;
			}
		}
		return;
	}
}

//void USimpleControllerUnrealMobileEvents::fireSpecialButtonEvent(FString& buttonName, bool pressed){
//	if (USimpleControllerBPLibrary::controllerTarget->registeredGamepadSpecialButtonEvents.Find(simpleControllerDevice->connectionIndex) != nullptr) {
//
//		TArray<USimpleControllerGamepadSpecialButtonEvents*> buttonEventsArray = *USimpleControllerBPLibrary::controllerTarget->registeredGamepadSpecialButtonEvents.Find(simpleControllerDevice->connectionIndex);
//
//		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {
//			if (buttonName.EndsWith("m")) {
//				buttonEventsArray[i]->fireMisc1Event(pressed);
//				break;
//			}
//			if (buttonName.EndsWith("ht")) {
//				buttonEventsArray[i]->fireXboxElitePaddleP1Event(pressed);
//				break;
//			}
//			if (buttonName.EndsWith("ft")) {
//				buttonEventsArray[i]->fireXboxElitePaddleP2Event(pressed);
//				break;
//			}
//			if (buttonName.EndsWith("p")) {
//				buttonEventsArray[i]->fireXboxElitePaddleP3Event(pressed);
//				break;
//			}
//			if (buttonName.EndsWith("m")) {
//				buttonEventsArray[i]->fireXboxElitePaddleP4Event(pressed);
//				break;
//			}
//			if (buttonName.EndsWith("ht")) {
//				buttonEventsArray[i]->firePSTouchpadEvent(pressed);
//				break;
//			}
//		}
//		return;
//	}
//}

FAndroidConnectStatusThread::FAndroidConnectStatusThread(USimpleControllerMobile* simpleControllerMobileP) : 
	simpleControllerMobile(simpleControllerMobileP){
	//mainLib = USimpleControllerBPLibrary::getSimpleControllerTarget();
	FString threadName = "FAndroidConnectStatusThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}

FAndroidConnectStatusThread::~FAndroidConnectStatusThread() {
	delete thread;
}

uint32 FAndroidConnectStatusThread::Run() {

#if PLATFORM_ANDROID

	JNIEnv* env = FAndroidApplication::GetJavaEnv();

	jclass InputDeviceJClass = FJavaWrapper::FindClass(env, "android/view/InputDevice", false);
	jmethodID getDeviceIdsJMethodID = FJavaWrapper::FindStaticMethod(env, InputDeviceJClass, "getDeviceIds", "()[I", false);
	//jobject InputDeviceJObject =  FJavaWrapper::CallObjectMethod(env, InputDeviceJClass, getDeviceJMethodID, deviceID);

#endif

	USimpleControllerMobile* simpleControllerMobileGameThread = simpleControllerMobile;
	TMap<int32,int32> thisRunDeviceIDs;
	TMap<int32,int32> lastRunDeviceIDs;

	while (run) {
		FPlatformProcess::Sleep(sleepTime);
#if PLATFORM_ANDROID
		jintArray getDeviceIdsJArray = (jintArray)env->CallStaticObjectMethod(InputDeviceJClass, getDeviceIdsJMethodID);
		if (getDeviceIdsJArray == nullptr) {
			UE_LOG(LogTemp, Error, TEXT("(JNI) getDeviceIdsJArray not found."));
			continue;
		}
		jint* JavaInts = env->GetIntArrayElements(getDeviceIdsJArray, 0);
		if (JavaInts){
			jsize IntsLen = env->GetArrayLength(getDeviceIdsJArray);
			for (int32 Idx = 0; Idx < IntsLen; Idx++){
				if (JavaInts[Idx] > 0) {
					thisRunDeviceIDs.Add(JavaInts[Idx],JavaInts[Idx]);
				}
			}
			env->ReleaseIntArrayElements(getDeviceIdsJArray, JavaInts, 0);
		}
		env->DeleteLocalRef(getDeviceIdsJArray);
#endif

		//connected
		for (auto element : thisRunDeviceIDs) {
			if (lastRunDeviceIDs.Find(element.Key) == nullptr) {
				int32 deviceID = element.Key;
				AsyncTask(ENamedThreads::GameThread, [simpleControllerMobileGameThread,deviceID]() {
					simpleControllerMobileGameThread->nativAndroidCreateDeviceStruct(deviceID);
					//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, "Device Connect: " + FString::FromInt(deviceID));
				});
			}
		}
		//disconnected
		for (auto element : lastRunDeviceIDs) {
			if (thisRunDeviceIDs.Find(element.Key) == nullptr) {
				int32 deviceID = element.Key;
				AsyncTask(ENamedThreads::GameThread, [simpleControllerMobileGameThread,deviceID]() {
					simpleControllerMobileGameThread->nativAndroidDisconnect(deviceID);
					//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Device Disconnect: "+FString::FromInt(deviceID));
				});
			}
		}
		lastRunDeviceIDs.Empty();
		lastRunDeviceIDs.Append(thisRunDeviceIDs);
		thisRunDeviceIDs.Empty();
	}

	//thread = nullptr;
	return 0;
}