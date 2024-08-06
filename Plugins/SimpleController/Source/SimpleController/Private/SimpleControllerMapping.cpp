// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerMapping.h"
//For some reason Xcode (Mac) only wants to compile the plugin if json is included here.
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"


USimpleControllerMappedButtonAsyncEvent* USimpleControllerMappedButtonAsyncEvent::controllerEventMappedButton(FSimpleControllerMappingProfile mappingProfile,FString actionName)
{
	USimpleControllerMappedButtonAsyncEvent* instance = NewObject<USimpleControllerMappedButtonAsyncEvent>();

	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance->buttonActionsInstances.Find(actionName) != nullptr) {
		instance->action = *profileInstance->buttonActionsInstances.Find(actionName);
		instance->action->buttonEvents.Add(instance);
		instance->AddToRoot();
	}
	return instance;
}


void USimpleControllerMappedButtonAsyncEvent::Activate() {}

void USimpleControllerMappedButtonAsyncEvent::BeginDestroy(){
	if (action != nullptr) {
		action->buttonEvents.Remove(this);
	}
	RemoveFromRoot();
	Super::BeginDestroy();
}

void USimpleControllerMappedButtonAsyncEvent::fireEvent(bool pressed/*, FSimpleControllerDevice* d*/) {
	/*if (action->bindToDevice && (d->productID != action->productID || d->vendorID != action->vendorID)) {
		return;
	}*/

	if (pressed) {
		actionPressed.Broadcast();
	}
	else {
		actionReleased.Broadcast();
	}
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
USimpleControllerMappingAxisEvents* USimpleControllerMappingAxisEvents::controllerEventMappedAxis(ESimpleControllerEventType triggerEventIf,
	FSimpleControllerMappingProfile mappingProfile, FString actionName)
{
	USimpleControllerMappingAxisEvents* instance = NewObject<USimpleControllerMappingAxisEvents>();
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance->axisActionsInstances.Find(actionName) != nullptr) {
		instance->action = *profileInstance->axisActionsInstances.Find(actionName);
		instance->action->axisEvents.Add(instance);
		instance->action->triggerEventIf = triggerEventIf;
		instance->AddToRoot();
	}
	return instance;
}

void USimpleControllerMappingAxisEvents::Activate() {}
void USimpleControllerMappingAxisEvents::BeginDestroy(){
	if (action != nullptr) {
		action->axisEvents.Remove(this);
	}
	RemoveFromRoot();
	Super::BeginDestroy();
}
void USimpleControllerMappingAxisEvents::fireEvent(float axisValue/*, FSimpleControllerDevice* d*/) {
	/*if (action->bindToDevice && (d->productID != action->productID || d->vendorID != action->vendorID)) {
		return;
	}*/

	onAction.Broadcast(axisValue);
}


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

USimpleControllerMappingButton* USimpleControllerMappingButton::startMappingButton(UObject* WorldContextObject, FSimpleControllerMappingProfile mappingProfile, FString actionName, 
	int32 timeInSeconds, bool allowMultipleMapping, bool keyboardButtons,bool mousedButtons)
{
	USimpleControllerMappingButton* instance = NewObject<USimpleControllerMappingButton>();

	instance->profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (instance->profileInstance->buttonActionsInstances.Find(actionName) != nullptr) {
		instance->AddToRoot();
		instance->buttonAction = *instance->profileInstance->buttonActionsInstances.Find(actionName);
		instance->allowMultipleMapping = allowMultipleMapping;
		instance->keyboardButtons = keyboardButtons;
		instance->mousedButtons = mousedButtons;
		instance->timeInSeconds = timeInSeconds;
		instance->WorldContextObject = WorldContextObject;
	}
	return instance;
}

void USimpleControllerMappingButton::Activate() {
	if (buttonAction != nullptr) {
		if (keyboardButtons || mousedButtons) {
			USimpleControllerBPLibrary::getSimpleControllerTarget()->initKeyboardEvents(WorldContextObject,keyboardButtons, mousedButtons);
		}
		USimpleControllerBPLibrary::getSimpleControllerTarget()->registerButtonMappingEvent(this);
		mappingThread = new FMappingThread(this,nullptr, timeInSeconds);
	}
	else {
		error.Broadcast(FSimpleControllerMappingButtonAction(),0,defaultDevice, -1,-1);
	}
}

void USimpleControllerMappingButton::BeginDestroy(){
	alive = false;
	if (mappingThread != nullptr) {
		mappingThread->stopThread();
		delete mappingThread;
		mappingThread = nullptr;

		USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterButtonMappingEvent();
	}
	RemoveFromRoot();
	Super::BeginDestroy();
}

