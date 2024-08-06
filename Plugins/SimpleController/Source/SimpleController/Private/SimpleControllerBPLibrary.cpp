// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerBPLibrary.h"



USimpleControllerBPLibrary* USimpleControllerBPLibrary::controllerTarget;
//static TMap<FString, FString> controllerNames;
//static TMap<int32, TMap<int32, int32>> buttonMapping;


void USimpleControllerBPLibrary::buttonDownEventDelegate(const FString deviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device,const int32 connectionIndex) {}
void USimpleControllerBPLibrary::buttonUpEventDelegate(const FString deviceID, const int32 buttonID, const int32 deviceIndex, const FSimpleControllerDevice device,const int32 connectionIndex) {}
void USimpleControllerBPLibrary::directionalPadEventDelegate(const FString deviceID, const int32 directionalPadValue, int32 directionalPadIndex, const int32 deviceIndex, const FSimpleControllerDevice device,const int32 connectionIndex) {}
void USimpleControllerBPLibrary::ballMovedEventDelegate(const FString deviceID, const int32 ballID, const int32 xRel, const int32 yRel, const FSimpleControllerDevice device) {}
void USimpleControllerBPLibrary::axisMovedEventDelegate(const FString deviceID, const int32 axisID, const float axisValue, const int32 deviceIndex, const FSimpleControllerDevice device,const int32 connectionIndex) {}
void USimpleControllerBPLibrary::deviceAttachedEventDelegate(const FSimpleControllerDevice device, const int32 connectionIndex) {}
void USimpleControllerBPLibrary::deviceDetachedEventDelegate(const FSimpleControllerDevice device,const int32 connectionIndex) {}
void USimpleControllerBPLibrary::accelerationSensorEventDelegate(const FString deviceID, const float valueA, const float valueB, const float valueC, const int32 deviceIndex, const FSimpleControllerDevice device){}
void USimpleControllerBPLibrary::gyroSensorEventDelegate(const FString deviceID, const float valueA, const float valueB, const float valueC, const int32 deviceIndex, const FSimpleControllerDevice device){}
void USimpleControllerBPLibrary::touchpadMotionEventDelegate(const FString deviceID, const int32 touchpadIndex, const int32 finger, const float x, const float y, const float pressure, const int32 deviceIndex, const FSimpleControllerDevice device){}
void USimpleControllerBPLibrary::touchpadDownEventDelegate(const FString deviceID, const int32 touchpadIndex, const int32 finger, const float x, const float y, const float pressure, const int32 deviceIndex, const FSimpleControllerDevice device){}
void USimpleControllerBPLibrary::touchpadUpEventDelegate(const FString deviceID, const int32 touchpadIndex, const int32 finger, const float x, const float y, const float pressure, const int32 deviceIndex, const FSimpleControllerDevice device){}


//void USimpleControllerBPLibrary::comboEventDelegate(const FSimpleControllerDevice device, const FString comboName, const float comboTimeInSeconds){}

USimpleControllerBPLibrary::USimpleControllerBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {


	controllerTarget = this;

	if (isRun == false) {

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

		SDL_version sdlVersion;
		SDL_GetVersion(&sdlVersion);
		UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin SDL Version: %i.%i.%i"), sdlVersion.major, sdlVersion.minor, sdlVersion.patch);
#endif


		simpleControllerList = new SimpleControllerList();
		controllerNames = simpleControllerList->getControllerNames();
		
		//onButtonDownEventDelegate.AddDynamic(this, &USimpleControllerBPLibrary::buttonDownEventDelegate);
		AddToRoot();

		#if PLATFORM_ANDROID | PLATFORM_IOS
		if (simpleControllerMobile == nullptr) {
			simpleControllerMobile = NewObject<USimpleControllerMobile>(USimpleControllerMobile::StaticClass());
			simpleControllerMobile->AddToRoot();
			simpleControllerMobile->initAndroid();
#if ENGINE_MAJOR_VERSION >= 5 & ENGINE_MINOR_VERSION > 0
			IPlatformInputDeviceMapper& PlatformInputMapper = IPlatformInputDeviceMapper::Get();
			PlatformInputMapper.GetOnInputDeviceConnectionChange().AddUObject(simpleControllerMobile, &USimpleControllerMobile::mobileConnectionEvent);
#endif 
		}
		#endif
		FWorldDelegates::OnStartGameInstance.AddUObject(this, &USimpleControllerBPLibrary::beginPlay);
	}
}

void USimpleControllerBPLibrary::initControllerInternal() {


#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

#if PLATFORM_WINDOWS | PLATFORM_MAC
	SDL_Quit();
#endif

	connectionIndexArray.Empty();
	for (int32 i = 0; i < 128; i++) {
		connectionIndexArray.Add(false);
	}

	
	loadSDLHints();


#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_ANDROID | PLATFORM_IOS
	SDL_Init(SDL_INIT_JOYSTICK | SDL_INIT_GAMECONTROLLER | SDL_INIT_HAPTIC);
#endif

	SDL_JoystickEventState(SDL_ENABLE);
	SDL_GameControllerEventState(SDL_ENABLE);


	isRun = true;
	if (sdlSettings->SDL_EVENTS_THREAD) {
		if (SDLEventsThread != nullptr) {
			SDLEventsThread->stopThread();
			delete SDLEventsThread;
			SDLEventsThread = nullptr;
		}
		float sleepTime = 1.f / 120.f;
		SDLEventsThread = new FSDLEventsThread(sleepTime);
	}
	else {
		runTicks = true;
	}

	//for (int32 i = SDL_NumJoysticks(); i--; ) {
	//	deviceAttachedEvent(i);
	//}
	
	//keyboard device
	FSimpleControllerDevice* scd = new FSimpleControllerDevice();
	scd->controllerType = ESimpleControllerType::KEYBOARD;
	scd->deviceName = "Keyboard";
	scd->controllerName = "Keyboard";
	scd->deviceIndex = 99999;
	scd->connectionIndex = 99999;
	scd->productID = 99999;
	scd->vendorID = 99999;
	controllerDeviceStructMap.Add(scd->deviceIndex, scd);

	//mouse device
	scd = new FSimpleControllerDevice();
	scd->controllerType = ESimpleControllerType::MOUSE;
	scd->deviceName = "Mouse";
	scd->controllerName = "Mouse";
	scd->deviceIndex = 99998;
	scd->connectionIndex = 99998;
	scd->productID = 99998;
	scd->vendorID = 99998;
	controllerDeviceStructMap.Add(scd->deviceIndex, scd);
}

