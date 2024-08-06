// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerWheel.h"

USimpleControllerWheel::USimpleControllerWheel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	USimpleControllerBPLibrary::getSimpleControllerTarget()->onaxisMovedEventDelegate.AddDynamic(this, &USimpleControllerWheel::wheelAxisEvent);

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	//autocenterSpeed = 32767;

	autoCenterEffect = new SDL_HapticEffect();

	autoCenterEffect->type = SDL_HAPTIC_CONSTANT;
	autoCenterEffect->constant.length = SDL_HAPTIC_INFINITY;
	autoCenterEffect->constant.delay = 0;
	autoCenterEffect->constant.level = autocenterSpeed;
	//autoCenterEffect->constant.attack_length = attackLength;
	//autoCenterEffect->constant.attack_level = (Sint16)(32767.0f * attackLevel);
	//autoCenterEffect->constant.fade_length = fadeLength;
	//autoCenterEffect->constant.fade_level = (Sint16)(32767.0f * fadeLevel);
	autoCenterEffect->constant.direction.type = SDL_HAPTIC_CARTESIAN;
	//autoCenterEffect->constant.direction.dir[0] = 0;
	//autoCenterEffect->constant.direction.dir[1] = 0;
	//autoCenterEffect->constant.direction.dir[2] = 0;

#endif

}


void USimpleControllerWheel::wheelAxisEvent(const FString deviceID, const int32 axisID, const float axisValue, const int32 deviceIndex, const FSimpleControllerDevice device, const int32 connectionIndex) {

#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	
	if (wheelAxisID != axisID) {
		return;
	}

	lastWheelPostion = axisValue;

	//UE_LOG(LogTemp, Warning, TEXT("wheelAxisEvent %f"), axisValue);

	wheelPositionsMap.Add(device.deviceIndex, axisValue);

	if (showLogs) {
		FString s = "wheelAxisEvent: device.deviceIndex: " + FString::FromInt(device.deviceIndex) + " WheelDeviceIndex: " + FString::FromInt(autocenterDeviceIndex) +
			" axisID: " + FString::FromInt(axisID);
		//if (GEngine)
		//	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, s);
		UE_LOG(LogTemp, Display, TEXT("%s"), *s);
	}

	if (device.deviceIndex == autocenterDeviceIndex) {
		doAutoCenterWheel(device);
		return;
	}
#endif

}



void USimpleControllerWheel::moveWheel(FSimpleControllerDevice device, ESimpleControllerWheelFFDirection direction, float strength, int32 lengthInMilliseconds){
	if (USimpleControllerBPLibrary::getSimpleControllerTarget()->controllerDeviceStructMap.Find(device.deviceIndex) == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("SimpleController Plugin: Cannot execute function Move Wheel. Steering wheel device not specified or not found."));
		return;
	}
	new FMoveWheelThread(device, direction, strength, lengthInMilliseconds);

	//clean ram. yes it is ugly
	while (USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel->oldMoveWheelTheads.IsEmpty() == false) {
		FMoveWheelThread* t = nullptr;
		USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel->oldMoveWheelTheads.Dequeue(t);
		delete t;
	}
}

void USimpleControllerWheel::stopAutocenter(FSimpleControllerDevice device) {
	USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel->stopAutocenterNonStatic(device);
}

void USimpleControllerWheel::stopAutocenterNonStatic(FSimpleControllerDevice device){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	autocenterActiveDirection = 0;
	autocenterDeviceIndex = -1;
	autocenterSpeed = autocenterStartSpeed;
	if (autocenterEffectID != -1) {
		SDL_HapticDestroyEffect(device.sdlHaptic, autocenterEffectID);
		autocenterEffectID = -1;
		if (showLogs)
			UE_LOG(LogTemp, Display, TEXT("END doAutoCenterWheel"));
	}
	showLogs = false;
	if (autocenterAsyncEvent != nullptr) {
		autocenterAsyncEvent->fireEvent();
	}
#endif
}

void USimpleControllerWheel::updateAutocenterWheel(bool stopWhenCentered, float defaultStrength, float slowdownStrength, float autocenterDesiredEndPosition){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel->updateAutocenterWheelNonStatic(stopWhenCentered, defaultStrength, slowdownStrength, autocenterDesiredEndPosition);
}

void USimpleControllerWheel::updateAutocenterWheelNonStatic(bool stopWhenCenteredP,
	float defaultStrength , float slowdownStrength, float autocenterDesiredEndPositionP){
	
	stopWhenCentered = stopWhenCenteredP;
	autocenterSpeed = autocenterStartSpeed = 32767.0f * defaultStrength;
	autocenterSpeedSlowSpeed = 32767.0f * slowdownStrength;
	autocenterDesiredEndPosition = autocenterDesiredEndPositionP;
}