void USimpleControllerMappingButton::fireSuccessEvent(int32 buttonID, FSimpleControllerDevice* d) {

	if (!alive)
		return;

	if (d->controllerType == ESimpleControllerType::MOUSE && mousedButtons == false) {
		return;
	}

	if (d->controllerType == ESimpleControllerType::KEYBOARD && keyboardButtons == false) {
		return;
	}

	if (buttonAction != nullptr) {

		if (mappingThread != nullptr) {
			mappingThread->stopThread();
		}
		if (buttonID != -1) {
			if (allowMultipleMapping == false) {
				bool mapped = false;
				TArray<FString> actionNames;
				USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappedButtonActionsNonStatic(mapped, actionNames, buttonID, d->connectionIndex);

				//Do not count yourself
				if (mapped && actionNames.Num() == 1) {
					if (actionNames[0].Equals(buttonAction->actionName, ESearchCase::CaseSensitive)) {
						mapped = false;
					}
				}


				if (mapped) {
					isMapped.Broadcast(*buttonAction, 0, *d,buttonID, d->connectionIndex);
				}
				else {
					USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterActionButtonEvent(buttonAction);


					buttonAction->buttonID = buttonID;
					buttonAction->connectionIndex = d->connectionIndex;
					buttonAction->vendorID = d->vendorID;
					buttonAction->productID = d->productID;
					buttonAction->deviceName = d->deviceName;
					buttonAction->controllerName = d->controllerName;
					buttonAction->buttonName = USimpleControllerBPLibrary::getSimpleControllerTarget()->getButtonName(*d, buttonID);

					USimpleControllerBPLibrary::getSimpleControllerTarget()->registerActionButtonEvent(profileInstance,buttonAction);


					successful.Broadcast(*buttonAction, 0, *d,buttonID, d->connectionIndex);
				}
			}
			else {
				buttonAction->buttonID = buttonID;
				buttonAction->connectionIndex = d->connectionIndex;
				buttonAction->vendorID = d->vendorID;
				buttonAction->productID = d->productID;
				buttonAction->deviceName = d->deviceName;
				buttonAction->controllerName = d->controllerName;
				buttonAction->buttonName = USimpleControllerBPLibrary::getSimpleControllerTarget()->getButtonName(*d, buttonID);

				USimpleControllerBPLibrary::getSimpleControllerTarget()->registerActionButtonEvent(profileInstance,buttonAction);
				successful.Broadcast(*buttonAction, 0, *d,buttonID, d->connectionIndex);
			}
		}
		else {
			error.Broadcast(*buttonAction, 0, *d, -1, -1);
		}
	}
	RemoveFromRoot();



	if (mappingThread != nullptr) {
		mappingThread->stopThread();
		mappingThread = nullptr;

		USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterButtonMappingEvent();
	}
	
}

void USimpleControllerMappingButton::fireTimeOutEvent(){
	timeOut.Broadcast(*buttonAction, 0, defaultDevice,-1,-1);
	RemoveFromRoot();
	if (mappingThread != nullptr) {
		mappingThread->stopThread();
		delete mappingThread;
		mappingThread = nullptr;

		USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterButtonMappingEvent();
	}
}

void USimpleControllerMappingButton::fireTimeEvent(int32 seconds){
	if (!alive)
		return;
	timer.Broadcast(*buttonAction, seconds, defaultDevice,-1,-1);
}



/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


USimpleControllerMappingAxis* USimpleControllerMappingAxis::startMappingAxis(FSimpleControllerMappingProfile mappingProfile, FString actionName, int32 timeInSeconds,
	float axisValueToReact, bool allowMultipleMapping)
{
	USimpleControllerMappingAxis* instance = NewObject<USimpleControllerMappingAxis>();

	instance->profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (instance->profileInstance->axisActionsInstances.Find(actionName) != nullptr) {
		instance->AddToRoot();
		instance->axisAction = *instance->profileInstance->axisActionsInstances.Find(actionName);
		instance->allowMultipleMapping = allowMultipleMapping;
		instance->timeInSeconds = timeInSeconds;
		instance->axisValueToReact = axisValueToReact;
	}
	return instance;
}

void USimpleControllerMappingAxis::Activate() {
	if (axisAction != nullptr) {
		USimpleControllerBPLibrary::getSimpleControllerTarget()->registerAxisMappingEvent(this);
		mappingThread = new FMappingThread(nullptr,this, timeInSeconds);
	}
	else {
		error.Broadcast(FSimpleControllerMappingAxisAction(), 0, defaultDevice,-1,-1);
	}
}

void USimpleControllerMappingAxis::BeginDestroy() {
	alive = false;
	if (mappingThread != nullptr) {
		mappingThread->stopThread();
		delete mappingThread;
		mappingThread = nullptr;

		USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterButtonMappingEvent();
	}
	RemoveFromRoot();
	Super::BeginDestroy();
}