void USimpleControllerBPLibrary::loadSDLHints(){
	sdlSettings = GetDefault<USimpleControllerPluginSettings>();

#if PLATFORM_WINDOWS
	SDL_SetHint(SDL_HINT_XINPUT_ENABLED, (sdlSettings->XINPUT_ENABLED ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_THREAD, (sdlSettings->JOYSTICK_THREAD ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_RAWINPUT, (sdlSettings->JOYSTICK_RAWINPUT ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE, (sdlSettings->JOYSTICK_HIDAPI_PS4_RUMBLE ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE, (sdlSettings->JOYSTICK_HIDAPI_PS5_RUMBLE? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_ROG_CHAKRAM, (sdlSettings->JOYSTICK_ROG_CHAKRAM ? "1" : "0"));
#endif

#if !PLATFORM_LINUX
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS, (sdlSettings->JOYSTICK_HIDAPI_VERTICAL_JOY_CONS ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS3, (sdlSettings->JOYSTICK_HIDAPI_PS3 ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_WII, (sdlSettings->JOYSTICK_HIDAPI_WII ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_WII_PLAYER_LED, (sdlSettings->JOYSTICK_HIDAPI_WII_PLAYER_LED ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_XBOX_360, (sdlSettings->JOYSTICK_HIDAPI_XBOX_360 ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED, (sdlSettings->JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_XBOX_360_WIRELESS, (sdlSettings->JOYSTICK_HIDAPI_XBOX_360_WIRELESS ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_XBOX_ONE, (sdlSettings->JOYSTICK_HIDAPI_XBOX_ONE ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED, (sdlSettings->JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_WGI, (sdlSettings->JOYSTICK_WGI ? "1" : "0"));
#endif

	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI, (sdlSettings->JOYSTICK_HIDAPI ? "1" : "0"));
	SDL_SetHint(SDL_HINT_ACCELEROMETER_AS_JOYSTICK, (sdlSettings->ACCELEROMETER_AS_JOYSTICK ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, (sdlSettings->JOYSTICK_ALLOW_BACKGROUND_EVENTS ? "1" : "0"));
	SDL_SetHint(SDL_HINT_LINUX_JOYSTICK_DEADZONES, (sdlSettings->LINUX_JOYSTICK_DEADZONES ? "1" : "0"));


	SDL_SetHint(SDL_HINT_DIRECTINPUT_ENABLED, (sdlSettings->DIRECTINPUT_ENABLED ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_GAMECUBE, (sdlSettings->JOYSTICK_HIDAPI_GAMECUBE ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_GAMECUBE_RUMBLE_BRAKE, (sdlSettings->JOYSTICK_GAMECUBE_RUMBLE_BRAKE ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_JOY_CONS, (sdlSettings->JOYSTICK_HIDAPI_JOY_CONS ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_COMBINE_JOY_CONS, (sdlSettings->JOYSTICK_HIDAPI_COMBINE_JOY_CONS ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_LUNA, (sdlSettings->JOYSTICK_HIDAPI_LUNA ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_NINTENDO_CLASSIC, (sdlSettings->JOYSTICK_HIDAPI_NINTENDO_CLASSIC ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_SHIELD, (sdlSettings->JOYSTICK_HIDAPI_SHIELD ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS4, (sdlSettings->JOYSTICK_HIDAPI_PS4 ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5, (sdlSettings->JOYSTICK_HIDAPI_PS5 ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5_PLAYER_LED, (sdlSettings->JOYSTICK_HIDAPI_PS5_PLAYER_LED ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_STADIA, (sdlSettings->JOYSTICK_HIDAPI_STADIA ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_STEAM, (sdlSettings->JOYSTICK_HIDAPI_STEAM ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_SWITCH, (sdlSettings->JOYSTICK_HIDAPI_SWITCH ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_SWITCH_HOME_LED, (sdlSettings->JOYSTICK_HIDAPI_SWITCH_HOME_LED ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_JOYCON_HOME_LED, (sdlSettings->JOYSTICK_HIDAPI_JOYCON_HOME_LED ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED, (sdlSettings->JOYSTICK_HIDAPI_SWITCH_PLAYER_LED ? "1" : "0"));

	SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_XBOX, (sdlSettings->JOYSTICK_HIDAPI_XBOX ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_RAWINPUT_CORRELATE_XINPUT, (sdlSettings->JOYSTICK_RAWINPUT_CORRELATE_XINPUT ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_ROG_CHAKRAM, (sdlSettings->JOYSTICK_ROG_CHAKRAM ? "1" : "0"));
	SDL_SetHint(SDL_HINT_LINUX_DIGITAL_HATS, (sdlSettings->LINUX_DIGITAL_HATS ? "1" : "0"));
	SDL_SetHint(SDL_HINT_LINUX_HAT_DEADZONES, (sdlSettings->LINUX_HAT_DEADZONES ? "1" : "0"));
	SDL_SetHint(SDL_HINT_LINUX_JOYSTICK_CLASSIC, (sdlSettings->LINUX_JOYSTICK_CLASSIC ? "1" : "0"));
	SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, (sdlSettings->JOYSTICK_ALLOW_BACKGROUND_EVENTS ? "1" : "0"));
	SDL_SetHint(SDL_HINT_XINPUT_USE_OLD_JOYSTICK_MAPPING, (sdlSettings->XINPUT_USE_OLD_JOYSTICK_MAPPING ? "1" : "0"));

#endif 
}


void USimpleControllerBPLibrary::beginPlay(UGameInstance* gameInstanceP)
{
	if (isRun == false) {
		initControllerInternal();
	}
}

void USimpleControllerBPLibrary::Tick(float DeltaTime){

	if (sdlSettings->SDL_EVENTS_THREAD == false) {

#if PLATFORM_WINDOWS | PLATFORM_MAC
		SDL_PumpEvents();
#endif
		if (lastNumJoysticks != SDL_NumJoysticks()) {
			if (SDL_NumJoysticks() > lastNumJoysticks) {
				for (int32 i = SDL_NumJoysticks(); i--; ) {
					deviceAttachedEvent(i);
				}
				lastNumJoysticks = SDL_NumJoysticks();
			}
			else {
				deviceDetachedEvent();
				lastNumJoysticks = SDL_NumJoysticks();
			}
		}
		for (auto element : controllerDeviceStructMap) {
			FSimpleControllerDevice* device = element.Value;
			if (device == nullptr) {
				continue;
			}

			if (device->controllerType == ESimpleControllerType::GAMECONTROLLER) {
				//buttons
				for (int32 i = 0; i < device->lastButtonControllerStates.Num(); i++) {
					bool buttonStatus = (bool)SDL_GameControllerGetButton(device->sdlGameController, (SDL_GameControllerButton)i);
					if (device->lastButtonControllerStates[i] != buttonStatus) {
						device->lastButtonControllerStates[i] = buttonStatus;
						if (buttonStatus == true) {
							buttonDownEvent(device->deviceIndex, i, false);
							controllerButtonEvent(true, device->deviceIndex, i);
						}
						else {
							buttonUpEvent(device->deviceIndex, i, false);
							controllerButtonEvent(false, device->deviceIndex, i);
						}
					}
				}
				//axes
				for (int32 i = 0; i < device->lastAxisControllerStates.Num(); i++) {
					int16 axisStatus = SDL_GameControllerGetAxis(device->sdlGameController, (SDL_GameControllerAxis)i);
					if (device->lastAxisControllerStates[i] != axisStatus) {
						device->lastAxisControllerStates[i] = axisStatus;
						controllerAxisMovedEvent(device->deviceIndex, i, axisStatus);
					}
				}
				for (int32 i = 0; i < device->lastAxisJoystickStates.Num(); i++) {
					int16 axisStatus = SDL_JoystickGetAxis(device->sdlJoystick, i);
					if (device->lastAxisJoystickStates[i] != axisStatus) {
						device->lastAxisJoystickStates[i] = axisStatus;
						axisMovedEvent(device->deviceIndex, i, axisStatus);
					}
				}
				//sensors
				if (device->hasAccelerationSensor) {
					float data = 0;
					SDL_GameControllerGetSensorData(device->sdlGameController, SDL_SENSOR_ACCEL, &data, 3);
					if (device->lastAccelData != data) {
						device->lastAccelData = data;
						float dataArray[3];
						FMemory::Memset(dataArray, 0, sizeof(dataArray));
						FMemory::Memcpy(dataArray, &data, 3 * sizeof(data));
						accelerationSensorEvent(device->deviceIndex, dataArray[0], dataArray[1], dataArray[2]);
					}

				}
				if (device->hasGyroSensor) {
					float data = 0;
					SDL_GameControllerGetSensorData(device->sdlGameController, SDL_SENSOR_GYRO, &data, 3);
					if (device->lastGyroData != data) {
						device->lastGyroData = data;
						float dataArray[3];
						FMemory::Memset(dataArray, 0, sizeof(dataArray));
						FMemory::Memcpy(dataArray, &data, 3 * sizeof(data));
						gyroSensorEvent(device->deviceIndex, dataArray[0], dataArray[1], dataArray[2]);
					}

				}
				//gamepad touchpads (PS5)
				for (int32 i = 0; i < device->lastTouchStates.Num(); i++) {
					TArray<FSimpleControllerTouchEvent*> fingerArray = device->lastTouchStates[i];
					//int32 fingers = SDL_GameControllerGetNumTouchpadFingers(device->sdlGameController, i);

					for (int32 j = 0; j < fingerArray.Num(); j++){
						uint8 state = 0;
						float x = 0;
						float y = 0;
						float p = 0;
						SDL_GameControllerGetTouchpadFinger(device->sdlGameController, i, j, &state,&x, &y, &p);
						FSimpleControllerTouchEvent* touchState = fingerArray[j];
						if (touchState->pressure != p || touchState->x != x || touchState->y != y) {
							touchState->pressure = p;
							touchState->x = x;
							touchState->y = y;
							touchMoveEvent(device->deviceIndex, i, j, x, y, p);
							//UE_LOG(LogTemp, Warning, TEXT("fingers: %i, state: %i, x: %f, y: %f, p: %f"),state, j, state, x, y, p);
						}
					}
				}
			}
			else {
				//buttons
				for (int32 i = 0; i < device->lastButtonJoystickStates.Num(); i++) {
					bool buttonStatus = (bool)SDL_JoystickGetButton(device->sdlJoystick, i);
					if (device->lastButtonJoystickStates[i] != buttonStatus) {
						device->lastButtonJoystickStates[i] = buttonStatus;
						if (buttonStatus == true) {
							buttonDownEvent(device->deviceIndex, i);
						}
						else {
							buttonUpEvent(device->deviceIndex, i);
						}
					}
				}
				//axes
				for (int32 i = 0; i < device->lastAxisJoystickStates.Num(); i++) {
					int16 axisStatus = SDL_JoystickGetAxis(device->sdlJoystick, i);
					if (device->lastAxisJoystickStates[i] != axisStatus) {
						device->lastAxisJoystickStates[i] = axisStatus;
						axisMovedEvent(device->deviceIndex, i, axisStatus);
					}
				}
				//hat (digi pad)
				for (int32 i = 0; i < device->lastHatJoystickStates.Num(); i++) {
					uint8 hatStatus = SDL_JoystickGetHat(device->sdlJoystick, i);
					if (device->lastHatJoystickStates[i] != hatStatus) {
						device->lastHatJoystickStates[i] = hatStatus;
						directionalPadEvent(device->deviceIndex, hatStatus, i);
					}
				}
				//balls (untested)
				for (int32 i = 0; i < device->lastBallJoystickStates.Num(); i++) {
					TArray<int> ballStatus;
					ballStatus.AddZeroed(2);
					SDL_JoystickGetBall(device->sdlJoystick, i, &ballStatus[0], &ballStatus[1]);
					if (device->lastBallJoystickStates[i][0] != ballStatus[0] || device->lastBallJoystickStates[i][1] != ballStatus[1]) {
						device->lastBallJoystickStates[i][0] = ballStatus[0];
						device->lastBallJoystickStates[i][1] = ballStatus[1];
						ballEvent(device->deviceIndex, i, ballStatus[0], ballStatus[1]);
					}
				}
			}
		}
	}
	

	for (int32 i = 0; i < persistentAxisActions.Num(); i++){
		if (persistentAxisActions[i] != nullptr && persistentAxisActions[i]->axisEvents.Num() > 0 &&
			persistentAxisActions[i]->triggerEventIf == ESimpleControllerEventType::OnTick) {
			for (int32 j = 0; j < persistentAxisActions[i]->axisEvents.Num(); j++){
				persistentAxisActions[i]->axisEvents[j]->fireEvent(persistentAxisActions[i]->persistentAxisValue);
			}
		}
	}


	
	for (int32 i = 0; i < persistentGamepadStickEvents.Num(); i++)
	{
		USimpleControllerGamepadStickAxisEvents* gamepadEvent = persistentGamepadStickEvents[i];

		if (gamepadEvent != nullptr && gamepadEvent->triggerEventIf == ESimpleControllerEventType::OnTick) {
			gamepadEvent->fireLeftStickXEvent(gamepadEvent->persistentLeftX);
			gamepadEvent->fireLeftStickYEvent(gamepadEvent->persistentLeftY);
			gamepadEvent->fireRightStickXEvent(gamepadEvent->persistentRightX);
			gamepadEvent->fireRightStickYEvent(gamepadEvent->persistentRightY);
		}
	}
;


	for (int32 i = 0; i < persistentGamepadTriggerEvents.Num(); i++)
	{
		USimpleControllerGamepadTriggerAxisEvents* gamepadEvent = persistentGamepadTriggerEvents[i];

		if (gamepadEvent != nullptr && gamepadEvent->triggerEventIf == ESimpleControllerEventType::OnTick) {
			gamepadEvent->fireLeftTriggerEvent(gamepadEvent->persistentLeft);
			gamepadEvent->fireRightTriggerEvent(gamepadEvent->persistentRight);
		}
	}

	for (int32 i = 0; i < registeredAsyncEventsAxis.Num(); i++){
		if (registeredAsyncEventsAxis[i]->triggerEventIf == ESimpleControllerEventType::OnTick) {
			registeredAsyncEventsAxis[i]->firePersistentEvent();
		}
	}

}

bool USimpleControllerBPLibrary::IsTickable() const
{
	return runTicks;
}

TStatId USimpleControllerBPLibrary::GetStatId() const
{
	return UObject::GetStatID();
}

USimpleControllerBPLibrary* USimpleControllerBPLibrary::getSimpleControllerTarget() {
	return controllerTarget;
}


FSimpleControllerMappingButtonAction* USimpleControllerBPLibrary::createMappingButtonActionInstance(FSimpleControllerMappingButtonAction action)
{

	if (action.structID.ToString().Equals("00000000000000000000000000000000")) {
		action.structID = FGuid::NewGuid();
	}

	FSimpleControllerMappingButtonAction* actionInstance = new FSimpleControllerMappingButtonAction();
	actionInstance->structID = action.structID;

	actionInstance->actionName = action.actionName;
	actionInstance->description = action.description;
	actionInstance->tag = action.tag;
	actionInstance->connectionIndex = action.connectionIndex;
	actionInstance->buttonID = action.buttonID;

	actionInstance->deviceName = action.deviceName;
	actionInstance->controllerName = action.controllerName;
	actionInstance->vendorID = action.vendorID;
	actionInstance->productID = action.productID;

	return actionInstance;
}


FSimpleControllerMappingAxisAction* USimpleControllerBPLibrary::createMappingAxisActionInstance(FSimpleControllerMappingAxisAction action)
{

	if (action.structID.ToString().Equals("00000000000000000000000000000000")) {
		action.structID = FGuid::NewGuid();
	}

	FSimpleControllerMappingAxisAction* actionInstance = new FSimpleControllerMappingAxisAction();
	actionInstance->structID = action.structID;

	actionInstance->actionName = action.actionName;
	actionInstance->description = action.description;
	actionInstance->tag = action.tag;
	actionInstance->invertAxis = action.invertAxis;
	actionInstance->connectionIndex = action.connectionIndex;
	actionInstance->axisID = action.axisID;

	actionInstance->deviceName = action.deviceName;
	actionInstance->controllerName = action.controllerName;
	actionInstance->vendorID = action.vendorID;
	actionInstance->productID = action.productID;

	return actionInstance;
}



FSimpleControllerMappingProfile* USimpleControllerBPLibrary::getMappingProfileInstance(FSimpleControllerMappingProfile mappingProfile)
{

	if (mappingProfile.structID.ToString().Equals("00000000000000000000000000000000")) {
		UE_LOG(LogTemp, Error, TEXT("SimpleController Plugin: Found a mapping profile that has no StructID. Please generate a StructID in your mapping profile Struct otherwise errors will occur."));
	}
	FSimpleControllerMappingProfile* profileInstance = nullptr;
	if (mappingProfileInstances.Find(mappingProfile.structID.ToString()) == nullptr) {
		profileInstance = new FSimpleControllerMappingProfile();
		profileInstance->structID = mappingProfile.structID;

		for (auto& actionElement : mappingProfile.buttonActions) {
			actionElement.Value.actionName = actionElement.Key;
			profileInstance->buttonActions.Add(actionElement.Key, actionElement.Value);
			profileInstance->buttonActionsInstances.Add(actionElement.Key, createMappingButtonActionInstance(actionElement.Value));
		}

		for (auto& actionElement : mappingProfile.axisActions) {
			actionElement.Value.actionName = actionElement.Key;
			profileInstance->axisActions.Add(actionElement.Key, actionElement.Value);
			profileInstance->axisActionsInstances.Add(actionElement.Key, createMappingAxisActionInstance(actionElement.Value));
		}
		
	
		mappingProfileInstances.Add(mappingProfile.structID.ToString(), profileInstance);
	}
	else {
		profileInstance = *mappingProfileInstances.Find(mappingProfile.structID.ToString());
	}
	return profileInstance;
}

void USimpleControllerBPLibrary::registerButtonMappingEvent(USimpleControllerMappingButton* asyncEvent){
	simpleControllerMappingButton = asyncEvent;
}

void USimpleControllerBPLibrary::unregisterButtonMappingEvent(){
	simpleControllerMappingButton = nullptr;
}

void USimpleControllerBPLibrary::registerAxisMappingEvent(USimpleControllerMappingAxis* asyncEvent){
	simpleControllerMappingAxis = asyncEvent;
}

void USimpleControllerBPLibrary::unregisterAxisMappingEvent(){
	simpleControllerMappingAxis = nullptr;
}

void USimpleControllerBPLibrary::registerAxisCalibrateEvent(USimpleControllerMappingCalibrateAxis* asyncEvent){
	simpleControllerCalibrateAxis = asyncEvent;
}

void USimpleControllerBPLibrary::unregisterAxisCalibrateEvent(){
	simpleControllerCalibrateAxis = nullptr;
}

//void USimpleControllerBPLibrary::registerUnmappedButtonAsyncEvent(FString actionName, USimpleControllerMappedButtonAsyncEvent* asyncEvent){
//	TArray<USimpleControllerMappedButtonAsyncEvent*> eventsArray;
//	if (unMappedButtonEnvents.Find(actionName) != nullptr) {
//		eventsArray = *unMappedButtonEnvents.Find(actionName);
//	}
//	eventsArray.Add(asyncEvent);
//	unMappedButtonEnvents.Add(actionName, eventsArray);
//}



void USimpleControllerBPLibrary::registerActionButtonEvent(FSimpleControllerMappingProfile* profile, FSimpleControllerMappingButtonAction* action){
	if (action == nullptr || profile == nullptr)
		return;
	if (action->connectionIndex < 0 || action->buttonID < 0)
		return;
	TMap<int32, TArray<FSimpleControllerMappingButtonAction*>> buttonMap;
	if (registeredButtonActions.Find(action->connectionIndex) != nullptr) {
		buttonMap = *registeredButtonActions.Find(action->connectionIndex);
	}
	TArray<FSimpleControllerMappingButtonAction*> actionArray;
	if (buttonMap.Find(action->buttonID) != nullptr) {
		actionArray = *buttonMap.Find(action->buttonID);
	}
	actionArray.Add(action);
	buttonMap.Add(action->buttonID, actionArray);
	registeredButtonActions.Add(action->connectionIndex, buttonMap);
	profile->buttonActions.Add(action->actionName, *action);
}

bool USimpleControllerBPLibrary::isRegisterActionButtonEvent(FSimpleControllerMappingButtonAction* action){
	if (action == nullptr)
		return false;
	if (action->connectionIndex < 0 || action->buttonID < 0)
		return false;
	TMap<int32, TArray<FSimpleControllerMappingButtonAction*>> buttonMap;
	if (registeredButtonActions.Find(action->connectionIndex) != nullptr) {
		buttonMap = *registeredButtonActions.Find(action->connectionIndex);
	}
	else {
		return false;
	}
	TArray<FSimpleControllerMappingButtonAction*> actionArray;
	if (buttonMap.Find(action->buttonID) != nullptr) {
		return true;
	}
	return false;
}

void USimpleControllerBPLibrary::unregisterActionButtonEvent(FSimpleControllerMappingButtonAction* action){
	if (action == nullptr)
		return;
	if (registeredButtonActions.Find(action->connectionIndex) != nullptr) {
		TMap<int32, TArray<FSimpleControllerMappingButtonAction*>> buttonMap = *registeredButtonActions.Find(action->connectionIndex);
		if (buttonMap.Find(action->buttonID) != nullptr) {
			TArray<FSimpleControllerMappingButtonAction*> actionArray = *buttonMap.Find(action->buttonID);
			for (int32 i = 0; i < actionArray.Num(); i++){
				if (actionArray[i]->actionName.Equals(action->actionName)) {
					actionArray.RemoveAt(i);
					break;
				}
			}
			if (actionArray.Num() == 0) {
				(*registeredButtonActions.Find(action->connectionIndex)).Remove(action->buttonID);
			}
			else {
				buttonMap.Add(action->buttonID, actionArray);
				registeredButtonActions.Add(action->connectionIndex, buttonMap);
			}
		}
	}
}

void USimpleControllerBPLibrary::registerActionAxisEvent(FSimpleControllerMappingProfile* profile, FSimpleControllerMappingAxisAction* action) {
	if (action == nullptr || profile == nullptr)
		return;
	if (action->connectionIndex < 0 || action->axisID < 0)
		return;


	TMap<int32, TArray<FSimpleControllerMappingAxisAction*>> axisMap;
	if (registeredAxisActions.Find(action->connectionIndex) != nullptr) {
		axisMap = *registeredAxisActions.Find(action->connectionIndex);
	}

	TArray<FSimpleControllerMappingAxisAction*> actionArray;
	if (axisMap.Find(action->axisID) != nullptr) {
		actionArray = *axisMap.Find(action->axisID);
	}
	actionArray.Add(action);

	axisMap.Add(action->axisID, actionArray);
	registeredAxisActions.Add(action->connectionIndex, axisMap);

	profile->axisActions.Add(action->actionName, *action);


	if (action->triggerEventIf == ESimpleControllerEventType::OnTick) {
		persistentAxisActions.Add(action);
		runTicks = true;
		return;
	}
	if (action->triggerEventIf == ESimpleControllerEventType::Persistent30 ||
		action->triggerEventIf == ESimpleControllerEventType::Persistent60 ||
		action->triggerEventIf == ESimpleControllerEventType::Persistent120) {

		if (persistentEventsThread == nullptr) {
			persistentEventsThread = new FPersistentEventsThread();
		}

		persistentAxisActions.Add(action);

	}


	bool found = false;
	FSimpleControllerDevice device = findControllerByConnectionIndex(action->connectionIndex, found);
	if (found) {
		if (action->calibrationNegative) {
			addAxisCorrection(device, action->axisID, ESimpleControllerAxisCorrection::Negative);
		}
		else {
			removeAxisCorrection(device, action->axisID, ESimpleControllerAxisCorrection::Negative);
		}
		if (action->calibrationPositive) {
			addAxisCorrection(device, action->axisID, ESimpleControllerAxisCorrection::Positive);
		}
		else {
			removeAxisCorrection(device, action->axisID, ESimpleControllerAxisCorrection::Positive);
		}

	}

}

bool USimpleControllerBPLibrary::isRegisterActionAxisEvent(FSimpleControllerMappingAxisAction* action) {
	if (action == nullptr)
		return false;
	if (action->connectionIndex < 0 || action->axisID < 0)
		return false;

	TMap<int32, TArray<FSimpleControllerMappingAxisAction*>> axisMap;
	if (registeredAxisActions.Find(action->connectionIndex) != nullptr) {
		axisMap = *registeredAxisActions.Find(action->connectionIndex);
	}
	else {
		return false;
	}

	TArray<FSimpleControllerMappingAxisAction*> actionArray;
	if (axisMap.Find(action->axisID) != nullptr) {
		return true;
	}
	return false;
}

void USimpleControllerBPLibrary::unregisterActionAxisEvent(FSimpleControllerMappingAxisAction* action) {
	if (action == nullptr)
		return;
	if (registeredAxisActions.Find(action->connectionIndex) != nullptr) {

		TMap<int32, TArray<FSimpleControllerMappingAxisAction*>> axisMap = *registeredAxisActions.Find(action->connectionIndex);
		if (axisMap.Find(action->axisID) != nullptr){
			TArray<FSimpleControllerMappingAxisAction*> actionArray = *axisMap.Find(action->axisID);
			for (int32 i = 0; i < actionArray.Num(); i++){
				if (actionArray[i]->actionName.Equals(action->actionName)) {
					actionArray.RemoveAt(i);
					break;
				}
			}

			if (actionArray.Num() == 0) {
				(*registeredAxisActions.Find(action->connectionIndex)).Remove(action->axisID);
			}
			else {
				axisMap.Add(action->axisID, actionArray);
				registeredAxisActions.Add(action->connectionIndex, axisMap);
			}
		}
	}
	persistentAxisActions.Remove(action);
}

void USimpleControllerBPLibrary::unregisterAllMappedEvents(FSimpleControllerMappingProfile* mappingProfile){

	if (mappingProfile != nullptr) {
		for (auto& actionElement : mappingProfile->buttonActionsInstances) {
			unregisterActionButtonEvent(actionElement.Value);

			actionElement.Value->connectionIndex = -1;
			actionElement.Value->buttonID = -1;

			actionElement.Value->deviceName ="";
			actionElement.Value->controllerName="";
			actionElement.Value->vendorID = -1;
			actionElement.Value->productID = -1;

		}

		for (auto& actionElement : mappingProfile->axisActionsInstances) {
			unregisterActionAxisEvent(actionElement.Value);

			actionElement.Value->invertAxis = false;

			actionElement.Value->connectionIndex = -1;
			actionElement.Value->axisID = -1;

			actionElement.Value->deviceName = "";
			actionElement.Value->controllerName = "";
			actionElement.Value->vendorID = -1;
			actionElement.Value->productID = -1;
			actionElement.Value->persistentAxisValue = 0;
		}
	}


	if (persistentAxisActions.Num() == 0 && registeredAsyncEventsAxis.Num() == 0) {
		if (persistentEventsThread != nullptr) {
			persistentEventsThread->stopThread();
			delete persistentEventsThread;
			persistentEventsThread = nullptr;
		}
		runTicks = false;
	}

	registeredButtonActions.Empty();
	registeredAxisActions.Empty();
	persistentAxisActions.Empty();
}


void USimpleControllerBPLibrary::registerGamepadStickAxisEvents(USimpleControllerGamepadStickAxisEvents* gamepadEvent) {
	if (gamepadEvent == nullptr)
		return;

	if (gamepadEvent->connectionIndex < 0)
		return;


	if (gamepadEvent->triggerEventIf != ESimpleControllerEventType::OnChange) {
		if (persistentEventsThread == nullptr) {
			persistentEventsThread = new FPersistentEventsThread();
		}
		persistentGamepadStickEvents.Add(gamepadEvent);
		runTicks = true;
	}

	TArray<USimpleControllerGamepadStickAxisEvents*> eventArray;
	if (registeredGamepadStickAxisEvents.Find(gamepadEvent->connectionIndex) != nullptr) {
		eventArray = *registeredGamepadStickAxisEvents.Find(gamepadEvent->connectionIndex);
	}
	eventArray.Add(gamepadEvent);
	registeredGamepadStickAxisEvents.Add(gamepadEvent->connectionIndex, eventArray);

	
	
}

void USimpleControllerBPLibrary::registerGamepadTriggerAxisEvents(USimpleControllerGamepadTriggerAxisEvents* gamepadEvent) {
	if (gamepadEvent == nullptr)
		return;

	if (gamepadEvent->connectionIndex < 0)
		return;

	if (gamepadEvent->triggerEventIf != ESimpleControllerEventType::OnChange) {
		if (persistentEventsThread == nullptr) {
			persistentEventsThread = new FPersistentEventsThread();
		}
		persistentGamepadTriggerEvents.Add(gamepadEvent);
	}

	TArray<USimpleControllerGamepadTriggerAxisEvents*> eventArray;
	if (registeredGamepadTriggerAxisEvents.Find(gamepadEvent->connectionIndex) != nullptr) {
		eventArray = *registeredGamepadTriggerAxisEvents.Find(gamepadEvent->connectionIndex);
	}
	eventArray.Add(gamepadEvent);
	registeredGamepadTriggerAxisEvents.Add(gamepadEvent->connectionIndex, eventArray);

}


void USimpleControllerBPLibrary::registerGamepadFaceButtonEvents(USimpleControllerGamepadFaceButtonEvents* gamepadEvent) {
	if (gamepadEvent == nullptr)
		return;

	if (gamepadEvent->connectionIndex < 0)
		return;


	TArray<USimpleControllerGamepadFaceButtonEvents*> eventArray;
	if (registeredGamepadFaceButtonEvents.Find(gamepadEvent->connectionIndex) != nullptr) {
		eventArray = *registeredGamepadFaceButtonEvents.Find(gamepadEvent->connectionIndex);
	}
	eventArray.Add(gamepadEvent);
	registeredGamepadFaceButtonEvents.Add(gamepadEvent->connectionIndex, eventArray);
}

void USimpleControllerBPLibrary::registerGamepadControlButtonEvents(USimpleControllerGamepadControlButtonEvents* gamepadEvent) {
	if (gamepadEvent == nullptr)
		return;

	if (gamepadEvent->connectionIndex < 0)
		return;


	TArray<USimpleControllerGamepadControlButtonEvents*> eventArray;
	if (registeredGamepadControlButtonEvents.Find(gamepadEvent->connectionIndex) != nullptr) {
		eventArray = *registeredGamepadControlButtonEvents.Find(gamepadEvent->connectionIndex);
	}
	eventArray.Add(gamepadEvent);
	registeredGamepadControlButtonEvents.Add(gamepadEvent->connectionIndex, eventArray);
}

void USimpleControllerBPLibrary::registerGamepadStickButtonEvents(USimpleControllerGamepadStickButtonEvents* gamepadEvent) {
	if (gamepadEvent == nullptr)
		return;

	if (gamepadEvent->connectionIndex < 0)
		return;


	TArray<USimpleControllerGamepadStickButtonEvents*> eventArray;
	if (registeredGamepadStickButtonEvents.Find(gamepadEvent->connectionIndex) != nullptr) {
		eventArray = *registeredGamepadStickButtonEvents.Find(gamepadEvent->connectionIndex);
	}
	eventArray.Add(gamepadEvent);
	registeredGamepadStickButtonEvents.Add(gamepadEvent->connectionIndex, eventArray);
}

void USimpleControllerBPLibrary::registerGamepadShoulderButtonEvents(USimpleControllerGamepadShoulderButtonEvents* gamepadEvent) {
	if (gamepadEvent == nullptr)
		return;

	if (gamepadEvent->connectionIndex < 0)
		return;


	TArray<USimpleControllerGamepadShoulderButtonEvents*> eventArray;
	if (registeredGamepadShoulderButtonEvents.Find(gamepadEvent->connectionIndex) != nullptr) {
		eventArray = *registeredGamepadShoulderButtonEvents.Find(gamepadEvent->connectionIndex);
	}
	eventArray.Add(gamepadEvent);
	registeredGamepadShoulderButtonEvents.Add(gamepadEvent->connectionIndex, eventArray);
}

void USimpleControllerBPLibrary::registerGamepadDpadButtonEvents(USimpleControllerGamepadDpadButtonEvents* gamepadEvent) {
	if (gamepadEvent == nullptr)
		return;

	if (gamepadEvent->connectionIndex < 0)
		return;


	TArray<USimpleControllerGamepadDpadButtonEvents*> eventArray;
	if (registeredGamepadDpadButtonEvents.Find(gamepadEvent->connectionIndex) != nullptr) {
		eventArray = *registeredGamepadDpadButtonEvents.Find(gamepadEvent->connectionIndex);
	}
	eventArray.Add(gamepadEvent);
	registeredGamepadDpadButtonEvents.Add(gamepadEvent->connectionIndex, eventArray);
}

void USimpleControllerBPLibrary::registerGamepadSpecialButtonEvents(USimpleControllerGamepadSpecialButtonEvents* gamepadEvent) {
	if (gamepadEvent == nullptr)
		return;

	if (gamepadEvent->connectionIndex < 0)
		return;


	TArray<USimpleControllerGamepadSpecialButtonEvents*> eventArray;
	if (registeredGamepadSpecialButtonEvents.Find(gamepadEvent->connectionIndex) != nullptr) {
		eventArray = *registeredGamepadSpecialButtonEvents.Find(gamepadEvent->connectionIndex);
	}
	eventArray.Add(gamepadEvent);
	registeredGamepadSpecialButtonEvents.Add(gamepadEvent->connectionIndex, eventArray);
}

void USimpleControllerBPLibrary::registerAsycEventStatus(USimpleControllerStatusAsyncEvent* asyncEvent){
	registeredAsyncEventsStatus.Add(asyncEvent);
}

void USimpleControllerBPLibrary::unRegisterAsycEventStatus(USimpleControllerStatusAsyncEvent* asyncEvent){
	registeredAsyncEventsStatus.Remove(asyncEvent);
}

void USimpleControllerBPLibrary::registerAsycEventButton(USimpleControllerButtonAsyncEvent* asyncEvent){
	registeredAsyncEventsButton.Add(asyncEvent);
}

void USimpleControllerBPLibrary::unRegisterAsycEventButton(USimpleControllerButtonAsyncEvent* asyncEvent){
	registeredAsyncEventsButton.Remove(asyncEvent);
}

void USimpleControllerBPLibrary::registerAsycEventAxis(USimpleControllerAxisAsyncEvent* asyncEvent){
	registeredAsyncEventsAxis.Add(asyncEvent);


	if (asyncEvent->triggerEventIf == ESimpleControllerEventType::OnTick) {
		runTicks = true;
	}
	if (asyncEvent->triggerEventIf == ESimpleControllerEventType::Persistent30 ||
		asyncEvent->triggerEventIf == ESimpleControllerEventType::Persistent60 ||
		asyncEvent->triggerEventIf == ESimpleControllerEventType::Persistent120) {

		if (persistentEventsThread == nullptr) {
			persistentEventsThread = new FPersistentEventsThread();
		}

	}
}

void USimpleControllerBPLibrary::unRegisterAsycEventAxis(USimpleControllerAxisAsyncEvent* asyncEvent){
	if (asyncEvent != nullptr) {
		registeredAsyncEventsAxis.Remove(asyncEvent);
	}

	if (persistentAxisActions.Num() == 0 && registeredAsyncEventsAxis.Num() == 0) {
		if (persistentEventsThread != nullptr) {
			persistentEventsThread->stopThread();
			delete persistentEventsThread;
			persistentEventsThread = nullptr;
		}
		runTicks = false;
	}
}


void USimpleControllerBPLibrary::buttonDownEvent(int32 deviceIndex, int32 buttonID, bool joystickEvent) {

	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}



	//gamepad events only by SDL_CONTROLLER.... events. Otherwise the buttonids are wrong.
	if (d->controllerType == ESimpleControllerType::GAMECONTROLLER && joystickEvent) {
		return;
	}

	//mapping mode
	if (simpleControllerMappingButton != nullptr) {
		USimpleControllerMappingButton* simpleControllerButtonMappingLocal = simpleControllerMappingButton;
		if (IsInGameThread()) {
			simpleControllerButtonMappingLocal->fireSuccessEvent(buttonID, d);
		}
		else {
			AsyncTask(ENamedThreads::GameThread, [d, buttonID, simpleControllerButtonMappingLocal]() {
				simpleControllerButtonMappingLocal->fireSuccessEvent(buttonID, d);
			});
		}

	}
	//normal mode
	else {
		if (IsInGameThread()) {
			controllerTarget->onButtonDownEventDelegate.Broadcast(d->deviceID, buttonID, deviceIndex, *d, d->connectionIndex);
			for (int32 i = 0; i < registeredAsyncEventsButton.Num(); i++){
				registeredAsyncEventsButton[i]->fireEvent(true, buttonID, d);
			}
		}
		else {
			AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, buttonID]() {
				if (!FUObjectThreadContext::Get().IsRoutingPostLoad) {
					controllerTarget->onButtonDownEventDelegate.Broadcast(d->deviceID, buttonID, deviceIndex, *d, d->connectionIndex);
					for (int32 i = 0; i < USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsButton.Num(); i++) {
						USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsButton[i]->fireEvent(true, buttonID, d);
					}
				}
				});
		}


		if (registeredButtonActions.Find(d->connectionIndex) != nullptr) {
			if (registeredButtonActions.Find(d->connectionIndex)->Find(buttonID) != nullptr) {
				TArray<FSimpleControllerMappingButtonAction*> actionArray = *registeredButtonActions.Find(d->connectionIndex)->Find(buttonID);
				if (IsInGameThread()) {
					for (int32 j = 0; j < actionArray.Num(); j++) {
						FSimpleControllerMappingButtonAction* action = actionArray[j];

						if (action != nullptr) {
							for (int32 i = 0; i < action->buttonEvents.Num(); i++) {
								if (action->buttonEvents[i] != nullptr) {
									action->buttonEvents[i]->fireEvent(true);
								}
							}
						}
					}
				}
				else {
					AsyncTask(ENamedThreads::GameThread, [actionArray]() {
						for (int32 j = 0; j < actionArray.Num(); j++) {
							FSimpleControllerMappingButtonAction* action = actionArray[j];

							if (action != nullptr) {
								for (int32 i = 0; i < action->buttonEvents.Num(); i++) {
									if (action->buttonEvents[i] != nullptr) {
										action->buttonEvents[i]->fireEvent(true);
									}
								}
							}
						}
						});
				}
			}
		}
	}

}

void USimpleControllerBPLibrary::buttonUpEvent(int32 deviceIndex, int32 buttonID, bool joystickEvent) {

	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}

	//gamepad events only by SDL_CONTROLLER.... events. Otherwise the buttonids are wrong.
	if (d->controllerType == ESimpleControllerType::GAMECONTROLLER && joystickEvent) {
		return;
	}

	if (simpleControllerMappingButton == nullptr) {
		if (IsInGameThread()) {
			controllerTarget->onButtonUpEventDelegate.Broadcast(d->deviceID, buttonID, deviceIndex, *d, d->connectionIndex);
			for (int32 i = 0; i < registeredAsyncEventsButton.Num(); i++){
				registeredAsyncEventsButton[i]->fireEvent(false, buttonID, d);
			}
		}
		else {
			AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, buttonID]() {
				if (!FUObjectThreadContext::Get().IsRoutingPostLoad) {
					controllerTarget->onButtonUpEventDelegate.Broadcast(d->deviceID, buttonID, deviceIndex, *d, d->connectionIndex);
					for (int32 i = 0; i < USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsButton.Num(); i++) {
						USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsButton[i]->fireEvent(false, buttonID, d);
					}
				}
				});
		}


		if (registeredButtonActions.Find(d->connectionIndex) != nullptr) {
			if (registeredButtonActions.Find(d->connectionIndex)->Find(buttonID) != nullptr) {
				TArray<FSimpleControllerMappingButtonAction*> actionArray = *registeredButtonActions.Find(d->connectionIndex)->Find(buttonID);
				if (IsInGameThread()) {
					for (int32 j = 0; j < actionArray.Num(); j++) {
						FSimpleControllerMappingButtonAction* action = actionArray[j];

						if (action != nullptr) {
							for (int32 i = 0; i < action->buttonEvents.Num(); i++) {
								if (action->buttonEvents[i] != nullptr) {
									action->buttonEvents[i]->fireEvent(false);
								}
							}
						}
					}
				}
				else {
					AsyncTask(ENamedThreads::GameThread, [actionArray]() {
						for (int32 j = 0; j < actionArray.Num(); j++) {
							FSimpleControllerMappingButtonAction* action = actionArray[j];

							if (action != nullptr) {
								for (int32 i = 0; i < action->buttonEvents.Num(); i++) {
									if (action->buttonEvents[i] != nullptr) {
										action->buttonEvents[i]->fireEvent(false);
									}
								}
							}
						}
						});
				}

			}
		}
	}
}



void USimpleControllerBPLibrary::controllerButtonEvent(bool pressDown, int32 deviceIndex, int32 buttonID) {

	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}

	if (IsInGameThread()) {
		controllerButtonEventSubFunction(pressDown, d, buttonID);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, buttonID, pressDown]() {
			USimpleControllerBPLibrary::controllerTarget->controllerButtonEventSubFunction(pressDown, d, buttonID);
		});
	}

}

void USimpleControllerBPLibrary::controllerButtonEventSubFunction(bool pressDown, FSimpleControllerDevice* d, int32 buttonID){
	if (buttonID >= SimpleControllerPlugin_CONTROLLER_BUTTON_A && buttonID <= SimpleControllerPlugin_CONTROLLER_BUTTON_Y) {

		if (registeredGamepadFaceButtonEvents.Find(d->connectionIndex) == nullptr) {
			return;
		}

		TArray<USimpleControllerGamepadFaceButtonEvents*> buttonEventsArray = *registeredGamepadFaceButtonEvents.Find(d->connectionIndex);


		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {

			switch (buttonID)
			{
			case SimpleControllerPlugin_CONTROLLER_BUTTON_A:
				buttonEventsArray[i]->fireButtonBottomEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_B:
				buttonEventsArray[i]->fireButtonRightEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_X:
				buttonEventsArray[i]->fireButtonLeftEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_Y:
				buttonEventsArray[i]->fireButtonTopEvent(pressDown);
				break;

			}
		}
		return;
	}

	if (buttonID >= SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_UP && buttonID <= SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_RIGHT) {


		//fire hat event (directionalPadEvent) 
		if (pressDown) {
			switch (buttonID)
			{
			case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_UP:
				if (d->lastDpadValue != 0) {
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, 1 +d->lastDpadValue , 0,false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, 1, 0,false);
				}

				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_DOWN:
				if (d->lastDpadValue != 0) {
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, 4 +d->lastDpadValue , 0,false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, 4, 0,false);
				}
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_LEFT:
				if (d->lastDpadValue != 0) {
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, 8 +d->lastDpadValue , 0,false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, 8, 0,false);
				}
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_RIGHT:
				if (d->lastDpadValue != 0) {
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, 2 +d->lastDpadValue , 0,false);
				}
				else {
					USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, 2, 0,false);
				}
				break;
			}
		}
		else {

			if (d->lastDpadValue <= 0) {
				d->lastDpadValue = 0;
			}
			else {
				switch (buttonID)
				{
				case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_UP:
					d->lastDpadValue = d->lastDpadValue - 1;
					break;
				case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_DOWN:
					d->lastDpadValue = d->lastDpadValue - 4;
					break;
				case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_LEFT:
					d->lastDpadValue = d->lastDpadValue - 8;
					break;
				case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_RIGHT:
					d->lastDpadValue = d->lastDpadValue - 2;
					break;
				}
			}

			USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(d->deviceIndex, d->lastDpadValue, 0,false);
		}
		

		if (registeredGamepadDpadButtonEvents.Find(d->connectionIndex) == nullptr) {
			return;
		}

		TArray<USimpleControllerGamepadDpadButtonEvents*> buttonEventsArray = *registeredGamepadDpadButtonEvents.Find(d->connectionIndex);
		
		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {

			switch (buttonID)
			{
			case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_UP:
				buttonEventsArray[i]->fireDpadTopEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_DOWN:
				buttonEventsArray[i]->fireDpadBottomEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_LEFT:
				buttonEventsArray[i]->fireDpadLeftEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_DPAD_RIGHT:
				buttonEventsArray[i]->fireDpadRightEvent(pressDown);
				break;
			}
		}

		return;
	}


	if (buttonID >= SimpleControllerPlugin_CONTROLLER_BUTTON_BACK && buttonID <= SimpleControllerPlugin_CONTROLLER_BUTTON_START) {

		if (registeredGamepadControlButtonEvents.Find(d->connectionIndex) == nullptr) {
			return;
		}

		TArray<USimpleControllerGamepadControlButtonEvents*> buttonEventsArray = *registeredGamepadControlButtonEvents.Find(d->connectionIndex);
		
		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {

			switch (buttonID)
			{
			case SimpleControllerPlugin_CONTROLLER_BUTTON_BACK:
				buttonEventsArray[i]->fireButtonBackEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_GUIDE:
				buttonEventsArray[i]->fireButtonGuideEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_START:
				buttonEventsArray[i]->fireButtonStartEvent(pressDown);
				break;
			}
		}
			
		return;
	}

	if (buttonID == SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSTICK || buttonID == SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSTICK) {

		if (registeredGamepadStickButtonEvents.Find(d->connectionIndex) == nullptr) {
			return;
		}

		TArray<USimpleControllerGamepadStickButtonEvents*> buttonEventsArray = *registeredGamepadStickButtonEvents.Find(d->connectionIndex);
				

		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {

			switch (buttonID)
			{
			case SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSTICK:
				buttonEventsArray[i]->fireButtonLeftStickEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSTICK:
				buttonEventsArray[i]->fireButtonRightEvent(pressDown);
				break;
			}
		}
			
		return;
	}

	if (buttonID == SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSHOULDER || buttonID == SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSHOULDER) {

		if (registeredGamepadShoulderButtonEvents.Find(d->connectionIndex) == nullptr) {
			return;
		}

		TArray<USimpleControllerGamepadShoulderButtonEvents*> buttonEventsArray = *registeredGamepadShoulderButtonEvents.Find(d->connectionIndex);

		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {

			switch (buttonID)
			{
			case SimpleControllerPlugin_CONTROLLER_BUTTON_LEFTSHOULDER:
				buttonEventsArray[i]->fireButtonLeftShoulderEvent(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_RIGHTSHOULDER:
				buttonEventsArray[i]->fireButtonRightShoulderEvent(pressDown);
				break;
			}
		}
		
		return;
	}

	if (buttonID >= SimpleControllerPlugin_CONTROLLER_BUTTON_MISC1 && buttonID <= SimpleControllerPlugin_CONTROLLER_BUTTON_TOUCHPAD) {

		if (registeredGamepadSpecialButtonEvents.Find(d->connectionIndex) == nullptr) {
			return;
		}

		TArray<USimpleControllerGamepadSpecialButtonEvents*> buttonEventsArray = *registeredGamepadSpecialButtonEvents.Find(d->connectionIndex);
		
		for (int32 i = 0; i < buttonEventsArray.Num(); i++) {

			switch (buttonID)
			{
			case SimpleControllerPlugin_CONTROLLER_BUTTON_MISC1:
				buttonEventsArray[i]->fireMisc1Event(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_PADDLE1:
				buttonEventsArray[i]->fireXboxElitePaddleP1Event(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_PADDLE2:
				buttonEventsArray[i]->fireXboxElitePaddleP2Event(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_PADDLE3:
				buttonEventsArray[i]->fireXboxElitePaddleP3Event(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_PADDLE4:
				buttonEventsArray[i]->fireXboxElitePaddleP4Event(pressDown);
				break;
			case SimpleControllerPlugin_CONTROLLER_BUTTON_TOUCHPAD:
				buttonEventsArray[i]->firePSTouchpadEvent(pressDown);
				break;

			}
		}
			
		return;
	}
}



void USimpleControllerBPLibrary::directionalPadEvent(int32 deviceIndex, int32 directionalPadValue, int32 directionalPadIndex, bool sdlCall) {

	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::White, "directionalPadEvent 1 Device: " + FString::FromInt(deviceIndex) + " directionalPadValue: " + FString::FromInt(directionalPadValue));

	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}


	if (IsInGameThread()) {
		d->lastDpadValue = directionalPadValue;
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, directionalPadValue]() {
			d->lastDpadValue = directionalPadValue;
		});
	}
	

	//see controllerButtonEvent
	if (sdlCall && d->controllerType == ESimpleControllerType::GAMECONTROLLER) {
		return;
	}


	//So that the hats do not overwrite possible buttonIDs.
	int32 buttonID = directionalPadValue + 1000;

	//mapping mode
	if (simpleControllerMappingButton != nullptr) {
		USimpleControllerMappingButton* simpleControllerButtonMappingLocal = simpleControllerMappingButton;
		if (IsInGameThread()) {
			simpleControllerButtonMappingLocal->fireSuccessEvent(buttonID, d);
		}
		else {
			AsyncTask(ENamedThreads::GameThread, [d, buttonID, simpleControllerButtonMappingLocal]() {
				simpleControllerButtonMappingLocal->fireSuccessEvent(buttonID, d);
				});
		}
	}

	//normal mode
	else {
		if (IsInGameThread()) {
			controllerTarget->onDirectionalPadEventDelegate.Broadcast(d->deviceID, directionalPadValue, directionalPadIndex, deviceIndex, *d, d->connectionIndex);
		}
		else {
			AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, directionalPadValue, directionalPadIndex]() {
				if (!FUObjectThreadContext::Get().IsRoutingPostLoad) {
					controllerTarget->onDirectionalPadEventDelegate.Broadcast(d->deviceID, directionalPadValue, directionalPadIndex, deviceIndex, *d, d->connectionIndex);
				}
			});
		}


		if (registeredButtonActions.Find(d->connectionIndex) != nullptr) {
			TArray<FSimpleControllerMappingButtonAction*> actionArray;
			bool pressed = true;
			//hat pressed
			if (directionalPadValue > 0 && registeredButtonActions.Find(d->connectionIndex)->Find(buttonID) != nullptr) {
				actionArray = *registeredButtonActions.Find(d->connectionIndex)->Find(buttonID);
			}
			//hat released
			else {
				pressed = false;
				for (auto& actionArrayElement : *registeredButtonActions.Find(d->connectionIndex)) {
					for (int32 i = 0; i < actionArrayElement.Value.Num(); i++){
						if (actionArrayElement.Value[i]->buttonID > 1000) {
							actionArray.Add(actionArrayElement.Value[i]);
						}
					}
				}
			}

			if (actionArray.Num() == 0) {
				return;
			}
			if (IsInGameThread()) {
				for (int32 j = 0; j < actionArray.Num(); j++) {
					FSimpleControllerMappingButtonAction* action = actionArray[j];

					if (action != nullptr) {
						for (int32 i = 0; i < action->buttonEvents.Num(); i++) {
							if (action->buttonEvents[i] != nullptr) {
								action->buttonEvents[i]->fireEvent(pressed);
							}
						}
					}
				}
			}
			else {
				AsyncTask(ENamedThreads::GameThread, [actionArray,pressed]() {
					for (int32 j = 0; j < actionArray.Num(); j++) {
						FSimpleControllerMappingButtonAction* action = actionArray[j];

						if (action != nullptr) {
							for (int32 i = 0; i < action->buttonEvents.Num(); i++) {
								if (action->buttonEvents[i] != nullptr) {
									action->buttonEvents[i]->fireEvent(pressed);
								}
							}
						}
					}
				});
			}
			
		}
	}
}

void USimpleControllerBPLibrary::ballEvent(int32 deviceIndex, int32 ballIndex, int32 xRel, int32 yRel) {
	if (!isRun){
		return;
	}
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}
	if (IsInGameThread()) {
		onBallMovedEventDelegate.Broadcast(d->deviceID, ballIndex, xRel, yRel, *d);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, ballIndex, xRel, yRel]() {
			if (!FUObjectThreadContext::Get().IsRoutingPostLoad) {
				controllerTarget->onBallMovedEventDelegate.Broadcast(d->deviceID, ballIndex, xRel, yRel, *d);
			}
			});
	}

}

void USimpleControllerBPLibrary::axisMovedEvent(int32 deviceIndex, int32 axisID, int32 axisValueSDL) {

	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, "axisMovedEvent1 Device: " + FString::FromInt(deviceIndex) + " action: " + FString::FromInt(axisID) +" AxisValue: " + FString::SanitizeFloat(axisValueSDL));

	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Blue, "axisMovedEvent2 Device: " + FString::FromInt(deviceIndex) + " action: " + FString::FromInt(axisID) +" AxisValue: " + FString::SanitizeFloat(axisValueSDL));

	//UE_LOG(LogTemp, Error, TEXT("axisValueSDL: Axis: %i Value: %i "),axisID, axisValueSDL);

	//deadzone
	if (axisValueSDL > 0) {
		if (d->deadZoneMaxPositive.Find(axisID) != nullptr) {
			if (axisValueSDL > *d->deadZoneMaxPositive.Find(axisID)) {
				return;
			}
		}
		if (d->deadZoneMinPositive.Find(axisID) != nullptr) {
			if (axisValueSDL < *d->deadZoneMinPositive.Find(axisID)) {
				return;
			}
		}
	}
	if (axisValueSDL < 0) {
		if (d->deadZoneMaxNegative.Find(axisID) != nullptr) {
			if (axisValueSDL < *d->deadZoneMaxNegative.Find(axisID)) {
				return;
			}
		}
		if (d->deadZoneMinNegative.Find(axisID) != nullptr) {
			if (axisValueSDL > *d->deadZoneMinNegative.Find(axisID)) {
				return;
			}
		}
	}


	
	float axisValue = 0;
	if (axisValueSDL < 0) {
		axisValue = ((float)axisValueSDL / maxAxisValueNegative) * -1;
	}
	else if (axisValueSDL > 0) {
		axisValue = (float)axisValueSDL / maxAxisValuePositive;
	}
	//UE_LOG(LogTemp, Warning, TEXT("axisValue: Axis: %i Value: %f "),axisID, axisValue);

	if (d->isNegativeAxis.Find(axisID)){
		axisValue = (axisValue + 1) / 2;
	}
	else {
		if (d->isPositiveAxis.Find(axisID)) {
			axisValue = - ((axisValue - 1) / 2);
		}
	}



	if (simpleControllerMappingAxis != nullptr) {
		if ((axisValue > 0 && axisValue >= simpleControllerMappingAxis->axisValueToReact) ||
			(axisValue < 0 && axisValue <= -simpleControllerMappingAxis->axisValueToReact)) {
			USimpleControllerMappingAxis* simpleControllerMappingAxisLocal = simpleControllerMappingAxis;
			simpleControllerMappingAxis = nullptr;
			AsyncTask(ENamedThreads::GameThread, [d, axisID, simpleControllerMappingAxisLocal]() {
				simpleControllerMappingAxisLocal->fireSuccessEvent(axisID, d);
			});
		}
		return;
	}
	if (simpleControllerCalibrateAxis != nullptr) {
		if (IsInGameThread()) {
			simpleControllerCalibrateAxis->fireAxisMoveEvent(axisID,d->connectionIndex,axisValue);
		}
		else {
			USimpleControllerMappingCalibrateAxis* simpleControllerCalibrateAxisLocal = simpleControllerCalibrateAxis;
			AsyncTask(ENamedThreads::GameThread, [simpleControllerCalibrateAxisLocal,axisID,axisValue,d]() {
				simpleControllerCalibrateAxisLocal->fireAxisMoveEvent(axisID,d->connectionIndex,axisValue);
			});
		}

		return;
	}

	if (IsInGameThread()) {
		axisMovedEventSubFunction(d, axisID, axisValue);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, axisID, axisValue]() {
			USimpleControllerBPLibrary::controllerTarget->axisMovedEventSubFunction(d, axisID, axisValue);
		});	
	}
	



}

void USimpleControllerBPLibrary::axisMovedEventSubFunction(FSimpleControllerDevice* d, int32 axisID, float axisValue){


	if (!FUObjectThreadContext::Get().IsRoutingPostLoad) {
		controllerTarget->onaxisMovedEventDelegate.Broadcast(d->deviceID, axisID, axisValue, d->deviceIndex, *d, d->connectionIndex);
		for (int32 i = 0; i < USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsAxis.Num(); i++) {
			if (USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsAxis[i]->triggerEventIf == ESimpleControllerEventType::OnChange) {
				USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsAxis[i]->fireEvent(axisID, axisValue, d);
			}
		}
	}

	if (USimpleControllerBPLibrary::controllerTarget->registeredAxisActions.Find(d->connectionIndex) != nullptr) {
		if (USimpleControllerBPLibrary::controllerTarget->registeredAxisActions.Find(d->connectionIndex)->Find(axisID) != nullptr) {
			TArray<FSimpleControllerMappingAxisAction*> actionArray = *USimpleControllerBPLibrary::controllerTarget->registeredAxisActions.Find(d->connectionIndex)->Find(axisID);

			for (int32 j = 0; j < actionArray.Num(); j++){

				FSimpleControllerMappingAxisAction* action = actionArray[j];

				for (int32 i = 0; i < action->axisEvents.Num(); i++) {
					if (action->axisEvents[i] != nullptr) {
						float mappingAxisValue = axisValue;

						if (action->invertAxis) {
							mappingAxisValue = axisValue * -1;
						}

						//UE_LOG(LogTemp, Error, TEXT("axisValue: Axis: %i Value: %f "),axisID, mappingAxisValue);

						action->persistentAxisValue = mappingAxisValue;
						if (action->triggerEventIf == ESimpleControllerEventType::OnChange) {
							action->axisEvents[i]->fireEvent(mappingAxisValue);
						}
					}
				}
			}
		}
	}
}

void USimpleControllerBPLibrary::axisMovedEventPersistent(ESimpleControllerEventType triggerEventIf){
	if (persistentAxisActions.Num() > 0) {
		TArray<FSimpleControllerMappingAxisAction*> actions = persistentAxisActions;
		AsyncTask(ENamedThreads::GameThread, [actions, triggerEventIf]() {
			if (FSimpleControllerModule::moduleIsRun == false) {
				return;
			}
			for (int32 i = 0; i < actions.Num(); i++)
			{
				FSimpleControllerMappingAxisAction* action = actions[i];

				if (action != nullptr && action->axisEvents.Num() > 0 && action->triggerEventIf == triggerEventIf) {
					for (int32 j = 0; j < action->axisEvents.Num(); j++) {
						action->axisEvents[j]->fireEvent(action->persistentAxisValue);
					}

				}
			}
			});
	}
	if (persistentGamepadStickEvents.Num() > 0) {
		TArray<USimpleControllerGamepadStickAxisEvents*> events = persistentGamepadStickEvents;
		AsyncTask(ENamedThreads::GameThread, [events, triggerEventIf]() {
			if (FSimpleControllerModule::moduleIsRun == false) {
				return;
			}
			for (int32 i = 0; i < events.Num(); i++)
			{
				USimpleControllerGamepadStickAxisEvents* gamepadEvent = events[i];

				if (gamepadEvent != nullptr && gamepadEvent->triggerEventIf == triggerEventIf) {
					gamepadEvent->fireLeftStickXEvent(gamepadEvent->persistentLeftX);
					gamepadEvent->fireLeftStickYEvent(gamepadEvent->persistentLeftY);
					gamepadEvent->fireRightStickXEvent(gamepadEvent->persistentRightX);
					gamepadEvent->fireRightStickYEvent(gamepadEvent->persistentRightY);
				}
			}
			});
	}

	if (persistentGamepadTriggerEvents.Num() > 0) {
		TArray<USimpleControllerGamepadTriggerAxisEvents*> events = persistentGamepadTriggerEvents;
		AsyncTask(ENamedThreads::GameThread, [events, triggerEventIf]() {
			if (FSimpleControllerModule::moduleIsRun == false) {
				return;
			}
			for (int32 i = 0; i < events.Num(); i++)
			{
				USimpleControllerGamepadTriggerAxisEvents* gamepadEvent = events[i];

				if (gamepadEvent != nullptr && gamepadEvent->triggerEventIf == triggerEventIf) {
					gamepadEvent->fireLeftTriggerEvent(gamepadEvent->persistentLeft);
					gamepadEvent->fireRightTriggerEvent(gamepadEvent->persistentRight);
				}
			}
			});
	}

	if (registeredAsyncEventsAxis.Num() > 0) {
		AsyncTask(ENamedThreads::GameThread, [triggerEventIf]() {
			if (FSimpleControllerModule::moduleIsRun == false) {
				return;
			}
			for (int32 i = 0; i < USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsAxis.Num(); i++){
				if (USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsAxis[i]->triggerEventIf == triggerEventIf) {
					USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsAxis[i]->firePersistentEvent();
				}
			}
			});
	}

}

void USimpleControllerBPLibrary::controllerAxisMovedEvent(int32 deviceIndex, int32 axisID, int32 axisValueSDL) {
	
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}

	//deadzone
	if (axisValueSDL > 0) {
		if (d->deadZoneMaxPositive.Find(axisID) != nullptr) {
			if (axisValueSDL > *d->deadZoneMaxPositive.Find(axisID)) {
				return;
			}
		}
		if (d->deadZoneMinPositive.Find(axisID) != nullptr) {
			if (axisValueSDL < *d->deadZoneMinPositive.Find(axisID)) {
				return;
			}
		}
	}
	if (axisValueSDL < 0) {
		if (d->deadZoneMaxNegative.Find(axisID) != nullptr) {
			if (axisValueSDL < *d->deadZoneMaxNegative.Find(axisID)) {
				return;
			}
		}
		if (d->deadZoneMinNegative.Find(axisID) != nullptr) {
			if (axisValueSDL > *d->deadZoneMinNegative.Find(axisID)) {
				return;
			}
		}
	}



	float axisValue = 0;
	if (axisValueSDL < 0) {
		axisValue = ((float)axisValueSDL / maxAxisValueNegative) * -1;
	}
	else if (axisValueSDL > 0) {
		axisValue = (float)axisValueSDL / maxAxisValuePositive;
	}

	if (IsInGameThread()) {
		controllerAxisMovedEventSubFunction(d, axisID, axisValue);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, axisID, axisValue]() {
			USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEventSubFunction(d, axisID, axisValue);
		});
	}

}

void USimpleControllerBPLibrary::controllerAxisMovedEventSubFunction(FSimpleControllerDevice* d, int32 axisID, float axisValue){
	if (axisID == SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERLEFT || axisID == SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERRIGHT) {

		if (registeredGamepadTriggerAxisEvents.Find(d->connectionIndex) == nullptr) {
			return;
		}

		TArray<USimpleControllerGamepadTriggerAxisEvents*> eventArray = *registeredGamepadTriggerAxisEvents.Find(d->connectionIndex);
		
		for (int32 i = 0; i < eventArray.Num(); i++) {
			USimpleControllerGamepadTriggerAxisEvents* gamepadEvent = eventArray[i];
			switch (axisID)
			{
			case SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERLEFT:
				if (gamepadEvent->triggerEventIf == ESimpleControllerEventType::OnChange) {
					gamepadEvent->fireLeftTriggerEvent(axisValue);
				}
				else {
					gamepadEvent->persistentLeft = axisValue;
				}
				break;
			case SimpleControllerPlugin_CONTROLLER_AXIS_TRIGGERRIGHT:
				if (gamepadEvent->triggerEventIf == ESimpleControllerEventType::OnChange) {
					gamepadEvent->fireRightTriggerEvent(axisValue);
				}
				else {
					gamepadEvent->persistentRight = axisValue;
				}
				break;
			}
		}
			
	}
	else {

		if (registeredGamepadStickAxisEvents.Find(d->connectionIndex) == nullptr) {
			return;
		}

		TArray<USimpleControllerGamepadStickAxisEvents*> eventArray = *registeredGamepadStickAxisEvents.Find(d->connectionIndex);
		
		for (int32 i = 0; i < eventArray.Num(); i++) {
			USimpleControllerGamepadStickAxisEvents* gamepadEvent = eventArray[i];
			switch (axisID)
			{
			case SimpleControllerPlugin_CONTROLLER_AXIS_LEFTX:
				if (gamepadEvent->triggerEventIf == ESimpleControllerEventType::OnChange) {
					gamepadEvent->fireLeftStickXEvent(axisValue);
				}
				else {
					gamepadEvent->persistentLeftX = axisValue;
				}
				break;
			case SimpleControllerPlugin_CONTROLLER_AXIS_LEFTY:
				if (gamepadEvent->triggerEventIf == ESimpleControllerEventType::OnChange) {
					gamepadEvent->fireLeftStickYEvent(axisValue);
				}
				else {
					gamepadEvent->persistentLeftY = axisValue;
				}
				break;
			case SimpleControllerPlugin_CONTROLLER_AXIS_RIGHTX:
				if (gamepadEvent->triggerEventIf == ESimpleControllerEventType::OnChange) {
					gamepadEvent->fireRightStickXEvent(axisValue);
				}
				else {
					gamepadEvent->persistentRightX = axisValue;
				}
				break;
			case SimpleControllerPlugin_CONTROLLER_AXIS_RIGHTY:
				if (gamepadEvent->triggerEventIf == ESimpleControllerEventType::OnChange) {
					gamepadEvent->fireRightStickYEvent(axisValue);
				}
				else {
					gamepadEvent->persistentRightY = axisValue;
				}
				break;
			}
		}
			
	}
}


void USimpleControllerBPLibrary::accelerationSensorEvent(int32 deviceIndex, float valueA, float valueB, float valueC) {
	if (!isRun) {
		return;
	}
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}

	if (IsInGameThread()) {
		onaccelerationSensorEventDelegate.Broadcast(d->deviceID, valueA, valueB, valueC, deviceIndex, *d);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, valueA, valueB, valueC]() {
			if (!FUObjectThreadContext::Get().IsRoutingPostLoad && controllerTarget)
				controllerTarget->onaccelerationSensorEventDelegate.Broadcast(d->deviceID, valueA, valueB, valueC, deviceIndex, *d);
		});
	}

	
}

void USimpleControllerBPLibrary::gyroSensorEvent(int32 deviceIndex, float valueA, float valueB, float valueC) {
	if (!isRun) {
		return;
	}
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}
	if (IsInGameThread()) {
		ongyroSensorEventDelegate.Broadcast(d->deviceID, valueA, valueB, valueC, deviceIndex, *d);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, valueA, valueB, valueC]() {
			if (!FUObjectThreadContext::Get().IsRoutingPostLoad && controllerTarget)
				controllerTarget->ongyroSensorEventDelegate.Broadcast(d->deviceID, valueA, valueB, valueC, deviceIndex, *d);
			});
	}

}