bool USimpleControllerWheel::autocenterWheel(UAutocenterAsyncEvent* asyncEvent, FSimpleControllerDevice device, bool stopWhenCenteredP,
	float defaultStrength , float slowdownStrength, float autocenterDesiredEndPositionP, bool showLogsP, int32 wheelAxisIDP) {

	autocenterAsyncEvent = asyncEvent;

	if (device.hasHaptic == false || device.forceFeedback_CONSTANT == false) {
		UE_LOG(LogTemp, Error, TEXT("This steering wheel does not support the necessary ForceFeedback effects. %s"), *device.deviceName);
		return false;
	}

	/*if (moveWheelToPositionEffectID != -1) {
		SDL_HapticDestroyEffect(device.sdlHaptic, moveWheelToPositionEffectID);
	}*/

	if (autocenterEffectID != -1) {
		UE_LOG(LogTemp, Error, TEXT("Wheel is already in Autocenter mode. %s"), *device.deviceName);
		return false;
	}


	wheelAxisID = wheelAxisIDP;
	/*autocenterStartTime = FDateTime::Now().GetTicks();*/
	autocenterSpeed = autocenterStartSpeed = 32767.0f * defaultStrength;
	autocenterSpeedSlowSpeed = 32767.0f * slowdownStrength;
	autocenterDesiredEndPosition = autocenterDesiredEndPositionP;
	showLogs = showLogsP;
	wheelDevice = device;
	autocenterDeviceIndex = device.deviceIndex;
	stopWhenCentered = stopWhenCenteredP;


	//start centered
	if (wheelPositionsMap.Find(device.deviceIndex) == nullptr && stopWhenCentered == false) {
		wheelPositionsMap.Add(device.deviceIndex, 0);
	}

	doAutoCenterWheel(device);

	return true;
}

void USimpleControllerWheel::testAndSaveFFSettings(FSimpleControllerDevice* device){
	wheelAxisID = 0;
	if (testWheelThread != nullptr) {
		delete testWheelThread;
		testWheelThread = nullptr;
	}
	testWheelThread = new FTestWheelThread(this, device);
}

