// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerGamepadEvents.h"


USimpleControllerGamepadFaceButtonEvents* USimpleControllerGamepadFaceButtonEvents::gamepadEventFaceButtons(/*UObject* WorldContextObject,*/ int32 connectionIndex)
{
	USimpleControllerGamepadFaceButtonEvents* instance = NewObject<USimpleControllerGamepadFaceButtonEvents>();
	/*instance->WorldContextObject = WorldContextObject;*/
	instance->connectionIndex = connectionIndex;
	instance->AddToRoot();
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerGamepadFaceButtonEvents(instance);
	return instance;
}

void USimpleControllerGamepadFaceButtonEvents::Activate() {
	//if (USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerMobile != nullptr){
	//	USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerMobile->init(WorldContextObject);
	//}
}


void USimpleControllerGamepadFaceButtonEvents::fireButtonBottomEvent(bool pressDown){
	if (pressDown) {
		bottomPressed.Broadcast();
	}
	else {
		bottomReleased.Broadcast();
	}
}

void USimpleControllerGamepadFaceButtonEvents::fireButtonTopEvent(bool pressDown) {
	if (pressDown) {
		topPressed.Broadcast();
	}
	else {
		topReleased.Broadcast();
	}
}

void USimpleControllerGamepadFaceButtonEvents::fireButtonRightEvent(bool pressDown) {
	if (pressDown) {
		rightPressed.Broadcast();
	}
	else {
		rightReleased.Broadcast();
	}
}

void USimpleControllerGamepadFaceButtonEvents::fireButtonLeftEvent(bool pressDown) {
	if (pressDown) {
		leftPressed.Broadcast();
	}
	else {
		leftReleased.Broadcast();
	}
}




USimpleControllerGamepadControlButtonEvents* USimpleControllerGamepadControlButtonEvents::gamepadEventControlButtons(int32 connectionIndex)
{
	USimpleControllerGamepadControlButtonEvents* instance = NewObject<USimpleControllerGamepadControlButtonEvents>();
	instance->connectionIndex = connectionIndex;
	instance->AddToRoot();
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerGamepadControlButtonEvents(instance);
	return instance;
}

void USimpleControllerGamepadControlButtonEvents::Activate() {}

void USimpleControllerGamepadControlButtonEvents::fireButtonBackEvent(bool pressDown){
	if (pressDown) {
		backPressed.Broadcast();
	}
	else {
		backReleased.Broadcast();
	}
}
void USimpleControllerGamepadControlButtonEvents::fireButtonStartEvent(bool pressDown){
	if (pressDown) {
		startPressed.Broadcast();
	}
	else {
		startReleased.Broadcast();
	}
}
void USimpleControllerGamepadControlButtonEvents::fireButtonGuideEvent(bool pressDown){
	if (pressDown) {
		guidePressed.Broadcast();
	}
	else {
		guideReleased.Broadcast();
	}
}


USimpleControllerGamepadStickButtonEvents* USimpleControllerGamepadStickButtonEvents::gamepadEventStickButtons(int32 connectionIndex)
{
	USimpleControllerGamepadStickButtonEvents* instance = NewObject<USimpleControllerGamepadStickButtonEvents>();
	instance->connectionIndex = connectionIndex;
	instance->AddToRoot();
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerGamepadStickButtonEvents(instance);
	return instance;
}

void USimpleControllerGamepadStickButtonEvents::Activate() {}
void USimpleControllerGamepadStickButtonEvents::fireButtonLeftStickEvent(bool pressDown){
	if (pressDown) {
		leftStickPressed.Broadcast();
	}
	else {
		leftStickReleased.Broadcast();
	}
}
void USimpleControllerGamepadStickButtonEvents::fireButtonRightEvent(bool pressDown){
	if (pressDown) {
		rightStickPressed.Broadcast();
	}
	else {
		rightStickReleased.Broadcast();
	}
}



USimpleControllerGamepadShoulderButtonEvents* USimpleControllerGamepadShoulderButtonEvents::gamepadEventShoulderButtons(int32 connectionIndex)
{
	USimpleControllerGamepadShoulderButtonEvents* instance = NewObject<USimpleControllerGamepadShoulderButtonEvents>();
	instance->connectionIndex = connectionIndex;
	instance->AddToRoot();
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerGamepadShoulderButtonEvents(instance);
	return instance;
}

void USimpleControllerGamepadShoulderButtonEvents::Activate() {}
void USimpleControllerGamepadShoulderButtonEvents::fireButtonLeftShoulderEvent(bool pressDown){
	if (pressDown) {
		leftShoulderPressed.Broadcast();
	}
	else {
		leftShoulderReleased.Broadcast();
	}
}
void USimpleControllerGamepadShoulderButtonEvents::fireButtonRightShoulderEvent(bool pressDown){
	if (pressDown) {
		rightShoulderPressed.Broadcast();
	}
	else {
		rightShoulderReleased.Broadcast();
	}
}




USimpleControllerGamepadDpadButtonEvents* USimpleControllerGamepadDpadButtonEvents::gamepadEventDpadButtons(int32 connectionIndex)
{
	USimpleControllerGamepadDpadButtonEvents* instance = NewObject<USimpleControllerGamepadDpadButtonEvents>();
	instance->connectionIndex = connectionIndex;
	instance->AddToRoot();
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerGamepadDpadButtonEvents(instance);
	return instance;
}