void USimpleControllerBPLibrary::touchMoveEvent(int32 deviceIndex, int32 touchpadIndex, int32 finger, float x, float y, float pressure) {
	if (!isRun) {
		return;
	}
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}

	if (IsInGameThread()) {
		controllerTarget->ontouchpadMotionEventDelegate.Broadcast(d->deviceID, touchpadIndex, finger, x, y, pressure, deviceIndex, *d);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, touchpadIndex, finger, x, y, pressure]() {
			if (!FUObjectThreadContext::Get().IsRoutingPostLoad && controllerTarget)
				controllerTarget->ontouchpadMotionEventDelegate.Broadcast(d->deviceID, touchpadIndex, finger, x, y, pressure, deviceIndex, *d);
			});
	}
}

void USimpleControllerBPLibrary::touchDownEvent(int32 deviceIndex, int32 touchpadIndex, int32 finger, float x, float y, float pressure) {
	if (!isRun) {
		return;
	}
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}

	if (IsInGameThread()) {
		controllerTarget->ontouchpadDownEventDelegate.Broadcast(d->deviceID, touchpadIndex, finger, x, y, pressure, deviceIndex, *d);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, touchpadIndex, finger, x, y, pressure]() {
			if (!FUObjectThreadContext::Get().IsRoutingPostLoad && controllerTarget)
				controllerTarget->ontouchpadDownEventDelegate.Broadcast(d->deviceID, touchpadIndex, finger, x, y, pressure, deviceIndex, *d);
			});
	}
}