void USimpleControllerWheel::doAutoCenterWheel(FSimpleControllerDevice device) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (autocenterDeviceIndex == -1 || wheelPositionsMap.Find(device.deviceIndex) == nullptr) {
		return;
	}


	float wheelPosition = *wheelPositionsMap.Find(device.deviceIndex);

	//wheel is centered (with tolerance)
	if (wheelPosition == autocenterDesiredEndPosition ||
		(wheelPosition < autocenterDesiredEndPosition &&
			wheelPosition > (autocenterDesiredEndPosition -0.01)) ||
		(wheelPosition > autocenterDesiredEndPosition 
			&& wheelPosition < (autocenterDesiredEndPosition+ 0.01))) {
		autocenterActiveDirection = 0;

		if (stopWhenCentered) {
			autocenterDeviceIndex = -1;
			autocenterSpeed = autocenterStartSpeed;
			if (autocenterEffectID != -1) {
				SDL_HapticDestroyEffect(device.sdlHaptic, autocenterEffectID);
				autocenterEffectID = -1;
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("END doAutoCenterWheel"));
			}
			showLogs = false;
			if (autocenterAsyncEvent != nullptr) {
				autocenterAsyncEvent->fireEvent();
			}
		}
		else {
			if (autocenterEffectID != -1) {
				if (autocenterPaused) {
					return;
				}
				autocenterPaused = true;
				SDL_HapticStopEffect(device.sdlHaptic, autocenterEffectID);
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("STOP doAutoCenterWheel"))
			}
		}


		return;
	}


	if (autocenterPaused) {
		if (showLogs)
			UE_LOG(LogTemp, Display, TEXT("Restart doAutoCenterWheel"))
		autocenterPaused = false;
		SDL_HapticRunEffect(device.sdlHaptic, autocenterEffectID, 0);
		autocenterSpeed = autocenterStartSpeed;
	}
	
	if (autocenterActiveDirection == 0 && autocenterEffectID != -1) {
		if (wheelPosition > autocenterDesiredEndPosition) {
			autocenterActiveDirection = 1;
		}
		else {
			autocenterActiveDirection = -1;
		}
	}
	if (showLogs)
		UE_LOG(LogTemp, Display, TEXT("wheel Axis position %f"), wheelPosition);

	if (wheelPosition > autocenterDesiredEndPosition) {//wheel is right
		if (showLogs)
			UE_LOG(LogTemp, Display, TEXT("Wheel position: right"));
		//is wheel allready moving left?
		if (autocenterActiveDirection == -1) {
			if (showLogs)
				UE_LOG(LogTemp, Display, TEXT("Wheel is moving left"));
			//change speed?
			if (wheelPosition < (autocenterDesiredEndPosition + 0.3f) && autocenterSpeed == autocenterStartSpeed) {
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("(1) Change speed to autocenterSpeedSlowSpeed %i"),autoCenterEffect->constant.level);;
				autocenterSpeed = autocenterSpeedSlowSpeed;
				autoCenterEffect->constant.level = autocenterSpeed;

				if (autocenterEffectID != -1) {
					SDL_HapticUpdateEffect(wheelDevice.sdlHaptic, autocenterEffectID, autoCenterEffect);
				}
			}
			if (wheelPosition > (autocenterDesiredEndPosition + 0.3f) && autocenterSpeed == autocenterSpeedSlowSpeed) {
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("(2) Change speed to autocenterStartSpeed %i"),autoCenterEffect->constant.level);
				autocenterSpeed = autocenterStartSpeed;
				autoCenterEffect->constant.level = autocenterSpeed;

				if (autocenterEffectID != -1) {
					SDL_HapticUpdateEffect(wheelDevice.sdlHaptic, autocenterEffectID, autoCenterEffect);
				}
			}
			return;
		}
		else {
			//is wheel moving right?
			if (autocenterActiveDirection == 1) {
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("Wheel is moving right 2"));
				//then move left
				autocenterActiveDirection = -1;
				if (wheelDevice.wheelMovedByForce == false) {
					autoCenterEffect->constant.direction.dir[wheelAxisID] = 1;
				}
				autoCenterEffect->constant.level = autocenterSpeed;
				if (autocenterEffectID != -1) {
					SDL_HapticUpdateEffect(wheelDevice.sdlHaptic, autocenterEffectID, autoCenterEffect);
				}
				return;
			}
			//wheel is not moving
			else {
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("Wheel is not moving. Move left"));
				//move left
				if (wheelPosition < (autocenterDesiredEndPosition + 0.3f)) {
					autocenterSpeed = autocenterSpeedSlowSpeed;
				}
				autocenterActiveDirection = -1;
				if (wheelDevice.wheelMovedByForce == false) {
					autoCenterEffect->constant.direction.dir[wheelAxisID] = 1;
				}
				autoCenterEffect->constant.level = autocenterSpeed;
				autocenterEffectID = SDL_HapticNewEffect(device.sdlHaptic, autoCenterEffect);
				if (autocenterEffectID != -1) {
					SDL_HapticRunEffect(device.sdlHaptic, autocenterEffectID, 0);
				}
				return;
			}
		}

	}
	//wheel is left
	else {
		if (showLogs)
			UE_LOG(LogTemp, Display, TEXT("Wheel position: left"));
		//is wheel allready moving right?
		if (autocenterActiveDirection == 1) {
			if (showLogs)
				UE_LOG(LogTemp, Display, TEXT("Wheel is moving right"));
			//change speed?
			if (wheelPosition > (autocenterDesiredEndPosition - 0.3f) && autocenterSpeed == autocenterStartSpeed) {
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("(3) Change speed to autocenterSpeedSlowSpeed %i"),autoCenterEffect->constant.level);
				autocenterSpeed = autocenterSpeedSlowSpeed;
				
				if (wheelDevice.wheelMovedByForce == true) {
					autoCenterEffect->constant.level = autocenterSpeed * -1;
				}
				else {
					autoCenterEffect->constant.level = autocenterSpeed;
				}
				
				if (autocenterEffectID != -1) {
					SDL_HapticUpdateEffect(wheelDevice.sdlHaptic, autocenterEffectID, autoCenterEffect);
				}
			}
			if (wheelPosition < (autocenterDesiredEndPosition - 0.3f) && autocenterSpeed == autocenterSpeedSlowSpeed) {
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("(4) Change speed to autocenterStartSpeed %i"),autoCenterEffect->constant.level);
				autocenterSpeed = autocenterStartSpeed;
				
				if (wheelDevice.wheelMovedByForce == true) {
					autoCenterEffect->constant.level = autocenterSpeed * -1;
				}
				else {
					autoCenterEffect->constant.level = autocenterSpeed;
				}
				
				if (autocenterEffectID != -1) {
					SDL_HapticUpdateEffect(wheelDevice.sdlHaptic, autocenterEffectID, autoCenterEffect);
				}
			}
			return;
		}
		else {
			//is wheel moving left?
			if (autocenterActiveDirection == -1) {
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("Wheel is moving left 2"));
				//then move right
				autocenterActiveDirection = 1;
				if (wheelDevice.wheelMovedByForce == false) {
					autoCenterEffect->constant.direction.dir[wheelAxisID] = -1;
					autoCenterEffect->constant.level = autocenterSpeed;
				}
				else {
					autoCenterEffect->constant.level = autocenterSpeed * -1;
				}
				
				if (autocenterEffectID != -1) {
					SDL_HapticUpdateEffect(wheelDevice.sdlHaptic, autocenterEffectID, autoCenterEffect);
				}
				return;
			}
			//wheel is not moving
			else {
				if (showLogs)
					UE_LOG(LogTemp, Display, TEXT("Wheel is not moving. Move right"));
				//move right
				if (wheelPosition > (autocenterDesiredEndPosition - 0.3f)) {
					autocenterSpeed = autocenterSpeedSlowSpeed;
				}
				autocenterActiveDirection = 1;
				if (wheelDevice.wheelMovedByForce == false) {
					autoCenterEffect->constant.direction.dir[wheelAxisID] = -1;
					autoCenterEffect->constant.level = autocenterSpeed;
				}
				else {
					autoCenterEffect->constant.level = autocenterSpeed * -1;
				}
				
				autocenterEffectID = SDL_HapticNewEffect(device.sdlHaptic, autoCenterEffect);
				if (autocenterEffectID != -1) {
					SDL_HapticRunEffect(device.sdlHaptic, autocenterEffectID, 0);
				}
				return;
			}
		}
	}
