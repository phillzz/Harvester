// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerAsyncEvents.h"


USimpleControllerStatusAsyncEvent* USimpleControllerStatusAsyncEvent::controllerStatusAsyncEvent()
{
	USimpleControllerStatusAsyncEvent* instance = NewObject<USimpleControllerStatusAsyncEvent>();
	instance->AddToRoot();
	return instance;
}


void USimpleControllerStatusAsyncEvent::Activate() {
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerAsycEventStatus(this);
}

void USimpleControllerStatusAsyncEvent::BeginDestroy(){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->unRegisterAsycEventStatus(this);
	RemoveFromRoot();
	Super::BeginDestroy();
}
void USimpleControllerStatusAsyncEvent::fireEvent(bool attach, FSimpleControllerDevice* d) {
	if (attach) {
		attached.Broadcast(*d);
	}
	else {
		detached.Broadcast(*d);
	}

}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


USimpleControllerButtonAsyncEvent* USimpleControllerButtonAsyncEvent::controllerButtonAsyncEvent()
{
	USimpleControllerButtonAsyncEvent* instance = NewObject<USimpleControllerButtonAsyncEvent>();
	instance->AddToRoot();
	return instance;
}


void USimpleControllerButtonAsyncEvent::Activate() {
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerAsycEventButton(this);
}

void USimpleControllerButtonAsyncEvent::BeginDestroy(){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->unRegisterAsycEventButton(this);
	RemoveFromRoot();
	Super::BeginDestroy();
}
void USimpleControllerButtonAsyncEvent::fireEvent(bool down,int32 buttonID, FSimpleControllerDevice* d) {
	if (down) {
		buttonDown.Broadcast(buttonID,d->connectionIndex, *d);
	}
	else {
		buttonUp.Broadcast(buttonID,d->connectionIndex,*d);
	}

}


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

USimpleControllerAxisAsyncEvent* USimpleControllerAxisAsyncEvent::controllerAxisAsyncEvent(ESimpleControllerEventType triggerEventIf)
{
	USimpleControllerAxisAsyncEvent* instance = NewObject<USimpleControllerAxisAsyncEvent>();
	instance->triggerEventIf = triggerEventIf;
	instance->AddToRoot();
	return instance;
}


void USimpleControllerAxisAsyncEvent::Activate() {
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerAsycEventAxis(this);
}

void USimpleControllerAxisAsyncEvent::BeginDestroy(){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->unRegisterAsycEventAxis(this);
	RemoveFromRoot();
	Super::BeginDestroy();
}
void USimpleControllerAxisAsyncEvent::fireEvent(int32 axisID, float axisValue, FSimpleControllerDevice* d) {
	onAction.Broadcast(axisID,axisValue,d->connectionIndex, *d);
}

void USimpleControllerAxisAsyncEvent::firePersistentEvent(){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	bool found = false;
	for (auto& element : USimpleControllerBPLibrary::controllerTarget->controllerDeviceStructMap) {
		if (element.Value->controllerType == ESimpleControllerType::KEYBOARD || element.Value->controllerType == ESimpleControllerType::MOUSE)
			continue;
		FSimpleControllerDevice d = *element.Value;
		for (int32 i = 0; i < d.numAxes; i++) {
			int32 axisValueSDL = SDL_JoystickGetAxis(d.sdlJoystick, i);
			float axisValue = 0;
			if (axisValueSDL < 0) {
				axisValue = ((float)axisValueSDL / maxAxisValueNegative) * -1;
			}
			else if (axisValueSDL > 0) {
				axisValue = (float)axisValueSDL / maxAxisValuePositive;
			}
			if (d.isNegativeAxis.Find(i)) {
				axisValue = (axisValue + 1) / 2;
			}
			else {
				if (d.isPositiveAxis.Find(i)) {
					axisValue = -((axisValue - 1) / 2);
				}
			}

			onAction.Broadcast(i,axisValue,d.connectionIndex, d);
		}
	}

#endif
}