void USimpleControllerBPLibrary::touchUpEvent(int32 deviceIndex, int32 touchpadIndex, int32 finger, float x, float y, float pressure) {
	if (!isRun) {
		return;
	}
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(deviceIndex);
	}
	else {
		return;
	}

	if (IsInGameThread()) {
		controllerTarget->ontouchpadUpEventDelegate.Broadcast(d->deviceID, touchpadIndex, finger, x, y, pressure, deviceIndex, *d);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d, deviceIndex, touchpadIndex, finger, x, y, pressure]() {
			if (!FUObjectThreadContext::Get().IsRoutingPostLoad && controllerTarget)
				controllerTarget->ontouchpadUpEventDelegate.Broadcast(d->deviceID, touchpadIndex, finger, x, y, pressure, deviceIndex, *d);
			});
	}
}

void USimpleControllerBPLibrary::removeDeviceFromConnectionIndex(int32 deviceIndex) {
	if (connectionIndexMap.Find(deviceIndex) != nullptr) {
		int32 index = *connectionIndexMap.Find(deviceIndex);
		if (index >= 0 && index < connectionIndexArray.Num()) {
			connectionIndexMap.Remove(deviceIndex);
			connectionIndexMapReverse.Remove(index);
			connectionIndexArray[index] = false;
		}
	}
}


void USimpleControllerBPLibrary::deviceAttachedEvent(int32 deviceIndex) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	

	/*if (controllerDeviceAttachedCheckMap.Find(SDL_JoystickGetDeviceInstanceID(deviceIndex)) != nullptr) {
		return;
	}*/
	
	SDL_Joystick* joystick = nullptr;
	SDL_GameController* sdlGameController = nullptr;
	if (SDL_IsGameController(deviceIndex) == SDL_TRUE) {
		sdlGameController = SDL_GameControllerOpen(deviceIndex);
		joystick = SDL_GameControllerGetJoystick(sdlGameController);
	}
	else {
		joystick = SDL_JoystickOpen(deviceIndex);
	}

	if (joystick == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Simple Controller Plugin: Can't connect to controller: %i"), deviceIndex);
		return;
	}

	//UE_LOG(LogTemp, Error, TEXT("deviceAttachedEvent: %i %i %i"), deviceIndex, SDL_JoystickGetDeviceInstanceID(deviceIndex), SDL_NumJoysticks());

	//on the attach event, the device index is actually the instance id-> This is absurd
	deviceIndex = SDL_JoystickGetDeviceInstanceID(deviceIndex);
	if (controllerDeviceStructMap.Find(deviceIndex) != nullptr) {
		return;
	}

	//UE_LOG(LogTemp, Error, TEXT("deviceAttachedEvent2: %i"), deviceIndex);

	FSimpleControllerDevice* d = generateControllerStruct(deviceIndex, joystick, sdlGameController);
	//controllerDeviceAttachedCheckMap.Add(SDL_JoystickInstanceID(joystick), d);
	fireDeviceAttachedEvent(d);

#endif
}

void USimpleControllerBPLibrary::fireDeviceAttachedEvent(FSimpleControllerDevice* d){
	if (IsInGameThread()) {
		if (!FUObjectThreadContext::Get().IsRoutingPostLoad && controllerTarget)
			controllerTarget->ondeviceAttachedEventDelegate.Broadcast(*d, d->connectionIndex);

		for (int32 i = 0; i < USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsStatus.Num(); i++){
			USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsStatus[i]->fireEvent(true, d);
		}

	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d]() {
			if (!FUObjectThreadContext::Get().IsRoutingPostLoad  && controllerTarget)
				controllerTarget->ondeviceAttachedEventDelegate.Broadcast(*d, d->connectionIndex);

			for (int32 i = 0; i < USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsStatus.Num(); i++){
				USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsStatus[i]->fireEvent(true, d);
			}
		});
	}


}

void USimpleControllerBPLibrary::deviceDetachedEvent() {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	if (!isRun) {
		return;
	}
	TArray<int32> deviceIdexes;
	TArray<int32> deviceIdexesDisconnected;
	controllerDeviceStructMap.GenerateKeyArray(deviceIdexes);
	for (int32 i = 0; i < deviceIdexes.Num(); i++)
	{
		FSimpleControllerDevice* d = *controllerDeviceStructMap.Find(deviceIdexes[i]);
		if (d->controllerType == ESimpleControllerType::KEYBOARD || d->controllerType == ESimpleControllerType::MOUSE) {
			continue;
		}

		if (SDL_JoystickGetAttached(d->sdlJoystick) == SDL_FALSE) {
			deviceIdexesDisconnected.Add(deviceIdexes[i]);
		}

	}

	for (int32 i = 0; i < deviceIdexesDisconnected.Num(); i++)
	{
		removeDeviceInternal(deviceIdexesDisconnected[i]);
	}
#endif
}


void USimpleControllerBPLibrary::removeDeviceInternal(int32 deviceIndex) {
	//UE_LOG(LogTemp, Error, TEXT("deviceDetachedEvent: %i"), deviceIndex);


	if (controllerDeviceStructMap.Find(deviceIndex) == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Can't disconnect controller: %i"), deviceIndex);
		return;
	}


	FSimpleControllerDevice* d = *controllerDeviceStructMap.Find(deviceIndex);
	controllerDeviceStructMap.Remove(deviceIndex);

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	//controllerDeviceAttachedCheckMap.Remove(SDL_JoystickInstanceID(d->sdlJoystick));

	if (d->sdlGameController != nullptr && d->sdlGameController != NULL) {
		if (d->hasHaptic && d->sdlHaptic != nullptr && d->sdlHaptic != NULL) {
			SDL_HapticClose(d->sdlHaptic);
			d->hasHaptic = false;
		}
		SDL_GameControllerClose(d->sdlGameController);
		d->sdlJoystick = nullptr;
	}
	if (d->sdlJoystick != nullptr && d->sdlJoystick != NULL) {
		if (d->hasHaptic && d->sdlHaptic != nullptr && d->sdlHaptic != NULL) {
			SDL_HapticClose(d->sdlHaptic);
		}
		SDL_JoystickClose(d->sdlJoystick);
	}
#endif

	controllerDeviceStructMap.Remove(deviceIndex);
	fireDeviceDetachedEvent(d);


}

void USimpleControllerBPLibrary::fireDeviceDetachedEvent(FSimpleControllerDevice* d) {
	if (IsInGameThread()) {
		if (!FUObjectThreadContext::Get().IsRoutingPostLoad && controllerTarget) {
			controllerTarget->ondeviceDetachedEventDelegate.Broadcast(*d, d->connectionIndex);
			controllerTarget->removeDeviceFromConnectionIndex(d->deviceIndex);

			for (int32 i = 0; i < USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsStatus.Num(); i++){
				USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsStatus[i]->fireEvent(false, d);
			}
		}
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [d]() {
			if (!FUObjectThreadContext::Get().IsRoutingPostLoad && controllerTarget) {
				controllerTarget->ondeviceDetachedEventDelegate.Broadcast(*d, d->connectionIndex);
				controllerTarget->removeDeviceFromConnectionIndex(d->deviceIndex);

				for (int32 i = 0; i < USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsStatus.Num(); i++){
					USimpleControllerBPLibrary::controllerTarget->registeredAsyncEventsStatus[i]->fireEvent(false, d);
				}
			}
			});
	}
}


void USimpleControllerBPLibrary::breakDeviceInfo(FSimpleControllerDevice device, int32& deviceIndex, int32& connectionIndex, FString& deviceID, 
	FString& deviceName, FString& controllerName, int32& vendorID, int32& productID/*, int32& firmwareVersion*/, int32& numAxes, int32& numButtons, int32& numDirectionalPadAxes,
	int32& numBalls, bool& hasHaptic, bool& hasRumble, bool& hasRumbleTriggers, bool& hasAccelerationSensor, bool& hasGyroSensor, 
	bool& hasLED, bool& gamepadAPI_Support, bool& isXinput, ESimpleControllerType& type) {
	deviceIndex = device.deviceIndex;
	connectionIndex = device.connectionIndex;
	deviceID = device.deviceID;
	deviceName = device.deviceName;
	controllerName = device.controllerName;
	vendorID = device.vendorID;
	productID = device.productID;
	/*firmwareVersion = device.firmwareVersion;*/
	numAxes = device.numAxes;
	numButtons = device.numButtons;
	numDirectionalPadAxes = device.numDirectionalPadAxes;
	numBalls = device.numBalls;
	hasHaptic = device.hasHaptic;
	hasRumble = device.hasRumble;
	hasRumbleTriggers = device.hasRumbleTriggers;
	hasAccelerationSensor = device.hasAccelerationSensor;
	hasGyroSensor = device.hasGyroSensor;
	hasLED = device.hasLED;
	if (device.sdlGameController != nullptr) {
		gamepadAPI_Support = true;
	}
	isXinput = device.isXinput;
	type = device.controllerType;
}

void USimpleControllerBPLibrary::breakButtonAction(FSimpleControllerMappingButtonAction action, FString& actionName, FString& description,FString& tag,
	int32& connectionIndex,	int32& buttonID,FString& buttonName, FString& deviceName, FString& controllerName, int32& vendorID, int32& productID){
	actionName = action.actionName;
	description = action.description;
	tag = action.tag;
	connectionIndex = action.connectionIndex;
	buttonID = action.buttonID;
	buttonName = action.buttonName;
	deviceName = action.deviceName;
	controllerName = action.controllerName;
	vendorID = action.vendorID;
	productID = action.productID;

}

void USimpleControllerBPLibrary::breakAxisAction(FSimpleControllerMappingAxisAction action, FString& actionName, FString& description,FString& tag,
	int32& connectionIndex,	int32& axisID, bool& invertAxis, FString& deviceName, FString& controllerName, int32& vendorID, int32& productID){
	actionName = action.actionName;
	description = action.description;
	tag = action.tag;
	connectionIndex = action.connectionIndex;
	axisID = action.axisID;
	invertAxis = action.invertAxis;
	deviceName = action.deviceName;
	controllerName = action.controllerName;
	vendorID = action.vendorID;
	productID = action.productID;
}

void USimpleControllerBPLibrary::changeAxisActionSettings(FSimpleControllerMappingProfile mappingProfile, FString actionName, bool invertAxis){
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance->axisActionsInstances.Find(actionName) != nullptr) {
		FSimpleControllerMappingAxisAction* action = *profileInstance->axisActionsInstances.Find(actionName);
		action->invertAxis = invertAxis;
		action->persistentAxisValue = action->persistentAxisValue * -1;
	}
	if (profileInstance->axisActions.Find(actionName) != nullptr) {
		FSimpleControllerMappingAxisAction action = *profileInstance->axisActions.Find(actionName);
		action.invertAxis = invertAxis;
		profileInstance->axisActions.Add(actionName, action);
	}
}

void USimpleControllerBPLibrary::breakMappingProfile(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingButtonAction>& buttonActions, TMap<FString, FSimpleControllerMappingAxisAction>& axisActions){
	buttonActions.Empty();
	axisActions.Empty();

	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(profile);

	buttonActions.Append(profileInstance->buttonActions);
	axisActions.Append(profileInstance->axisActions);
}

void USimpleControllerBPLibrary::getButtonActions(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingButtonAction>& buttonActions){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->getButtonActionsNonStatic(profile,buttonActions);
}

void USimpleControllerBPLibrary::getButtonActionsNonStatic(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingButtonAction>& buttonActions){
	buttonActions.Empty();
	FSimpleControllerMappingProfile* profileinstance = getMappingProfileInstance(profile);
	for (auto& actionElement : profileinstance->buttonActionsInstances) {
		buttonActions.Add(actionElement.Key, *actionElement.Value);
	}
}

void USimpleControllerBPLibrary::getAxisActions(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingAxisAction>& axisActions){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->getAxisActionsNonStatic(profile, axisActions);
}

void USimpleControllerBPLibrary::getAxisActionsNonStatic(FSimpleControllerMappingProfile profile, TMap<FString, FSimpleControllerMappingAxisAction>& axisActions){
	axisActions.Empty();
	FSimpleControllerMappingProfile* profileinstance = getMappingProfileInstance(profile);
	for (auto& actionElement : profileinstance->axisActionsInstances) {
		axisActions.Add(actionElement.Key, *actionElement.Value);
	}
}

void USimpleControllerBPLibrary::breakDeviceForceFeedbackInfo(FSimpleControllerDevice device, bool& forceFeedback_CONSTANT, bool& forceFeedback_SINE, bool& forceFeedback_LEFTRIGHT, bool& forceFeedback_TRIANGLE, bool& forceFeedback_SAWTOOTHUP, bool& forceFeedback_SAWTOOTHDOWN, bool& forceFeedback_RAMP, bool& forceFeedback_SPRING, bool& forceFeedback_DAMPER, bool& forceFeedback_INERTIA, bool& forceFeedback_FRICTION, bool& forceFeedback_CUSTOM, bool& forceFeedback_GAIN, bool& forceFeedback_AUTOCENTER, bool& forceFeedback_STATUS, bool& forceFeedback_PAUSE, bool& forceFeedback_POLAR, bool& forceFeedback_CARTESIAN, bool& forceFeedback_SPHERICAL, bool& forceFeedback_INFINITY, int32& maxSimultaneouslyEffects) {
	forceFeedback_CONSTANT = device.forceFeedback_CONSTANT;
	forceFeedback_SINE = device.forceFeedback_SINE;
	forceFeedback_LEFTRIGHT = device.forceFeedback_LEFTRIGHT;
	forceFeedback_TRIANGLE = device.forceFeedback_TRIANGLE;
	forceFeedback_SAWTOOTHUP = device.forceFeedback_SAWTOOTHUP;
	forceFeedback_SAWTOOTHDOWN = device.forceFeedback_SAWTOOTHDOWN;
	forceFeedback_RAMP = device.forceFeedback_RAMP;
	forceFeedback_SPRING = device.forceFeedback_SPRING;
	forceFeedback_DAMPER = device.forceFeedback_DAMPER;
	forceFeedback_INERTIA = device.forceFeedback_INERTIA;
	forceFeedback_FRICTION = device.forceFeedback_FRICTION;
	forceFeedback_CUSTOM = device.forceFeedback_CUSTOM;
	forceFeedback_GAIN = device.forceFeedback_GAIN;
	forceFeedback_AUTOCENTER = device.forceFeedback_AUTOCENTER;
	forceFeedback_STATUS = device.forceFeedback_STATUS;
	forceFeedback_PAUSE = device.forceFeedback_PAUSE;
	forceFeedback_POLAR = device.forceFeedback_POLAR;
	forceFeedback_CARTESIAN = device.forceFeedback_CARTESIAN;
	forceFeedback_SPHERICAL = device.forceFeedback_SPHERICAL;
	forceFeedback_INFINITY = device.forceFeedback_INFINITY;
	maxSimultaneouslyEffects = device.maxSimultaneouslyEffects;
}


//void USimpleControllerBPLibrary::breakAxisStatus(FSimpleControllerAxisStatus axisStatus, float& leftStickX, float& leftStickY, float& rightStickX, float& rightStickY, float& leftTrigger, float& rightTrigger) {
//	leftStickX = axisStatus.leftStickX;
//	leftStickY = axisStatus.leftStickY;
//	rightStickX = axisStatus.rightStickX;
//	rightStickY = axisStatus.rightStickY;
//	leftTrigger = axisStatus.leftTrigger;
//	rightTrigger = axisStatus.rightTrigger;
//}

void USimpleControllerBPLibrary::getCurrentPowerLevel(FSimpleControllerDevice device, ESimpleControllerPowerLevel& powerLevel) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	if (device.sdlJoystick != nullptr)
		powerLevel = (ESimpleControllerPowerLevel)((uint8)SDL_JoystickCurrentPowerLevel(device.sdlJoystick) + 1);
#endif
#if PLATFORM_ANDROID
	if (USimpleControllerBPLibrary::controllerTarget->simpleControllerMobile != nullptr) {
		USimpleControllerBPLibrary::controllerTarget->simpleControllerMobile->getCurrentPowerLevel(device, powerLevel);
	}
#endif
}

bool USimpleControllerBPLibrary::deleteMappingFile(FString profileName){
	FString dir = FPaths::ProjectSavedDir() + profileName;
	if (FPaths::FileExists(*dir)) {
		return FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*dir);
	}
	return true;
}

bool USimpleControllerBPLibrary::createMappingFile(FString profileName, FString fileData, bool overwriteExistingFile){
	FString dir = FPaths::ProjectSavedDir() + profileName;
	if (overwriteExistingFile == false && FPaths::FileExists(*dir)) {
		UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin createMappingFile: File already exists."));
		return false;
	}

	return FFileHelper::SaveStringToFile(fileData,*dir);
}