#endif
}

void USimpleControllerWheel::updateConstantForceOnWheel(int32 force){
	USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel->updateConstantForceNonStatic(force);
}

void USimpleControllerWheel::updateConstantForceNonStatic(int32 force){
	if (force <= 0) {
		force = 1;
	}
	if (force > 100) {
		force = 100;
	}
	constantForceLevel = (32767 * force / 100);
}

bool USimpleControllerWheel::enableConstantForce(FSimpleControllerDevice device, int32 force, int32 wheelAxisIDP) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	if (device.hasHaptic == false || device.forceFeedback_CONSTANT == false) {
		UE_LOG(LogTemp, Error, TEXT("This steering wheel does not support the necessary ForceFeedback effects. %s"), *device.deviceName);
		return false;
	}

	wheelAxisID = wheelAxisIDP;
	wheelDevice = device;
	if (force <= 0) {
		force = 1;
	}
	if (force > 100) {
		force = 100;
	}



	disableConstantForce(device);
	
	constantForceLeftEffect = new SDL_HapticEffect();
	constantForceLeftEffect->type = SDL_HAPTIC_CONSTANT;
	constantForceLeftEffect->constant.length = SDL_HAPTIC_INFINITY;
	constantForceLeftEffect->constant.delay = 0;
	constantForceLeftEffect->constant.level = constantForceLevel = (32767 * force / 100);


	constantForceLeftEffect->constant.attack_length = force * 5;
	//constantForceLeftEffect->constant.attack_level = constantForceLeftEffect->constant.level / 4;



	constantForceLeftEffect->constant.direction.type = SDL_HAPTIC_CARTESIAN;
	//constantForceLeftEffect->constant.direction.dir[constantForceAxisID] = 1;

	constantForceDeviceIndex = device.deviceIndex;

	doConstantForceWheel(device);

	constantForceThread = new FConstantForceThread(this, device, 0, 0,  0);
#endif
	return true;
}

void USimpleControllerWheel::disableConstantForce(FSimpleControllerDevice device) {

	//if (constantForceEffectID != -1) {
	//	SDL_HapticDestroyEffect(device.sdlHaptic, constantForceEffectID);
	//}

	if (constantForceThread != nullptr) {
		constantForceThread->stopThread();
		delete constantForceThread;
		constantForceThread = nullptr;
	}

	//if (constantForceLeftEffect != nullptr) {
	//	delete constantForceLeftEffect;
	//	constantForceLeftEffect = nullptr;
	//}

	//constantForceAxisID = -1;
	//constantForceDeviceIndex = -1;
	//constantForceEffectID = -1;
	//constantForceActiveDirection = 0; //-1,0,1
	//constantForceLastDirectionChangeTimestamp = 0;
	//constantForceLastChangeDirectionWheelPostionRight = 0.f;
	//constantForceLastChangeDirectionWheelPostionLeft = 0.f;

}

bool USimpleControllerWheel::rumble(FSimpleControllerDevice deviceP, float strengthLeft, float strengthRight, int32 lengthInMilliseconds, int32 timeBetweenDirectionChangeInMilliseconds){
	bool successful = false;
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX

	FSimpleControllerDevice* device = *USimpleControllerBPLibrary::getSimpleControllerTarget()->controllerDeviceStructMap.Find(deviceP.deviceIndex);


	int32 length = SDL_HAPTIC_INFINITY;
	
	FString errorMessage;
	FSimpleControllerForceFeedbackEffect effect;


	USimpleControllerBPLibrary::getSimpleControllerTarget()->createForceFeedbackEffectConstant(effect,
		successful,
		errorMessage,
		*device,
		ESimpleControllerForceFeedbackDirectionType::CARTESIAN,
		0,
		0,
		0,
		length,
		0,
		strengthLeft,
		length,
		strengthLeft,
		0,
		0);

	if (!successful) {
		return false;
	}

	effect  = USimpleControllerBPLibrary::getSimpleControllerTarget()->uploadAndRunForceFeedbackEffect(successful,
		errorMessage, effect);

	
	stopRumbleThread();
	rumbleThread = new FRumbleThread(this, device, effect, strengthLeft, strengthRight, lengthInMilliseconds, timeBetweenDirectionChangeInMilliseconds);
#endif
	return successful;

}

