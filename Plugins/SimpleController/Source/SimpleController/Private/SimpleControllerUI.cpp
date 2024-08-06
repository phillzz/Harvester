// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleControllerUI.h"



void USimpleControllerUIEnableSelection::uiAxisEvent(const FString deviceID, const int32 axisID, const float axisValue, const int32 deviceIndex, const FSimpleControllerDevice device, const int32 connectionIndex) {
	if (!run) {
		return;
	}

	if (axisID != horizontalAxisID && axisID != verticalAxisID) {
		return;
	}

	bool indexFound = false;
	for (int32 i = 0; i < connectionIndexes.Num(); i++) {
		if (connectionIndexes[i] == connectionIndex) {
			indexFound = true;
			break;
		}
	}

	if (!indexFound) {
		return;
	}

	//The positions of the widgets are only available after they have been rendered. I assume that this is the case with a user action and read out the positions once here. 
	if (firstInteraction == false) {
		firstInteraction = true;
		for (int32 i = 0; i < childWidgets.Num(); i++) {
			FSimpleControllerUIRectangle rect = getRectangle(childWidgets[i]);
			children.Add(childWidgets[i], rect);
		}

		if (defaultWidgetToSelect->IsValidLowLevel() == false && childWidgets.Num() > 0) {
			selectedWidget = childWidgets[0];
		}
		else {
			selectedWidget = defaultWidgetToSelect;
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("uiAxisEvent:  %i %f"),axisID, axisValue);

	//The bool variables must always be the same across several UI elements, which is why they are in the main class.
	
	//left right
	if (axisID == horizontalAxisID) {
		if (USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingH) {
			if (axisValue > 0) {
				if (axisValue < minAxisTolerance) {
					USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingH = false;
					return;
				}
			}
			else {
				if (axisValue > minAxisToleranceN) {
					USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingH = false;
					return;
				}
			}
		}
		else {
			if (axisValue > 0) {
				if (axisValue > maxAxisTolerance) {
					USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingH = true;
					//UE_LOG(LogTemp, Warning, TEXT("USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingH:R  %i %f"),axisID, axisValue);
					bool found = findWidget(ESimpleControllerUIDirection::RIGHT);
					onSelect.Broadcast(mainWidget, selectedWidget, connectionIndex, found, ESimpleControllerUIDirection::RIGHT);
					return;
				}
			}
			else {
				if (axisValue < maxAxisToleranceN) {
					USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingH = true;
					//UE_LOG(LogTemp, Warning, TEXT("USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingH:L  %i %f"),axisID, axisValue);
					bool found = findWidget(ESimpleControllerUIDirection::LEFT);
					onSelect.Broadcast(mainWidget, selectedWidget, connectionIndex, found, ESimpleControllerUIDirection::LEFT);
					return;
				}
			}
		}
		return;
	}


	//top bottom
	if (axisID == verticalAxisID) {
		if (USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingV) {
			if (axisValue > 0) {
				if (axisValue < minAxisTolerance) {
					USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingV = false;
					return;
				}
			}
			else {
				if (axisValue > minAxisToleranceN) {
					USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingV = false;
					return;
				}
			}
		}
		else {
			if (axisValue > 0) {
				if (axisValue > maxAxisTolerance) {
					USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingV = true;
					//UE_LOG(LogTemp, Warning, TEXT("USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingV:T  %i %f"),axisID, axisValue);
					bool found = findWidget(ESimpleControllerUIDirection::BOTTOM);
					onSelect.Broadcast(mainWidget, selectedWidget, connectionIndex, found, ESimpleControllerUIDirection::BOTTOM);
					return;
				}
			}
			else {
				if (axisValue < maxAxisToleranceN) {
					USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingV = true;
					//UE_LOG(LogTemp, Warning, TEXT("USimpleControllerBPLibrary::controllerTarget->UIaxisIsMovingV:B  %i %f"),axisID, axisValue);
					bool found = findWidget(ESimpleControllerUIDirection::TOP);
					onSelect.Broadcast(mainWidget, selectedWidget, connectionIndex, found, ESimpleControllerUIDirection::TOP);
					return;
				}
			}
		}
		return;
	}
}



void USimpleControllerUIEnableSelection::uiDirectionalPadEvent(const FString deviceID, const int32 directionalPadValue, int32 directionalPadIndex, const int32 deviceIndex, const FSimpleControllerDevice device, const int32 connectionIndex){

	if (!run) {
		return;
	}

	ESimpleControllerUIDirection direction = ESimpleControllerUIDirection::NONE;

	switch (directionalPadValue)
	{
	case 1:
		direction = ESimpleControllerUIDirection::TOP;
		break;
	case 2:
		direction = ESimpleControllerUIDirection::RIGHT;
		break;
	case 4:
		direction = ESimpleControllerUIDirection::BOTTOM;
		break;
	case 8:
		direction = ESimpleControllerUIDirection::LEFT;
		break;
	default:
		return;
	}

	
	bool indexFound = false;
	for (int32 i = 0; i < connectionIndexes.Num(); i++)	{
		if (connectionIndexes[i] == connectionIndex) {
			indexFound = true;
			break;
		}
	}

	if (!indexFound) {
		return;
	}

	//The positions of the widgets are only available after they have been rendered. I assume that this is the case with a user action and read out the positions once here. 
	if (firstInteraction == false) {
		firstInteraction = true;
		for (int32 i = 0; i < childWidgets.Num(); i++){
			FSimpleControllerUIRectangle rect = getRectangle(childWidgets[i]);
			children.Add(childWidgets[i], rect);
		}

		if (defaultWidgetToSelect->IsValidLowLevel() == false && childWidgets.Num() > 0) {
			selectedWidget = childWidgets[0];
		}
		else {
			selectedWidget = defaultWidgetToSelect;
		}
	}



	bool found = findWidget(direction);
	onSelect.Broadcast(mainWidget, selectedWidget, connectionIndex, found, direction);
}


USimpleControllerUIEnableSelection* USimpleControllerUIEnableSelection::enableSimpleControllerUISelection(USimpleControllerUIEnableSelection*& activeUIElement,
	UWidget* mainWidget, TArray<UWidget*> childWidgets, UWidget* defaultWidgetToSelect, TArray<int32> connectionIndexes,
	bool useDpad, int32 horizontalAxisID, int32 verticalAxisID){

	USimpleControllerUIEnableSelection* instance = NewObject<USimpleControllerUIEnableSelection>();
	//instance->AddToRoot();

	instance->mainWidget = mainWidget;
	instance->defaultWidgetToSelect = defaultWidgetToSelect;
	instance->childWidgets = childWidgets;
	instance->connectionIndexes = connectionIndexes;
	instance->useDpad = useDpad;
	instance->horizontalAxisID = horizontalAxisID;
	instance->verticalAxisID = verticalAxisID;
	activeUIElement = instance;

	return instance;
}


void USimpleControllerUIEnableSelection::destroySimpleControllerUISelection(){
		this->ConditionalBeginDestroy();
}

void USimpleControllerUIEnableSelection::pauseSimpleControllerUISelection(){
	run = false;
}

void USimpleControllerUIEnableSelection::resumeSimpleControllerUISelection(){
	run = true;
}

void USimpleControllerUIEnableSelection::selectNextUIElement(ESimpleControllerUIDirection direction, int32 fakeConnectionIndex){
	//The positions of the widgets are only available after they have been rendered. I assume that this is the case with a user action and read out the positions once here. 
	if (firstInteraction == false) {
		firstInteraction = true;
		for (int32 i = 0; i < childWidgets.Num(); i++){
			FSimpleControllerUIRectangle rect = getRectangle(childWidgets[i]);
			children.Add(childWidgets[i], rect);
		}

		if (defaultWidgetToSelect->IsValidLowLevel() == false && childWidgets.Num() > 0) {
			selectedWidget = childWidgets[0];
		}
		else {
			selectedWidget = defaultWidgetToSelect;
		}
	}

	bool found = findWidget(direction);
	onSelect.Broadcast(mainWidget, selectedWidget, fakeConnectionIndex, found, direction);
}


void USimpleControllerUIEnableSelection::selectUIElement(UWidget* widget, int32 fakeConnectionIndex){
	if (widget != nullptr && widget->IsValidLowLevel()) {
		for (int32 i = 0; i < childWidgets.Num(); i++) {
			if (childWidgets[i] == widget) {
				selectedWidget = widget;
				onSelect.Broadcast(mainWidget, selectedWidget, fakeConnectionIndex, true, ESimpleControllerUIDirection::NONE);
				return;
			}
		}
		onSelect.Broadcast(mainWidget, selectedWidget, fakeConnectionIndex, false, ESimpleControllerUIDirection::NONE);
	}
}

void USimpleControllerUIEnableSelection::Activate(){
	if (horizontalAxisID > -1 && verticalAxisID > -1) {
		USimpleControllerBPLibrary::getSimpleControllerTarget()->onaxisMovedEventDelegate.AddDynamic(this, &USimpleControllerUIEnableSelection::uiAxisEvent);
	}
	if (useDpad) {
		USimpleControllerBPLibrary::getSimpleControllerTarget()->onDirectionalPadEventDelegate.AddDynamic(this, &USimpleControllerUIEnableSelection::uiDirectionalPadEvent);
	}
}

void USimpleControllerUIEnableSelection::BeginDestroy(){

	//UE_LOG(LogTemp, Warning, TEXT("USimpleControllerUIEnableSelection::BeginDestroy"));

	USimpleControllerBPLibrary::getSimpleControllerTarget()->onaxisMovedEventDelegate.RemoveDynamic(this, &USimpleControllerUIEnableSelection::uiAxisEvent);
	USimpleControllerBPLibrary::getSimpleControllerTarget()->onDirectionalPadEventDelegate.RemoveDynamic(this, &USimpleControllerUIEnableSelection::uiDirectionalPadEvent);

	children.Empty();
	childWidgets.Empty();
	mainWidget = nullptr;
	selectedWidget = nullptr;

	//RemoveFromRoot();
	Super::BeginDestroy();
}


bool USimpleControllerUIEnableSelection::findWidget(ESimpleControllerUIDirection direction){
	
	if (mainWidget == nullptr || selectedWidget == nullptr || children.Num() == 0) {
		return false;
	}
	if (children.Find(selectedWidget) == nullptr) {
		return false;
	}



	FSimpleControllerUIRectangle selectedRect = *children.Find(selectedWidget);
	FSimpleControllerUIRectangle mainWidgetRect = getRectangle(mainWidget);
	
	switch (direction)
	{
	case ESimpleControllerUIDirection::TOP:
	{
		int32 noEndlesLoopIterator = 10000;
		selectedRect.bottom = selectedRect.top - 1;
		selectedRect.top -= 2;


		while (selectedRect.top > mainWidgetRect.top && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.top--;
			selectedRect.bottom--;
		}

		//no child found. Strech search rect no mainwidget dimensions
		noEndlesLoopIterator = 10000;

		selectedRect = *children.Find(selectedWidget);
		selectedRect.bottom = selectedRect.top - 1;
		selectedRect.top -= 2;

		while (selectedRect.left > mainWidgetRect.left && selectedRect.right < mainWidgetRect.right && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.left--;
			selectedRect.right++;
		}


		//no child found. search with streched rec
		noEndlesLoopIterator = 10000;
		selectedRect = *children.Find(selectedWidget);
		selectedRect.bottom = selectedRect.top - 1;
		selectedRect.top -= 2;
		selectedRect.left = mainWidgetRect.left;
		selectedRect.right = mainWidgetRect.right;

		while (selectedRect.top > mainWidgetRect.top && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.top--;
			selectedRect.bottom--;
		}

	}
	break;
	case ESimpleControllerUIDirection::BOTTOM:
	{
		int32 noEndlesLoopIterator = 10000;
		selectedRect.top = selectedRect.bottom +1;
		selectedRect.bottom += 2;

		while (selectedRect.bottom < mainWidgetRect.bottom && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.top++;
			selectedRect.bottom++;
		}

		//no child found. Strech search rect no mainwidget dimensions
		noEndlesLoopIterator = 10000;

		selectedRect = *children.Find(selectedWidget);
		selectedRect.top = selectedRect.bottom +1;
		selectedRect.bottom += 2;

		while (selectedRect.left > mainWidgetRect.left && selectedRect.right < mainWidgetRect.right && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.left--;
			selectedRect.right++;
		}


		//no child found. search with streched rec
		noEndlesLoopIterator = 10000;
		selectedRect = *children.Find(selectedWidget);
		selectedRect.top = selectedRect.bottom +1;
		selectedRect.bottom += 2;
		selectedRect.left = mainWidgetRect.left;
		selectedRect.right = mainWidgetRect.right;

		while (selectedRect.bottom < mainWidgetRect.bottom && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.top++;
			selectedRect.bottom++;
		}

	}
	break;
	case ESimpleControllerUIDirection::RIGHT:
	{

		// Algorithm with growing rectangle
		//FSimpleControllerUIRectangle searchRect = FSimpleControllerUIRectangle();


		//searchRect.top = selectedRect.top;
		//searchRect.bottom = selectedRect.bottom;


		//while (searchRect.top > mainWidgetRect.top && searchRect.bottom < mainWidgetRect.bottom && noEndlesLoopIterator > 0) {
		//	noEndlesLoopIterator--;

		//	searchRect.left = selectedRect.right + 1;
		//	searchRect.right = selectedRect.right + 2;

		//	while (searchRect.right < mainWidgetRect.right) {
		//		for (auto& element : children) {
		//			if (selectedWidget != element.Key) {
		//				if (isOverlapRect(searchRect, element.Value)) {
		//					selectedWidget = element.Key;
		//					return true;
		//				}
		//			}
		//		}
		//		searchRect.right++;
		//		searchRect.left++;
		//	}
		//	searchRect.top -= 1;
		//	searchRect.bottom += 1;
		//}


		int32 noEndlesLoopIterator = 10000;
		selectedRect.left = selectedRect.right + 1;
		selectedRect.right += 2;


		while (selectedRect.right < mainWidgetRect.right && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.right++;
			selectedRect.left++;
		}

		//no child found. Strech search rect no mainwidget dimensions
		noEndlesLoopIterator = 10000;

		selectedRect = *children.Find(selectedWidget);
		selectedRect.left = selectedRect.right + 1;
		selectedRect.right += 2;

		while (selectedRect.top > mainWidgetRect.top && selectedRect.bottom < mainWidgetRect.bottom && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.top--;
			selectedRect.bottom++;
		}


		//no child found. search with streched rec
		noEndlesLoopIterator = 10000;
		selectedRect = *children.Find(selectedWidget);
		selectedRect.left = selectedRect.right + 1;
		selectedRect.right += 2;
		selectedRect.top = mainWidgetRect.top;
		selectedRect.bottom = mainWidgetRect.bottom;

		while (selectedRect.right < mainWidgetRect.right && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.right++;
			selectedRect.left++;
		}

	}
	break;
	case ESimpleControllerUIDirection::LEFT:
	{
		int32 noEndlesLoopIterator = 10000;

		selectedRect.right = selectedRect.left -1;
		selectedRect.left -=2;

		while (selectedRect.left > mainWidgetRect.left && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.right--;
			selectedRect.left--;
		}


		//no child found. Strech search rect no mainwidget dimensions
		noEndlesLoopIterator = 10000;

		selectedRect = *children.Find(selectedWidget);
		selectedRect.right = selectedRect.left -1;
		selectedRect.left -=2;

		while (selectedRect.top > mainWidgetRect.top && selectedRect.bottom < mainWidgetRect.bottom && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.top--;
			selectedRect.bottom++;
		}


		//no child found. search with streched rec
		noEndlesLoopIterator = 10000;
		selectedRect = *children.Find(selectedWidget);
		selectedRect.right = selectedRect.left -1;
		selectedRect.left -=2;
		selectedRect.top = mainWidgetRect.top;
		selectedRect.bottom = mainWidgetRect.bottom;

		while (selectedRect.left > mainWidgetRect.left && noEndlesLoopIterator > 0) {
			noEndlesLoopIterator--;
			for (auto& element : children) {
				if (selectedWidget != element.Key) {
					if (isOverlapRect(selectedRect, element.Value)) {
						selectedWidget = element.Key;
						return true;
					}
				}
			}
			selectedRect.right--;
			selectedRect.left--;
		}

	}
	break;
	}

	return false;
}


FSimpleControllerUIRectangle USimpleControllerUIEnableSelection::getRectangle(UWidget* widget){
	if (widget->IsValidLowLevel() == false) {
		return FSimpleControllerUIRectangle();
	}

	FVector2D position = widget->GetCachedGeometry().GetAbsolutePosition();
	FVector2D size = widget->GetCachedGeometry().GetAbsoluteSize();

	FSimpleControllerUIRectangle rectangle = FSimpleControllerUIRectangle();
	rectangle.bottom = position.Y + size.Y;
	rectangle.height = size.Y;
	rectangle.left = position.X;
	rectangle.right = position.X + size.X;
	rectangle.top = position.Y;
	rectangle.width = size.X;
	rectangle.x = position.X;
	rectangle.y = position.Y;
	return rectangle;
}

bool USimpleControllerUIEnableSelection::isOverlapRect(FSimpleControllerUIRectangle rectA, FSimpleControllerUIRectangle rectB){

	bool overlap = !(rectA.right < rectB.left ||
		rectA.left > rectB.right ||
		rectA.bottom < rectB.top ||
		rectA.top > rectB.bottom);

	//UE_LOG(LogTemp, Warning, TEXT("%i: %f < %f || %f > %f || %f < %f || %f > %f"),(int)overlap,rectA.right, rectB.left, rectA.left, rectB.right,
	//	rectA.bottom, rectB.top, rectA.top, rectB.bottom);

	return overlap;
}

