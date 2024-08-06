// Copyright 2018 David Romanski(Socke). All Rights Reserved.
#pragma once

#include "SimpleController.h"
#include "SimpleControllerUI.generated.h"


//struct FSimpleControllerUIStore
//{
//public:
//	UWidget* mainWidget = nullptr;
//	TArray<UWidget*> children;
//};

UENUM(BlueprintType)
enum class ESimpleControllerUIDirection : uint8
{
	NONE	UMETA(DisplayName = "none"),
	RIGHT	UMETA(DisplayName = "Right"),
	LEFT 	UMETA(DisplayName = "Left"),
	TOP  	UMETA(DisplayName = "Top"),
	BOTTOM  UMETA(DisplayName = "Bottom")
};

struct FSimpleControllerUIRectangle {
public:
	float left = 0;
	float right = 0;
	float bottom = 0;
	float top = 0;
	float x = 0;
	float y = 0;
	float width = 0;
	float height = 0;
};

UCLASS(Blueprintable, BlueprintType)
class SIMPLECONTROLLER_API USimpleControllerUIEnableSelection : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FselectedWidgetEventDelegate, UWidget*, mainWidget, UWidget*, selectedWidget,
		int32, connectionIndex, bool, hasNewSelection, ESimpleControllerUIDirection, lastDirection);

	UPROPERTY(BlueprintAssignable)
	FselectedWidgetEventDelegate onSelect;

	UFUNCTION()
	void uiAxisEvent(const FString deviceID, const int32 axisID, const float axisValue, const int32 deviceIndex, const  FSimpleControllerDevice device, const int32 connectionIndex);

	UFUNCTION()
	void uiDirectionalPadEvent(const FString deviceID, const int32 directionalPadValue, int32 directionalPadIndex, const int32 deviceIndex, const FSimpleControllerDevice device, const int32 connectionIndex);

	/*
	* This function activates the UI control of the plugin for this UI element. Can be destroyed, pausend and resumed
	* @param mainWidget This widget contains the widgets that can be selected. 
	* @param childWidgets These are the widgets that can be selected.
	*/
	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|UI", meta = (BlueprintInternalUseOnly = "true"))
	static USimpleControllerUIEnableSelection* enableSimpleControllerUISelection(USimpleControllerUIEnableSelection*& activeUIElement, UWidget* mainWidget, TArray<UWidget*> childWidgets, UWidget* defaultWidgetToSelect,
		TArray<int32> connectionIndexes, bool useDpad = true, int32 horizontalAxisID = 0, int32 verticalAxisID = 1);


	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|UI")
	void destroySimpleControllerUISelection();

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|UI")
	void pauseSimpleControllerUISelection();

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|UI")
	void resumeSimpleControllerUISelection();

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|UI")
	void selectNextUIElement(ESimpleControllerUIDirection direction, int32 fakeConnectionIndex);

	UFUNCTION(BlueprintCallable, Category = "SimpleControllerPlugin|UI")
	void selectUIElement(UWidget* widget, int32 fakeConnectionIndex);

	virtual void Activate() override;
	virtual void BeginDestroy() override;

private:

	bool findWidget(ESimpleControllerUIDirection direction);

	FSimpleControllerUIRectangle getRectangle(UWidget* widget);
	bool isOverlapRect(FSimpleControllerUIRectangle rectA, FSimpleControllerUIRectangle rectB);


	//FSimpleControllerUIStore* enabledWidgets = nullptr;

	//UWidget* getClosestToRight(FVector2D)

	bool run = true;
	bool firstInteraction = false;
	bool useDpad = true;
	int32 horizontalAxisID = 0;
	int32 verticalAxisID = 1;
	float minAxisTolerance = 0.2;
	float maxAxisTolerance = 0.8;
	float minAxisToleranceN = -0.2;
	float maxAxisToleranceN = -0.8;
	UWidget* mainWidget = nullptr;
	UWidget* defaultWidgetToSelect = nullptr;
	TArray<UWidget*> childWidgets;
	TArray<int32> connectionIndexes;
	UWidget* selectedWidget = nullptr;
	//TArray<UWidget*> children;
	TMap<UWidget*, FSimpleControllerUIRectangle> children;


};