void USimpleControllerWheel::stopRumbleThread() {
	if (rumbleThread != nullptr) {
		rumbleThread->stopThread();
	}

	while (oldRumbleThreads.IsEmpty() == false) {
		FRumbleThread* t = nullptr;
		oldRumbleThreads.Dequeue(t);
		delete t;
	}
}

//void USimpleControllerWheel::removeRumbleThread(FSimpleControllerDevice* device){
//	if (rumbleThreadMap.Find(device) != nullptr) {
//		FRumbleThread* thread = *rumbleThreadMap.Find(device);
//		delete thread;
//	}
//}



void USimpleControllerWheel::doConstantForceWheel(const FSimpleControllerDevice device) {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	if (constantForceDeviceIndex == -1 || wheelPositionsMap.Find(device.deviceIndex) == nullptr) {
		return;
	}

	
	int roundA = 100;
	int roundB = 100;


	float wheelPosition = *wheelPositionsMap.Find(device.deviceIndex);

	float a = FMath::Floor(wheelPosition * roundA) / roundA;
	float b = FMath::Floor(lastWheelPostionConstantForce * roundA) / roundA;
	if (a == b) {
		lastWheelPostionConstantForce = wheelPosition;
		//UE_LOG(LogTemp, Display, TEXT("skip"));
		return;
	}


	if (constantForceActiveDirection == 0) {
		if (wheelPosition > lastWheelPostionConstantForce) {
			constantForceActiveDirection = 1;
		}
		else {
			constantForceActiveDirection = -1;
		}
	}


	//user is moving right
	if (wheelPosition > lastWheelPostionConstantForce) {
		//upload ff effect if not active
		if (constantForceEffectID == -1) {
			//move left
			constantForceActiveDirection = -1;
			if (wheelDevice.wheelMovedByForce == false) {
				constantForceLeftEffect->constant.direction.dir[wheelAxisID] = 1;
			}
			constantForceLeftEffect->constant.level = constantForceLevel;
			constantForceEffectID = SDL_HapticNewEffect(device.sdlHaptic, constantForceLeftEffect);
			if (constantForceEffectID != -1) {
				SDL_HapticRunEffect(device.sdlHaptic, constantForceEffectID, 0);
			}
		}
		//the is a active effect
		else {
			//is wheel moving right?
			if (constantForceActiveDirection == 1) {

				//then move left
				if (constantForceEffectID != -1) {

					//if exactly the same position is hit as in the last ff direction change then it was not a human but the steering wheel. 
					float L = FMath::Floor(constantForceLastChangeDirectionWheelPostionLeft * roundB) / roundB;
					float R = FMath::Floor(constantForceLastChangeDirectionWheelPostionRight * roundB) / roundB;
					float P = FMath::Floor(wheelPosition * roundB) / roundB;
					//UE_LOG(LogTemp, Display, TEXT("1  %f %f %f"), L,R,P);
					if (L == P || R == P) {
					/*UE_LOG(LogTemp, Display, TEXT("1  %f %f %f"), constantForceLastChangeDirectionWheelPostionLeft, constantForceLastChangeDirectionWheelPostionRight, wheelPosition);
					if (constantForceLastChangeDirectionWheelPostionLeft == wheelPosition || constantForceLastChangeDirectionWheelPostionRight == wheelPosition) {*/
						SDL_HapticStopEffect(device.sdlHaptic, constantForceEffectID);
						constantForceActiveDirection = 0;
						//UE_LOG(LogTemp, Display, TEXT("1  stop"));
					}
					else {			
						constantForceLastChangeDirectionWheelPostionLeft = wheelPosition;
						
						constantForceActiveDirection = -1;
						if (wheelDevice.wheelMovedByForce == false) {
							constantForceLeftEffect->constant.direction.dir[wheelAxisID] = 1;
						}
						constantForceLeftEffect->constant.level = constantForceLevel;

						SDL_HapticUpdateEffect(wheelDevice.sdlHaptic, constantForceEffectID, constantForceLeftEffect);
						SDL_HapticRunEffect(device.sdlHaptic, constantForceEffectID, 0);

						//UE_LOG(LogTemp, Display, TEXT("1  left"));
					}
					

				}
			}
		}
		
	}
	//user is moving left
	else {
		//upload ff effect if not active
		if (constantForceEffectID == -1) {
			//move right
			constantForceActiveDirection = 1;
			if (wheelDevice.wheelMovedByForce == false) {
				constantForceLeftEffect->constant.direction.dir[wheelAxisID] = -1;
				constantForceLeftEffect->constant.level = constantForceLevel;
			}
			else {
				constantForceLeftEffect->constant.level = constantForceLevel * -1;
			}
			
			constantForceEffectID = SDL_HapticNewEffect(device.sdlHaptic, constantForceLeftEffect);
			if (constantForceEffectID != -1) {
				SDL_HapticRunEffect(device.sdlHaptic, constantForceEffectID, 0);
			}
		}
		//the is a active effect
		else {
			//is wheel moving left?
			if (constantForceActiveDirection == -1) {

				//then move right
				if (constantForceEffectID != -1) {
					//if exactly the same position is hit as in the last ff direction change then it was not a human but the steering wheel. 
					float L = FMath::Floor(constantForceLastChangeDirectionWheelPostionLeft * roundB) / roundB;
					float R = FMath::Floor(constantForceLastChangeDirectionWheelPostionRight * roundB) / roundB;
					float P = FMath::Floor(wheelPosition * roundB) / roundB;
					//UE_LOG(LogTemp, Display, TEXT("1  %f %f %f"), L, R, P);
					if (L == P || R == P) {
				/*	UE_LOG(LogTemp, Display, TEXT("2  %f %f %f"), constantForceLastChangeDirectionWheelPostionLeft, constantForceLastChangeDirectionWheelPostionRight, wheelPosition);
					if (constantForceLastChangeDirectionWheelPostionLeft == wheelPosition || constantForceLastChangeDirectionWheelPostionRight == wheelPosition) {*/
						constantForceLastDirectionChangeTimestamp = FDateTime::Now().GetTicks();
						SDL_HapticStopEffect(device.sdlHaptic, constantForceEffectID);
						constantForceActiveDirection = 0;
						//UE_LOG(LogTemp, Display, TEXT("2  stop"));
					}
					else {
						constantForceLastChangeDirectionWheelPostionRight = wheelPosition;

						constantForceActiveDirection = 1;
						if (wheelDevice.wheelMovedByForce == false) {
							constantForceLeftEffect->constant.direction.dir[wheelAxisID] = -1;
							constantForceLeftEffect->constant.level = constantForceLevel;
						}
						else {
							constantForceLeftEffect->constant.level = constantForceLevel * -1;
						}

						SDL_HapticUpdateEffect(wheelDevice.sdlHaptic, constantForceEffectID, constantForceLeftEffect);
						SDL_HapticRunEffect(device.sdlHaptic, constantForceEffectID, 0);

						//UE_LOG(LogTemp, Display, TEXT("2  right"));
					}
					
				}
			}
		}
		
	}


	lastWheelPostionConstantForce = wheelPosition;

#endif
}

