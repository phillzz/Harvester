// Copyright 2018 David Romanski(Socke). All Rights Reserved.
#pragma once

#include "SimpleController.h"
#include "SimpleControllerMapping.generated.h"


class USimpleControllerBPLibrary;
class FMappingThread;
class FCalibrateAxisThread;
class FMappingSaveThread;
class FMappingLoadThread;





UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerMappedButtonAsyncEvent : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Mapping", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerMappedButtonAsyncEvent* controllerEventMappedButton(FSimpleControllerMappingProfile mappingProfile, FString actionName);


	virtual void Activate() override;
	virtual void BeginDestroy() override;

	void fireEvent(bool pressed/*, FSimpleControllerDevice* d*/);

	FSimpleControllerMappingButtonAction* action = nullptr;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerButtonEvent);

	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent actionPressed;
	UPROPERTY(BlueprintAssignable)
		FControllerButtonEvent actionReleased;
};


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerMappingAxisEvents : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Events|Mapping", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerMappingAxisEvents* controllerEventMappedAxis(ESimpleControllerEventType triggerEventIf, FSimpleControllerMappingProfile mappingProfile,
			FString actionName);


	virtual void Activate() override;
	virtual void BeginDestroy() override;

	void fireEvent(float axisValue/*, FSimpleControllerDevice* d*/);

	FSimpleControllerMappingAxisAction* action = nullptr;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerAxisEvent, const float, axisValue);

	UPROPERTY(BlueprintAssignable)
		FControllerAxisEvent onAction;
};



UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerMappingButton : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	/**
	* @param keyboardButtons Keyboard inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus. 
	* @param mousedButtons Mouse inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus. 
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"))
		static USimpleControllerMappingButton* startMappingButton(UObject* WorldContextObject, FSimpleControllerMappingProfile mappingProfile, FString actionName,
			int32 timeInSeconds = 5, bool allowMultipleMapping = false, bool keyboardButtons = false, bool mousedButtons = false);


	virtual void Activate() override;

	virtual void BeginDestroy() override;

	void fireSuccessEvent(int32 buttonID, FSimpleControllerDevice* d);
	void fireTimeOutEvent();
	void fireTimeEvent(int32 seconds);

	bool alive = true;
	bool allowMultipleMapping = false;
	bool keyboardButtons = false;
	bool mousedButtons = false;
	int32 timeInSeconds = 5;
	FSimpleControllerDevice defaultDevice;
	FMappingThread* mappingThread = nullptr;
	FSimpleControllerMappingProfile* profileInstance = nullptr;
	FSimpleControllerMappingButtonAction* buttonAction = nullptr;
	UObject* WorldContextObject = nullptr;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FControllerMappingEvent, const FSimpleControllerMappingButtonAction, action, const int32, seconds,
		const FSimpleControllerDevice, usedDevice,const int32, usedButtonID, const int32, usedConnectionIndex);

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent successful;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent error;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent isMapped;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent timeOut;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent timer;
	

};


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerMappingAxis : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerMappingAxis* startMappingAxis(FSimpleControllerMappingProfile mappingProfile, FString actionName, int32 timeInSeconds = 5, 
float minAxisValueToReact = 0.5, bool allowMultipleMapping = false);


	virtual void Activate() override;

	virtual void BeginDestroy() override;


	void fireSuccessEvent(int32 axisID, FSimpleControllerDevice* d);
	void fireTimeOutEvent();
	void fireTimeEvent(int32 seconds);

	bool alive = true;
	bool allowMultipleMapping = false;
	int32 timeInSeconds = 5;
	float axisValueToReact = 0.5;
	FSimpleControllerDevice defaultDevice;
	FMappingThread* mappingThread = nullptr;
	FSimpleControllerMappingProfile* profileInstance = nullptr;
	FSimpleControllerMappingAxisAction* axisAction = nullptr;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FControllerMappingEvent, const FSimpleControllerMappingAxisAction, action, const int32, seconds,
		const FSimpleControllerDevice, usedDevice,const int32, usedAxisID, const int32, usedConnectionIndex);

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent successful;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent error;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent isMapped;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent timeOut;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent timer;


};

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerMappingCalibrateAxis : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/**
	* The addAxisCorrection function is applied to the mapped axis based on user input. The user must first move the axis to the maximum and then to the minimum. In the case of a pedal, the minimum is when the pedal is released.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping", meta = (BlueprintInternalUseOnly = "true"))
	static USimpleControllerMappingCalibrateAxis* calibrateMappedAxis(FSimpleControllerMappingProfile mappingProfile, FString actionName, int32 timeInSecondsPerStep = 2);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping")
	static void removeCalibrationFromMappedAxis(FSimpleControllerMappingProfile mappingProfile, FString actionName);

	virtual void Activate() override;

	virtual void BeginDestroy() override;

	void fireAxisMoveEvent(int32 axisID, int32 connectionIndex, float axisValue);
	void fireMaxEvent();
	void fireMinEvent();
	//void fireTimeOutEvent();
	void fireTimeEvent(int32 seconds);
	void endAndClean();

	bool isMax = true;
	float minAxisValue = 0;
	float maxAxisValue = 0;
	int32 timeInSeconds = 2;
	FSimpleControllerDevice defaultDevice;
	FCalibrateAxisThread* calibrateThread = nullptr;
	FSimpleControllerMappingAxisAction* axisAction = nullptr;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FControllerCalibrateEvent,const float, axisValue, const int32, seconds);

	UPROPERTY(BlueprintAssignable)
	FControllerCalibrateEvent finishedMax;

	UPROPERTY(BlueprintAssignable)
	FControllerCalibrateEvent finishedMin;

	UPROPERTY(BlueprintAssignable)
	FControllerCalibrateEvent error;

	//UPROPERTY(BlueprintAssignable)
	//FControllerCalibrateEvent timeOut;

	UPROPERTY(BlueprintAssignable)
	FControllerCalibrateEvent timer;

	UPROPERTY(BlueprintAssignable)
	FControllerCalibrateEvent axisValueChange;
};



UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerMappingSave : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/**
	* The file is saved in the directory from the Unreal function "ProjectSavedDir". 
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping", meta = (BlueprintInternalUseOnly = "true"))
		static USimpleControllerMappingSave* saveMappingToFile(FString profileName, FSimpleControllerMappingProfile mappingProfile);


	virtual void Activate() override;
	virtual void BeginDestroy() override;

	void fireEvent(bool success);

	FString profileName;
	FSimpleControllerMappingProfile* mappingProfile = nullptr;
	FMappingSaveThread* saveThread = nullptr;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerMappingEvent);

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent successful;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent failed;

};


UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerMappingLoad : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/**
	* The file is loaded from the directory from the Unreal function "ProjectSavedDir".
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|Mapping", meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly = "true"))
		static USimpleControllerMappingLoad* loadMappingFromFile(UObject* WorldContextObject, FString profileName, FSimpleControllerMappingProfile mappingProfile);

	//profile laden

	virtual void Activate() override;
	virtual void BeginDestroy() override;

	void fireEvent(bool success);


	FString profileName;
	FSimpleControllerMappingProfile* mappingProfile = nullptr;
	FMappingLoadThread* loadThread = nullptr;
	UObject* WorldContextObject = nullptr;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FControllerMappingEvent);

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent successful;

	UPROPERTY(BlueprintAssignable)
		FControllerMappingEvent failed;

};





class SIMPLECONTROLLER_API FMappingThread : public FRunnable {

public:

	FMappingThread(USimpleControllerMappingButton* simpleControllerMappingButton, USimpleControllerMappingAxis* simpleControllerMappingAxis, int32 seconds);

	~FMappingThread();

	//see cpp file
	virtual uint32 Run() override;

	void stopThread();

private:
	USimpleControllerMappingButton* simpleControllerMappingButton = nullptr;
	USimpleControllerMappingAxis* simpleControllerMappingAxis = nullptr;
	int32 seconds = 5;
	bool run = true;
	FRunnableThread* thread = nullptr;
};


class SIMPLECONTROLLER_API FCalibrateAxisThread : public FRunnable {

public:

	FCalibrateAxisThread(USimpleControllerMappingCalibrateAxis* calibrateAxisEvent, int32 seconds);

	~FCalibrateAxisThread();

	//see cpp file
	virtual uint32 Run() override;

	void stopThread();

private:
	USimpleControllerMappingCalibrateAxis* calibrateAxisEvent = nullptr;
	int32 seconds = 5;
	bool run = true;
	FRunnableThread* thread = nullptr;
};


class SIMPLECONTROLLER_API FMappingSaveThread : public FRunnable {

public:

	FMappingSaveThread(USimpleControllerMappingSave* saveMappingFromFile);

	~FMappingSaveThread();

	//see cpp file
	virtual uint32 Run() override;


private:
	USimpleControllerMappingSave* saveMappingFromFile = nullptr;
	FRunnableThread* thread = nullptr;
};


class SIMPLECONTROLLER_API FMappingLoadThread : public FRunnable {

public:

	FMappingLoadThread(USimpleControllerMappingLoad* loadMappingFromFile);

	~FMappingLoadThread();

	//see cpp file
	virtual uint32 Run() override;


private:
	USimpleControllerMappingLoad* loadMappingFromFile = nullptr;
	FRunnableThread* thread = nullptr;
};