void USimpleControllerMappingAxis::fireSuccessEvent(int32 axisID, FSimpleControllerDevice* d){
	if (!alive)
		return;

	if (axisAction != nullptr) {

		if (mappingThread != nullptr) {
			mappingThread->stopThread();
		}
		if (axisID != -1) {
			if (allowMultipleMapping == false) {
				bool mapped = false;
				TArray<FString> actionNames;
				USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappedAxisActionsNonStatic(mapped, actionNames, axisID, d->connectionIndex);
				//Do not count yourself
				if (mapped && actionNames.Num() == 1) {
					if (actionNames[0].Equals(axisAction->actionName, ESearchCase::CaseSensitive)) {
						mapped = false;
					}
				}

				if (mapped) {
					isMapped.Broadcast(*axisAction, 0, *d,axisID, d->connectionIndex);
				}
				else{
		
					USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterActionAxisEvent(axisAction);
					
					axisAction->axisID = axisID;
					axisAction->connectionIndex = d->connectionIndex;
					axisAction->vendorID = d->vendorID;
					axisAction->productID = d->productID;
					axisAction->deviceName = d->deviceName;
					axisAction->controllerName = d->controllerName;

					USimpleControllerBPLibrary::getSimpleControllerTarget()->registerActionAxisEvent(profileInstance,axisAction);
					successful.Broadcast(*axisAction, 0, *d,axisID, d->connectionIndex);
				
				}
			}
			else {
				axisAction->axisID = axisID;
				axisAction->connectionIndex = d->connectionIndex;
				axisAction->vendorID = d->vendorID;
				axisAction->productID = d->productID;
				axisAction->deviceName = d->deviceName;
				axisAction->controllerName = d->controllerName;

				USimpleControllerBPLibrary::getSimpleControllerTarget()->registerActionAxisEvent(profileInstance,axisAction);
				successful.Broadcast(*axisAction, 0, *d,axisID, d->connectionIndex);
			}
		}
		else {
			error.Broadcast(*axisAction, 0, *d,-1,-1);
		}
	}
	RemoveFromRoot();


	if (mappingThread != nullptr) {
		mappingThread->stopThread();
		mappingThread = nullptr;

		USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterButtonMappingEvent();
	}

}

void USimpleControllerMappingAxis::fireTimeOutEvent(){

	if (!alive)
		return;

	timeOut.Broadcast(*axisAction, 0, defaultDevice,-1,-1);
	RemoveFromRoot();

	if (mappingThread != nullptr) {
		mappingThread->stopThread();
		delete mappingThread;
		mappingThread = nullptr;

		USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterButtonMappingEvent();
	}
}

void USimpleControllerMappingAxis::fireTimeEvent(int32 seconds){
	if (!alive)
		return;
	timer.Broadcast(*axisAction, seconds, defaultDevice,-1,-1);
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

USimpleControllerMappingCalibrateAxis* USimpleControllerMappingCalibrateAxis::calibrateMappedAxis(FSimpleControllerMappingProfile mappingProfile, FString actionName, int32 timeInSeconds)
{
	USimpleControllerMappingCalibrateAxis* instance = NewObject<USimpleControllerMappingCalibrateAxis>();
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance->axisActionsInstances.Find(actionName) != nullptr) {
		instance->axisAction = *profileInstance->axisActionsInstances.Find(actionName);
		instance->timeInSeconds = timeInSeconds;
		//instance->action->axisEvents.Add(instance);
		//instance->action->triggerEventIf = triggerEventIf;
		instance->AddToRoot();
	}
	return instance;
}

void USimpleControllerMappingCalibrateAxis::removeCalibrationFromMappedAxis(FSimpleControllerMappingProfile mappingProfile, FString actionName){
	FSimpleControllerMappingProfile* profileInstance = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	if (profileInstance->axisActionsInstances.Find(actionName) != nullptr) {
		FSimpleControllerMappingAxisAction* axisAction = *profileInstance->axisActionsInstances.Find(actionName);
		bool found = false;
		FSimpleControllerDevice device = USimpleControllerBPLibrary::getSimpleControllerTarget()->findControllerByConnectionIndex(axisAction->connectionIndex,found);
		if (found) {
			USimpleControllerBPLibrary::getSimpleControllerTarget()->removeAxisCorrection(device,axisAction->axisID,ESimpleControllerAxisCorrection::Negative);
			USimpleControllerBPLibrary::getSimpleControllerTarget()->removeAxisCorrection(device,axisAction->axisID,ESimpleControllerAxisCorrection::Positive);
		}
		axisAction->calibrationNegative = false;
		axisAction->calibrationPositive = false;
	}
}

void USimpleControllerMappingCalibrateAxis::Activate(){
	if (axisAction != nullptr && axisAction->connectionIndex > -1) {
		USimpleControllerBPLibrary::getSimpleControllerTarget()->registerAxisCalibrateEvent(this);

		bool found = false;
		FSimpleControllerDevice device = USimpleControllerBPLibrary::getSimpleControllerTarget()->findControllerByConnectionIndex(axisAction->connectionIndex,found);
		if (found) {
			USimpleControllerBPLibrary::getSimpleControllerTarget()->removeAxisCorrection(device,axisAction->axisID,ESimpleControllerAxisCorrection::Negative);
			USimpleControllerBPLibrary::getSimpleControllerTarget()->removeAxisCorrection(device,axisAction->axisID,ESimpleControllerAxisCorrection::Positive);
			axisAction->persistentAxisValue = 0;
		}


		if (calibrateThread != nullptr) {
			calibrateThread->stopThread();
			delete calibrateThread;
			calibrateThread = nullptr;
		}
		calibrateThread = new FCalibrateAxisThread(this, timeInSeconds);
	}
	else {
		error.Broadcast(0,0);
	}
}