UAutocenterAsyncEvent* UAutocenterAsyncEvent::autocenterWheel(FSimpleControllerDevice device, bool stopWhenCentered,
	float defaultStrength, float slowdownStrength, float autocenterDesiredEndPosition, bool showLogs,int32 wheelAxisID)
{
	UAutocenterAsyncEvent* instance = NewObject<UAutocenterAsyncEvent>();
	instance->device = device;
	instance->stopWhenCentered = stopWhenCentered;
	instance->defaultStrength = defaultStrength;
	instance->slowdownStrength = slowdownStrength;
	instance->autocenterDesiredEndPosition = autocenterDesiredEndPosition;
	instance->showLogs = showLogs;
	instance->wheelAxisID = wheelAxisID;
	instance->AddToRoot();
	return instance;
}

void UAutocenterAsyncEvent::Activate(){
	USimpleControllerBPLibrary::controllerTarget->simpleControllerWheel->autocenterWheel(this,device,stopWhenCentered,
		defaultStrength, slowdownStrength, autocenterDesiredEndPosition, showLogs, wheelAxisID);
}

void UAutocenterAsyncEvent::fireEvent() {
	finished.Broadcast();
	RemoveFromRoot();
}



FRumbleThread::FRumbleThread(USimpleControllerWheel* mainWheelClassP, FSimpleControllerDevice* deviceP, FSimpleControllerForceFeedbackEffect effectP,
	float strengthLeftP, float strengthRightP, int32 lengthInMillisecondsP, int32 timeBetweenDirectionChangeInMillisecondsP) :
	mainWheelClass(mainWheelClassP),
	device(deviceP),
	effect(effectP),
	strengthLeft(strengthLeftP),
	strengthRight(strengthRightP),
	lengthInMilliseconds(lengthInMillisecondsP),
	timeBetweenDirectionChangeInMilliseconds(timeBetweenDirectionChangeInMillisecondsP) {

	FString threadName = "FRumbleThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}




FRumbleThread::~FRumbleThread(){
	//UE_LOG(LogTemp, Display, TEXT("FRumbleThread::~FRumbleThread()"));
	delete thread;
}

uint32 FRumbleThread::Run(){

	//updateConstantForceFeedbackEffect(bool& successful, FString & errorMessage, FSimpleControllerForceFeedbackEffect forceFeedbackEffect,
	//	int32 directionX,
	//	int32 directionY,
	//	int32 directionZ,
	//	int32 length,
	//	int32 delay,
	//	float level)
	#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	int32 directionX = 0;
	int32 rumbleDirection = 1;
	if (device->wheelMovedByForce == false) {
		directionX = 1;
	}
	bool successful;
	FString errorMessage;

	float sleepTime = ((float)timeBetweenDirectionChangeInMilliseconds) / 1000;
	if (sleepTime <= 0)
		sleepTime = 0.001;
	int32 loops = (lengthInMilliseconds / timeBetweenDirectionChangeInMilliseconds) -1;
	while (run && loops > 0){
		FPlatformProcess::Sleep(sleepTime);
		if (device->wheelMovedByForce == false) {
			directionX = directionX * -1;
		}

		rumbleDirection = rumbleDirection * -1;

		if (rumbleDirection == 1) {
			USimpleControllerBPLibrary::getSimpleControllerTarget()->updateConstantForceFeedbackEffect(
				successful,
				errorMessage,
				effect,
				directionX,
				0,
				0,
				SDL_HAPTIC_INFINITY,
				0, 
				strengthLeft,
				SDL_HAPTIC_INFINITY,
				strengthLeft,
				0,
				0);

			if (!successful)
				break;
		}
		else {
			float sr = strengthRight;
			if (device->wheelMovedByForce == true) {
				sr = strengthRight * -1;
			}
			USimpleControllerBPLibrary::getSimpleControllerTarget()->updateConstantForceFeedbackEffect(
				successful,
				errorMessage,
				effect,
				directionX,
				0,
				0,
				SDL_HAPTIC_INFINITY,
				0,
				sr,
				SDL_HAPTIC_INFINITY,
				strengthRight,
				0,
				0);

			if (!successful)
				break;

		}
		loops--;
	}

	USimpleControllerBPLibrary::getSimpleControllerTarget()->destroyForceFeedbackEffect(effect);
	//FPlatformProcess::Sleep(10);
	mainWheelClass->oldRumbleThreads.Enqueue(this);
#endif
	return 0;
}
void FRumbleThread::stopThread() {
	run = false;
}

FMoveWheelThread::FMoveWheelThread(FSimpleControllerDevice deviceP, ESimpleControllerWheelFFDirection directionP, float strengthP, int32 lengthInMillisecondsP) :
	device(deviceP),
	direction(directionP),
	strength(strengthP),
	lengthInMilliseconds(lengthInMillisecondsP) {

	FString threadName = "FMoveWheelThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}




FMoveWheelThread::~FMoveWheelThread() {
	//UE_LOG(LogTemp, Display, TEXT("FMoveWheelThread::~FMoveWheelThread()"));
	delete thread;
}

uint32 FMoveWheelThread::Run() {

	FSimpleControllerDevice* d = *USimpleControllerBPLibrary::getSimpleControllerTarget()->controllerDeviceStructMap.Find(device.deviceIndex);

	int32 directionX = 0;
	int32 length = lengthInMilliseconds;
	float level = strength;
	if (d->wheelMovedByForce) {
		if (direction == ESimpleControllerWheelFFDirection::Right) {
			level = strength * -1.f;
		}
	}
	else {
		if (direction == ESimpleControllerWheelFFDirection::Right) {
			directionX = -1;
		}
		else {
			directionX = 1;
		}
	}
	bool successful;
	FString errorMessage;
	FSimpleControllerForceFeedbackEffect effect;


	USimpleControllerBPLibrary::getSimpleControllerTarget()->createForceFeedbackEffectConstant(effect,
		successful,
		errorMessage,
		*d,
		ESimpleControllerForceFeedbackDirectionType::CARTESIAN,
		directionX,
		0,
		0,
		length,
		0,
		level,
		length,
		strength,
		0,
		0);

	if (!successful) {
		return 0;
	}

	effect = USimpleControllerBPLibrary::getSimpleControllerTarget()->uploadAndRunForceFeedbackEffect(successful,
		errorMessage, effect);


	FPlatformProcess::Sleep(((float)length/100)+0.1);
	USimpleControllerBPLibrary::getSimpleControllerTarget()->destroyForceFeedbackEffect(effect);
	FPlatformProcess::Sleep(1);
	
	USimpleControllerBPLibrary::getSimpleControllerTarget()->simpleControllerWheel->oldMoveWheelTheads.Enqueue(this);

	return 0;
}


FConstantForceThread::FConstantForceThread(USimpleControllerWheel* mainWheelClassP,FSimpleControllerDevice deviceP, int32 axisIDP, float strengthP, int32 lengthInMillisecondsP) :
	mainWheelClass(mainWheelClassP),
	device(deviceP),
	axisID(axisIDP),
	strength(strengthP),
	lengthInMilliseconds(lengthInMillisecondsP) {

	FString threadName = "FMoveWheelThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}




FConstantForceThread::~FConstantForceThread() {
	//UE_LOG(LogTemp, Display, TEXT("FMoveWheelThread::~FMoveWheelThread()"));
	delete thread;
}

uint32 FConstantForceThread::Run() {
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX
	while (run) {
		FPlatformProcess::Sleep(0.01);
		if (device.deviceIndex == mainWheelClass->constantForceDeviceIndex) {
			mainWheelClass->doConstantForceWheel(device);
		}
	}


	if (mainWheelClass->constantForceEffectID != -1) {
		SDL_HapticDestroyEffect(device.sdlHaptic, mainWheelClass->constantForceEffectID);
	}

	if (mainWheelClass->constantForceLeftEffect != nullptr) {
		delete mainWheelClass->constantForceLeftEffect;
		mainWheelClass->constantForceLeftEffect = nullptr;
	}

	mainWheelClass->constantForceDeviceIndex = -1;
	mainWheelClass->constantForceEffectID = -1;
	mainWheelClass->constantForceActiveDirection = 0; //-1,0,1
	mainWheelClass->constantForceLastDirectionChangeTimestamp = 0;
	mainWheelClass->constantForceLastChangeDirectionWheelPostionRight = 0.f;
	mainWheelClass->constantForceLastChangeDirectionWheelPostionLeft = 0.f;
#endif
	return 0;
}

void FConstantForceThread::stopThread(){
	run = false;
}

FTestWheelThread::FTestWheelThread(USimpleControllerWheel* mainWheelClassP, FSimpleControllerDevice* deviceP) :
	mainWheelClass(mainWheelClassP),
	device(deviceP){

	FString threadName = "FTestWheelThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}

FTestWheelThread::~FTestWheelThread(){
	delete thread;
}

uint32 FTestWheelThread::Run(){
#if PLATFORM_WINDOWS | PLATFORM_MAC | PLATFORM_LINUX



	float lastValue = mainWheelClass->lastWheelPostion;
	FPlatformProcess::Sleep(1);

	UE_LOG(LogTemp, Display, TEXT("SimpleControllerPlugin: Start Force Feedback steering wheel test"));

	int8 maxWait = 3;
	while (maxWait > 0 && lastValue != mainWheelClass->lastWheelPostion) {
		lastValue = mainWheelClass->lastWheelPostion;
		FPlatformProcess::Sleep(1);
	}

	if (lastValue != mainWheelClass->lastWheelPostion) {
		UE_LOG(LogTemp, Warning, TEXT("SimpleControllerPlugin: Force Feedback steering wheel test aborted because the steering wheel is moving."));
		return 0;
	}

	bool successful;
	FString errorMessage;
	FSimpleControllerForceFeedbackEffect effect;


	USimpleControllerBPLibrary::getSimpleControllerTarget()->createForceFeedbackEffectConstant(effect,
		successful,
		errorMessage,
		*device,
		ESimpleControllerForceFeedbackDirectionType::CARTESIAN,
		0,
		0,
		0,
		10,
		0,
		-0.1,
		1000,
		1,
		0,
		0);

	if (!successful) {
		UE_LOG(LogTemp, Display, TEXT("SimpleControllerPlugin (1): Force Feedback steering wheel can not be moved with negative level. %f %f"),lastValue , mainWheelClass->lastWheelPostion);
		return 0;
	}

	effect = USimpleControllerBPLibrary::getSimpleControllerTarget()->uploadAndRunForceFeedbackEffect(successful,
		errorMessage, effect);

	FPlatformProcess::Sleep(0.1);
	if (lastValue < mainWheelClass->lastWheelPostion) {
		device->wheelMovedByForce = true;
		UE_LOG(LogTemp, Display, TEXT("SimpleControllerPlugin: Force Feedback steering wheel can be moved with negative level. %f %f"),lastValue , mainWheelClass->lastWheelPostion);
	}
	else {
		UE_LOG(LogTemp, Display, TEXT("SimpleControllerPlugin (2): Force Feedback steering wheel can not be moved with negative level. %f %f"),lastValue , mainWheelClass->lastWheelPostion);
	}

#endif
	return 0;
}
