// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "SimpleController.h"



class SIMPLECONTROLLER_API FPersistentEventsThread : public FRunnable {

public:

	//FPersistentEventsThread(int32 controllerIndexP, USimpleControllerBPLibrary* mainP);
	FPersistentEventsThread();

	~FPersistentEventsThread();

	virtual uint32 Run() override;

	void stopThread();

private:
	float maxRefreshRate = 1.f / 120.f;
	//int32 controllerIndex = 0;
	//USimpleControllerBPLibrary* main = nullptr;

	bool run = true;
	bool emptyEventArrays = false;
	int32 iterator30FPS = 2;
	int32 iterator60FPS = 1;


	USimpleControllerBPLibrary* mainLib = nullptr;  
	FRunnableThread* thread = nullptr;



};
