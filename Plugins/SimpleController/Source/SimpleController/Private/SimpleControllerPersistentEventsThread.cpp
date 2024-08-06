// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerPersistentEventsThread.h"


FPersistentEventsThread::FPersistentEventsThread() {
	mainLib = USimpleControllerBPLibrary::getSimpleControllerTarget();
	FString threadName = "FRefreshGamepadThread" + FGuid::NewGuid().ToString();
	thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
}

FPersistentEventsThread::~FPersistentEventsThread() {
	delete thread;
}

uint32 FPersistentEventsThread::Run() {

	while (run && FSimpleControllerModule::moduleIsRun) {


		if (iterator30FPS == 0){
			iterator30FPS = 2;
		}
		if (iterator60FPS == 0) {
			iterator60FPS = 1;
		}

		//120fps
		mainLib->axisMovedEventPersistent(ESimpleControllerEventType::Persistent120);

		//60fps
		if (iterator60FPS == 1) {
			mainLib->axisMovedEventPersistent(ESimpleControllerEventType::Persistent60);
		}

		//30fps
		if (iterator30FPS == 2) {
			mainLib->axisMovedEventPersistent(ESimpleControllerEventType::Persistent30);
		}

		iterator30FPS--;
		iterator60FPS--;


		FPlatformProcess::Sleep(maxRefreshRate);
	}

	//thread = nullptr;
	return 0;
}


void FPersistentEventsThread::stopThread() {
	run = false;
}