void USimpleControllerMappingCalibrateAxis::BeginDestroy(){
	endAndClean();
	RemoveFromRoot();
	Super::BeginDestroy();
}


void USimpleControllerMappingCalibrateAxis::fireAxisMoveEvent(int32 axisID,int32 connectionIndex, float axisValue){

	if (axisAction->axisID != axisID || axisAction->connectionIndex != connectionIndex) {
		return;
	}

	axisValueChange.Broadcast(axisValue,0);

	if (isMax) {
		if (axisValue < 0) {
			if (axisValue < maxAxisValue) {
				maxAxisValue = axisValue;
			}
		}
		else {
			if (axisValue > maxAxisValue) {
				maxAxisValue = axisValue;
			}
		}

	}
	else {
		if (axisValue < 0) {
			if (axisValue < minAxisValue) {
				minAxisValue = axisValue;
			}
		}
		else {
			if (axisValue > minAxisValue) {
				minAxisValue = axisValue;
			}
		}
	}
}

void USimpleControllerMappingCalibrateAxis::fireMaxEvent(){
	isMax = false;
	finishedMax.Broadcast(0,0);
}

void USimpleControllerMappingCalibrateAxis::fireMinEvent(){
	if (maxAxisValue == minAxisValue) {
		error.Broadcast(0,0);
		endAndClean();
		return;
	}

	finishedMin.Broadcast(0,0);
	//UE_LOG(LogTemp, Error, TEXT("Max: %f Min: %f"), maxAxisValue, minAxisValue);

	if (minAxisValue <= -0.9 && maxAxisValue >= 0.9) {
		bool found = false;
		FSimpleControllerDevice device = USimpleControllerBPLibrary::getSimpleControllerTarget()->findControllerByConnectionIndex(axisAction->connectionIndex,found);
		if (found) {
			USimpleControllerBPLibrary::getSimpleControllerTarget()->addAxisCorrection(device,axisAction->axisID,ESimpleControllerAxisCorrection::Negative);
			axisAction->calibrationNegative = true;
			UE_LOG(LogTemp, Error, TEXT("set negative"));
		}
	}
	else {

		bool found = false;
		FSimpleControllerDevice device = USimpleControllerBPLibrary::getSimpleControllerTarget()->findControllerByConnectionIndex(axisAction->connectionIndex,found);
		if (found) {
			USimpleControllerBPLibrary::getSimpleControllerTarget()->addAxisCorrection(device,axisAction->axisID,ESimpleControllerAxisCorrection::Positive);
			axisAction->calibrationPositive = true;
			UE_LOG(LogTemp, Error, TEXT("set positive"));
		}
	}


	endAndClean();
}

//void USimpleControllerMappingCalibrateAxis::fireTimeOutEvent(){
//	timeOut.Broadcast(0, 0);
//	RemoveFromRoot();
//
//	if (calibrateThread != nullptr) {
//		calibrateThread->stopThread();
//		delete calibrateThread;
//		calibrateThread = nullptr;
//
//		USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterAxisCalibrateEvent();
//	}
//}

void USimpleControllerMappingCalibrateAxis::fireTimeEvent(int32 second){
	timer.Broadcast(0,second);
}

void USimpleControllerMappingCalibrateAxis::endAndClean(){
	if (calibrateThread != nullptr) {
		calibrateThread->stopThread();
		delete calibrateThread;
		calibrateThread = nullptr;

		USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterAxisCalibrateEvent();
	}
}




/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
USimpleControllerMappingSave* USimpleControllerMappingSave::saveMappingToFile(FString profileName, FSimpleControllerMappingProfile mappingProfile)
{
	USimpleControllerMappingSave* instance = NewObject<USimpleControllerMappingSave>();
	instance->profileName = profileName;
	instance->mappingProfile = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	instance->AddToRoot();
	return instance;
}


void USimpleControllerMappingSave::Activate() {
	if (mappingProfile == nullptr || mappingProfile->structID.ToString().Equals("00000000000000000000000000000000")) {
		fireEvent(false);
		return;
	}
	saveThread = new FMappingSaveThread(this);
}
void USimpleControllerMappingSave::BeginDestroy(){
	RemoveFromRoot();
	Super::BeginDestroy();
}
void USimpleControllerMappingSave::fireEvent(bool success) {
	if (success) {
		successful.Broadcast();
	}
	else {
		failed.Broadcast();
	}

	if (saveThread != nullptr) {
		delete saveThread;
	}
	RemoveFromRoot();
}