void USimpleControllerBPLibrary::cancelMapping(){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->cancelMappingNonStatic();
}

void USimpleControllerBPLibrary::cancelMappingNonStatic(){
	if (simpleControllerMappingButton != nullptr) {
		if (simpleControllerMappingButton->mappingThread != nullptr) {
			simpleControllerMappingButton->mappingThread->stopThread();
			simpleControllerMappingButton->mappingThread = nullptr;
		}
		simpleControllerMappingButton = nullptr;
	}

	if (simpleControllerMappingAxis != nullptr) {
		if (simpleControllerMappingAxis->mappingThread != nullptr) {
			simpleControllerMappingAxis->mappingThread->stopThread();
			simpleControllerMappingAxis->mappingThread = nullptr;
		}
		simpleControllerMappingAxis = nullptr;
	}
}

void USimpleControllerBPLibrary::getMappedButtonActions(bool& isMapped, TArray<FString>& actionNames, int32 buttonID, int32 connectionIndex){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappedButtonActionsNonStatic(isMapped, actionNames, buttonID, connectionIndex);
}

void USimpleControllerBPLibrary::getMappedButtonActionsNonStatic(bool& isMapped, TArray<FString>& actionNames, int32 buttonID, int32 connectionIndex){
	actionNames.Empty();
	if (registeredButtonActions.Find(connectionIndex) != nullptr) {
		if (registeredButtonActions.Find(connectionIndex)->Find(buttonID) != nullptr) {
			TArray<FSimpleControllerMappingButtonAction*> actionArray = *registeredButtonActions.Find(connectionIndex)->Find(buttonID);
			for (int32 j = 0; j < actionArray.Num(); j++) {
				actionNames.Add(actionArray[j]->actionName);
			}
		}
	}
	if (actionNames.Num() > 0) {
		isMapped = true;
	}
	else {
		isMapped = false;
	}
}

void USimpleControllerBPLibrary::getMappedAxisActions(bool& isMapped, TArray<FString>&actionNames, int32 axisID, int32 connectionIndex) {
	USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappedAxisActionsNonStatic(isMapped, actionNames, axisID, connectionIndex);
}

void USimpleControllerBPLibrary::getMappedAxisActionsNonStatic(bool& isMapped, TArray<FString>& actionNames, int32 axisID, int32 connectionIndex) {
	actionNames.Empty();
	if (registeredAxisActions.Find(connectionIndex) != nullptr) {
		if (registeredAxisActions.Find(connectionIndex)->Find(axisID) != nullptr) {
			TArray<FSimpleControllerMappingAxisAction*> actionArray = *registeredAxisActions.Find(connectionIndex)->Find(axisID);
			for (int32 j = 0; j < actionArray.Num(); j++) {
				actionNames.Add(actionArray[j]->actionName);
			}
		}
	}
	if (actionNames.Num() > 0) {
		isMapped = true;
	}
	else {
		isMapped = false;
	}
}

void USimpleControllerBPLibrary::getMappingActionsByTag(FSimpleControllerMappingProfile mappingProfile,FString tag, TArray<FSimpleControllerMappingButtonAction>& buttonActions, TArray<FSimpleControllerMappingAxisAction>& axisActions){
	USimpleControllerBPLibrary::controllerTarget->getMappingActionsByTagNonStatic(mappingProfile,tag, buttonActions, axisActions);
}

void USimpleControllerBPLibrary::getMappingActionsByTagNonStatic(FSimpleControllerMappingProfile mappingProfile,FString tag, TArray<FSimpleControllerMappingButtonAction>& buttonActions,
	TArray<FSimpleControllerMappingAxisAction>& axisActions){

	buttonActions.Empty();
	axisActions.Empty();

	if (tag.IsEmpty()) {
		return;
	}

	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance == nullptr) {
		return;
	}


	for (auto& element : profileInstance->buttonActionsInstances) {
		if (element.Value->tag.Equals(tag)) {
			buttonActions.Add(*element.Value);
		}
	}

	for (auto& element : profileInstance->axisActionsInstances) {
		if (element.Value->tag.Equals(tag)) {
			axisActions.Add(*element.Value);
		}
	}

}

void USimpleControllerBPLibrary::removeButtonMapping(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->removeButtonMappingNonStatic(mappingProfile, actionName);
}

void USimpleControllerBPLibrary::removeButtonMappingNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance == nullptr) {
		return;
	}
	if (profileInstance->buttonActionsInstances.Find(actionName) != nullptr) {
		FSimpleControllerMappingButtonAction* buttonAction = *profileInstance->buttonActionsInstances.Find(actionName);
		unregisterActionButtonEvent(buttonAction);

		buttonAction->connectionIndex = -1;
		buttonAction->buttonID = -1;

		buttonAction->buttonName = "";
		buttonAction->deviceName = "";
		buttonAction->controllerName = "";

		buttonAction->vendorID = -1;
		buttonAction->productID = -1;
	}
}

bool USimpleControllerBPLibrary::isButtonMapped(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	return USimpleControllerBPLibrary::getSimpleControllerTarget()->isButtonMappedNonStatic(mappingProfile,actionName);
}

bool USimpleControllerBPLibrary::isButtonMappedNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance->buttonActionsInstances.Find(actionName) != nullptr) {
		return isRegisterActionButtonEvent(*profileInstance->buttonActionsInstances.Find(actionName));
	}
	return false;
}

bool USimpleControllerBPLibrary::mapButton(FSimpleControllerMappingProfile mappingProfile, FString actionName, FSimpleControllerDevice device, int32 buttonID){
	return USimpleControllerBPLibrary::getSimpleControllerTarget()->mapButtonNonStatic(mappingProfile, actionName, device, buttonID);
}

bool USimpleControllerBPLibrary::mapButtonNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName, FSimpleControllerDevice device, int32 buttonID){
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance == nullptr) {
		return false;
	}
	if (profileInstance->buttonActionsInstances.Find(actionName) == nullptr) {
		return false;
	}
	FSimpleControllerMappingButtonAction* buttonAction = *profileInstance->buttonActionsInstances.Find(actionName);

	unregisterActionButtonEvent(buttonAction);

	buttonAction->buttonID = buttonID;
	buttonAction->connectionIndex = device.connectionIndex;
	buttonAction->vendorID = device.vendorID;
	buttonAction->productID = device.productID;
	buttonAction->deviceName = device.deviceName;
	buttonAction->controllerName = device.controllerName;
	buttonAction->buttonName = USimpleControllerBPLibrary::getSimpleControllerTarget()->getButtonName(device, buttonID);

	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerActionButtonEvent(profileInstance,buttonAction);


	return true;
}

void USimpleControllerBPLibrary::removeAxisMapping(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->removeAxisMappingNonStatic(mappingProfile, actionName);
}

void USimpleControllerBPLibrary::removeAxisMappingNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance->axisActionsInstances.Find(actionName) != nullptr) {
		FSimpleControllerMappingAxisAction* axisAction = *profileInstance->axisActionsInstances.Find(actionName);
		unregisterActionAxisEvent(axisAction);

		axisAction->connectionIndex = -1;
		axisAction->axisID = -1;

		axisAction->deviceName = "";
		axisAction->controllerName = "";
		axisAction->vendorID = -1;
		axisAction->productID = -1;
		axisAction->persistentAxisValue = 0;
		axisAction->calibrationNegative = false;
		axisAction->calibrationPositive = false;

		axisAction->triggerEventIf = ESimpleControllerEventType::OnChange;
		axisAction->axisEvents.Empty();	
	}
}

bool USimpleControllerBPLibrary::isAxisMapped(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	return USimpleControllerBPLibrary::getSimpleControllerTarget()->isAxisMappedNonStatic(mappingProfile,actionName);
}

bool USimpleControllerBPLibrary::isAxisMappedNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance->axisActionsInstances.Find(actionName) != nullptr) {
		return isRegisterActionAxisEvent(*profileInstance->axisActionsInstances.Find(actionName));
	}
	return false;
}

bool USimpleControllerBPLibrary::mapAxis(FSimpleControllerMappingProfile mappingProfile, FString actionName, FSimpleControllerDevice device, int32 axisID){
	return USimpleControllerBPLibrary::getSimpleControllerTarget()->mapAxisNonStatic(mappingProfile, actionName, device, axisID);
}

bool USimpleControllerBPLibrary::mapAxisNonStatic(FSimpleControllerMappingProfile mappingProfile, FString actionName, FSimpleControllerDevice device, int32 axisID){
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance == nullptr) {
		return false;
	}
	if (profileInstance->axisActionsInstances.Find(actionName) == nullptr) {
		return false;
	}
	FSimpleControllerMappingAxisAction* axisAction = *profileInstance->axisActionsInstances.Find(actionName);

	unregisterActionAxisEvent(axisAction);

	axisAction->axisID = axisID;
	axisAction->connectionIndex = device.connectionIndex;
	axisAction->vendorID = device.vendorID;
	axisAction->productID = device.productID;
	axisAction->deviceName = device.deviceName;
	axisAction->controllerName = device.controllerName;

	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerActionAxisEvent(profileInstance,axisAction);


	return true;
}


void USimpleControllerBPLibrary::breakForceFeedbackEffect(FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32& effectID, bool& successful) {
	effectID = forceFeedbackEffect.effectID;
	successful = forceFeedbackEffect.successful;
}


TArray<FSimpleControllerDevice> USimpleControllerBPLibrary::getConnectedControllers() {

	TArray<FSimpleControllerDevice> ta;
	for (auto& element : USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap) {
		if (element.Value->controllerType == ESimpleControllerType::KEYBOARD || element.Value->controllerType == ESimpleControllerType::MOUSE)
			continue;
		ta.Add(*element.Value);
	}
	return ta;
}

FSimpleControllerDevice USimpleControllerBPLibrary::findControllerByDeviceIndex(int32 deviceIndex, bool& found) {
	FSimpleControllerDevice* d = nullptr;
	if (USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(deviceIndex) == nullptr) {
		found = false;
		return FSimpleControllerDevice();
	}

	found = true;
	d = *USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(deviceIndex);
	return *d;
}

FSimpleControllerDevice USimpleControllerBPLibrary::findControllerByDeviceID(FString deviceID, bool& found) {
	found = false;
	for (auto& element : USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap) {
		if (element.Value->deviceID.Equals(deviceID)) {
			found = true;
			return *element.Value;
		}
	}
	return FSimpleControllerDevice();
}

FSimpleControllerDevice USimpleControllerBPLibrary::findControllerByConnectionIndex(int32 connectionIndex, bool& found){
	int32 deviceIndex;
	findDeviceIndexByConnectionIndex(connectionIndex, found, deviceIndex);
	if (!found) {
		if (USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(connectionIndex) != nullptr) {
			found = true;
			return **USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(connectionIndex);
		}
		return FSimpleControllerDevice();
	}

	return findControllerByDeviceIndex(deviceIndex, found);
}

void USimpleControllerBPLibrary::findDeviceIndexByConnectionIndex(int32 connectionIndex, bool& found, int32& deviceIndex) {
	if (USimpleControllerBPLibrary::controllerTarget->connectionIndexMapReverse.Find(connectionIndex) == nullptr) {
		found = false;
		deviceIndex = -1;
		return;
	}

	found = true;
	deviceIndex = *USimpleControllerBPLibrary::controllerTarget->connectionIndexMapReverse.Find(connectionIndex);
}

void USimpleControllerBPLibrary::setUnrealKeyboardAndMouseEvents(UObject* WorldContextObject, bool keyboardButtons, bool mousedButtons){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->initKeyboardEvents(WorldContextObject, keyboardButtons,  mousedButtons);
}

FSimpleControllerDevice USimpleControllerBPLibrary::setDeadZone(FSimpleControllerDevice device, int32 axisID,
	float deadZoneMaxPositive, float deadZoneMaxNegative,
	float deadZoneMinPositive, float deadZoneMinNegative){

	if (USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(device.deviceIndex) != nullptr) {
		FSimpleControllerDevice* d =  *USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(device.deviceIndex);

		if (deadZoneMaxPositive == 0) {
			d->deadZoneMaxPositive.Remove(axisID);
			device.deadZoneMaxPositive.Remove(axisID);
		}
		else {
			int32 sdlValue = (int32)(deadZoneMaxPositive * 32767);
			d->deadZoneMaxPositive.Add(axisID, sdlValue);
			device.deadZoneMaxPositive.Add(axisID, sdlValue);
		}
		if (deadZoneMinPositive == 0) {
			d->deadZoneMinPositive.Remove(axisID);
			device.deadZoneMinPositive.Remove(axisID);
		}
		else {
			int32 sdlValue = (int32)(deadZoneMinPositive * 32767);
			d->deadZoneMinPositive.Add(axisID, sdlValue);
			device.deadZoneMinPositive.Add(axisID, sdlValue);
		}

		if (deadZoneMaxNegative == 0) {
			d->deadZoneMaxNegative.Remove(axisID);
			device.deadZoneMaxNegative.Remove(axisID);
		}
		else {
			int32 sdlValue = (int32)(deadZoneMaxNegative * 32767);
			d->deadZoneMaxNegative.Add(axisID, sdlValue);
			device.deadZoneMaxNegative.Add(axisID, sdlValue);
		}
		if (deadZoneMinNegative == 0) {
			d->deadZoneMinNegative.Remove(axisID);
			device.deadZoneMinNegative.Remove(axisID);
		}
		else {
			int32 sdlValue = (int32)(deadZoneMinNegative * 32767);
			d->deadZoneMinNegative.Add(axisID, sdlValue);
			device.deadZoneMinNegative.Add(axisID, sdlValue);
		}


	}
	return device;
}


void USimpleControllerBPLibrary::setLEDColor(bool& successful, FString& errorMessage, FSimpleControllerDevice device, FColor color){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	errorMessage = "";
	successful = false;

	if (!USimpleControllerBPLibrary::controllerTarget->isRun) {
		return;
	}


	if (!device.hasLED || device.sdlJoystick == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device don't support LEd->"));
		errorMessage = "Device don't support LEd->";
		successful = false;
		return;
	}
	if (SDL_JoystickSetLED(device.sdlJoystick, color.R, color.G, color.B) == 0) {
		successful = true;
		return;
	}

	UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
	errorMessage = "Device not found or device don't support haptic.";
	successful = false;
#endif
}

void USimpleControllerBPLibrary::setSensor(FSimpleControllerDevice device, ESimpleControllerSensorType type, bool enable){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	switch (type)
	{
	case ESimpleControllerSensorType::ACCELATOR:
		if (device.hasAccelerationSensor && device.sdlGameController != nullptr) {
			if (enable) {
				SDL_GameControllerSetSensorEnabled(device.sdlGameController, SDL_SENSOR_ACCEL, SDL_TRUE);
			}
			else {
				SDL_GameControllerSetSensorEnabled(device.sdlGameController, SDL_SENSOR_ACCEL, SDL_FALSE);
			}
		}
		break;
	case ESimpleControllerSensorType::GYRO:
		if (device.hasAccelerationSensor && device.sdlGameController != nullptr) {
			if (enable) {
				SDL_GameControllerSetSensorEnabled(device.sdlGameController, SDL_SENSOR_GYRO, SDL_TRUE);
			}
			else {
				SDL_GameControllerSetSensorEnabled(device.sdlGameController, SDL_SENSOR_GYRO, SDL_FALSE);
			}
		}
		break;

	}
#endif
}


void USimpleControllerBPLibrary::executeCommandOnController(bool& successful, FString& errorMessage, FSimpleControllerDevice device, TArray<uint8> bytes){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	errorMessage = "";
	successful = false;

	if (!USimpleControllerBPLibrary::controllerTarget->isRun) {
		errorMessage = "Plugin has not been initialized";
		successful = false;
		return;
	}
	if (device.sdlJoystick == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found->"));
		errorMessage = "Device not found->";
		successful = false;
		return;
	}
	if (SDL_JoystickSendEffect(device.sdlJoystick, bytes.GetData(), bytes.Num()) != 0) {
		UE_LOG(LogTemp, Error, TEXT("Command could not be executed->."));
		errorMessage = "Command could not be executed->.";
		successful = false;
		return;
	}

	successful = true;
#endif
}