void USimpleControllerGamepadDpadButtonEvents::Activate() {}
void USimpleControllerGamepadDpadButtonEvents::fireDpadBottomEvent(bool pressDown){
	if (pressDown) {
		bottomDpadPressed.Broadcast();
	}
	else {
		bottomDpadReleased.Broadcast();
	}
}
void USimpleControllerGamepadDpadButtonEvents::fireDpadTopEvent(bool pressDown){
	if (pressDown) {
		topDpadPressed.Broadcast();
	}
	else {
		topDpadReleased.Broadcast();
	}
}
void USimpleControllerGamepadDpadButtonEvents::fireDpadRightEvent(bool pressDown){
	if (pressDown) {
		rightDpadPressed.Broadcast();
	}
	else {
		rightDpadReleased.Broadcast();
	}
}
void USimpleControllerGamepadDpadButtonEvents::fireDpadLeftEvent(bool pressDown){
	if (pressDown) {
		leftDpadPressed.Broadcast();
	}
	else {
		leftDpadReleased.Broadcast();
	}
}

USimpleControllerGamepadSpecialButtonEvents* USimpleControllerGamepadSpecialButtonEvents::gamepadEventSpecialButtons(int32 connectionIndex) {
	USimpleControllerGamepadSpecialButtonEvents* instance = NewObject<USimpleControllerGamepadSpecialButtonEvents>();
	instance->connectionIndex = connectionIndex;
	instance->AddToRoot();
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerGamepadSpecialButtonEvents(instance);
	return instance;
}

void USimpleControllerGamepadSpecialButtonEvents::Activate(){}

void USimpleControllerGamepadSpecialButtonEvents::fireMisc1Event(bool pressDown){
	if (pressDown) {
		Misc1Pressed.Broadcast();
	}
	else {
		Misc1Released.Broadcast();
	}
}

void USimpleControllerGamepadSpecialButtonEvents::fireXboxElitePaddleP1Event(bool pressDown){
	if (pressDown) {
		 XboxElitePaddleP1Pressed.Broadcast();
	}
	else {
		 XboxElitePaddleP1Released.Broadcast();
	}
}

void USimpleControllerGamepadSpecialButtonEvents::fireXboxElitePaddleP2Event(bool pressDown){
	if (pressDown) {
		 XboxElitePaddleP2Pressed.Broadcast();
	}
	else {
		 XboxElitePaddleP2Released.Broadcast();
	}
}

void USimpleControllerGamepadSpecialButtonEvents::fireXboxElitePaddleP3Event(bool pressDown){
	if (pressDown) {
		 XboxElitePaddleP3Pressed.Broadcast();
	}
	else {
		 XboxElitePaddleP3Released.Broadcast();
	}
}

void USimpleControllerGamepadSpecialButtonEvents::fireXboxElitePaddleP4Event(bool pressDown){
	if (pressDown) {
		 XboxElitePaddleP4Pressed.Broadcast();
	}
	else {
		 XboxElitePaddleP4Released.Broadcast();
	}
}

void USimpleControllerGamepadSpecialButtonEvents::firePSTouchpadEvent(bool pressDown){
	if (pressDown) {
		PSTouchpadPressed.Broadcast();
	}
	else {
		PSTouchpadReleased.Broadcast();
	}
}


USimpleControllerGamepadStickAxisEvents* USimpleControllerGamepadStickAxisEvents::gamepadEventStickAxis(ESimpleControllerEventType triggerEventIf, int32 connectionIndex)
{
	USimpleControllerGamepadStickAxisEvents* instance = NewObject<USimpleControllerGamepadStickAxisEvents>();
	instance->triggerEventIf = triggerEventIf;
	instance->connectionIndex = connectionIndex;
	instance->AddToRoot();
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerGamepadStickAxisEvents(instance);
	return instance;
}

void USimpleControllerGamepadStickAxisEvents::Activate() {}
void USimpleControllerGamepadStickAxisEvents::fireLeftStickXEvent(float value){
	leftStickX.Broadcast(value);
}
void USimpleControllerGamepadStickAxisEvents::fireLeftStickYEvent(float value){
	leftStickY.Broadcast(value);
}
void USimpleControllerGamepadStickAxisEvents::fireRightStickXEvent(float value){
	rightStickX.Broadcast(value);
}
void USimpleControllerGamepadStickAxisEvents::fireRightStickYEvent(float value){
	rightStickY.Broadcast(value);
}



USimpleControllerGamepadTriggerAxisEvents* USimpleControllerGamepadTriggerAxisEvents::gamepadEventTriggerAxis(ESimpleControllerEventType triggerEventIf, int32 connectionIndex)
{
	USimpleControllerGamepadTriggerAxisEvents* instance = NewObject<USimpleControllerGamepadTriggerAxisEvents>();
	instance->triggerEventIf = triggerEventIf;
	instance->connectionIndex = connectionIndex;
	instance->AddToRoot();
	USimpleControllerBPLibrary::getSimpleControllerTarget()->registerGamepadTriggerAxisEvents(instance);
	return instance;
}

void USimpleControllerGamepadTriggerAxisEvents::Activate() {}
void USimpleControllerGamepadTriggerAxisEvents::fireLeftTriggerEvent(float value) {
	leftTrigger.Broadcast(value);
}
void USimpleControllerGamepadTriggerAxisEvents::fireRightTriggerEvent(float value) {
	rightTrigger.Broadcast(value);
}