USimpleControllerMappingLoad* USimpleControllerMappingLoad::loadMappingFromFile(UObject* WorldContextObject,FString profileName, FSimpleControllerMappingProfile mappingProfile)
{
	USimpleControllerMappingLoad* instance = NewObject<USimpleControllerMappingLoad>();
	instance->profileName = profileName;
	instance->mappingProfile = USimpleControllerBPLibrary::getSimpleControllerTarget()->getMappingProfileInstance(mappingProfile);
	instance->WorldContextObject = WorldContextObject;
	instance->AddToRoot();
	return instance;
}


void USimpleControllerMappingLoad::Activate() {
	if (mappingProfile == nullptr || mappingProfile->structID.ToString().Equals("00000000000000000000000000000000")) {
		fireEvent(false);
		return;
	}
	USimpleControllerBPLibrary::getSimpleControllerTarget()->unregisterAllMappedEvents(mappingProfile);
	loadThread = new FMappingLoadThread(this);
}
void USimpleControllerMappingLoad::BeginDestroy(){
	RemoveFromRoot();
	Super::BeginDestroy();
}
void USimpleControllerMappingLoad::fireEvent(bool success) {
	if (success) {
		successful.Broadcast();
	}
	else {
		failed.Broadcast();
	}

	if (loadThread != nullptr) {
		delete loadThread;
	}
	RemoveFromRoot();
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

FMappingThread::FMappingThread(USimpleControllerMappingButton* simpleControllerMappingButtonP, USimpleControllerMappingAxis* simpleControllerMappingAxisP, int32 secondsP) :
	simpleControllerMappingButton(simpleControllerMappingButtonP),
	simpleControllerMappingAxis(simpleControllerMappingAxisP),
	seconds(secondsP) {
	FString threadName = "FMappingThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}

FMappingThread::~FMappingThread() {
	delete thread;
}


uint32 FMappingThread::Run() {

	int32 secondsLocal = seconds;
	USimpleControllerMappingButton* simpleControllerMappingButtonLocal = simpleControllerMappingButton;
	USimpleControllerMappingAxis* simpleControllerMappingAxisLocal = simpleControllerMappingAxis;

	while (run && secondsLocal >= 0) {
		AsyncTask(ENamedThreads::GameThread, [simpleControllerMappingButtonLocal, simpleControllerMappingAxisLocal, secondsLocal]() {
						
			if (simpleControllerMappingButtonLocal != nullptr) {
				simpleControllerMappingButtonLocal->fireTimeEvent(secondsLocal);
			}
			if (simpleControllerMappingAxisLocal != nullptr) {
				simpleControllerMappingAxisLocal->fireTimeEvent(secondsLocal);
			}
		});
		FPlatformProcess::Sleep(1);
		secondsLocal--;
	}
	if (run) {
		AsyncTask(ENamedThreads::GameThread, [simpleControllerMappingButtonLocal, simpleControllerMappingAxisLocal, secondsLocal]() {
			if (simpleControllerMappingButtonLocal != nullptr) {
				simpleControllerMappingButtonLocal->fireTimeOutEvent();
			}
			if (simpleControllerMappingAxisLocal != nullptr) {
				simpleControllerMappingAxisLocal->fireTimeOutEvent();
			}
		});
	}
	return 0;
}

void FMappingThread::stopThread() {
	run = false;
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

FCalibrateAxisThread::FCalibrateAxisThread(USimpleControllerMappingCalibrateAxis* calibrateAxisEventP, int32 secondsP) :
	calibrateAxisEvent(calibrateAxisEventP),
	seconds(secondsP) {
	FString threadName = "FCalibrateAxisThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}

FCalibrateAxisThread::~FCalibrateAxisThread(){
	delete thread;
}

uint32 FCalibrateAxisThread::Run(){
	int32 secondsLocal = seconds;
	USimpleControllerMappingCalibrateAxis* calibrateAxisEventLocal = calibrateAxisEvent;

	while (run && secondsLocal >= 0) {
		AsyncTask(ENamedThreads::GameThread, [calibrateAxisEventLocal, secondsLocal]() {

			if (calibrateAxisEventLocal != nullptr) {
				calibrateAxisEventLocal->fireTimeEvent(secondsLocal);
			}
		});
		FPlatformProcess::Sleep(1);
		secondsLocal--;
	}

	if (run) {
		AsyncTask(ENamedThreads::GameThread, [calibrateAxisEventLocal]() {
			if (calibrateAxisEventLocal != nullptr) {
				calibrateAxisEventLocal->fireMaxEvent();
			}
			});
	}

	secondsLocal = seconds;

	while (run && secondsLocal >= 0) {
		AsyncTask(ENamedThreads::GameThread, [calibrateAxisEventLocal, secondsLocal]() {

			if (calibrateAxisEventLocal != nullptr) {
				calibrateAxisEventLocal->fireTimeEvent(secondsLocal);
			}
			});
		FPlatformProcess::Sleep(1);
		secondsLocal--;
	}

	if (run) {
		AsyncTask(ENamedThreads::GameThread, [calibrateAxisEventLocal]() {
			if (calibrateAxisEventLocal != nullptr) {
				calibrateAxisEventLocal->fireMinEvent();
			}
			});
	}

	return 0;
}

void FCalibrateAxisThread::stopThread(){
	run = false;
}


/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

FMappingSaveThread::FMappingSaveThread(USimpleControllerMappingSave* saveMappingFromFileP) :
	saveMappingFromFile(saveMappingFromFileP) {
	FString threadName = "FMappingSaveThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}

FMappingSaveThread::~FMappingSaveThread() {
	delete thread;
}

uint32 FMappingSaveThread::Run() {
	if (saveMappingFromFile == nullptr) {
		return 0;
	}

	USimpleControllerMappingSave* saveMappingFromFileLocal = saveMappingFromFile;
	if (saveMappingFromFile->profileName.IsEmpty() || saveMappingFromFile->mappingProfile == nullptr) {
		AsyncTask(ENamedThreads::GameThread, [saveMappingFromFileLocal]() {
			saveMappingFromFileLocal->fireEvent(false);
		});
		return 0;
	}

	FString dir = FPaths::ProjectSavedDir() + saveMappingFromFile->profileName;
	//UE_LOG(LogTemp, Error, TEXT("ProjectSavedDir: %s"), *dir);


	bool successful = false;
	bool hasMappedButtons = false;
	bool hasMappedAxes = false;

	TSharedPtr<FJsonObject> mainJsonObject = MakeShareable(new FJsonObject());

	TSharedPtr<FJsonObject> buttonsJsonObject = MakeShareable(new FJsonObject());
	for (auto& mapElement : saveMappingFromFile->mappingProfile->buttonActionsInstances) {
		FSimpleControllerMappingButtonAction* buttonAction = mapElement.Value;
		if (USimpleControllerBPLibrary::getSimpleControllerTarget()->isRegisterActionButtonEvent(buttonAction) == false) {
			continue;
		}
		
		TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject());

		//jsonObject->SetBoolField("bindToDevice", buttonAction->bindToDevice);

		jsonObject->SetStringField("actionName", buttonAction->actionName);
		jsonObject->SetStringField("description", buttonAction->description);
		jsonObject->SetStringField("tag", buttonAction->tag);
		jsonObject->SetStringField("deviceName", buttonAction->deviceName);
		jsonObject->SetStringField("controllerName", buttonAction->controllerName);
		jsonObject->SetStringField("buttonName", buttonAction->buttonName);

		jsonObject->SetNumberField("connectionIndex", buttonAction->connectionIndex);
		jsonObject->SetNumberField("buttonID", buttonAction->buttonID);
		jsonObject->SetNumberField("vendorID", buttonAction->vendorID);
		jsonObject->SetNumberField("productID", buttonAction->productID);

		buttonsJsonObject->SetObjectField(mapElement.Key, jsonObject);
		hasMappedButtons = true;
	}


	TSharedPtr<FJsonObject> axesJsonObject = MakeShareable(new FJsonObject());
	for (auto& mapElement : saveMappingFromFile->mappingProfile->axisActionsInstances) {
		
		FSimpleControllerMappingAxisAction* axisAction = mapElement.Value;
		if (USimpleControllerBPLibrary::getSimpleControllerTarget()->isRegisterActionAxisEvent(axisAction) == false) {
			continue;
		}

		TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject());
		
		//jsonObject->SetBoolField("bindToDevice", axisAction->bindToDevice);

		jsonObject->SetStringField("actionName", axisAction->actionName);
		jsonObject->SetStringField("description", axisAction->description);
		jsonObject->SetStringField("tag", axisAction->tag);
		jsonObject->SetStringField("deviceName", axisAction->deviceName);
		jsonObject->SetStringField("controllerName", axisAction->controllerName);

		jsonObject->SetBoolField("invertAxis", axisAction->invertAxis);
		jsonObject->SetBoolField("calibrationNegative", axisAction->calibrationNegative);
		jsonObject->SetBoolField("calibrationPositive", axisAction->calibrationPositive);

		//UE_LOG(LogTemp, Error, TEXT("save calibrationNegative: %i"), axisAction->calibrationNegative);
		//UE_LOG(LogTemp, Error, TEXT("save calibrationPositive: %i"), axisAction->calibrationPositive);

		jsonObject->SetNumberField("connectionIndex", axisAction->connectionIndex);
		jsonObject->SetNumberField("axisID", axisAction->axisID);
		jsonObject->SetNumberField("vendorID", axisAction->vendorID);
		jsonObject->SetNumberField("productID", axisAction->productID);

		axesJsonObject->SetObjectField(mapElement.Key, jsonObject);
		hasMappedAxes = true;
	}

	FString jsonString = "";

	if (hasMappedButtons || hasMappedAxes) {
		if (hasMappedButtons) {
			mainJsonObject->SetObjectField("buttons", buttonsJsonObject);
		}
		if (hasMappedAxes) {
			mainJsonObject->SetObjectField("axes", axesJsonObject);
		}
				
		TSharedRef<TJsonWriter<>> json_writer = TJsonWriterFactory<>::Create(&jsonString);
		successful = FJsonSerializer::Serialize(mainJsonObject.ToSharedRef(), json_writer);


		if (!successful) {
			AsyncTask(ENamedThreads::GameThread, [saveMappingFromFileLocal]() {
				saveMappingFromFileLocal->fireEvent(false);
				});
			return 0;
		}
	}
	bool success = FFileHelper::SaveStringToFile(jsonString, *dir);

	AsyncTask(ENamedThreads::GameThread, [saveMappingFromFileLocal, success]() {
		saveMappingFromFileLocal->fireEvent(success);
	});


	return 0;
}

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
FMappingLoadThread::FMappingLoadThread(USimpleControllerMappingLoad* loadMappingFromFileP) :
	loadMappingFromFile(loadMappingFromFileP) {
	FString threadName = "FMappingLoadThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}

FMappingLoadThread::~FMappingLoadThread(){
	delete thread;
}

uint32 FMappingLoadThread::Run(){
	if (loadMappingFromFile == nullptr) {
		return 0;
	}

	USimpleControllerMappingLoad* loadMappingFromFileLocal = loadMappingFromFile;
	bool success = false;

	if (loadMappingFromFile->profileName.IsEmpty() || loadMappingFromFile->mappingProfile == nullptr) {
		AsyncTask(ENamedThreads::GameThread, [loadMappingFromFileLocal, success]() {
			loadMappingFromFileLocal->fireEvent(success);
		});
	
		return 0;
	}

	FString dir = FPaths::ProjectSavedDir() + loadMappingFromFile->profileName;

	if (FPaths::FileExists(dir) == false) {
		AsyncTask(ENamedThreads::GameThread, [loadMappingFromFileLocal, success]() {
			loadMappingFromFileLocal->fireEvent(success);
			});
		return 0;
	}

	FString jsonString;
	success= FFileHelper::LoadFileToString(jsonString, *dir);

	if (!success) {
		AsyncTask(ENamedThreads::GameThread, [loadMappingFromFileLocal, success]() {
			loadMappingFromFileLocal->fireEvent(success);
			});
		return 0;
	}

	TSharedPtr<FJsonObject> mainJsonObject;
	TSharedRef<TJsonReader<>> reader = TJsonReaderFactory<>::Create(jsonString);
	success = FJsonSerializer::Deserialize(reader, mainJsonObject);
	if (!success) {
		AsyncTask(ENamedThreads::GameThread, [loadMappingFromFileLocal, success]() {
			loadMappingFromFileLocal->fireEvent(success);
			});
		return 0;
	}

	
	
	if (mainJsonObject->HasTypedField<EJson::Object>(TEXT("buttons"))) {
		bool hasKeyBoard = false;
		TSharedPtr<FJsonObject> buttonJsonObject = mainJsonObject->GetObjectField(TEXT("buttons"));
		for (auto& mapElement : loadMappingFromFile->mappingProfile->buttonActionsInstances) {
			FSimpleControllerMappingButtonAction* buttonAction = mapElement.Value;

			if (buttonJsonObject->HasTypedField<EJson::Object>(mapElement.Key)) {
				TSharedPtr<FJsonObject> jsonObject = buttonJsonObject->GetObjectField(mapElement.Key);

				/*if (jsonObject->HasTypedField<EJson::Boolean>("bindToDevice"))
					buttonAction->bindToDevice = jsonObject->GetBoolField(TEXT("bindToDevice");*/

				if (jsonObject->HasTypedField<EJson::String>(TEXT("actionName")))
					buttonAction->actionName = jsonObject->GetStringField(TEXT("actionName"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("description")))
					buttonAction->description = jsonObject->GetStringField(TEXT("description"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("tag")))
					buttonAction->tag = jsonObject->GetStringField(TEXT("tag"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("deviceName")))
					buttonAction->deviceName = jsonObject->GetStringField(TEXT("deviceName"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("controllerName")))
					buttonAction->controllerName = jsonObject->GetStringField(TEXT("controllerName"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("buttonName")))
					buttonAction->buttonName = jsonObject->GetStringField(TEXT("buttonName"));

				if (jsonObject->HasTypedField<EJson::Number>(TEXT("connectionIndex")))
					buttonAction->connectionIndex = jsonObject->GetNumberField(TEXT("connectionIndex"));
				if (jsonObject->HasTypedField<EJson::Number>(TEXT("buttonID")))
					buttonAction->buttonID = jsonObject->GetNumberField(TEXT("buttonID"));
				if (jsonObject->HasTypedField<EJson::Number>(TEXT("vendorID")))
					buttonAction->vendorID = jsonObject->GetNumberField(TEXT("vendorID"));
				if (jsonObject->HasTypedField<EJson::Number>(TEXT("productID")))
					buttonAction->productID = jsonObject->GetNumberField(TEXT("productID"));

				if (buttonAction->buttonID >= 0 && buttonAction->connectionIndex >= 0) {
					USimpleControllerBPLibrary::getSimpleControllerTarget()->registerActionButtonEvent(loadMappingFromFile->mappingProfile,buttonAction);
					bool keyboard = false;
					bool mouse = false;
					if (buttonAction->connectionIndex == 99999) {
						keyboard = true;
					}
					if (buttonAction->connectionIndex == 99998) {
						mouse = true;
					}


					if (keyboard || mouse) {
						USimpleControllerBPLibrary::getSimpleControllerTarget()->initKeyboardEvents(loadMappingFromFile->WorldContextObject, keyboard, mouse);
					}

					bool found = false;
					FSimpleControllerDevice device = USimpleControllerBPLibrary::getSimpleControllerTarget()->findControllerByConnectionIndex(buttonAction->connectionIndex, found);
					if (found)
						buttonAction->buttonName = USimpleControllerBPLibrary::getSimpleControllerTarget()->getButtonName(device, buttonAction->buttonID);
				}

				success = true;

			}
		}
	}

	if (mainJsonObject->HasTypedField<EJson::Object>(TEXT("axes"))) {
		TSharedPtr<FJsonObject> axisJsonObject = mainJsonObject->GetObjectField(TEXT("axes"));
		for (auto& mapElement : loadMappingFromFile->mappingProfile->axisActionsInstances) {
			FSimpleControllerMappingAxisAction* axisAction = mapElement.Value;

			if (axisJsonObject->HasTypedField<EJson::Object>(mapElement.Key)) {
				TSharedPtr<FJsonObject> jsonObject = axisJsonObject->GetObjectField(mapElement.Key);

				/*if (jsonObject->HasTypedField<EJson::Boolean>("bindToDevice"))
					axisAction->bindToDevice = jsonObject->GetBoolField(TEXT("bindToDevice");*/

				if (jsonObject->HasTypedField<EJson::String>(TEXT("actionName")))
					axisAction->actionName = jsonObject->GetStringField(TEXT("actionName"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("description")))
					axisAction->description = jsonObject->GetStringField(TEXT("description"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("tag")))
					axisAction->tag = jsonObject->GetStringField(TEXT("tag"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("deviceName")))
					axisAction->deviceName = jsonObject->GetStringField(TEXT("deviceName"));
				if (jsonObject->HasTypedField<EJson::String>(TEXT("controllerName")))
					axisAction->controllerName = jsonObject->GetStringField(TEXT("controllerName"));

				if (jsonObject->HasTypedField<EJson::Boolean>(TEXT("invertAxis")))
					axisAction->invertAxis = jsonObject->GetBoolField(TEXT("invertAxis"));
				if (jsonObject->HasTypedField<EJson::Boolean>(TEXT("calibrationNegative")))
					axisAction->calibrationNegative = jsonObject->GetBoolField(TEXT("calibrationNegative"));
				if (jsonObject->HasTypedField<EJson::Boolean>(TEXT("calibrationPositive")))
					axisAction->calibrationPositive = jsonObject->GetBoolField(TEXT("calibrationPositive"));

				if (jsonObject->HasTypedField<EJson::Number>(TEXT("connectionIndex")))
					axisAction->connectionIndex = jsonObject->GetNumberField(TEXT("connectionIndex"));
				if (jsonObject->HasTypedField<EJson::Number>(TEXT("axisID")))
					axisAction->axisID = jsonObject->GetNumberField(TEXT("axisID"));
				if (jsonObject->HasTypedField<EJson::Number>(TEXT("vendorID")))
					axisAction->vendorID = jsonObject->GetNumberField(TEXT("vendorID"));
				if (jsonObject->HasTypedField<EJson::Number>(TEXT("productID")))
					axisAction->productID = jsonObject->GetNumberField(TEXT("productID"));

				if (axisAction->axisID >= 0 && axisAction->connectionIndex >= 0) {
					FSimpleControllerMappingProfile* mappingProfile = loadMappingFromFile->mappingProfile;
					AsyncTask(ENamedThreads::GameThread, [mappingProfile, axisAction]() {
						USimpleControllerBPLibrary::getSimpleControllerTarget()->registerActionAxisEvent(mappingProfile,axisAction);
					});
				}

				success = true;

			}
		}
	}

	AsyncTask(ENamedThreads::GameThread, [loadMappingFromFileLocal, success]() {
		loadMappingFromFileLocal->fireEvent(success);
	});
	return 0;
}