TArray<uint8> USimpleControllerBPLibrary::generateDualSenseTriggerCommandOFF(bool left, bool right){
	SCDualSenseCommands* dsc = new SCDualSenseCommands();

	TArray<uint8> triggerEffect;
	triggerEffect.AddZeroed(11);
	triggerEffect[0] = SCDualSenseTriggerEffectTypes::Off;


	if (left) {
		dsc->ucEnableBits1 |= 0x08;
		FMemory::Memcpy(dsc->rgucLeftTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}
	if (right) {
		dsc->ucEnableBits1 |= 0x04;
		FMemory::Memcpy(dsc->rgucRightTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}

	TArray<uint8> fullCommand;
	fullCommand.AddUninitialized(sizeof(*dsc));
	FMemory::Memcpy(fullCommand.GetData(), dsc, fullCommand.Num());

	//for (int32 i = 0; i < fullCommand.Num(); i++)
	//{
	//	UE_LOG(LogTemp, Error, TEXT("%i|%i"),i,fullCommand[i]);
	//}

	delete dsc;

	return fullCommand;
}

TArray<uint8> USimpleControllerBPLibrary::generateDualSenseTriggerCommandFeedback(SCDualSenseTriggerEffectStartZone startingZoneEnum, SCDualSenseTriggerEffectStrength strengthEnum, bool left, bool right){

	uint8 startingZone = (uint8)startingZoneEnum;
	uint8 strength = (uint8)strengthEnum +1;

	
	SCDualSenseCommands* dsc = new SCDualSenseCommands();
	TArray<uint8> triggerEffect;
	triggerEffect.AddZeroed(11);

	int8 forceValue = (int8)((strength - 1) & 0x07);
	uint32 forceZones = 0;
	uint16 activeZones = 0;
	for (uint8 i = startingZone; i < 10; i++){
		forceZones |= (uint32)(forceValue << (3 * i));
		activeZones |= (uint16)(1 << i);
	}

	//UE_LOG(LogTemp, Error, TEXT("xxxxx activeZones:%i forceZones:%i"), activeZones, strength);

	triggerEffect[0] = SCDualSenseTriggerEffectTypes::Feedback;
	triggerEffect[1] = (uint8)((activeZones >> 0) & 0xff);
	triggerEffect[2] = (uint8)((activeZones >> 8) & 0xff);
	triggerEffect[3] = (uint8)((forceZones >> 0) & 0xff);
	triggerEffect[4] = (uint8)((forceZones >> 8) & 0xff);
	triggerEffect[5] = (uint8)((forceZones >> 16) & 0xff);
	triggerEffect[6] = (uint8)((forceZones >> 24) & 0xff);

	if (left) {
		dsc->ucEnableBits1 |= 0x08;
		FMemory::Memcpy(dsc->rgucLeftTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}
	if (right) {
		dsc->ucEnableBits1 |= 0x04;
		FMemory::Memcpy(dsc->rgucRightTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}

	TArray<uint8> fullCommand;
	fullCommand.AddUninitialized(sizeof(*dsc));
	FMemory::Memcpy(fullCommand.GetData(), dsc, fullCommand.Num());

	delete dsc;

	return fullCommand;
}

TArray<uint8> USimpleControllerBPLibrary::generateDualSenseTriggerCommandWeapon(SCDualSenseTriggerEffectStartPosition startPositionEnum,
	SCDualSenseTriggerEffectEndPosition endPositionEnum, SCDualSenseTriggerEffectStrength strengthEnum, bool left, bool right){
	
	uint8 startPosition = (uint8)startPositionEnum + 2;
	uint8 endPosition = (uint8)endPositionEnum + 3;
	uint8 strength = (uint8)strengthEnum + 1;

	if (endPosition <= startPosition) {
		UE_LOG(LogTemp, Warning, TEXT("GenerateDualSenseTriggerCommandWeapon: End position must be 1 higher than start position"));
		endPosition = startPosition + 1;
	}


	SCDualSenseCommands* dsc = new SCDualSenseCommands();
	TArray<uint8> triggerEffect;
	triggerEffect.AddZeroed(11);

	uint16 startAndStopZones = (uint16)((1 << startPosition) | (1 << endPosition));
	
	triggerEffect[0] = SCDualSenseTriggerEffectTypes::Weapon;
	triggerEffect[1] = (uint8)((startAndStopZones >> 0) & 0xff);
	triggerEffect[2] = (uint8)((startAndStopZones >> 8) & 0xff);
	triggerEffect[3] = (uint8)(strength - 1);

	if (left) {
		dsc->ucEnableBits1 |= 0x08;
		FMemory::Memcpy(dsc->rgucLeftTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}
	if (right) {
		dsc->ucEnableBits1 |= 0x04;
		FMemory::Memcpy(dsc->rgucRightTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}

	TArray<uint8> fullCommand;
	fullCommand.AddUninitialized(sizeof(*dsc));
	FMemory::Memcpy(fullCommand.GetData(), dsc, fullCommand.Num());

	delete dsc;

	return fullCommand;
}

TArray<uint8> USimpleControllerBPLibrary::generateDualSenseTriggerCommandVibration(SCDualSenseTriggerEffectStartZone startingZoneEnum,
	SCDualSenseTriggerEffectStrength strengthEnum, uint8 frequency, bool left, bool right){

	uint8 startingZone = (uint8)startingZoneEnum;
	uint8 strength = (uint8)strengthEnum + 1;


	SCDualSenseCommands* dsc = new SCDualSenseCommands();
	TArray<uint8> triggerEffect;
	triggerEffect.AddZeroed(11);

	uint8 strengthValue = (uint8)((strength - 1) & 0x07);
	uint32 amplitudeZones = 0;
	uint16 activeZones = 0;
	for (int i = startingZone; i < 10; i++){
		amplitudeZones |= (uint32)(strengthValue << (3 * i));
		activeZones |= (uint16)(1 << i);
	}
	
	//UE_LOG(LogTemp, Error, TEXT("xxxxx activeZones:%i forceZones:%i"), activeZones, strength);

	triggerEffect[0] = SCDualSenseTriggerEffectTypes::Vibration;
	triggerEffect[1] = (uint8)((activeZones >> 0) & 0xff);
	triggerEffect[2] = (uint8)((activeZones >> 8) & 0xff);
	triggerEffect[3] = (uint8)((amplitudeZones >> 0) & 0xff);
	triggerEffect[4] = (uint8)((amplitudeZones >> 8) & 0xff);
	triggerEffect[5] = (uint8)((amplitudeZones >> 16) & 0xff);
	triggerEffect[6] = (uint8)((amplitudeZones >> 24) & 0xff);

	triggerEffect[9] = frequency;

	if (left) {
		dsc->ucEnableBits1 |= 0x08;
		FMemory::Memcpy(dsc->rgucLeftTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}
	if (right) {
		dsc->ucEnableBits1 |= 0x04;
		FMemory::Memcpy(dsc->rgucRightTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}

	TArray<uint8> fullCommand;
	fullCommand.AddUninitialized(sizeof(*dsc));
	FMemory::Memcpy(fullCommand.GetData(), dsc, fullCommand.Num());

	delete dsc;

	return fullCommand;
}

TArray<uint8> USimpleControllerBPLibrary::generateDualSenseTriggerCommandMultiFeedback(
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_0,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_1,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_2,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_3,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_4,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_5,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_6,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_7,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_8,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_9,
	bool left, bool right){


	TArray<uint8> strength;
	strength.Add((uint8)strengthEnum_0);
	strength.Add((uint8)strengthEnum_1);
	strength.Add((uint8)strengthEnum_2);
	strength.Add((uint8)strengthEnum_3);
	strength.Add((uint8)strengthEnum_4);
	strength.Add((uint8)strengthEnum_5);
	strength.Add((uint8)strengthEnum_6);
	strength.Add((uint8)strengthEnum_7);
	strength.Add((uint8)strengthEnum_8);
	strength.Add((uint8)strengthEnum_9);


	SCDualSenseCommands* dsc = new SCDualSenseCommands();
	TArray<uint8> triggerEffect;
	triggerEffect.AddZeroed(11);

	uint32 forceZones = 0;
	uint16 activeZones = 0;
	for (int i = 0; i < 10; i++){
		if (strength[i] > 0){
			uint8 forceValue = (uint8)((strength[i] - 1) & 0x07);
			forceZones |= (uint32)(forceValue << (3 * i));
			activeZones |= (uint16)(1 << i);
		}
	}

	//UE_LOG(LogTemp, Error, TEXT("xxxxx activeZones:%i forceZones:%i"), activeZones, strength);

	triggerEffect[0] = SCDualSenseTriggerEffectTypes::Feedback;
	triggerEffect[1] = (uint8)((activeZones >> 0) & 0xff);
	triggerEffect[2] = (uint8)((activeZones >> 8) & 0xff);
	triggerEffect[3] = (uint8)((forceZones >> 0) & 0xff);
	triggerEffect[4] = (uint8)((forceZones >> 8) & 0xff);
	triggerEffect[5] = (uint8)((forceZones >> 16) & 0xff);
	triggerEffect[6] = (uint8)((forceZones >> 24) & 0xff);

	if (left) {
		dsc->ucEnableBits1 |= 0x08;
		FMemory::Memcpy(dsc->rgucLeftTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}
	if (right) {
		dsc->ucEnableBits1 |= 0x04;
		FMemory::Memcpy(dsc->rgucRightTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}

	TArray<uint8> fullCommand;
	fullCommand.AddUninitialized(sizeof(*dsc));
	FMemory::Memcpy(fullCommand.GetData(), dsc, fullCommand.Num());

	delete dsc;

	return fullCommand;
}

TArray<uint8> USimpleControllerBPLibrary::generateDualSenseTriggerCommandMultiVibration(
	uint8 frequency,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_0,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_1,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_2,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_3,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_4,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_5,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_6,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_7,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_8,
	SCDualSenseTriggerEffectStrengthMulti strengthEnum_9,
	bool left, bool right) {


	TArray<uint8> strength;
	strength.Add((uint8)strengthEnum_0);
	strength.Add((uint8)strengthEnum_1);
	strength.Add((uint8)strengthEnum_2);
	strength.Add((uint8)strengthEnum_3);
	strength.Add((uint8)strengthEnum_4);
	strength.Add((uint8)strengthEnum_5);
	strength.Add((uint8)strengthEnum_6);
	strength.Add((uint8)strengthEnum_7);
	strength.Add((uint8)strengthEnum_8);
	strength.Add((uint8)strengthEnum_9);


	SCDualSenseCommands* dsc = new SCDualSenseCommands();
	TArray<uint8> triggerEffect;
	triggerEffect.AddZeroed(11);

	uint32 strengthZones = 0;
	uint16 activeZones = 0;
	for (int i = 0; i < 10; i++){
		if (strength[i] > 0){
			uint8 strengthValue = (uint8)((strength[i] - 1) & 0x07);
			strengthZones |= (uint32)(strengthValue << (3 * i));
			activeZones |= (uint16)(1 << i);
		}
	}

	//UE_LOG(LogTemp, Error, TEXT("xxxxx activeZones:%i forceZones:%i"), activeZones, strength);

	triggerEffect[0] = SCDualSenseTriggerEffectTypes::Vibration;
	triggerEffect[1] = (uint8)((activeZones >> 0) & 0xff);
	triggerEffect[2] = (uint8)((activeZones >> 8) & 0xff);
	triggerEffect[3] = (uint8)((strengthZones >> 0) & 0xff);
	triggerEffect[4] = (uint8)((strengthZones >> 8) & 0xff);
	triggerEffect[5] = (uint8)((strengthZones >> 16) & 0xff);
	triggerEffect[6] = (uint8)((strengthZones >> 24) & 0xff);
	triggerEffect[9] = frequency;

	if (left) {
		dsc->ucEnableBits1 |= 0x08;
		FMemory::Memcpy(dsc->rgucLeftTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}
	if (right) {
		dsc->ucEnableBits1 |= 0x04;
		FMemory::Memcpy(dsc->rgucRightTriggerEffect, triggerEffect.GetData(), triggerEffect.Num());
	}

	TArray<uint8> fullCommand;
	fullCommand.AddUninitialized(sizeof(*dsc));
	FMemory::Memcpy(fullCommand.GetData(), dsc, fullCommand.Num());

	delete dsc;

	return fullCommand;
}

void USimpleControllerBPLibrary::disableForceFeedbackOnDevice(FSimpleControllerDevice device){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	if (USimpleControllerBPLibrary::getSimpleControllerTarget()->controllerDeviceStructMap.Find(device.deviceIndex) == nullptr) {
		return;
	}

	FSimpleControllerDevice* d = *USimpleControllerBPLibrary::getSimpleControllerTarget()->controllerDeviceStructMap.Find(device.deviceIndex);
	stopRumbleWheel();
	SDL_HapticClose(d->sdlHaptic);
#endif
}

void USimpleControllerBPLibrary::enableForceFeedbackOnDevice(FSimpleControllerDevice device) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	if (USimpleControllerBPLibrary::getSimpleControllerTarget()->controllerDeviceStructMap.Find(device.deviceIndex) == nullptr) {
		return;
	}

	FSimpleControllerDevice* d = *USimpleControllerBPLibrary::getSimpleControllerTarget()->controllerDeviceStructMap.Find(device.deviceIndex);
	d->sdlHaptic = SDL_HapticOpenFromJoystick(d->sdlJoystick);
#endif
}


void USimpleControllerBPLibrary::rumbleByConnectionIndex(bool& successful, FString& errorMessage, int32 connectionIndex, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds){

	bool found = false;
	FSimpleControllerDevice device = findControllerByConnectionIndex(connectionIndex, found);
	if (found) {
		rumble(successful, errorMessage, device, strengthSmallMotor, strengthLargeMotor, lengthInMilliseconds);
	}
	else {
		successful = false;
		errorMessage = "Device not found";
	}
}

void USimpleControllerBPLibrary::rumble(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthSmallMotor, float strengthLargeMotor, int32 lengthInMilliseconds) {
	if (strengthSmallMotor > 1)
		strengthSmallMotor = 1;
	if (strengthLargeMotor > 1)
		strengthLargeMotor = 1;
	
	//on mobile device
	if (USimpleControllerBPLibrary::controllerTarget->simpleControllerMobile != nullptr) {
		USimpleControllerBPLibrary::controllerTarget->simpleControllerMobile->rumble(successful, errorMessage,
			device, strengthSmallMotor, strengthLargeMotor, lengthInMilliseconds);
		return;
	}

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	
	errorMessage = "";
	successful = false;

	//wheel
	if (device.controllerType == ESimpleControllerType::WHEEL) {
		rumbleWheel(successful, errorMessage, device, strengthSmallMotor, strengthLargeMotor, lengthInMilliseconds, 10);
		return;
	}
	
	if (!USimpleControllerBPLibrary::controllerTarget->isRun) {
		UE_LOG(LogTemp, Error, TEXT("Plugin has not been initialized->"));
		errorMessage = "Plugin has not been initialized->";
		successful = false;
		return;
	}


	if ((!device.hasHaptic && !device.hasRumble) || device.sdlJoystick == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device don't support rumble."));
		errorMessage = "Device don't support rumble.";
		successful = false;
		return;
	}

	//gamepad
	if (device.hasRumble && device.controllerType != ESimpleControllerType::WHEEL) {
		if (SDL_JoystickRumble(device.sdlJoystick, (uint16)(65535.0f * strengthLargeMotor), (uint16)(65535.0f * strengthSmallMotor), lengthInMilliseconds) == -1) {
				UE_LOG(LogTemp, Error, TEXT("Device can't run rumble."));
			errorMessage = "Device can't run rumble.";
			successful = false;
			return;
		}

		successful = true;
		return;
	}

	if (device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}

	SDL_Haptic* haptic = device.sdlHaptic;

	//Only one Rumble each device. remove/stop old effects
	for (int32 i = 0; i < SDL_HapticNumEffects(haptic); i++) {
		SDL_HapticDestroyEffect(haptic, i);
	}
	/*if (device.effectID >= 0) {
		SDL_HapticDestroyEffect(haptic, device.effectID);
	}*/

	//just stop the effect
	//if (lengthInMilliseconds <= 0) {
	//	USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Add(device.deviceIndex, device);
	//	return;
	//}

	SDL_HapticEffect* effect = new SDL_HapticEffect();


	if (device.forceFeedback_LEFTRIGHT) {
		effect->type = SDL_HAPTIC_LEFTRIGHT;
	}
	else {
		effect->type = SDL_HAPTIC_SINE;
	}

	if (strengthSmallMotor > 0)
		effect->leftright.small_magnitude = (Sint16)(32767.0f * strengthSmallMotor);
	if (strengthLargeMotor > 0)
		effect->leftright.large_magnitude = (Sint16)(32767.0f * strengthLargeMotor);
	effect->leftright.length = lengthInMilliseconds;


	// Upload the effect
	device.effectID = SDL_HapticNewEffect(haptic, effect);
	if (device.effectID < 0) {
		FString error = FString(SDL_GetError());
		UE_LOG(LogTemp, Error, TEXT("Effect could not be uploaded-> %s"),*error);
		errorMessage = "Effect could not be uploaded-> "+error;
		successful = false;
	}
	else {
		//run
		if (SDL_HapticRunEffect(haptic, device.effectID, 1) < 0) {
			FString error = FString(SDL_GetError());
			UE_LOG(LogTemp, Error, TEXT("Effect could not be run. %s"), *error);
			errorMessage = "Effect could not be run. " + error;
			successful = false;
		}
	}

	//int result = SDL_JoystickRumbleTriggers(device.sdlJoystick, (Sint16)(32767.0f * strengthSmallMotor), (Sint16)(32767.0f * strengthLargeMotor), lengthInMilliseconds);
	//UE_LOG(LogTemp, Error, TEXT("result %i"), result);

	errorMessage = "";
	successful = true;
#endif
}

void USimpleControllerBPLibrary::rumbleWheel(bool& successful, FString& errorMessage, FSimpleControllerDevice device,
	float strengthLeftMotor , float strengthRightMotor, int32 lengthInMilliseconds, int32 timeBetweenDirectionChangeInMilliseconds) {
	errorMessage = "";
	successful = false;

	if (!USimpleControllerBPLibrary::controllerTarget->isRun) {
		UE_LOG(LogTemp, Error, TEXT("Plugin has not been initialized->"));
		errorMessage = "Plugin has not been initialized->";
		successful = false;
		return;
	}


	if (!device.hasHaptic || device.sdlJoystick == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device don't support rumble."));
		errorMessage = "Device don't support rumble.";
		successful = false;
		return;
	}


	if (strengthLeftMotor > 1)
		strengthLeftMotor = 1;
	if (strengthRightMotor > 1)
		strengthRightMotor = 1;



	if (device.controllerType == ESimpleControllerType::WHEEL) {
		successful = USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel->rumble(
			device, strengthLeftMotor, strengthRightMotor, lengthInMilliseconds, timeBetweenDirectionChangeInMilliseconds);
		if (!successful) {
			errorMessage = "Could not run rumble on steering wheel.";
			successful = false;
			return;
		}
	}
	else {
		errorMessage = "This device is not a steering wheel.";
		successful = false;
		return;
	}


	errorMessage = "";
	successful = true;
}

void USimpleControllerBPLibrary::stopRumbleWheel(){
	if (USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel != nullptr) {
		USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel->stopRumbleThread();
	}
}


void USimpleControllerBPLibrary::rumbleTrigger(bool& successful, FString& errorMessage, FSimpleControllerDevice device, float strengthLeft, float strengthRight, int32 lengthInMilliseconds) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	errorMessage = "";
	successful = false;

	if (!USimpleControllerBPLibrary::controllerTarget->isRun) {
		UE_LOG(LogTemp, Error, TEXT("Plugin has not been initialized->"));
		errorMessage = "Plugin has not been initialized->";
		successful = false;
		return;
	}


	if (strengthLeft > 1)
		strengthLeft = 1;
	if (strengthRight > 1)
		strengthRight = 1;

	if (SDL_GameControllerRumbleTriggers(device.sdlGameController, (uint16)(65535.0f * strengthLeft), (uint16)(65535.0f * strengthRight), lengthInMilliseconds) == -1) {
		UE_LOG(LogTemp, Error, TEXT("Device can't run trigger rumble."));
		errorMessage = "Device can't run trigger rumble.";
		successful = false;
		return;
	}


	errorMessage = "";
	successful = true;
#endif
}

void USimpleControllerBPLibrary::createForceFeedbackEffectConstantNonStatic(FSimpleControllerForceFeedbackEffect& forceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 length, int32 delay, float level, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel){
	USimpleControllerBPLibrary::controllerTarget->createForceFeedbackEffectConstant(forceFeedbackEffect, successful, errorMessage, device, directionType, directionX, directionY, directionZ, length, delay, level, attackLength, attackLevel, fadeLength, fadeLevel);
}

void USimpleControllerBPLibrary::createForceFeedbackEffectConstant(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
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
	float fadeLevel) {

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}


	SDL_HapticEffect* effect = new SDL_HapticEffect();
	SDL_Haptic* haptic = device.sdlHaptic;

	effect->type = SDL_HAPTIC_CONSTANT;
	effect->constant.length = length;
	effect->constant.delay = delay;
	effect->constant.level = (Sint16)(32767.0f * level);
	effect->constant.attack_length = attackLength;
	effect->constant.attack_level = (Sint16)(32767.0f * attackLevel);
	effect->constant.fade_length = fadeLength;
	effect->constant.fade_level = (Sint16)(32767.0f * fadeLevel);

	if (directionType == ESimpleControllerForceFeedbackDirectionType::CARTESIAN) {
		if (device.forceFeedback_CARTESIAN == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support CATESIAN direction."));
			errorMessage = "Device don't support CATESIAN direction.";
			successful = false;
			return;
		}
		effect->constant.direction.type = SDL_HAPTIC_CARTESIAN;
		effect->constant.direction.dir[0] = directionX;
		effect->constant.direction.dir[1] = directionY;
		effect->constant.direction.dir[2] = directionZ;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::POLAR) {
		if (device.forceFeedback_POLAR == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support POLAR direction."));
			errorMessage = "Device don't support POLAR direction.";
			successful = false;
			return;
		}
		effect->constant.direction.type = SDL_HAPTIC_POLAR;
		effect->constant.direction.dir[0] = directionX;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::SPHERICAL) {
		if (device.forceFeedback_SPHERICAL == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SPHERICAL direction."));
			errorMessage = "Device don't support SPHERICAL direction.";
			successful = false;
			return;
		}
		effect->constant.direction.type = SDL_HAPTIC_SPHERICAL;
		effect->constant.direction.dir[0] = directionX;
		effect->constant.direction.dir[1] = directionY;
	}

	forceFeedbackEffect.sdlHaptic = haptic;
	forceFeedbackEffect.successful = true;
	forceFeedbackEffect.effect = effect;
	successful = true;
#endif
}

void USimpleControllerBPLibrary::createForceFeedbackEffectPeriodic(FSimpleControllerForceFeedbackEffect& forceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 length, int32 delay, int32 period, float magnitude, int32 offset, int32 phase, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel){
	USimpleControllerBPLibrary::controllerTarget->createForceFeedbackEffectPeriodicNonStatic(forceFeedbackEffect, successful, errorMessage, device,  PeriodicType,  directionType, directionX, directionY, directionZ, length, delay, period, magnitude, offset, phase, attackLength, attackLevel, fadeLength, fadeLevel);
}

void USimpleControllerBPLibrary::createForceFeedbackEffectPeriodicNonStatic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
	bool& successful,
	FString& errorMessage,
	FSimpleControllerDevice device,
	ESimpleControllerForceFeedbackEffectPeriodicType type,
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
	float fadeLevel) {

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX


	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}


	SDL_HapticEffect* effect = new SDL_HapticEffect();
	SDL_Haptic* haptic = device.sdlHaptic;


	switch (type)
	{
	case ESimpleControllerForceFeedbackEffectPeriodicType::SINE:
		if (device.forceFeedback_SINE == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SINE effect."));
			successful = false;
			errorMessage = "Device don't support SINE effect.";
			return;
		}
		effect->type = SDL_HAPTIC_SINE;
		break;
	case ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE:
		if (device.forceFeedback_TRIANGLE == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support TRIANGLE effect."));
			successful = false;
			errorMessage = "Device don't support TRIANGLE effect.";
			return;
		}
		effect->type = SDL_HAPTIC_TRIANGLE;
		break;
	case ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP:
		if (device.forceFeedback_SAWTOOTHUP == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SAWTOOTHUP effect."));
			successful = false;
			errorMessage = "Device don't support SAWTOOTHUP effect.";
			return;
		}
		effect->type = SDL_HAPTIC_SAWTOOTHUP;
		break;
	case ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN:
		if (device.forceFeedback_SAWTOOTHDOWN == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SAWTOOTHDOWN effect."));
			successful = false;
			errorMessage = "Device don't support SAWTOOTHDOWN effect.";
			return;
		}
		effect->type = SDL_HAPTIC_SAWTOOTHDOWN;
		break;
	}

	effect->periodic.length = length;
	effect->periodic.delay = delay;
	effect->periodic.period = period;
	effect->periodic.magnitude = (Sint16)(32767.0f * magnitude);
	effect->periodic.offset = offset;
	effect->periodic.phase = delay;
	effect->periodic.attack_length = attackLength;
	effect->periodic.attack_level = (Sint16)(32767.0f * attackLevel);
	effect->periodic.fade_length = fadeLength;
	effect->periodic.fade_level = (Sint16)(32767.0f * fadeLevel);


	if (directionType == ESimpleControllerForceFeedbackDirectionType::CARTESIAN) {
		if (device.forceFeedback_CARTESIAN == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support CATESIAN direction."));
			successful = false;
			errorMessage = "Device don't support CATESIAN direction.";
			return;
		}
		effect->periodic.direction.type = SDL_HAPTIC_CARTESIAN;
		effect->periodic.direction.dir[0] = directionX;
		effect->periodic.direction.dir[1] = directionY;
		effect->periodic.direction.dir[2] = directionZ;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::POLAR) {
		if (device.forceFeedback_POLAR == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support POLAR direction."));
			successful = false;
			errorMessage = "Device don't support POLAR direction.";
			return;
		}
		effect->periodic.direction.type = SDL_HAPTIC_POLAR;
		effect->periodic.direction.dir[0] = directionX;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::SPHERICAL) {
		if (device.forceFeedback_SPHERICAL == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SPHERICAL direction."));
			successful = false;
			errorMessage = "Device don't support SPHERICAL direction.";
			return;
		}
		effect->periodic.direction.type = SDL_HAPTIC_SPHERICAL;
		effect->periodic.direction.dir[0] = directionX;
		effect->periodic.direction.dir[1] = directionY;
	}

	forceFeedbackEffect.sdlHaptic = haptic;
	forceFeedbackEffect.successful = true;
	forceFeedbackEffect.effect = effect;
	successful = true;

#endif
}

void USimpleControllerBPLibrary::createForceFeedbackEffectCondition(FSimpleControllerForceFeedbackEffect& forceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackEffectConditionType ConditionType, bool useDirectionX, bool useDirectionY, bool useDirectionZ, int32 length, int32 delay, float rightLevel, float leftLevel, int32 rightLevelIncreaseSpeed, int32 leftLevelIncreaseSpeed, float deadband, int32 center){
	USimpleControllerBPLibrary::controllerTarget->createForceFeedbackEffectConditionNonStatic(forceFeedbackEffect,  successful, errorMessage, device, ConditionType, useDirectionX, useDirectionY, useDirectionZ, length, delay, rightLevel, leftLevel, rightLevelIncreaseSpeed, leftLevelIncreaseSpeed, deadband, center);
}


void USimpleControllerBPLibrary::createForceFeedbackEffectConditionNonStatic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
	bool& successful,
	FString& errorMessage,
	FSimpleControllerDevice device,
	ESimpleControllerForceFeedbackEffectConditionType type,
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
	int32 center) {

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}


	SDL_HapticEffect* effect = new SDL_HapticEffect();
	SDL_Haptic* haptic = device.sdlHaptic;


	switch (type)
	{
	case ESimpleControllerForceFeedbackEffectConditionType::SPRING:
		if (device.forceFeedback_SPRING == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SPRING effect."));
			successful = false;
			errorMessage = "Device don't support SPRING effect.";
			return;
		}
		effect->type = SDL_HAPTIC_SPRING;
		break;
	case ESimpleControllerForceFeedbackEffectConditionType::DAMPER:
		if (device.forceFeedback_DAMPER == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support DAMPER effect."));
			successful = false;
			errorMessage = "Device don't support DAMPER effect.";
			return;
		}
		effect->type = SDL_HAPTIC_DAMPER;
		break;
	case ESimpleControllerForceFeedbackEffectConditionType::INERTIA:
		if (device.forceFeedback_INERTIA == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support INERTIA effect."));
			successful = false;
			errorMessage = "Device don't support INERTIA effect.";
			return;
		}
		effect->type = SDL_HAPTIC_INERTIA;
		break;
	case ESimpleControllerForceFeedbackEffectConditionType::FRICTION:
		if (device.forceFeedback_FRICTION == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support FRICTION effect."));
			successful = false;
			errorMessage = "Device don't support FRICTION effect.";
			return;
		}
		effect->type = SDL_HAPTIC_FRICTION;
		break;
	}

	effect->condition.length = length;
	effect->condition.delay = delay;

	if (useDirectionX) {
		effect->condition.right_sat[0] = (int32)(65535.0f * rightLevel);
		effect->condition.left_sat[0] = (int32)(65535.0f * leftLevel);
		effect->condition.right_coeff[0] = rightLevelIncreaseSpeed;
		effect->condition.left_coeff[0] = leftLevelIncreaseSpeed;
		effect->condition.deadband[0] = (int32)(65535.0f * deadband);
		effect->condition.center[0] = center;
	}
	if (useDirectionY) {
		effect->condition.right_sat[1] = (int32)(65535.0f * rightLevel);
		effect->condition.left_sat[1] = (int32)(65535.0f * leftLevel);
		effect->condition.right_coeff[1] = rightLevelIncreaseSpeed;
		effect->condition.left_coeff[1] = leftLevelIncreaseSpeed;
		effect->condition.deadband[1] = (int32)(65535.0f * deadband);
		effect->condition.center[1] = center;
	}
	if (useDirectionZ) {
		effect->condition.right_sat[2] = (int32)(65535.0f * rightLevel);
		effect->condition.left_sat[2] = (int32)(65535.0f * leftLevel);
		effect->condition.right_coeff[2] = rightLevelIncreaseSpeed;
		effect->condition.left_coeff[2] = leftLevelIncreaseSpeed;
		effect->condition.deadband[2] = (int32)(65535.0f * deadband);
		effect->condition.center[2] = center;
	}


	forceFeedbackEffect.sdlHaptic = haptic;
	forceFeedbackEffect.successful = true;
	forceFeedbackEffect.effect = effect;
	successful = true;
#endif
}

void USimpleControllerBPLibrary::createForceFeedbackEffectRamp(FSimpleControllerForceFeedbackEffect& forceFeedbackEffect, bool& successful, FString& errorMessage, FSimpleControllerDevice device, ESimpleControllerForceFeedbackDirectionType directionType, int32 directionX, int32 directionY, int32 directionZ, int32 length, int32 delay, float startLevel, float endLevel, int32 attackLength, float attackLevel, int32 fadeLength, float fadeLevel){
	USimpleControllerBPLibrary::controllerTarget->createForceFeedbackEffectRampNonStatic(forceFeedbackEffect, successful, errorMessage, device, directionType, directionX, directionY, directionZ, length, delay, startLevel, endLevel, attackLength, attackLevel, fadeLength, fadeLevel);
}


void USimpleControllerBPLibrary::createForceFeedbackEffectRampNonStatic(struct FSimpleControllerForceFeedbackEffect& forceFeedbackEffect,
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
	float fadeLevel) {

	if (!device.hasHaptic || device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Device not found or device don't support haptic."));
		errorMessage = "Device not found or device don't support haptic.";
		successful = false;
		return;
	}

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX


	SDL_HapticEffect* effect = new SDL_HapticEffect();
	SDL_Haptic* haptic = device.sdlHaptic;

	effect->type = SDL_HAPTIC_RAMP;
	effect->ramp.length = length;
	effect->ramp.delay = delay;
	effect->ramp.start = (Sint16)(32767.0f * startLevel);
	effect->ramp.end = (Sint16)(32767.0f * endLevel);
	effect->ramp.attack_length = attackLength;
	effect->ramp.attack_level = (Sint16)(32767.0f * attackLevel);
	effect->ramp.fade_length = fadeLength;
	effect->ramp.fade_level = (Sint16)(32767.0f * fadeLevel);


	if (directionType == ESimpleControllerForceFeedbackDirectionType::CARTESIAN) {
		if (device.forceFeedback_CARTESIAN == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support CATESIAN direction."));
			successful = false;
			errorMessage = "Device don't support SPHERICAL direction.";
			return;
		}
		effect->ramp.direction.type = SDL_HAPTIC_CARTESIAN;
		effect->ramp.direction.dir[0] = directionX;
		effect->ramp.direction.dir[1] = directionY;
		effect->ramp.direction.dir[2] = directionZ;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::POLAR) {
		if (device.forceFeedback_POLAR == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support POLAR direction."));
			successful = false;
			errorMessage = "Device don't support SPHERICAL direction.";
			return;
		}
		effect->ramp.direction.type = SDL_HAPTIC_POLAR;
		effect->ramp.direction.dir[0] = directionX;
	}

	if (directionType == ESimpleControllerForceFeedbackDirectionType::SPHERICAL) {
		if (device.forceFeedback_SPHERICAL == false) {
			UE_LOG(LogTemp, Error, TEXT("Device don't support SPHERICAL direction."));
			successful = false;
			errorMessage = "Device don't support SPHERICAL direction.";
			return;
		}
		effect->ramp.direction.type = SDL_HAPTIC_SPHERICAL;
		effect->ramp.direction.dir[0] = directionX;
		effect->ramp.direction.dir[1] = directionY;
	}

	forceFeedbackEffect.sdlHaptic = haptic;
	forceFeedbackEffect.successful = true;
	forceFeedbackEffect.effect = effect;
	successful = true;

#endif
}

FSimpleControllerForceFeedbackEffect USimpleControllerBPLibrary::uploadForceFeedbackEffect(bool& successful, FString& errorMessage, FSimpleControllerForceFeedbackEffect forceFeedbackEffect){
	
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (forceFeedbackEffect.sdlHaptic == nullptr || forceFeedbackEffect.successful == false) {
		UE_LOG(LogTemp, Error, TEXT("The device does not support force feedback or the effect was not created correctly."));
		successful = false;
		errorMessage = "The device does not support force feedback or the effect was not created correctly.";
		return forceFeedbackEffect;
	}

	forceFeedbackEffect.effectID = SDL_HapticNewEffect(forceFeedbackEffect.sdlHaptic, forceFeedbackEffect.effect);
	if (forceFeedbackEffect.effectID < 0) {
		UE_LOG(LogTemp, Error, TEXT("Effect could not be uploaded-> This usually happens when the driver rejects the effect settings."));
		errorMessage = "Effect could not be uploaded-> This usually happens when the driver rejects the effect settings.";
		successful = false;
		return forceFeedbackEffect;
	}
	else {
		successful = true;
	}
#endif
	return forceFeedbackEffect;
}

FSimpleControllerForceFeedbackEffect USimpleControllerBPLibrary::runForceFeedbackEffect(bool& successful, FString& errorMessage, FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32 iterations){
	
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (forceFeedbackEffect.sdlHaptic == nullptr || forceFeedbackEffect.successful == false) {
		UE_LOG(LogTemp, Error, TEXT("The device does not support force feedback or the effect was not created correctly."));
		successful = false;
		errorMessage = "The device does not support force feedback or the effect was not created correctly.";
		return forceFeedbackEffect;
	}

	if (iterations < 1)
		iterations = 1;

	if (SDL_HapticRunEffect(forceFeedbackEffect.sdlHaptic, forceFeedbackEffect.effectID, iterations) == 0) {
		successful = true;
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Effect could not be executed"));
		errorMessage = "Effect could not be executed";
		successful = false;
	}
#endif
	return forceFeedbackEffect;
}

FSimpleControllerForceFeedbackEffect USimpleControllerBPLibrary::stopForceFeedbackEffect(bool& successful, FString& errorMessage, FSimpleControllerForceFeedbackEffect forceFeedbackEffect){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	
	if (forceFeedbackEffect.sdlHaptic == nullptr || forceFeedbackEffect.successful == false) {
		UE_LOG(LogTemp, Error, TEXT("The device does not support force feedback or the effect was not created correctly."));
		successful = false;
		errorMessage = "The device does not support force feedback or the effect was not created correctly.";
		return forceFeedbackEffect;
	}

	if (SDL_HapticStopEffect(forceFeedbackEffect.sdlHaptic, forceFeedbackEffect.effectID) == 0) {
		successful = true;
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("Effect could not be stopped"));
		errorMessage = "Effect could not be stopped";
		successful = false;
	}
#endif
	return forceFeedbackEffect;
}




struct FSimpleControllerForceFeedbackEffect USimpleControllerBPLibrary::uploadAndRunForceFeedbackEffect(bool& successful, FString& errorMessage, FSimpleControllerForceFeedbackEffect forceFeedbackEffect, int32 iterations) {

	forceFeedbackEffect = uploadForceFeedbackEffect(successful, errorMessage, forceFeedbackEffect);
	if (successful) {
		forceFeedbackEffect = runForceFeedbackEffect(successful, errorMessage, forceFeedbackEffect);
	}
	return forceFeedbackEffect;

}


void USimpleControllerBPLibrary::updateConstantForceFeedbackEffect(bool& successful, FString& errorMessage, FSimpleControllerForceFeedbackEffect forceFeedbackEffect,
	int32 directionX,
	int32 directionY,
	int32 directionZ,
	int32 length,
	int32 delay,
	float level,
	int32 attackLength,
	float attackLevel,
	int32 fadeLength,
	float fadeLevel) {
	
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	
	if (forceFeedbackEffect.sdlHaptic == nullptr || forceFeedbackEffect.successful == false) {
		UE_LOG(LogTemp, Error, TEXT("The device does not support force feedback or the effect was not created correctly."));
		successful = false;
		errorMessage = "The device does not support force feedback or the effect was not created correctly.";
		return;
	}


	// update the effect
	forceFeedbackEffect.effect->constant.direction.dir[0] = directionX;
	forceFeedbackEffect.effect->constant.direction.dir[1] = directionY;
	forceFeedbackEffect.effect->constant.direction.dir[2] = directionZ;
	forceFeedbackEffect.effect->constant.level = (Sint16)(32767.0f * level);
	forceFeedbackEffect.effect->constant.attack_level = (Sint16)(32767.0f * attackLevel);;
	forceFeedbackEffect.effect->constant.delay = delay;
	forceFeedbackEffect.effect->constant.length = length;
	forceFeedbackEffect.effect->constant.attack_length = length;
	forceFeedbackEffect.effect->constant.fade_length = fadeLength;
	forceFeedbackEffect.effect->constant.fade_level = (Sint16)(32767.0f * fadeLevel);

	forceFeedbackEffect.effectID = SDL_HapticUpdateEffect(forceFeedbackEffect.sdlHaptic, forceFeedbackEffect.effectID, forceFeedbackEffect.effect);
	if (forceFeedbackEffect.effectID < 0) {
		UE_LOG(LogTemp, Error, TEXT("Effect could not be uploaded-> This usually happens when the driver rejects the effect settings."));
		errorMessage = "Effect could not be uploaded-> This usually happens when the driver rejects the effect settings.";
		successful = false;
		return;
	}

	successful = true;
#endif
}

void USimpleControllerBPLibrary::destroyForceFeedbackEffect(FSimpleControllerForceFeedbackEffect forceFeedbackEffect) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (forceFeedbackEffect.sdlHaptic == nullptr || forceFeedbackEffect.successful == false || forceFeedbackEffect.effectID < 0) {
		UE_LOG(LogTemp, Error, TEXT("Unable to destroy force feedback effect."));
		return;
	}
	SDL_HapticDestroyEffect(forceFeedbackEffect.sdlHaptic, forceFeedbackEffect.effectID);
#endif
}

//int32 USimpleControllerBPLibrary::getWheelAxisIdBySDL(){
//	return SDL_HAPTIC_STEERING_AXIS;
//}

bool USimpleControllerBPLibrary::enableConstantForceOnWheel(FSimpleControllerDevice device, int32 force, int32 wheelAxisID) {
	if (USimpleControllerBPLibrary::controllerTarget->simpleControllerWheel != nullptr) {
		return USimpleControllerBPLibrary::controllerTarget->simpleControllerWheel->enableConstantForce(device, force, wheelAxisID);
	}
	return false;
}

void USimpleControllerBPLibrary::disableConstantForceOnWheel(FSimpleControllerDevice device) {
	if (USimpleControllerBPLibrary::controllerTarget->simpleControllerWheel != nullptr) {
		USimpleControllerBPLibrary::controllerTarget->simpleControllerWheel->disableConstantForce(device);
	}
}


void USimpleControllerBPLibrary::setAutocenterForceFeedbackSDL(FSimpleControllerDevice device, int32 autocenter) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("This device has no force feedback: %s %s"), *device.deviceName, *device.controllerName);
		return;
	}
	if (SDL_HapticSetAutocenter(device.sdlHaptic, autocenter) != 0) {
		UE_LOG(LogTemp, Error, TEXT("Can't set autocenter: %s %s"), *device.deviceName, *device.controllerName);
	}
