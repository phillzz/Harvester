// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerSDLEventsThread.h"

FSDLEventsThread::FSDLEventsThread(float refreshRateP) :
	refreshRate(refreshRateP) {
	FString threadName = "FRefreshGamepadThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}

FSDLEventsThread::~FSDLEventsThread() {
	delete thread;
}


uint32 FSDLEventsThread::Run() {

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	TArray<int32> attachedDevices;
	SDL_Event sdlEvent;

	while (run) {
		SDL_PumpEvents();
		while (SDL_PeepEvents(&sdlEvent, 1, SDL_GETEVENT, SDL_FIRSTEVENT, SDL_LASTEVENT) == 1) {
			if (!run) {
				break;
			}
			/*if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, TEXT("Event: ")+FString::FromInt(sdlEvent.type));*/
			switch (sdlEvent.type)
			{
			case SDL_JOYDEVICEADDED:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYDEVICEADDED %i"), sdlEvent.jdevice.which);
				attachedDevices.AddUnique(sdlEvent.jdevice.which);
				break;
			case SDL_CONTROLLERDEVICEADDED:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERDEVICEADDED %i"), sdlEvent.jdevice.which);
				//It is possible that a joystick is recognized multiple times because it uses several apis at the same time. But we only want to have the last api.
					//USimpleControllerBPLibrary::controllerTarget->deviceAttachedEvent(sdlEvent.jdevice.which);
				//attachedDevices.AddUnique(sdlEvent.jdevice.which);
				break;
			case SDL_JOYDEVICEREMOVED:
			case SDL_CONTROLLERDEVICEREMOVED:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYDEVICEREMOVED %i"), sdlEvent.jdevice.which);
				USimpleControllerBPLibrary::controllerTarget->deviceDetachedEvent();
				break;
			case SDL_JOYBUTTONDOWN:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBUTTONDOWN %i:%i:%i"), sdlEvent.jdevice.which, sdlEvent.jbutton.button, sdlEvent.cbutton.button);
				USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(sdlEvent.jdevice.which, sdlEvent.jbutton.button);
				//USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(true, sdlEvent.jdevice.which, sdlEvent.jbutton.button);
				break;
			case SDL_JOYBUTTONUP:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBUTTONUP %i:%i"), sdlEvent.jdevice.which, sdlEvent.jbutton.button);
				USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(sdlEvent.jdevice.which, sdlEvent.jbutton.button);
				//USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(false, sdlEvent.jdevice.which, sdlEvent.jbutton.button);
				break;
			case SDL_JOYAXISMOTION:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYAXISMOTION %i:%i:%i"), sdlEvent.jdevice.which, sdlEvent.jaxis.axis, sdlEvent.jaxis.value);
				USimpleControllerBPLibrary::controllerTarget->axisMovedEvent(sdlEvent.jdevice.which, sdlEvent.jaxis.axis, sdlEvent.jaxis.value);
				break;
			case SDL_JOYBALLMOTION:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYBALLMOTION"));
				USimpleControllerBPLibrary::controllerTarget->ballEvent(sdlEvent.jdevice.which, sdlEvent.jball.ball, sdlEvent.jball.xrel, sdlEvent.jball.yrel);
				break;
			case SDL_JOYHATMOTION:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYHATMOTION %i:%i"), sdlEvent.jdevice.which, sdlEvent.jhat.value);
				USimpleControllerBPLibrary::controllerTarget->directionalPadEvent(sdlEvent.jdevice.which, sdlEvent.jhat.value, sdlEvent.jhat.hat);
				break;
			case SDL_CONTROLLERAXISMOTION:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERAXISMOTION %i:%i:%i"), sdlEvent.cdevice.which, sdlEvent.caxis.axis, sdlEvent.caxis.value);
				USimpleControllerBPLibrary::controllerTarget->controllerAxisMovedEvent(sdlEvent.cdevice.which, sdlEvent.caxis.axis, sdlEvent.caxis.value);
				break;
			case SDL_CONTROLLERBUTTONDOWN:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERBUTTONDOWN %i:%i:%i"), sdlEvent.cdevice.which, sdlEvent.jbutton.button, sdlEvent.cbutton.button);
				USimpleControllerBPLibrary::controllerTarget->buttonDownEvent(sdlEvent.cdevice.which, sdlEvent.cbutton.button,false);
				USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(true, sdlEvent.cdevice.which, sdlEvent.cbutton.button);
				break;
			case SDL_CONTROLLERBUTTONUP:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERBUTTONUP %i:%i"), sdlEvent.cdevice.which, sdlEvent.jbutton.button);
				USimpleControllerBPLibrary::controllerTarget->buttonUpEvent(sdlEvent.cdevice.which, sdlEvent.cbutton.button,false);
				USimpleControllerBPLibrary::controllerTarget->controllerButtonEvent(false, sdlEvent.cdevice.which, sdlEvent.cbutton.button);
				break;
			case SDL_CONTROLLERSENSORUPDATE:
				/*UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERSENSORUPDATE %i: %i,%f,%f,%f"), sdlEvent.csensor.which, sdlEvent.csensor.sensor,
					sdlEvent.csensor.data[0], sdlEvent.csensor.data[1], sdlEvent.csensor.data[2]);*/
				switch (sdlEvent.csensor.sensor)
				{
				case SDL_SENSOR_ACCEL:
					USimpleControllerBPLibrary::controllerTarget->accelerationSensorEvent(sdlEvent.cdevice.which, sdlEvent.csensor.data[0], sdlEvent.csensor.data[1], sdlEvent.csensor.data[2]);
					break;
				case SDL_SENSOR_GYRO:
					USimpleControllerBPLibrary::controllerTarget->gyroSensorEvent(sdlEvent.cdevice.which, sdlEvent.csensor.data[0], sdlEvent.csensor.data[1], sdlEvent.csensor.data[2]);
					break;
				}

				break;
			case SDL_CONTROLLERTOUCHPADMOTION:
				/*UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERTOUCHPADMOTION %i: %i,%i,%f,%f,%f"), sdlEvent.ctouchpad.which, sdlEvent.ctouchpad.touchpad,
					sdlEvent.ctouchpad.finger, sdlEvent.ctouchpad.x, sdlEvent.ctouchpad.y, sdlEvent.ctouchpad.pressure);*/
					USimpleControllerBPLibrary::controllerTarget->touchMoveEvent(sdlEvent.cdevice.which, sdlEvent.ctouchpad.touchpad,
					sdlEvent.ctouchpad.finger, sdlEvent.ctouchpad.x, sdlEvent.ctouchpad.y, sdlEvent.ctouchpad.pressure);
				break;

			case SDL_CONTROLLERTOUCHPADDOWN:
				/*UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERTOUCHPADDOWN %i: %i,%i,%f,%f,%f"), sdlEvent.ctouchpad.which, sdlEvent.ctouchpad.touchpad,
					sdlEvent.ctouchpad.finger, sdlEvent.ctouchpad.x, sdlEvent.ctouchpad.y, sdlEvent.ctouchpad.pressure);*/
					USimpleControllerBPLibrary::controllerTarget->touchDownEvent(sdlEvent.cdevice.which, sdlEvent.ctouchpad.touchpad,
					sdlEvent.ctouchpad.finger, sdlEvent.ctouchpad.x, sdlEvent.ctouchpad.y, sdlEvent.ctouchpad.pressure);
				break;
			case SDL_CONTROLLERTOUCHPADUP:
				/*UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_CONTROLLERTOUCHPADUP %i: %i,%i,%f,%f,%f"), sdlEvent.ctouchpad.which, sdlEvent.ctouchpad.touchpad,
					sdlEvent.ctouchpad.finger, sdlEvent.ctouchpad.x, sdlEvent.ctouchpad.y, sdlEvent.ctouchpad.pressure);*/
					USimpleControllerBPLibrary::controllerTarget->touchUpEvent(sdlEvent.cdevice.which, sdlEvent.ctouchpad.touchpad,
					sdlEvent.ctouchpad.finger, sdlEvent.ctouchpad.x, sdlEvent.ctouchpad.y, sdlEvent.ctouchpad.pressure);
				break;
			default:
				//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: Unknown: %i"), sdlEvent.type);
				break;
			}
		}
		//Gamepad_processEvents();
		FPlatformProcess::Sleep(refreshRate);

		for (int32 i = 0; i < attachedDevices.Num(); i++) {
			//UE_LOG(LogTemp, Warning, TEXT("SDL_EVENT: SDL_JOYDEVICEADDED (custom) %i"), attachedDevices[i]);
			USimpleControllerBPLibrary::controllerTarget->deviceAttachedEvent(attachedDevices[i]);
		}
		attachedDevices.Empty();
	}

	//FPlatformProcess::Sleep(1.0f);

	//thread = nullptr;
	UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin stopped."));
#endif
	return 0;
}

void FSDLEventsThread::stopThread() {
	run = false;
}