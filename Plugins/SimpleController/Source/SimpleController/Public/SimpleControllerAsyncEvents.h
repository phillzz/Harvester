// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#pragma once

#include "SimpleController.h"
#include "SimpleControllerAsyncEvents.generated.h"


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerStatusAsyncEvent : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|AsyncEvents", meta = (BlueprintInternalUseOnly = "true"))
	static USimpleControllerStatusAsyncEvent* controllerStatusAsyncEvent();


	virtual void Activate() override;
	virtual void BeginDestroy() override;

	void fireEvent(bool attach, FSimpleControllerDevice* d);


	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerStatusEvent, const FSimpleControllerDevice, device);

	UPROPERTY(BlueprintAssignable)
	FControllerStatusEvent attached;
	UPROPERTY(BlueprintAssignable)
	FControllerStatusEvent detached;
};

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerButtonAsyncEvent : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|AsyncEvents", meta = (BlueprintInternalUseOnly = "true"))
	static USimpleControllerButtonAsyncEvent* controllerButtonAsyncEvent();


	virtual void Activate() override;
	virtual void BeginDestroy() override;

	void fireEvent(bool down,int32 buttonID, FSimpleControllerDevice* d);


	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FControllerButtonEvent,const int32, buttonID,const int32, connectionIndex,
		const FSimpleControllerDevice, device);

	UPROPERTY(BlueprintAssignable)
	FControllerButtonEvent buttonDown;
	UPROPERTY(BlueprintAssignable)
	FControllerButtonEvent buttonUp;
};

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerAxisAsyncEvent : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|AsyncEvents", meta = (BlueprintInternalUseOnly = "true"))
	static USimpleControllerAxisAsyncEvent* controllerAxisAsyncEvent(ESimpleControllerEventType triggerEventIf);


	virtual void Activate() override;
	virtual void BeginDestroy() override;

	void fireEvent(int32 axisID, float axisValue, FSimpleControllerDevice* d);
	void firePersistentEvent();

	ESimpleControllerEventType triggerEventIf;
	float maxAxisValuePositive = 32767.f;
	float maxAxisValueNegative = -32768.f;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FControllerAxisEvent,const int32, axisID, const float, axisValue,
		const int32, connectionIndex,const FSimpleControllerDevice, device);

	UPROPERTY(BlueprintAssignable)
	FControllerAxisEvent onAction;
};