#endif
}

void USimpleControllerBPLibrary::setGainForceFeedback(FSimpleControllerDevice device, int32 gain) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (device.sdlHaptic == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("This device has no force feedback: %s %s"), *device.deviceName, *device.controllerName);
		return;
	}
	if (SDL_HapticSetGain(device.sdlHaptic, gain) != 0) {
		UE_LOG(LogTemp, Error, TEXT("Can't set gain: %s %s"), *device.deviceName, *device.controllerName);
	}
#endif
}



FString USimpleControllerBPLibrary::getButtonName(FSimpleControllerDevice device,int32 buttonID){
	if (device.controllerType == ESimpleControllerType::KEYBOARD ) {
		FKey key = FInputKeyManager::Get().GetKeyFromCodes(buttonID, buttonID);
		return key.ToString();
	}


	if (device.controllerType == ESimpleControllerType::MOUSE) {
		switch (buttonID)
		{
		case 1000001:
			return FString("MouseScrollUp");
			break;
		case 1000002:
			return FString("MouseScrollDown");
			break;
		default:
			FKey key = FInputKeyManager::Get().GetKeyFromCodes(buttonID, buttonID);
			return key.ToString();
		}
	}

	if (device.controllerType == ESimpleControllerType::GAMECONTROLLER) {
		if (USimpleControllerBPLibrary::controllerTarget->simpleControllerList->buttonNames.Find(buttonID) == nullptr) {
			return FString("Unknown");
		}
		return *USimpleControllerBPLibrary::controllerTarget->simpleControllerList->buttonNames.Find(buttonID);
	}
	//if (device.controllerType == ESimpleControllerType::GAMECONTROLLER) {
	//	return FString(SDL_GameControllerGetStringForButton((SDL_GameControllerButton)buttonID));
	//}

	return FString("Unknown");
}

void USimpleControllerBPLibrary::initIOSPart(UObject* WorldContextObject){

	if (USimpleControllerBPLibrary::controllerTarget->simpleControllerMobile != nullptr) {
		USimpleControllerBPLibrary::controllerTarget->simpleControllerMobile->initIOS(WorldContextObject);
	}
}

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

FSimpleControllerDevice* USimpleControllerBPLibrary::generateControllerStruct(int32 deviceIndex, SDL_Joystick* joystick, SDL_GameController* sdlGameController) {
	FSimpleControllerDevice* scd = new FSimpleControllerDevice();
	if (joystick == nullptr)
		return scd;
	scd->sdlJoystick = joystick;
	scd->sdlGameController = sdlGameController;
	scd->deviceIndex = deviceIndex;
	scd->deviceName = SDL_JoystickName(joystick) == NULL ? "" : SDL_JoystickName(joystick);

	if (scd->deviceName.Contains("xinput")) {
		scd->isXinput = true;
	}

	

	scd->vendorID = SDL_JoystickGetVendor(joystick);
	scd->productID = SDL_JoystickGetProduct(joystick);
	/*scd->firmwareVersion = SDL_JoystickGetFirmwareVersion(joystick);*/
	scd->numAxes = SDL_JoystickNumAxes(joystick);
	scd->numButtons = SDL_JoystickNumButtons(joystick);
	scd->numDirectionalPadAxes = SDL_JoystickNumHats(joystick);
	scd->numBalls = SDL_JoystickNumBalls(joystick);
	scd->numHats = SDL_JoystickNumHats(joystick);
	


	for (int32 i = 0; i < scd->numButtons; i++){
		scd->lastButtonJoystickStates.Add((bool)SDL_JoystickGetButton(joystick,i));
	}
	for (int32 i = 0; i < scd->numAxes; i++){
		scd->lastAxisJoystickStates.Add(SDL_JoystickGetAxis(joystick,i));
	}
	for (int32 i = 0; i < scd->numBalls; i++){
		TArray<int> data;
		data.AddZeroed(2);
		SDL_JoystickGetBall(joystick, i, &data[0], &data[1]);
		scd->lastBallJoystickStates.Add(data);
	}
	for (int32 i = 0; i < scd->numHats; i++){
		scd->lastHatJoystickStates.Add(SDL_JoystickGetHat(joystick,i));
	}


	scd->controllerType = (ESimpleControllerType)SDL_JoystickGetType(joystick);

	
	if (sdlGameController != nullptr) {

		if (SDL_GameControllerHasSensor(sdlGameController, SDL_SENSOR_ACCEL) == SDL_TRUE) {
			scd->hasAccelerationSensor = true;
			SDL_GameControllerGetSensorData(sdlGameController, SDL_SENSOR_ACCEL, &scd->lastAccelData, 3);
		}
		if (SDL_GameControllerHasSensor(sdlGameController, SDL_SENSOR_GYRO) == SDL_TRUE) {
			scd->hasGyroSensor = true;
			SDL_GameControllerGetSensorData(sdlGameController, SDL_SENSOR_GYRO, &scd->lastGyroData, 3);
		}

		for (int32 i = (int32)SDL_CONTROLLER_BUTTON_INVALID; i < (int32)SDL_CONTROLLER_BUTTON_MAX; i++){
			scd->lastButtonControllerStates.Add((bool)SDL_GameControllerGetButton(sdlGameController,(SDL_GameControllerButton)i));
		}
		for (int32 i = (int32)SDL_CONTROLLER_AXIS_INVALID; i < (int32)SDL_CONTROLLER_AXIS_MAX; i++){
			scd->lastAxisControllerStates.Add(SDL_GameControllerGetAxis(sdlGameController,(SDL_GameControllerAxis)i));
		}
		
		scd->numTouchpads = SDL_GameControllerGetNumTouchpads(sdlGameController);
		for (int32 i = 0; i < scd->numTouchpads; i++) {
			int32 fingers = SDL_GameControllerGetNumTouchpadFingers(sdlGameController, i);
			TArray<FSimpleControllerTouchEvent*> fingerArray;
			for (int32 j = 0; j < fingers; j++){
				FSimpleControllerTouchEvent* t = new FSimpleControllerTouchEvent();
				fingerArray.Add(t);
			}
			scd->lastTouchStates.Add(fingerArray);
		}


	}
	else {
		//Can not be a gamecontroller if the gamecontroller object is null
		if (scd->controllerType == ESimpleControllerType::GAMECONTROLLER) {
			scd->controllerType = ESimpleControllerType::UNKNOWN;
		}
	}


	if (scd->controllerType == ESimpleControllerType::WHEEL && simpleControllerWheel == nullptr) {
		simpleControllerWheel = NewObject<USimpleControllerWheel>(USimpleControllerWheel::StaticClass());
		simpleControllerWheel->AddToRoot();
	}

	if (SDL_JoystickHasRumble(joystick) == SDL_TRUE) {
		scd->hasRumble = true;
	}
	if (SDL_JoystickHasRumbleTriggers(joystick) == SDL_TRUE) {
		scd->hasRumbleTriggers = true;
	}
	if (SDL_JoystickHasLED(joystick) == SDL_TRUE) {
		scd->hasLED = true;
	}

	bool isEditor = false;
#if WITH_EDITOR
	isEditor = true;
#endif

	if (SDL_JoystickIsHaptic(joystick) == SDL_TRUE) {
		SDL_Haptic* haptic = SDL_HapticOpenFromJoystick(joystick);
		if (haptic != NULL) {
			scd->sdlHaptic = haptic;
			scd->hasHaptic = true;
			scd->maxSimultaneouslyEffects = SDL_HapticNumEffectsPlaying(haptic);
			scd->maxStoreEffects = SDL_HapticNumEffects(haptic);


			if (isEditor) {
				UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Max effects at same time %i: "), scd->maxSimultaneouslyEffects);
				UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Max effects store %i: "), scd->maxStoreEffects);

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CONSTANT) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_CONSTANT Support"));
					if (sdlSettings->WHEEL_FF_TEST &&  scd->controllerType == ESimpleControllerType::WHEEL && simpleControllerWheel != nullptr) {
						simpleControllerWheel->testAndSaveFFSettings(scd);
					}
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_CONSTANT Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SINE) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SINE Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SINE Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_LEFTRIGHT) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_LEFTRIGHT Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_LEFTRIGHT Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_TRIANGLE) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_TRIANGLE Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_TRIANGLE Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SAWTOOTHUP) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SAWTOOTHUP Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SAWTOOTHUP Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SAWTOOTHDOWN) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SAWTOOTHDOWN Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SAWTOOTHDOWN Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_RAMP) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_RAMP Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_RAMP Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SPRING) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SPRING Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SPRING Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_DAMPER) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_DAMPER Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_DAMPER Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_INERTIA) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_INERTIA Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_INERTIA Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_FRICTION) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_FRICTION Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_FRICTION Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CUSTOM) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_CUSTOM Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_CUSTOM Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_GAIN) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_GAIN Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_GAIN Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_AUTOCENTER) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_AUTOCENTER Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_AUTOCENTER Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_STATUS) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_STATUS Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_STATUS Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_PAUSE) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_PAUSE Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_PAUSE Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_POLAR) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_POLAR Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_POLAR Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CARTESIAN) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_CARTESIAN Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_CARTESIAN Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SPHERICAL) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_SPHERICAL Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_SPHERICAL Support"));
				}

				if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_INFINITY) != 0) {
					UE_LOG(LogTemp, Display, TEXT("SimpleController Plugin Force Feedback: Controller has SDL_HAPTIC_INFINITY Support"));
				}
				else {
					UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin Force Feedback: No SDL_HAPTIC_INFINITY Support"));
				}
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CONSTANT) != 0) {
				scd->forceFeedback_CONSTANT = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SINE) != 0) {
				scd->forceFeedback_SINE = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_LEFTRIGHT) != 0) {
				scd->forceFeedback_LEFTRIGHT = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_TRIANGLE) != 0) {
				scd->forceFeedback_TRIANGLE = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SAWTOOTHUP) != 0) {
				scd->forceFeedback_SAWTOOTHUP = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SAWTOOTHDOWN) != 0) {
				scd->forceFeedback_SAWTOOTHDOWN = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_RAMP) != 0) {
				scd->forceFeedback_RAMP = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SPRING) != 0) {
				scd->forceFeedback_SPRING = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_DAMPER) != 0) {
				scd->forceFeedback_DAMPER = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_INERTIA) != 0) {
				scd->forceFeedback_INERTIA = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_FRICTION) != 0) {
				scd->forceFeedback_FRICTION = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CUSTOM) != 0) {
				scd->forceFeedback_CUSTOM = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_GAIN) != 0) {
				scd->forceFeedback_GAIN = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_AUTOCENTER) != 0) {
				scd->forceFeedback_AUTOCENTER = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_STATUS) != 0) {
				scd->forceFeedback_STATUS = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_PAUSE) != 0) {
				scd->forceFeedback_PAUSE = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_POLAR) != 0) {
				scd->forceFeedback_POLAR = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_CARTESIAN) != 0) {
				scd->forceFeedback_CARTESIAN = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_SPHERICAL) != 0) {
				scd->forceFeedback_SPHERICAL = true;
			}

			if ((SDL_HapticQuery(haptic) & SDL_HAPTIC_INFINITY) != 0) {
				scd->forceFeedback_INFINITY = true;
			}


		}
	}

	scd->controllerName = getControllerName(scd->vendorID, scd->productID);

	char guid_str[64];
	SDL_JoystickGetGUIDString(SDL_JoystickGetGUID(joystick), guid_str, sizeof(guid_str));
	scd->deviceID = guid_str;

	//UE_LOG(LogTemp, Warning, TEXT("GUID %s"), *guid);
	setConnectionIndex(scd);



	controllerDeviceStructMap.Add(scd->deviceIndex, scd);

	return scd;
}
#endif


