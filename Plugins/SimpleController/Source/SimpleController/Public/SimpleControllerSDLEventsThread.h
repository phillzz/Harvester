// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "SimpleController.h"


class SIMPLECONTROLLER_API FSDLEventsThread : public FRunnable {

public:

	FSDLEventsThread(float refreshRateP);

	~FSDLEventsThread();

	//see cpp file
	virtual uint32 Run() override;

	void stopThread();

private:
	float refreshRate = 1 / 60;
	bool run = true;
	FRunnableThread* thread = nullptr;
};