void USimpleControllerBPLibrary::setConnectionIndex(FSimpleControllerDevice* scd) {
	if (scd == nullptr) {
		return;
	}

	if (connectionIndexArray.Num() == 0) {
		for (int32 i = 0; i < 128; i++) {
			connectionIndexArray.Add(false);
		}
	}
		
	for (int32 i = 0; i < connectionIndexArray.Num(); i++) {
		if (connectionIndexArray[i] == false) {
			connectionIndexArray[i] = true;
			connectionIndexMap.Add(scd->deviceIndex , i);
			connectionIndexMapReverse.Add(i, scd->deviceIndex );
			scd->connectionIndex = i;
			break;
		}
	}
}

//void USimpleControllerBPLibrary::fillButtonMap(Gamepad_device *device) {
//
//	for (unsigned int i = 0; i < device->numButtons; i++) {
//		TMap<int32, int32> map;
//		map.Add(i, i);
//		buttonMapping.Add(device->deviceID, map);
//	}
//}

float USimpleControllerBPLibrary::sdlAxisValueToUE4AxisValueX(Sint16 sdlVal) {
	if (sdlVal < 0) {
		return ((float)sdlVal / maxAxisValueNegative) * -1;
	}
	else if (sdlVal > 0) {
		return (float)sdlVal / maxAxisValuePositive;
	}
	return 0.0f;
}

float USimpleControllerBPLibrary::sdlAxisValueToUE4AxisValueY(Sint16 sdlVal) {
	if (sdlVal < 0) {
		return ((float)sdlVal / maxAxisValueNegative);
	}
	else if (sdlVal > 0) {
		return (float)sdlVal / maxAxisValuePositive * -1;
	}
	return 0.0f;
}

float USimpleControllerBPLibrary::sdlAxisValueToUE4AxisValueTrigger(Sint16 sdlVal) {
	return (float)sdlVal / maxAxisValuePositive;
}

FString USimpleControllerBPLibrary::getControllerName(int32 vendorID, int32 productID) {
	FString key = FString::FromInt(vendorID) + ":" + FString::FromInt(productID);
	if (controllerNames.Find(key) == nullptr) {
		return "Unknown";
	}
	return *controllerNames.Find(key);
}

void USimpleControllerBPLibrary::removeAxisCorrection(FSimpleControllerDevice device, int32 axisID, ESimpleControllerAxisCorrection type) {
	if (USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(device.deviceIndex) != nullptr) {
		FSimpleControllerDevice* d =  *USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(device.deviceIndex);

		if (type == ESimpleControllerAxisCorrection::Negative) {
			d->isNegativeAxis.Remove(axisID);
		}
		else {
			d->isPositiveAxis.Remove(axisID);
		}
	}
}

void USimpleControllerBPLibrary::addAxisCorrection(FSimpleControllerDevice device, int32 axisID, ESimpleControllerAxisCorrection type){

	if (USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(device.deviceIndex) != nullptr) {
		FSimpleControllerDevice* d =  *USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap.Find(device.deviceIndex);

		if (type == ESimpleControllerAxisCorrection::Negative) {
			d->isNegativeAxis.Add(axisID, true);
		}
		else {
			d->isPositiveAxis.Add(axisID, true);
		}
	}
}

void USimpleControllerBPLibrary::getAxisValues(FSimpleControllerDevice device, TMap<int32, float>& axisValues){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->getAxisValuesNonStatic(device, axisValues);
}

void USimpleControllerBPLibrary::getAxisValuesNonStatic(FSimpleControllerDevice device, TMap<int32, float>& axisValues){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	axisValues.Empty();
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(device.deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(device.deviceIndex);
	}
	else {
		return;
	}

	for (int32 i = 0; i < d->numAxes; i++) {
		int32 axisValueSDL = SDL_JoystickGetAxis(d->sdlJoystick, i);
		float axisValue = 0;
		if (axisValueSDL < 0) {
			axisValue = ((float)axisValueSDL / maxAxisValueNegative) * -1;
		}
		else if (axisValueSDL > 0) {
			axisValue = (float)axisValueSDL / maxAxisValuePositive;
		}
		if (d->isNegativeAxis.Find(i)) {
			axisValue = (axisValue + 1) / 2;
		}
		else {
			if (d->isPositiveAxis.Find(i)) {
				axisValue = -((axisValue - 1) / 2);
			}
		}

		axisValues.Add(i,axisValue);
	}
#endif
}

float USimpleControllerBPLibrary::getAxisValueBySDL(FSimpleControllerDevice device, int32 axisID){
	return USimpleControllerBPLibrary::getSimpleControllerTarget()->getAxisValueBySDLNonStatic(device, axisID);
}

float USimpleControllerBPLibrary::getAxisValueBySDLNonStatic(FSimpleControllerDevice device, int32 axisID){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(device.deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(device.deviceIndex);
	}
	else {
		return 0;
	}

	int32 axisValueSDL = SDL_JoystickGetAxis(d->sdlJoystick, axisID);
	float axisValue = 0;
	if (axisValueSDL < 0) {
		axisValue = ((float)axisValueSDL / maxAxisValueNegative) * -1;
	}
	else if (axisValueSDL > 0) {
		axisValue = (float)axisValueSDL / maxAxisValuePositive;
	}
	return axisValue;
#endif
	return 0.0f;
}

ESimpleControllerButtonStatus USimpleControllerBPLibrary::getButtonValueBySDL(FSimpleControllerDevice device, int32 buttonID){
	return USimpleControllerBPLibrary::getSimpleControllerTarget()->getButtonValueBySDLNonStatic(device,buttonID);
}

ESimpleControllerButtonStatus USimpleControllerBPLibrary::getButtonValueBySDLNonStatic(FSimpleControllerDevice device, int32 buttonID){

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(device.deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(device.deviceIndex);
	}
	else {
		return ESimpleControllerButtonStatus();
	}

	int32 sdlButtonValue = SDL_JoystickGetButton(d->sdlJoystick,buttonID);

	if (sdlButtonValue == 1) {
		return ESimpleControllerButtonStatus::Pressed;
	}
	return ESimpleControllerButtonStatus::Released;
#endif


	return ESimpleControllerButtonStatus();
}

int32 USimpleControllerBPLibrary::getHatValueBySDL(FSimpleControllerDevice device, int32 directionalPadIndex){
	return USimpleControllerBPLibrary::getSimpleControllerTarget()->getHatValueBySDLNonStatic(device, directionalPadIndex);
}

int32 USimpleControllerBPLibrary::getHatValueBySDLNonStatic(FSimpleControllerDevice device, int32 directionalPadIndex){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(device.deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(device.deviceIndex);
	}
	else {
		return 0;
	}

	return SDL_JoystickGetHat(d->sdlJoystick,directionalPadIndex);
#endif
	return 0;
}

void USimpleControllerBPLibrary::getBallValueBySDL(FSimpleControllerDevice device, int32 ballIndex, int32& xRel, int32& yRel){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->getBallValueBySDLNonStatic(device,ballIndex,xRel,yRel);
}

void USimpleControllerBPLibrary::getBallValueBySDLNonStatic(FSimpleControllerDevice device, int32 ballIndex, int32& xRel, int32& yRel){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	FSimpleControllerDevice* d = nullptr;
	if (controllerDeviceStructMap.Find(device.deviceIndex) != nullptr) {
		d = *controllerDeviceStructMap.Find(device.deviceIndex);
	}
	else {
		return;
	}
	int32 x = 0;
	int32 y = 0;
	SDL_JoystickGetBall(d->sdlJoystick, ballIndex,&x, &y);

	xRel = x;
	yRel = y;
#endif
}

void USimpleControllerBPLibrary::directinalPadValueToDirection(int32 directionalPadValue, ESimpleControllerDirectionalPad& direction) {


	switch (directionalPadValue)
	{
	case 0:
		direction = ESimpleControllerDirectionalPad::CENTERED;
		break;
	case 1:
		//UE_LOG(LogTemp, Warning, TEXT("SDL_HAT_UP:  %i "),directionalPadValue);
		direction = ESimpleControllerDirectionalPad::UP;
		break;
	case 2:
		//UE_LOG(LogTemp, Warning, TEXT("SDL_HAT_RIGHT:  %i "),directionalPadValue);
		direction = ESimpleControllerDirectionalPad::RIGHT;
		break;
	case 4:
		//UE_LOG(LogTemp, Warning, TEXT("SDL_HAT_DOWN:  %i "),directionalPadValue);
		direction = ESimpleControllerDirectionalPad::DOWN;
		break;
	case 8:
		//UE_LOG(LogTemp, Warning, TEXT("SDL_HAT_LEFT:  %i "),directionalPadValue);
		direction = ESimpleControllerDirectionalPad::LEFT;
		break;
	case 3:
		//UE_LOG(LogTemp, Warning, TEXT("SDL_HAT_RIGHTUP:  %i "),directionalPadValue);
		direction = ESimpleControllerDirectionalPad::RIGHTUP;
		break;
	case 6:
		//UE_LOG(LogTemp, Warning, TEXT("SDL_HAT_RIGHTDOWN:  %i "),directionalPadValue);
		direction = ESimpleControllerDirectionalPad::RIGHTDOWN;
		break;
	case 9:
		//UE_LOG(LogTemp, Warning, TEXT("SDL_HAT_LEFTUP:  %i "),directionalPadValue);
		direction = ESimpleControllerDirectionalPad::LEFTUP;
		break;
	case 12:
		//UE_LOG(LogTemp, Warning, TEXT("SDL_HAT_LEFTDOWN:  %i "),directionalPadValue);
		direction = ESimpleControllerDirectionalPad::LEFTDOWN;
		break;
	}

}


void USimpleControllerBPLibrary::buttonIDToButton(int32 buttionID, ESimpleControllerButtons& buttons) {

	switch (buttionID)
	{
	case 0:
		buttons = ESimpleControllerButtons::Button_0;
		break;
	case 1:
		buttons = ESimpleControllerButtons::Button_1;
		break;
	case 2:
		buttons = ESimpleControllerButtons::Button_2;
		break;
	case 3:
		buttons = ESimpleControllerButtons::Button_3;
		break;
	case 4:
		buttons = ESimpleControllerButtons::Button_4;
		break;
	case 5:
		buttons = ESimpleControllerButtons::Button_5;
		break;
	case 6:
		buttons = ESimpleControllerButtons::Button_6;
		break;
	case 7:
		buttons = ESimpleControllerButtons::Button_7;
		break;
	case 8:
		buttons = ESimpleControllerButtons::Button_8;
		break;
	case 9:
		buttons = ESimpleControllerButtons::Button_9;
		break;
	case 10:
		buttons = ESimpleControllerButtons::Button_10;
		break;
	case 11:
		buttons = ESimpleControllerButtons::Button_11;
		break;
	case 12:
		buttons = ESimpleControllerButtons::Button_12;
		break;
	case 13:
		buttons = ESimpleControllerButtons::Button_13;
		break;
	case 14:
		buttons = ESimpleControllerButtons::Button_14;
		break;
	case 15:
		buttons = ESimpleControllerButtons::Button_15;
		break;
	case 16:
		buttons = ESimpleControllerButtons::Button_16;
		break;
	case 17:
		buttons = ESimpleControllerButtons::Button_17;
		break;
	case 18:
		buttons = ESimpleControllerButtons::Button_18;
		break;
	case 19:
		buttons = ESimpleControllerButtons::Button_19;
		break;
	case 20:
		buttons = ESimpleControllerButtons::Button_20;
		break;
	}
}

//thx to https://forums.unrealengine.com/t/simulate-left-click-with-abutton-of-gamepad/313890/10
void USimpleControllerBPLibrary::fireMouseButtonEvent(ESimpleControllerMouseTriggerButton button, ESimpleControllerMouseTriggerType type){
	if (!GEngine || !GEngine->GameViewport || !GEngine->GameViewport->Viewport) {
		return;
	}

	FKey MouseKey;

	switch (button)
	{
	case ESimpleControllerMouseTriggerButton::LeftMouseButton:
		MouseKey = EKeys::LeftMouseButton;
		break;
	case ESimpleControllerMouseTriggerButton::RightMouseButton:
		MouseKey = EKeys::RightMouseButton;
		break;
	case ESimpleControllerMouseTriggerButton::MiddleMouseButton:
		MouseKey = EKeys::MiddleMouseButton;
		break;
	case ESimpleControllerMouseTriggerButton::ThumbMouseButton:
		MouseKey = EKeys::ThumbMouseButton;
		break;
	case ESimpleControllerMouseTriggerButton::ThumbMouseButton2:
		MouseKey = EKeys::ThumbMouseButton2;
		break;

	}

	FViewportClient* Client = GEngine->GameViewport->Viewport->GetClient();
	

	//Trigger mouse clicks in UI
	//Get our slate application
	FSlateApplication& SlateApp = FSlateApplication::Get();


	//create a pointer event
	FPointerEvent MouseEvent(
		0,
		SlateApp.CursorPointerIndex,
		SlateApp.GetCursorPos(),
		SlateApp.GetLastCursorPos(),
		SlateApp.GetPressedMouseButtons(),
		MouseKey,
		0,
		SlateApp.GetPlatformApplication()->GetModifierKeys()
	);

	//send the mouse event to the slate handler
	TSharedPtr<FGenericWindow> GenWindow;


	switch (type)
	{
	case ESimpleControllerMouseTriggerType::Down:
		Client->InputKey(FInputKeyEventArgs(GEngine->GameViewport->Viewport, 0, MouseKey, EInputEvent::IE_Pressed));
		SlateApp.ProcessMouseButtonDownEvent(GenWindow, MouseEvent);
		break;
	case ESimpleControllerMouseTriggerType::Up:
		Client->InputKey(FInputKeyEventArgs(GEngine->GameViewport->Viewport, 0, MouseKey, EInputEvent::IE_Released));
		SlateApp.ProcessMouseButtonUpEvent(MouseEvent);
		break;
	case ESimpleControllerMouseTriggerType::DoubleClick:
		Client->InputKey(FInputKeyEventArgs(GEngine->GameViewport->Viewport, 0, MouseKey, EInputEvent::IE_DoubleClick));
		SlateApp.ProcessMouseButtonDoubleClickEvent(GenWindow, MouseEvent);
		break;

	}
}


void USimpleControllerBPLibrary::fireKeyboardButtonEvent(int32 keycode, ESimpleControllerKeyboardTriggerType type , int32 userIndex){
	if (!GEngine || !GEngine->GameViewport || !GEngine->GameViewport->Viewport) {
		return;
	}

	FKey key = FInputKeyManager::Get().GetKeyFromCodes(keycode, 0);

	FViewportClient* Client = GEngine->GameViewport->Viewport->GetClient();


	//Trigger mouse clicks in UI
	//Get our slate application
	FSlateApplication& SlateApp = FSlateApplication::Get();


	FKeyEvent KeyEvent(key, FModifierKeysState(), userIndex, false, 0, keycode);

	//send the mouse event to the slate handler
	TSharedPtr<FGenericWindow> GenWindow;


	switch (type)
	{
	case ESimpleControllerKeyboardTriggerType::Down:
		Client->InputKey(FInputKeyEventArgs(GEngine->GameViewport->Viewport, 0, key, EInputEvent::IE_Pressed));
		SlateApp.ProcessKeyDownEvent(KeyEvent);
		break;
	case ESimpleControllerKeyboardTriggerType::Up:
		Client->InputKey(FInputKeyEventArgs(GEngine->GameViewport->Viewport, 0, key, EInputEvent::IE_Released));
		SlateApp.ProcessKeyUpEvent(KeyEvent);
		break;
	}
}



void USimpleControllerBPLibrary::setMousePosition(int32 x, int32 y){
	/*FViewportClient* viewportClient = GEngine->GameViewport->Viewport->GetClient();
	if (viewportClient){
	}*/

	if (!GEngine || !GEngine->GameViewport || !GEngine->GameViewport->Viewport) {
		return;
	}
	GEngine->GameViewport->Viewport->SetMouse(x, y);
}

void USimpleControllerBPLibrary::getMousePosition(int32& x, int32& y){
	if (!GEngine || !GEngine->GameViewport || !GEngine->GameViewport->Viewport) {
		return;
	}
	x = GEngine->GameViewport->Viewport->GetMouseX();
	y = GEngine->GameViewport->Viewport->GetMouseY();
}

void USimpleControllerBPLibrary::addMousePosition(int32 x, int32 y) {

	if (!GEngine || !GEngine->GameViewport || !GEngine->GameViewport->Viewport) {
		return;
	}
	GEngine->GameViewport->Viewport->SetMouse(GEngine->GameViewport->Viewport->GetMouseX() + x, GEngine->GameViewport->Viewport->GetMouseY() + y);
}


USimpleControllerUnrealEvents::USimpleControllerUnrealEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}

void USimpleControllerUnrealEvents::onKeyPressed(){
	const uint32* keyCodePointer = new uint32(0);
	const uint32* charCodePointer = new uint32(0);
	int32 keyCode = 0;
	FInputKeyManager::Get().GetCodesFromKey(key, keyCodePointer, charCodePointer);
	if (keyCodePointer != nullptr) {
		keyCode = *keyCodePointer;
	}
	else {
		if (charCodePointer != nullptr)
			keyCode = *charCodePointer;
	}
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, "Key: "+key.ToString());

	//UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin: onKeyboardPressed: %s %i "),*key.ToString(),keyCode);

	if (key.IsMouseButton()) {
		if (keyCode == 0) {
			if (key.ToString().Equals("MouseScrollUp")) {
				keyCode = 1000001;
				USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(99998, keyCode);
				USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(99998, keyCode);
			}
			else {
				if (key.ToString().Equals("MouseScrollDown")) {
					keyCode = 1000002;
					USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(99998, keyCode);
					USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(99998, keyCode);
				}
			}
		}
		else {
			USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(99998, keyCode);
		}
	}
	else {
		USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(99999, keyCode);
	}
	

}

void USimpleControllerUnrealEvents::onKeyReleased(){
	const uint32* keyCodePointer = new uint32(0);
	const uint32* charCodePointer = new uint32(0);
	int32 keyCode = 0;
	FInputKeyManager::Get().GetCodesFromKey(key, keyCodePointer, charCodePointer);
	if (keyCodePointer != nullptr) {
		keyCode = *keyCodePointer;
	}
	else {
		if (charCodePointer != nullptr)
			keyCode = *charCodePointer;
	}

	//UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin: onKeyboardReleased: %s"),*key.ToString());

	if (key.IsMouseButton()) {
		if (keyCode == 0) {
			return;
		}
		USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(99998, keyCode);
	}
	else {
		USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(99999, keyCode);
	}
	
}

void USimpleControllerBPLibrary::initKeyboardEvents(UObject* WorldContextObject, bool keyboard, bool mouse){


	if (IsInGameThread()) {
		USimpleControllerBPLibrary::initKeyboardEventsInternal(WorldContextObject, keyboard, mouse);
	}
	else {
		AsyncTask(ENamedThreads::GameThread, [WorldContextObject, keyboard, mouse]() {
			USimpleControllerBPLibrary::getSimpleControllerTarget()->initKeyboardEventsInternal(WorldContextObject, keyboard, mouse);
			});
	}
}

void USimpleControllerBPLibrary::initKeyboardEventsInternal(UObject* WorldContextObject, bool keyboard, bool mouse){

	APlayerController* playerController = nullptr;

	if (WorldContextObject == nullptr) {
		return;
	}
	playerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0);



	if (playerController != nullptr) {

		//TArray<USimpleControllerKeyBoardEvent*> kbEventsArray;
		TArray<FKey> allKeys;
		EKeys::GetAllKeys(allKeys);

		if (keyboard && keyboardPlayerController != playerController) {
			keyboardPlayerController = playerController;

			for (int32 i = 0; i < allKeys.Num(); i++){
				if (allKeys[i] == EKeys::AnyKey ||
					/*allKeys[i].IsModifierKey() ||*/
					allKeys[i].IsGamepadKey() ||
					allKeys[i].IsTouch() ||
					allKeys[i].IsMouseButton() ||
					allKeys[i].IsButtonAxis() ||
					allKeys[i].IsAxis1D() ||
					allKeys[i].IsAxis2D() ||
					allKeys[i].IsAxis3D() ||
					/*		allKeys[i].IsDigital() ||*/
					allKeys[i].IsAnalog()) {
					continue;
				}

				//if (GEngine)
				//	GEngine->AddOnScreenDebugMessage(-1, 60, FColor::Red, "Key: "+allKeys[i].ToString());

				//UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin: Key: %s"),*allKeys[i].ToString());
				USimpleControllerUnrealEvents* keyBoardEvent = NewObject<USimpleControllerUnrealEvents>(USimpleControllerUnrealEvents::StaticClass());
				//kbEventsArray.Add(keyBoardEvent);
				keyBoardEvent->AddToRoot();
				keyBoardEvent->key = allKeys[i];
				playerController->InputComponent->BindKey(allKeys[i], IE_Pressed, keyBoardEvent, &USimpleControllerUnrealEvents::onKeyPressed);
				playerController->InputComponent->BindKey(allKeys[i], IE_Released, keyBoardEvent, &USimpleControllerUnrealEvents::onKeyReleased);

			}
		}

		if (mouse && mousePlayerController != playerController) {
			mousePlayerController = playerController;

			for (int32 i = 0; i < allKeys.Num(); i++){
				if (allKeys[i].IsMouseButton() == false || 
					allKeys[i].ToString().Equals("MouseWheelAxis") ||
					allKeys[i].ToString().Equals("Mouse2D") ||
					allKeys[i].ToString().Equals("MouseX") ||
					allKeys[i].ToString().Equals("MouseY")) {
					continue;
				}

				UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin: MouseKey: %s"),*allKeys[i].ToString());
				USimpleControllerUnrealEvents* keyBoardEvent = NewObject<USimpleControllerUnrealEvents>(USimpleControllerUnrealEvents::StaticClass());
				//kbEventsArray.Add(keyBoardEvent);
				keyBoardEvent->AddToRoot();
				keyBoardEvent->key = allKeys[i];
				playerController->InputComponent->BindKey(allKeys[i], IE_Pressed, keyBoardEvent, &USimpleControllerUnrealEvents::onKeyPressed);
				playerController->InputComponent->BindKey(allKeys[i], IE_Released, keyBoardEvent, &USimpleControllerUnrealEvents::onKeyReleased);

			}
		}
	}
}


