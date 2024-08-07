// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleControllerBPLibrary.h"
#include "SimpleController/Public/SimpleController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerBPLibrary();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerUnrealEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerUnrealEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerWheel_NoRegister();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingProfile();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms
		{
			FString deviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, buttonID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonDownEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FbuttonDownEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& buttonDownEventDelegate, const FString& deviceID, int32 buttonID, int32 deviceIndex, FSimpleControllerDevice device, int32 connectionIndex)
{
	struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms
	{
		FString deviceID;
		int32 buttonID;
		int32 deviceIndex;
		FSimpleControllerDevice device;
		int32 connectionIndex;
	};
	SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.buttonID=buttonID;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	Parms.connectionIndex=connectionIndex;
	buttonDownEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms
		{
			FString deviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, buttonID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonUpEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FbuttonUpEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& buttonUpEventDelegate, const FString& deviceID, int32 buttonID, int32 deviceIndex, FSimpleControllerDevice device, int32 connectionIndex)
{
	struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms
	{
		FString deviceID;
		int32 buttonID;
		int32 deviceIndex;
		FSimpleControllerDevice device;
		int32 connectionIndex;
	};
	SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.buttonID=buttonID;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	Parms.connectionIndex=connectionIndex;
	buttonUpEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms
		{
			FString deviceID;
			int32 directionalPadValue;
			int32 directionalPadIndex;
			int32 deviceIndex;
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionalPadIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadIndex = { "directionalPadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directionalPadEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FdirectionalPadEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& directionalPadEventDelegate, const FString& deviceID, int32 directionalPadValue, int32 directionalPadIndex, int32 deviceIndex, FSimpleControllerDevice device, int32 connectionIndex)
{
	struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms
	{
		FString deviceID;
		int32 directionalPadValue;
		int32 directionalPadIndex;
		int32 deviceIndex;
		FSimpleControllerDevice device;
		int32 connectionIndex;
	};
	SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.directionalPadValue=directionalPadValue;
	Parms.directionalPadIndex=directionalPadIndex;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	Parms.connectionIndex=connectionIndex;
	directionalPadEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms
		{
			FString deviceID;
			int32 ballID;
			float xRel;
			int32 yRel;
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ballID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_xRel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_yRel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_ballID = { "ballID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, ballID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_xRel = { "xRel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, xRel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_yRel = { "yRel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, yRel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_ballID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_xRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_yRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "ballMovedEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FballMovedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ballMovedEventDelegate, const FString& deviceID, int32 ballID, float xRel, int32 yRel, FSimpleControllerDevice device)
{
	struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms
	{
		FString deviceID;
		int32 ballID;
		float xRel;
		int32 yRel;
		FSimpleControllerDevice device;
	};
	SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.ballID=ballID;
	Parms.xRel=xRel;
	Parms.yRel=yRel;
	Parms.device=device;
	ballMovedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms
		{
			FString deviceID;
			int32 axisID;
			float axisValue;
			int32 deviceIndex;
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "axisMovedEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FaxisMovedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& axisMovedEventDelegate, const FString& deviceID, int32 axisID, float axisValue, int32 deviceIndex, FSimpleControllerDevice device, int32 connectionIndex)
{
	struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms
	{
		FString deviceID;
		int32 axisID;
		float axisValue;
		int32 deviceIndex;
		FSimpleControllerDevice device;
		int32 connectionIndex;
	};
	SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.axisID=axisID;
	Parms.axisValue=axisValue;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	Parms.connectionIndex=connectionIndex;
	axisMovedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceAttachedEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FdeviceAttachedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& deviceAttachedEventDelegate, FSimpleControllerDevice device, int32 connectionIndex)
{
	struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms
	{
		FSimpleControllerDevice device;
		int32 connectionIndex;
	};
	SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms Parms;
	Parms.device=device;
	Parms.connectionIndex=connectionIndex;
	deviceAttachedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceDetachedEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FdeviceDetachedEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& deviceDetachedEventDelegate, FSimpleControllerDevice device, int32 connectionIndex)
{
	struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms
	{
		FSimpleControllerDevice device;
		int32 connectionIndex;
	};
	SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms Parms;
	Parms.device=device;
	Parms.connectionIndex=connectionIndex;
	deviceDetachedEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms
		{
			FString deviceID;
			float valueA;
			float valueB;
			float valueC;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueA;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueC;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_valueA = { "valueA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, valueA), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_valueB = { "valueB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, valueB), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_valueC = { "valueC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, valueC), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_valueA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_valueB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_valueC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "accelerationSensorEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FaccelerationSensorEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& accelerationSensorEventDelegate, const FString& deviceID, float valueA, float valueB, float valueC, int32 deviceIndex, FSimpleControllerDevice device)
{
	struct SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms
	{
		FString deviceID;
		float valueA;
		float valueB;
		float valueC;
		int32 deviceIndex;
		FSimpleControllerDevice device;
	};
	SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.valueA=valueA;
	Parms.valueB=valueB;
	Parms.valueC=valueC;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	accelerationSensorEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms
		{
			FString deviceID;
			float valueA;
			float valueB;
			float valueC;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueA;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueC;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_valueA = { "valueA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, valueA), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_valueB = { "valueB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, valueB), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_valueC = { "valueC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, valueC), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_valueA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_valueB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_valueC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "gyroSensorEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FgyroSensorEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& gyroSensorEventDelegate, const FString& deviceID, float valueA, float valueB, float valueC, int32 deviceIndex, FSimpleControllerDevice device)
{
	struct SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms
	{
		FString deviceID;
		float valueA;
		float valueB;
		float valueC;
		int32 deviceIndex;
		FSimpleControllerDevice device;
	};
	SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.valueA=valueA;
	Parms.valueB=valueB;
	Parms.valueC=valueC;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	gyroSensorEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms
		{
			FString deviceID;
			int32 touchpadIndex;
			int32 finger;
			float x;
			float y;
			float pressure;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_touchpadIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_finger;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pressure;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_touchpadIndex = { "touchpadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, touchpadIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_finger = { "finger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, finger), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, pressure), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_touchpadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_finger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "touchpadMotionEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FtouchpadMotionEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& touchpadMotionEventDelegate, const FString& deviceID, int32 touchpadIndex, int32 finger, float x, float y, float pressure, int32 deviceIndex, FSimpleControllerDevice device)
{
	struct SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms
	{
		FString deviceID;
		int32 touchpadIndex;
		int32 finger;
		float x;
		float y;
		float pressure;
		int32 deviceIndex;
		FSimpleControllerDevice device;
	};
	SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.touchpadIndex=touchpadIndex;
	Parms.finger=finger;
	Parms.x=x;
	Parms.y=y;
	Parms.pressure=pressure;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	touchpadMotionEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms
		{
			FString deviceID;
			int32 touchpadIndex;
			int32 finger;
			float x;
			float y;
			float pressure;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_touchpadIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_finger;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pressure;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_touchpadIndex = { "touchpadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, touchpadIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_finger = { "finger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, finger), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, pressure), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_touchpadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_finger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "touchpadDownEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FtouchpadDownEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& touchpadDownEventDelegate, const FString& deviceID, int32 touchpadIndex, int32 finger, float x, float y, float pressure, int32 deviceIndex, FSimpleControllerDevice device)
{
	struct SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms
	{
		FString deviceID;
		int32 touchpadIndex;
		int32 finger;
		float x;
		float y;
		float pressure;
		int32 deviceIndex;
		FSimpleControllerDevice device;
	};
	SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.touchpadIndex=touchpadIndex;
	Parms.finger=finger;
	Parms.x=x;
	Parms.y=y;
	Parms.pressure=pressure;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	touchpadDownEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms
		{
			FString deviceID;
			int32 touchpadIndex;
			int32 finger;
			float x;
			float y;
			float pressure;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_touchpadIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_finger;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pressure;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_touchpadIndex = { "touchpadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, touchpadIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_finger = { "finger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, finger), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, pressure), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_touchpadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_finger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "touchpadUpEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerBPLibrary::FtouchpadUpEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& touchpadUpEventDelegate, const FString& deviceID, int32 touchpadIndex, int32 finger, float x, float y, float pressure, int32 deviceIndex, FSimpleControllerDevice device)
{
	struct SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms
	{
		FString deviceID;
		int32 touchpadIndex;
		int32 finger;
		float x;
		float y;
		float pressure;
		int32 deviceIndex;
		FSimpleControllerDevice device;
	};
	SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms Parms;
	Parms.deviceID=deviceID;
	Parms.touchpadIndex=touchpadIndex;
	Parms.finger=finger;
	Parms.x=x;
	Parms.y=y;
	Parms.pressure=pressure;
	Parms.deviceIndex=deviceIndex;
	Parms.device=device;
	touchpadUpEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execinitIOSPart)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::initIOSPart(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetButtonName)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USimpleControllerBPLibrary::getButtonName(Z_Param_device,Z_Param_buttonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakForceFeedbackEffect)
	{
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_effectID);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakForceFeedbackEffect(Z_Param_forceFeedbackEffect,Z_Param_Out_effectID,Z_Param_Out_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execmapAxis)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleControllerBPLibrary::mapAxis(Z_Param_mappingProfile,Z_Param_actionName,Z_Param_device,Z_Param_axisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execisAxisMapped)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleControllerBPLibrary::isAxisMapped(Z_Param_mappingProfile,Z_Param_actionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execremoveAxisMapping)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::removeAxisMapping(Z_Param_mappingProfile,Z_Param_actionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execmapButton)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleControllerBPLibrary::mapButton(Z_Param_mappingProfile,Z_Param_actionName,Z_Param_device,Z_Param_buttonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execisButtonMapped)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleControllerBPLibrary::isButtonMapped(Z_Param_mappingProfile,Z_Param_actionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execremoveButtonMapping)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::removeButtonMapping(Z_Param_mappingProfile,Z_Param_actionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetMappingActionsByTag)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_tag);
		P_GET_TARRAY_REF(FSimpleControllerMappingButtonAction,Z_Param_Out_buttonActions);
		P_GET_TARRAY_REF(FSimpleControllerMappingAxisAction,Z_Param_Out_axisActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getMappingActionsByTag(Z_Param_mappingProfile,Z_Param_tag,Z_Param_Out_buttonActions,Z_Param_Out_axisActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetMappedAxisActions)
	{
		P_GET_UBOOL_REF(Z_Param_Out_isMapped);
		P_GET_TARRAY_REF(FString,Z_Param_Out_actionNames);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getMappedAxisActions(Z_Param_Out_isMapped,Z_Param_Out_actionNames,Z_Param_axisID,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetMappedButtonActions)
	{
		P_GET_UBOOL_REF(Z_Param_Out_isMapped);
		P_GET_TARRAY_REF(FString,Z_Param_Out_actionNames);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getMappedButtonActions(Z_Param_Out_isMapped,Z_Param_Out_actionNames,Z_Param_buttonID,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcancelMapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::cancelMapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateMappingFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_profileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileData);
		P_GET_UBOOL(Z_Param_overwriteExistingFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleControllerBPLibrary::createMappingFile(Z_Param_profileName,Z_Param_fileData,Z_Param_overwriteExistingFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdeleteMappingFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_profileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleControllerBPLibrary::deleteMappingFile(Z_Param_profileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetAxisActions)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_profile);
		P_GET_TMAP_REF(FString,FSimpleControllerMappingAxisAction,Z_Param_Out_axisActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getAxisActions(Z_Param_profile,Z_Param_Out_axisActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetButtonActions)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_profile);
		P_GET_TMAP_REF(FString,FSimpleControllerMappingButtonAction,Z_Param_Out_buttonActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getButtonActions(Z_Param_profile,Z_Param_Out_buttonActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakMappingProfile)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_profile);
		P_GET_TMAP_REF(FString,FSimpleControllerMappingButtonAction,Z_Param_Out_buttonActions);
		P_GET_TMAP_REF(FString,FSimpleControllerMappingAxisAction,Z_Param_Out_axisActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakMappingProfile(Z_Param_profile,Z_Param_Out_buttonActions,Z_Param_Out_axisActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execchangeAxisActionSettings)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_GET_UBOOL(Z_Param_invertAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::changeAxisActionSettings(Z_Param_mappingProfile,Z_Param_actionName,Z_Param_invertAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakAxisAction)
	{
		P_GET_STRUCT(FSimpleControllerMappingAxisAction,Z_Param_action);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_actionName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_description);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_tag);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_connectionIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_axisID);
		P_GET_UBOOL_REF(Z_Param_Out_invertAxis);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_controllerName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_vendorID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_productID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakAxisAction(Z_Param_action,Z_Param_Out_actionName,Z_Param_Out_description,Z_Param_Out_tag,Z_Param_Out_connectionIndex,Z_Param_Out_axisID,Z_Param_Out_invertAxis,Z_Param_Out_deviceName,Z_Param_Out_controllerName,Z_Param_Out_vendorID,Z_Param_Out_productID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakButtonAction)
	{
		P_GET_STRUCT(FSimpleControllerMappingButtonAction,Z_Param_action);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_actionName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_description);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_tag);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_connectionIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_buttonID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_buttonName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_controllerName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_vendorID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_productID);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakButtonAction(Z_Param_action,Z_Param_Out_actionName,Z_Param_Out_description,Z_Param_Out_tag,Z_Param_Out_connectionIndex,Z_Param_Out_buttonID,Z_Param_Out_buttonName,Z_Param_Out_deviceName,Z_Param_Out_controllerName,Z_Param_Out_vendorID,Z_Param_Out_productID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakDeviceInfo)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_deviceIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_connectionIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_controllerName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_vendorID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_productID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numAxes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numButtons);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numDirectionalPadAxes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numBalls);
		P_GET_UBOOL_REF(Z_Param_Out_hasHaptic);
		P_GET_UBOOL_REF(Z_Param_Out_hasRumble);
		P_GET_UBOOL_REF(Z_Param_Out_hasRumbleTriggers);
		P_GET_UBOOL_REF(Z_Param_Out_hasAccelerationSensor);
		P_GET_UBOOL_REF(Z_Param_Out_hasGyroSensor);
		P_GET_UBOOL_REF(Z_Param_Out_hasLED);
		P_GET_UBOOL_REF(Z_Param_Out_gamepadAPI_Support);
		P_GET_UBOOL_REF(Z_Param_Out_isXinput);
		P_GET_ENUM_REF(ESimpleControllerType,Z_Param_Out_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakDeviceInfo(Z_Param_device,Z_Param_Out_deviceIndex,Z_Param_Out_connectionIndex,Z_Param_Out_deviceID,Z_Param_Out_deviceName,Z_Param_Out_controllerName,Z_Param_Out_vendorID,Z_Param_Out_productID,Z_Param_Out_numAxes,Z_Param_Out_numButtons,Z_Param_Out_numDirectionalPadAxes,Z_Param_Out_numBalls,Z_Param_Out_hasHaptic,Z_Param_Out_hasRumble,Z_Param_Out_hasRumbleTriggers,Z_Param_Out_hasAccelerationSensor,Z_Param_Out_hasGyroSensor,Z_Param_Out_hasLED,Z_Param_Out_gamepadAPI_Support,Z_Param_Out_isXinput,(ESimpleControllerType&)(Z_Param_Out_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetCurrentPowerLevel)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM_REF(ESimpleControllerPowerLevel,Z_Param_Out_powerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getCurrentPowerLevel(Z_Param_device,(ESimpleControllerPowerLevel&)(Z_Param_Out_powerLevel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakDeviceForceFeedbackInfo)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CONSTANT);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SINE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_LEFTRIGHT);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_TRIANGLE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SAWTOOTHUP);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SAWTOOTHDOWN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_RAMP);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SPRING);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_DAMPER);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_INERTIA);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_FRICTION);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CUSTOM);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_GAIN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_AUTOCENTER);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_STATUS);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_PAUSE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_POLAR);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CARTESIAN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SPHERICAL);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_INFINITY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_maxSimultaneouslyEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakDeviceForceFeedbackInfo(Z_Param_device,Z_Param_Out_forceFeedback_CONSTANT,Z_Param_Out_forceFeedback_SINE,Z_Param_Out_forceFeedback_LEFTRIGHT,Z_Param_Out_forceFeedback_TRIANGLE,Z_Param_Out_forceFeedback_SAWTOOTHUP,Z_Param_Out_forceFeedback_SAWTOOTHDOWN,Z_Param_Out_forceFeedback_RAMP,Z_Param_Out_forceFeedback_SPRING,Z_Param_Out_forceFeedback_DAMPER,Z_Param_Out_forceFeedback_INERTIA,Z_Param_Out_forceFeedback_FRICTION,Z_Param_Out_forceFeedback_CUSTOM,Z_Param_Out_forceFeedback_GAIN,Z_Param_Out_forceFeedback_AUTOCENTER,Z_Param_Out_forceFeedback_STATUS,Z_Param_Out_forceFeedback_PAUSE,Z_Param_Out_forceFeedback_POLAR,Z_Param_Out_forceFeedback_CARTESIAN,Z_Param_Out_forceFeedback_SPHERICAL,Z_Param_Out_forceFeedback_INFINITY,Z_Param_Out_maxSimultaneouslyEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetGainForceFeedback)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::setGainForceFeedback(Z_Param_device,Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetAutocenterForceFeedbackSDL)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_autocenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::setAutocenterForceFeedbackSDL(Z_Param_device,Z_Param_autocenter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execstopRumbleWheel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::stopRumbleWheel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execrumbleWheel)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthLeftMotor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthRightMotor);
		P_GET_PROPERTY(FIntProperty,Z_Param_lengthInMilliseconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeBetweenDirectionChangeInMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::rumbleWheel(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,Z_Param_strengthLeftMotor,Z_Param_strengthRightMotor,Z_Param_lengthInMilliseconds,Z_Param_timeBetweenDirectionChangeInMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdisableConstantForceOnWheel)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::disableConstantForceOnWheel(Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execenableConstantForceOnWheel)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_force);
		P_GET_PROPERTY(FIntProperty,Z_Param_wheelAxisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USimpleControllerBPLibrary::enableConstantForceOnWheel(Z_Param_device,Z_Param_force,Z_Param_wheelAxisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdestroyForceFeedbackEffect)
	{
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::destroyForceFeedbackEffect(Z_Param_forceFeedbackEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execupdateConstantForceFeedbackEffect)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_level);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::updateConstantForceFeedbackEffect(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_forceFeedbackEffect,Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_length,Z_Param_delay,Z_Param_level,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execuploadAndRunForceFeedbackEffect)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_GET_PROPERTY(FIntProperty,Z_Param_iterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerForceFeedbackEffect*)Z_Param__Result=USimpleControllerBPLibrary::uploadAndRunForceFeedbackEffect(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_forceFeedbackEffect,Z_Param_iterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execstopForceFeedbackEffect)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerForceFeedbackEffect*)Z_Param__Result=USimpleControllerBPLibrary::stopForceFeedbackEffect(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_forceFeedbackEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execrunForceFeedbackEffect)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_GET_PROPERTY(FIntProperty,Z_Param_iterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerForceFeedbackEffect*)Z_Param__Result=USimpleControllerBPLibrary::runForceFeedbackEffect(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_forceFeedbackEffect,Z_Param_iterations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execuploadForceFeedbackEffect)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_forceFeedbackEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerForceFeedbackEffect*)Z_Param__Result=USimpleControllerBPLibrary::uploadForceFeedbackEffect(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_forceFeedbackEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectRamp)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_forceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_startLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_endLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::createForceFeedbackEffectRamp(Z_Param_Out_forceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_length,Z_Param_delay,Z_Param_startLevel,Z_Param_endLevel,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectCondition)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_forceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackEffectConditionType,Z_Param_ConditionType);
		P_GET_UBOOL(Z_Param_useDirectionX);
		P_GET_UBOOL(Z_Param_useDirectionY);
		P_GET_UBOOL(Z_Param_useDirectionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rightLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_leftLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_rightLevelIncreaseSpeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_leftLevelIncreaseSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deadband);
		P_GET_PROPERTY(FIntProperty,Z_Param_center);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::createForceFeedbackEffectCondition(Z_Param_Out_forceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackEffectConditionType(Z_Param_ConditionType),Z_Param_useDirectionX,Z_Param_useDirectionY,Z_Param_useDirectionZ,Z_Param_length,Z_Param_delay,Z_Param_rightLevel,Z_Param_leftLevel,Z_Param_rightLevelIncreaseSpeed,Z_Param_leftLevelIncreaseSpeed,Z_Param_deadband,Z_Param_center);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectPeriodic)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_forceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackEffectPeriodicType,Z_Param_PeriodicType);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FIntProperty,Z_Param_period);
		P_GET_PROPERTY(FFloatProperty,Z_Param_magnitude);
		P_GET_PROPERTY(FIntProperty,Z_Param_offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_phase);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::createForceFeedbackEffectPeriodic(Z_Param_Out_forceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackEffectPeriodicType(Z_Param_PeriodicType),ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_length,Z_Param_delay,Z_Param_period,Z_Param_magnitude,Z_Param_offset,Z_Param_phase,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectConstant)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_forceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_length);
		P_GET_PROPERTY(FIntProperty,Z_Param_delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_level);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::createForceFeedbackEffectConstant(Z_Param_Out_forceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_length,Z_Param_delay,Z_Param_level,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execenableForceFeedbackOnDevice)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::enableForceFeedbackOnDevice(Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdisableForceFeedbackOnDevice)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::disableForceFeedbackOnDevice(Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandMultiVibration)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_frequency);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_0);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_1);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_2);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_3);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_4);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_5);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_6);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_7);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_8);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_9);
		P_GET_UBOOL(Z_Param_left);
		P_GET_UBOOL(Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USimpleControllerBPLibrary::generateDualSenseTriggerCommandMultiVibration(Z_Param_frequency,SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_0),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_1),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_2),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_3),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_4),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_5),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_6),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_7),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_8),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_9),Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandMultiFeedback)
	{
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_0);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_1);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_2);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_3);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_4);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_5);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_6);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_7);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_8);
		P_GET_ENUM(SCDualSenseTriggerEffectStrengthMulti,Z_Param_strength_9);
		P_GET_UBOOL(Z_Param_left);
		P_GET_UBOOL(Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USimpleControllerBPLibrary::generateDualSenseTriggerCommandMultiFeedback(SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_0),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_1),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_2),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_3),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_4),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_5),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_6),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_7),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_8),SCDualSenseTriggerEffectStrengthMulti(Z_Param_strength_9),Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandVibration)
	{
		P_GET_ENUM(SCDualSenseTriggerEffectStartZone,Z_Param_startingZone);
		P_GET_ENUM(SCDualSenseTriggerEffectStrength,Z_Param_strength);
		P_GET_PROPERTY(FByteProperty,Z_Param_frequency);
		P_GET_UBOOL(Z_Param_left);
		P_GET_UBOOL(Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USimpleControllerBPLibrary::generateDualSenseTriggerCommandVibration(SCDualSenseTriggerEffectStartZone(Z_Param_startingZone),SCDualSenseTriggerEffectStrength(Z_Param_strength),Z_Param_frequency,Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandWeapon)
	{
		P_GET_ENUM(SCDualSenseTriggerEffectStartPosition,Z_Param_startPosition);
		P_GET_ENUM(SCDualSenseTriggerEffectEndPosition,Z_Param_endPosition);
		P_GET_ENUM(SCDualSenseTriggerEffectStrength,Z_Param_strength);
		P_GET_UBOOL(Z_Param_left);
		P_GET_UBOOL(Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USimpleControllerBPLibrary::generateDualSenseTriggerCommandWeapon(SCDualSenseTriggerEffectStartPosition(Z_Param_startPosition),SCDualSenseTriggerEffectEndPosition(Z_Param_endPosition),SCDualSenseTriggerEffectStrength(Z_Param_strength),Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandFeedback)
	{
		P_GET_ENUM(SCDualSenseTriggerEffectStartZone,Z_Param_startingZone);
		P_GET_ENUM(SCDualSenseTriggerEffectStrength,Z_Param_strength);
		P_GET_UBOOL(Z_Param_left);
		P_GET_UBOOL(Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USimpleControllerBPLibrary::generateDualSenseTriggerCommandFeedback(SCDualSenseTriggerEffectStartZone(Z_Param_startingZone),SCDualSenseTriggerEffectStrength(Z_Param_strength),Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandOFF)
	{
		P_GET_UBOOL(Z_Param_left);
		P_GET_UBOOL(Z_Param_right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USimpleControllerBPLibrary::generateDualSenseTriggerCommandOFF(Z_Param_left,Z_Param_right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execexecuteCommandOnController)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_TARRAY(uint8,Z_Param_bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::executeCommandOnController(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,Z_Param_bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execrumbleTrigger)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthLeft);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthRight);
		P_GET_PROPERTY(FIntProperty,Z_Param_lengthInMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::rumbleTrigger(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,Z_Param_strengthLeft,Z_Param_strengthRight,Z_Param_lengthInMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execrumble)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthSmallMotor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthLargeMotor);
		P_GET_PROPERTY(FIntProperty,Z_Param_lengthInMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::rumble(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,Z_Param_strengthSmallMotor,Z_Param_strengthLargeMotor,Z_Param_lengthInMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execrumbleByConnectionIndex)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthSmallMotor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthLargeMotor);
		P_GET_PROPERTY(FIntProperty,Z_Param_lengthInMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::rumbleByConnectionIndex(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_connectionIndex,Z_Param_strengthSmallMotor,Z_Param_strengthLargeMotor,Z_Param_lengthInMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetSensor)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerSensorType,Z_Param_type);
		P_GET_UBOOL(Z_Param_enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::setSensor(Z_Param_device,ESimpleControllerSensorType(Z_Param_type),Z_Param_enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetLEDColor)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::setLEDColor(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetDeadZone)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deadZoneMaxPositive);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deadZoneMaxNegative);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deadZoneMinPositive);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deadZoneMinNegative);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerDevice*)Z_Param__Result=USimpleControllerBPLibrary::setDeadZone(Z_Param_device,Z_Param_axisID,Z_Param_deadZoneMaxPositive,Z_Param_deadZoneMaxNegative,Z_Param_deadZoneMinPositive,Z_Param_deadZoneMinNegative);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetUnrealKeyboardAndMouseEvents)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_keyboardButtons);
		P_GET_UBOOL(Z_Param_mousedButtons);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::setUnrealKeyboardAndMouseEvents(Z_Param_WorldContextObject,Z_Param_keyboardButtons,Z_Param_mousedButtons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindDeviceIndexByConnectionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_deviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::findDeviceIndexByConnectionIndex(Z_Param_connectionIndex,Z_Param_Out_found,Z_Param_Out_deviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindControllerByConnectionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerDevice*)Z_Param__Result=USimpleControllerBPLibrary::findControllerByConnectionIndex(Z_Param_connectionIndex,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindControllerByDeviceID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerDevice*)Z_Param__Result=USimpleControllerBPLibrary::findControllerByDeviceID(Z_Param_deviceID,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindControllerByDeviceIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerDevice*)Z_Param__Result=USimpleControllerBPLibrary::findControllerByDeviceIndex(Z_Param_deviceIndex,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetConnectedControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSimpleControllerDevice>*)Z_Param__Result=USimpleControllerBPLibrary::getConnectedControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetBallValueBySDL)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_ballIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_xRel);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_yRel);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getBallValueBySDL(Z_Param_device,Z_Param_ballIndex,Z_Param_Out_xRel,Z_Param_Out_yRel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetHatValueBySDL)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USimpleControllerBPLibrary::getHatValueBySDL(Z_Param_device,Z_Param_directionalPadIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetButtonValueBySDL)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESimpleControllerButtonStatus*)Z_Param__Result=USimpleControllerBPLibrary::getButtonValueBySDL(Z_Param_device,Z_Param_buttonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetAxisValueBySDL)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USimpleControllerBPLibrary::getAxisValueBySDL(Z_Param_device,Z_Param_axisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetAxisValues)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_TMAP_REF(int32,float,Z_Param_Out_axisValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getAxisValues(Z_Param_device,Z_Param_Out_axisValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execaddAxisCorrection)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_ENUM(ESimpleControllerAxisCorrection,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::addAxisCorrection(Z_Param_device,Z_Param_axisID,ESimpleControllerAxisCorrection(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execremoveAxisCorrection)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_ENUM(ESimpleControllerAxisCorrection,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::removeAxisCorrection(Z_Param_device,Z_Param_axisID,ESimpleControllerAxisCorrection(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfireKeyboardButtonEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_keycode);
		P_GET_ENUM(ESimpleControllerKeyboardTriggerType,Z_Param_type);
		P_GET_PROPERTY(FIntProperty,Z_Param_userIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::fireKeyboardButtonEvent(Z_Param_keycode,ESimpleControllerKeyboardTriggerType(Z_Param_type),Z_Param_userIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execaddMousePosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::addMousePosition(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetMousePosition)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_x);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::getMousePosition(Z_Param_Out_x,Z_Param_Out_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsetMousePosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::setMousePosition(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfireMouseButtonEvent)
	{
		P_GET_ENUM(ESimpleControllerMouseTriggerButton,Z_Param_button);
		P_GET_ENUM(ESimpleControllerMouseTriggerType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::fireMouseButtonEvent(ESimpleControllerMouseTriggerButton(Z_Param_button),ESimpleControllerMouseTriggerType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonIDToButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_ENUM_REF(ESimpleControllerButtons,Z_Param_Out_buttons);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::buttonIDToButton(Z_Param_buttonID,(ESimpleControllerButtons&)(Z_Param_Out_buttons));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdirectinalPadValueToDirection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadValue);
		P_GET_ENUM_REF(ESimpleControllerDirectionalPad,Z_Param_Out_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::directinalPadValueToDirection(Z_Param_directionalPadValue,(ESimpleControllerDirectionalPad&)(Z_Param_Out_direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::exectouchpadUpEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_touchpadIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_finger);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_pressure);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->touchpadUpEventDelegate(Z_Param_deviceID,Z_Param_touchpadIndex,Z_Param_finger,Z_Param_x,Z_Param_y,Z_Param_pressure,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::exectouchpadDownEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_touchpadIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_finger);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_pressure);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->touchpadDownEventDelegate(Z_Param_deviceID,Z_Param_touchpadIndex,Z_Param_finger,Z_Param_x,Z_Param_y,Z_Param_pressure,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::exectouchpadMotionEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_touchpadIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_finger);
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_pressure);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->touchpadMotionEventDelegate(Z_Param_deviceID,Z_Param_touchpadIndex,Z_Param_finger,Z_Param_x,Z_Param_y,Z_Param_pressure,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgyroSensorEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_valueA);
		P_GET_PROPERTY(FFloatProperty,Z_Param_valueB);
		P_GET_PROPERTY(FFloatProperty,Z_Param_valueC);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->gyroSensorEventDelegate(Z_Param_deviceID,Z_Param_valueA,Z_Param_valueB,Z_Param_valueC,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execaccelerationSensorEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_valueA);
		P_GET_PROPERTY(FFloatProperty,Z_Param_valueB);
		P_GET_PROPERTY(FFloatProperty,Z_Param_valueC);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->accelerationSensorEventDelegate(Z_Param_deviceID,Z_Param_valueA,Z_Param_valueB,Z_Param_valueC,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdeviceDetachedEventDelegate)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->deviceDetachedEventDelegate(Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdeviceAttachedEventDelegate)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->deviceAttachedEventDelegate(Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execaxisMovedEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->axisMovedEventDelegate(Z_Param_deviceID,Z_Param_axisID,Z_Param_axisValue,Z_Param_deviceIndex,Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execballMovedEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ballID);
		P_GET_PROPERTY(FIntProperty,Z_Param_xRel);
		P_GET_PROPERTY(FIntProperty,Z_Param_yRel);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ballMovedEventDelegate(Z_Param_deviceID,Z_Param_ballID,Z_Param_xRel,Z_Param_yRel,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdirectionalPadEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->directionalPadEventDelegate(Z_Param_deviceID,Z_Param_directionalPadValue,Z_Param_directionalPadIndex,Z_Param_deviceIndex,Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonUpEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->buttonUpEventDelegate(Z_Param_deviceID,Z_Param_buttonID,Z_Param_deviceIndex,Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonDownEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->buttonDownEventDelegate(Z_Param_deviceID,Z_Param_buttonID,Z_Param_deviceIndex,Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetSimpleControllerTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerBPLibrary**)Z_Param__Result=USimpleControllerBPLibrary::getSimpleControllerTarget();
		P_NATIVE_END;
	}
	void USimpleControllerBPLibrary::StaticRegisterNativesUSimpleControllerBPLibrary()
	{
		UClass* Class = USimpleControllerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "accelerationSensorEventDelegate", &USimpleControllerBPLibrary::execaccelerationSensorEventDelegate },
			{ "addAxisCorrection", &USimpleControllerBPLibrary::execaddAxisCorrection },
			{ "addMousePosition", &USimpleControllerBPLibrary::execaddMousePosition },
			{ "axisMovedEventDelegate", &USimpleControllerBPLibrary::execaxisMovedEventDelegate },
			{ "ballMovedEventDelegate", &USimpleControllerBPLibrary::execballMovedEventDelegate },
			{ "breakAxisAction", &USimpleControllerBPLibrary::execbreakAxisAction },
			{ "breakButtonAction", &USimpleControllerBPLibrary::execbreakButtonAction },
			{ "breakDeviceForceFeedbackInfo", &USimpleControllerBPLibrary::execbreakDeviceForceFeedbackInfo },
			{ "breakDeviceInfo", &USimpleControllerBPLibrary::execbreakDeviceInfo },
			{ "breakForceFeedbackEffect", &USimpleControllerBPLibrary::execbreakForceFeedbackEffect },
			{ "breakMappingProfile", &USimpleControllerBPLibrary::execbreakMappingProfile },
			{ "buttonDownEventDelegate", &USimpleControllerBPLibrary::execbuttonDownEventDelegate },
			{ "buttonIDToButton", &USimpleControllerBPLibrary::execbuttonIDToButton },
			{ "buttonUpEventDelegate", &USimpleControllerBPLibrary::execbuttonUpEventDelegate },
			{ "cancelMapping", &USimpleControllerBPLibrary::execcancelMapping },
			{ "changeAxisActionSettings", &USimpleControllerBPLibrary::execchangeAxisActionSettings },
			{ "createForceFeedbackEffectCondition", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectCondition },
			{ "createForceFeedbackEffectConstant", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectConstant },
			{ "createForceFeedbackEffectPeriodic", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectPeriodic },
			{ "createForceFeedbackEffectRamp", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectRamp },
			{ "createMappingFile", &USimpleControllerBPLibrary::execcreateMappingFile },
			{ "deleteMappingFile", &USimpleControllerBPLibrary::execdeleteMappingFile },
			{ "destroyForceFeedbackEffect", &USimpleControllerBPLibrary::execdestroyForceFeedbackEffect },
			{ "deviceAttachedEventDelegate", &USimpleControllerBPLibrary::execdeviceAttachedEventDelegate },
			{ "deviceDetachedEventDelegate", &USimpleControllerBPLibrary::execdeviceDetachedEventDelegate },
			{ "directinalPadValueToDirection", &USimpleControllerBPLibrary::execdirectinalPadValueToDirection },
			{ "directionalPadEventDelegate", &USimpleControllerBPLibrary::execdirectionalPadEventDelegate },
			{ "disableConstantForceOnWheel", &USimpleControllerBPLibrary::execdisableConstantForceOnWheel },
			{ "disableForceFeedbackOnDevice", &USimpleControllerBPLibrary::execdisableForceFeedbackOnDevice },
			{ "enableConstantForceOnWheel", &USimpleControllerBPLibrary::execenableConstantForceOnWheel },
			{ "enableForceFeedbackOnDevice", &USimpleControllerBPLibrary::execenableForceFeedbackOnDevice },
			{ "executeCommandOnController", &USimpleControllerBPLibrary::execexecuteCommandOnController },
			{ "findControllerByConnectionIndex", &USimpleControllerBPLibrary::execfindControllerByConnectionIndex },
			{ "findControllerByDeviceID", &USimpleControllerBPLibrary::execfindControllerByDeviceID },
			{ "findControllerByDeviceIndex", &USimpleControllerBPLibrary::execfindControllerByDeviceIndex },
			{ "findDeviceIndexByConnectionIndex", &USimpleControllerBPLibrary::execfindDeviceIndexByConnectionIndex },
			{ "fireKeyboardButtonEvent", &USimpleControllerBPLibrary::execfireKeyboardButtonEvent },
			{ "fireMouseButtonEvent", &USimpleControllerBPLibrary::execfireMouseButtonEvent },
			{ "generateDualSenseTriggerCommandFeedback", &USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandFeedback },
			{ "generateDualSenseTriggerCommandMultiFeedback", &USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandMultiFeedback },
			{ "generateDualSenseTriggerCommandMultiVibration", &USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandMultiVibration },
			{ "generateDualSenseTriggerCommandOFF", &USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandOFF },
			{ "generateDualSenseTriggerCommandVibration", &USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandVibration },
			{ "generateDualSenseTriggerCommandWeapon", &USimpleControllerBPLibrary::execgenerateDualSenseTriggerCommandWeapon },
			{ "getAxisActions", &USimpleControllerBPLibrary::execgetAxisActions },
			{ "getAxisValueBySDL", &USimpleControllerBPLibrary::execgetAxisValueBySDL },
			{ "getAxisValues", &USimpleControllerBPLibrary::execgetAxisValues },
			{ "getBallValueBySDL", &USimpleControllerBPLibrary::execgetBallValueBySDL },
			{ "getButtonActions", &USimpleControllerBPLibrary::execgetButtonActions },
			{ "getButtonName", &USimpleControllerBPLibrary::execgetButtonName },
			{ "getButtonValueBySDL", &USimpleControllerBPLibrary::execgetButtonValueBySDL },
			{ "getConnectedControllers", &USimpleControllerBPLibrary::execgetConnectedControllers },
			{ "getCurrentPowerLevel", &USimpleControllerBPLibrary::execgetCurrentPowerLevel },
			{ "getHatValueBySDL", &USimpleControllerBPLibrary::execgetHatValueBySDL },
			{ "getMappedAxisActions", &USimpleControllerBPLibrary::execgetMappedAxisActions },
			{ "getMappedButtonActions", &USimpleControllerBPLibrary::execgetMappedButtonActions },
			{ "getMappingActionsByTag", &USimpleControllerBPLibrary::execgetMappingActionsByTag },
			{ "getMousePosition", &USimpleControllerBPLibrary::execgetMousePosition },
			{ "getSimpleControllerTarget", &USimpleControllerBPLibrary::execgetSimpleControllerTarget },
			{ "gyroSensorEventDelegate", &USimpleControllerBPLibrary::execgyroSensorEventDelegate },
			{ "initIOSPart", &USimpleControllerBPLibrary::execinitIOSPart },
			{ "isAxisMapped", &USimpleControllerBPLibrary::execisAxisMapped },
			{ "isButtonMapped", &USimpleControllerBPLibrary::execisButtonMapped },
			{ "mapAxis", &USimpleControllerBPLibrary::execmapAxis },
			{ "mapButton", &USimpleControllerBPLibrary::execmapButton },
			{ "removeAxisCorrection", &USimpleControllerBPLibrary::execremoveAxisCorrection },
			{ "removeAxisMapping", &USimpleControllerBPLibrary::execremoveAxisMapping },
			{ "removeButtonMapping", &USimpleControllerBPLibrary::execremoveButtonMapping },
			{ "rumble", &USimpleControllerBPLibrary::execrumble },
			{ "rumbleByConnectionIndex", &USimpleControllerBPLibrary::execrumbleByConnectionIndex },
			{ "rumbleTrigger", &USimpleControllerBPLibrary::execrumbleTrigger },
			{ "rumbleWheel", &USimpleControllerBPLibrary::execrumbleWheel },
			{ "runForceFeedbackEffect", &USimpleControllerBPLibrary::execrunForceFeedbackEffect },
			{ "setAutocenterForceFeedbackSDL", &USimpleControllerBPLibrary::execsetAutocenterForceFeedbackSDL },
			{ "setDeadZone", &USimpleControllerBPLibrary::execsetDeadZone },
			{ "setGainForceFeedback", &USimpleControllerBPLibrary::execsetGainForceFeedback },
			{ "setLEDColor", &USimpleControllerBPLibrary::execsetLEDColor },
			{ "setMousePosition", &USimpleControllerBPLibrary::execsetMousePosition },
			{ "setSensor", &USimpleControllerBPLibrary::execsetSensor },
			{ "setUnrealKeyboardAndMouseEvents", &USimpleControllerBPLibrary::execsetUnrealKeyboardAndMouseEvents },
			{ "stopForceFeedbackEffect", &USimpleControllerBPLibrary::execstopForceFeedbackEffect },
			{ "stopRumbleWheel", &USimpleControllerBPLibrary::execstopRumbleWheel },
			{ "touchpadDownEventDelegate", &USimpleControllerBPLibrary::exectouchpadDownEventDelegate },
			{ "touchpadMotionEventDelegate", &USimpleControllerBPLibrary::exectouchpadMotionEventDelegate },
			{ "touchpadUpEventDelegate", &USimpleControllerBPLibrary::exectouchpadUpEventDelegate },
			{ "updateConstantForceFeedbackEffect", &USimpleControllerBPLibrary::execupdateConstantForceFeedbackEffect },
			{ "uploadAndRunForceFeedbackEffect", &USimpleControllerBPLibrary::execuploadAndRunForceFeedbackEffect },
			{ "uploadForceFeedbackEffect", &USimpleControllerBPLibrary::execuploadForceFeedbackEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms
		{
			FString deviceID;
			float valueA;
			float valueB;
			float valueC;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_valueA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_valueB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_valueC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueA = { "valueA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, valueA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueA_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueB = { "valueB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, valueB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueB_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueC = { "valueC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, valueC), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueC_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_valueC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "accelerationSensorEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::SimpleControllerBPLibrary_eventaccelerationSensorEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics
	{
		struct SimpleControllerBPLibrary_eventaddAxisCorrection_Parms
		{
			FSimpleControllerDevice device;
			int32 axisID;
			ESimpleControllerAxisCorrection type;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaddAxisCorrection_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaddAxisCorrection_Parms, axisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaddAxisCorrection_Parms, type), Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection, METADATA_PARAMS(0, nullptr) }; // 3656754177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* If the axis 1 returns a value between -1 and 1 but you want to have a value between 0 and 1 then set the axisID to 1 and the type to negative. \n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "If the axis 1 returns a value between -1 and 1 but you want to have a value between 0 and 1 then set the axisID to 1 and the type to negative." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "addAxisCorrection", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::SimpleControllerBPLibrary_eventaddAxisCorrection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::SimpleControllerBPLibrary_eventaddAxisCorrection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics
	{
		struct SimpleControllerBPLibrary_eventaddMousePosition_Parms
		{
			int32 x;
			int32 y;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaddMousePosition_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaddMousePosition_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mouse" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "addMousePosition", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::SimpleControllerBPLibrary_eventaddMousePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::SimpleControllerBPLibrary_eventaddMousePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms
		{
			FString deviceID;
			int32 axisID;
			float axisValue;
			int32 deviceIndex;
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "axisMovedEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms
		{
			FString deviceID;
			int32 ballID;
			int32 xRel;
			int32 yRel;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ballID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ballID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xRel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_xRel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yRel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_yRel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID = { "ballID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, ballID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel = { "xRel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, xRel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel = { "yRel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, yRel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "ballMovedEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakAxisAction_Parms
		{
			FSimpleControllerMappingAxisAction action;
			FString actionName;
			FString description;
			FString tag;
			int32 connectionIndex;
			int32 axisID;
			bool invertAxis;
			FString deviceName;
			FString controllerName;
			int32 vendorID;
			int32 productID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
		static void NewProp_invertAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_invertAxis;
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_controllerName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_vendorID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_productID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, action), Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction, METADATA_PARAMS(0, nullptr) }; // 3232960627
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, description), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, tag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, axisID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_invertAxis_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakAxisAction_Parms*)Obj)->invertAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_invertAxis = { "invertAxis", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakAxisAction_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_invertAxis_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, deviceName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_controllerName = { "controllerName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, controllerName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_vendorID = { "vendorID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, vendorID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_productID = { "productID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakAxisAction_Parms, productID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_invertAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_deviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_controllerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_vendorID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::NewProp_productID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakAxisAction", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::SimpleControllerBPLibrary_eventbreakAxisAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::SimpleControllerBPLibrary_eventbreakAxisAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakButtonAction_Parms
		{
			FSimpleControllerMappingButtonAction action;
			FString actionName;
			FString description;
			FString tag;
			int32 connectionIndex;
			int32 buttonID;
			FString buttonName;
			FString deviceName;
			FString controllerName;
			int32 vendorID;
			int32 productID;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_buttonName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_controllerName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_vendorID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_productID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, action), Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction, METADATA_PARAMS(0, nullptr) }; // 708247476
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, description), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, tag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, buttonID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_buttonName = { "buttonName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, buttonName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, deviceName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_controllerName = { "controllerName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, controllerName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_vendorID = { "vendorID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, vendorID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_productID = { "productID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakButtonAction_Parms, productID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_buttonName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_deviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_controllerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_vendorID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::NewProp_productID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakButtonAction", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::SimpleControllerBPLibrary_eventbreakButtonAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::SimpleControllerBPLibrary_eventbreakButtonAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms
		{
			FSimpleControllerDevice device;
			bool forceFeedback_CONSTANT;
			bool forceFeedback_SINE;
			bool forceFeedback_LEFTRIGHT;
			bool forceFeedback_TRIANGLE;
			bool forceFeedback_SAWTOOTHUP;
			bool forceFeedback_SAWTOOTHDOWN;
			bool forceFeedback_RAMP;
			bool forceFeedback_SPRING;
			bool forceFeedback_DAMPER;
			bool forceFeedback_INERTIA;
			bool forceFeedback_FRICTION;
			bool forceFeedback_CUSTOM;
			bool forceFeedback_GAIN;
			bool forceFeedback_AUTOCENTER;
			bool forceFeedback_STATUS;
			bool forceFeedback_PAUSE;
			bool forceFeedback_POLAR;
			bool forceFeedback_CARTESIAN;
			bool forceFeedback_SPHERICAL;
			bool forceFeedback_INFINITY;
			int32 maxSimultaneouslyEffects;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static void NewProp_forceFeedback_CONSTANT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CONSTANT;
		static void NewProp_forceFeedback_SINE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SINE;
		static void NewProp_forceFeedback_LEFTRIGHT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_LEFTRIGHT;
		static void NewProp_forceFeedback_TRIANGLE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_TRIANGLE;
		static void NewProp_forceFeedback_SAWTOOTHUP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SAWTOOTHUP;
		static void NewProp_forceFeedback_SAWTOOTHDOWN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SAWTOOTHDOWN;
		static void NewProp_forceFeedback_RAMP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_RAMP;
		static void NewProp_forceFeedback_SPRING_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SPRING;
		static void NewProp_forceFeedback_DAMPER_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_DAMPER;
		static void NewProp_forceFeedback_INERTIA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_INERTIA;
		static void NewProp_forceFeedback_FRICTION_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_FRICTION;
		static void NewProp_forceFeedback_CUSTOM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CUSTOM;
		static void NewProp_forceFeedback_GAIN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_GAIN;
		static void NewProp_forceFeedback_AUTOCENTER_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_AUTOCENTER;
		static void NewProp_forceFeedback_STATUS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_STATUS;
		static void NewProp_forceFeedback_PAUSE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_PAUSE;
		static void NewProp_forceFeedback_POLAR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_POLAR;
		static void NewProp_forceFeedback_CARTESIAN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CARTESIAN;
		static void NewProp_forceFeedback_SPHERICAL_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SPHERICAL;
		static void NewProp_forceFeedback_INFINITY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_INFINITY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxSimultaneouslyEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CONSTANT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT = { "forceFeedback_CONSTANT", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SINE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE = { "forceFeedback_SINE", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_LEFTRIGHT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT = { "forceFeedback_LEFTRIGHT", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_TRIANGLE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE = { "forceFeedback_TRIANGLE", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SAWTOOTHUP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP = { "forceFeedback_SAWTOOTHUP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SAWTOOTHDOWN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN = { "forceFeedback_SAWTOOTHDOWN", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_RAMP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP = { "forceFeedback_RAMP", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SPRING = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING = { "forceFeedback_SPRING", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_DAMPER = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER = { "forceFeedback_DAMPER", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_INERTIA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA = { "forceFeedback_INERTIA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_FRICTION = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION = { "forceFeedback_FRICTION", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CUSTOM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM = { "forceFeedback_CUSTOM", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_GAIN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN = { "forceFeedback_GAIN", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_AUTOCENTER = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER = { "forceFeedback_AUTOCENTER", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_STATUS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS = { "forceFeedback_STATUS", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_PAUSE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE = { "forceFeedback_PAUSE", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_POLAR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR = { "forceFeedback_POLAR", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CARTESIAN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN = { "forceFeedback_CARTESIAN", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SPHERICAL = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL = { "forceFeedback_SPHERICAL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_INFINITY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY = { "forceFeedback_INFINITY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_maxSimultaneouslyEffects = { "maxSimultaneouslyEffects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms, maxSimultaneouslyEffects), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_maxSimultaneouslyEffects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakDeviceForceFeedbackInfo", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms
		{
			FSimpleControllerDevice device;
			int32 deviceIndex;
			int32 connectionIndex;
			FString deviceID;
			FString deviceName;
			FString controllerName;
			int32 vendorID;
			int32 productID;
			int32 numAxes;
			int32 numButtons;
			int32 numDirectionalPadAxes;
			int32 numBalls;
			bool hasHaptic;
			bool hasRumble;
			bool hasRumbleTriggers;
			bool hasAccelerationSensor;
			bool hasGyroSensor;
			bool hasLED;
			bool gamepadAPI_Support;
			bool isXinput;
			ESimpleControllerType type;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_controllerName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_vendorID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_productID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_numAxes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_numButtons;
		static const UECodeGen_Private::FIntPropertyParams NewProp_numDirectionalPadAxes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_numBalls;
		static void NewProp_hasHaptic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasHaptic;
		static void NewProp_hasRumble_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasRumble;
		static void NewProp_hasRumbleTriggers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasRumbleTriggers;
		static void NewProp_hasAccelerationSensor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasAccelerationSensor;
		static void NewProp_hasGyroSensor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasGyroSensor;
		static void NewProp_hasLED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasLED;
		static void NewProp_gamepadAPI_Support_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_gamepadAPI_Support;
		static void NewProp_isXinput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isXinput;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, deviceName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_controllerName = { "controllerName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, controllerName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_vendorID = { "vendorID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, vendorID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_productID = { "productID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, productID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numAxes = { "numAxes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numAxes), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numButtons = { "numButtons", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numButtons), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numDirectionalPadAxes = { "numDirectionalPadAxes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numDirectionalPadAxes), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numBalls = { "numBalls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numBalls), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->hasHaptic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic = { "hasHaptic", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasRumble_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->hasRumble = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasRumble = { "hasRumble", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasRumble_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasRumbleTriggers_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->hasRumbleTriggers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasRumbleTriggers = { "hasRumbleTriggers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasRumbleTriggers_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasAccelerationSensor_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->hasAccelerationSensor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasAccelerationSensor = { "hasAccelerationSensor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasAccelerationSensor_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasGyroSensor_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->hasGyroSensor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasGyroSensor = { "hasGyroSensor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasGyroSensor_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasLED_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->hasLED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasLED = { "hasLED", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasLED_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_gamepadAPI_Support_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->gamepadAPI_Support = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_gamepadAPI_Support = { "gamepadAPI_Support", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_gamepadAPI_Support_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_isXinput_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->isXinput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_isXinput = { "isXinput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_isXinput_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, type), Z_Construct_UEnum_SimpleController_ESimpleControllerType, METADATA_PARAMS(0, nullptr) }; // 3801166578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_controllerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_vendorID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_productID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numDirectionalPadAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numBalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasRumble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasRumbleTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasAccelerationSensor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasGyroSensor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasLED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_gamepadAPI_Support,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_isXinput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/*, int32& firmwareVersion*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", ", int32& firmwareVersion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakDeviceInfo", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			int32 effectID;
			bool successful;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UECodeGen_Private::FIntPropertyParams NewProp_effectID;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_effectID = { "effectID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms, effectID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_effectID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakForceFeedbackEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakMappingProfile_Parms
		{
			FSimpleControllerMappingProfile profile;
			TMap<FString,FSimpleControllerMappingButtonAction> buttonActions;
			TMap<FString,FSimpleControllerMappingAxisAction> axisActions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_profile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_buttonActions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_buttonActions_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_buttonActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisActions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_axisActions_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_axisActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_profile = { "profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakMappingProfile_Parms, profile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_buttonActions_ValueProp = { "buttonActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction, METADATA_PARAMS(0, nullptr) }; // 708247476
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_buttonActions_Key_KeyProp = { "buttonActions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_buttonActions = { "buttonActions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakMappingProfile_Parms, buttonActions), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 708247476
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_axisActions_ValueProp = { "axisActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction, METADATA_PARAMS(0, nullptr) }; // 3232960627
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_axisActions_Key_KeyProp = { "axisActions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_axisActions = { "axisActions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakMappingProfile_Parms, axisActions), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3232960627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_buttonActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_buttonActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_buttonActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_axisActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_axisActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::NewProp_axisActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakMappingProfile", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::SimpleControllerBPLibrary_eventbreakMappingProfile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::SimpleControllerBPLibrary_eventbreakMappingProfile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms
		{
			FString deviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, buttonID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonDownEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonIDToButton_Parms
		{
			int32 buttonID;
			ESimpleControllerButtons buttons;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_buttons_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_buttons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonIDToButton_Parms, buttonID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons = { "buttons", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonIDToButton_Parms, buttons), Z_Construct_UEnum_SimpleController_ESimpleControllerButtons, METADATA_PARAMS(0, nullptr) }; // 1607718636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ExpandEnumAsExecs", "buttons" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonIDToButton", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::SimpleControllerBPLibrary_eventbuttonIDToButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::SimpleControllerBPLibrary_eventbuttonIDToButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms
		{
			FString deviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, buttonID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonUpEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_cancelMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_cancelMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_cancelMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "cancelMapping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_cancelMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_cancelMapping_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_cancelMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_cancelMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics
	{
		struct SimpleControllerBPLibrary_eventchangeAxisActionSettings_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			bool invertAxis;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static void NewProp_invertAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_invertAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeAxisActionSettings_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeAxisActionSettings_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::NewProp_invertAxis_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventchangeAxisActionSettings_Parms*)Obj)->invertAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::NewProp_invertAxis = { "invertAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventchangeAxisActionSettings_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::NewProp_invertAxis_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::NewProp_invertAxis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "changeAxisActionSettings", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::SimpleControllerBPLibrary_eventchangeAxisActionSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::SimpleControllerBPLibrary_eventchangeAxisActionSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackEffectConditionType ConditionType;
			bool useDirectionX;
			bool useDirectionY;
			bool useDirectionZ;
			int32 length;
			int32 delay;
			float rightLevel;
			float leftLevel;
			int32 rightLevelIncreaseSpeed;
			int32 leftLevelIncreaseSpeed;
			float deadband;
			int32 center;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
		static void NewProp_useDirectionX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useDirectionX;
		static void NewProp_useDirectionY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useDirectionY;
		static void NewProp_useDirectionZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useDirectionZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
		static const UECodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rightLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_leftLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_rightLevelIncreaseSpeed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_leftLevelIncreaseSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deadband;
		static const UECodeGen_Private::FIntPropertyParams NewProp_center;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, ConditionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType, METADATA_PARAMS(0, nullptr) }; // 1526945435
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX = { "useDirectionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY = { "useDirectionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ = { "useDirectionZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, length), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevel = { "rightLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, rightLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevel = { "leftLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, leftLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevelIncreaseSpeed = { "rightLevelIncreaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, rightLevelIncreaseSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevelIncreaseSpeed = { "leftLevelIncreaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, leftLevelIncreaseSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_deadband = { "deadband", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, deadband), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, center), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevelIncreaseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevelIncreaseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_deadband,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_center,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This creates the SDL Force Feedback SDL_HapticCondition. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticCondition\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\n\x09* @param rightLevel level when joystick is to the positive side in percent between 0 and 1\n\x09* @param leftLevel level when joystick is to the negative side in percent between 0 and 1\n\x09* @param rightLevelIncreaseSpeed how fast to increase the force towards the positive side in milliseconds\n\x09* @param leftLevelIncreaseSpeed how fast to increase the force towards the negative side\n\x09* @param deadband size of the dead zone in percent between 0 and 1\n\x09* @param center position of the dead zone\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This creates the SDL Force Feedback SDL_HapticCondition. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticCondition\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n\n@param rightLevel level when joystick is to the positive side in percent between 0 and 1\n@param leftLevel level when joystick is to the negative side in percent between 0 and 1\n@param rightLevelIncreaseSpeed how fast to increase the force towards the positive side in milliseconds\n@param leftLevelIncreaseSpeed how fast to increase the force towards the negative side\n@param deadband size of the dead zone in percent between 0 and 1\n@param center position of the dead zone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectCondition", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 length;
			int32 delay;
			float level;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
		static const UECodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_level;
		static const UECodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(0, nullptr) }; // 2717397210
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionZ), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, length), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, attackLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, attackLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, fadeLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, fadeLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This creates the SDL Force Feedback SDL_HapticConstant. The direction can also be controlled via the level parameter. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticConstant\n\x09* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n\x09* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionZ For CARTESIAN values -1,0,1.\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\x09* @param level strength of the constant effect in percent between -1 and 1\n\x09* @param attackLength duration of the attack in milliseconds\n\x09* @param attackLevel level at the start of the attack in percent between 0 and 1\n\x09* @param fadeLength duration of the fade in milliseconds\n\x09* @param fadeLevel level at the end of the fade in percent between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This creates the SDL Force Feedback SDL_HapticConstant. The direction can also be controlled via the level parameter. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticConstant\n@param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n@param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n@param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n@param directionZ For CARTESIAN values -1,0,1.\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n@param level strength of the constant effect in percent between -1 and 1\n@param attackLength duration of the attack in milliseconds\n@param attackLevel level at the start of the attack in percent between 0 and 1\n@param fadeLength duration of the fade in milliseconds\n@param fadeLevel level at the end of the fade in percent between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectConstant", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 length;
			int32 delay;
			int32 period;
			float magnitude;
			int32 offset;
			int32 phase;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PeriodicType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PeriodicType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
		static const UECodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UECodeGen_Private::FIntPropertyParams NewProp_period;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_magnitude;
		static const UECodeGen_Private::FIntPropertyParams NewProp_offset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_phase;
		static const UECodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType = { "PeriodicType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, PeriodicType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType, METADATA_PARAMS(0, nullptr) }; // 3703386885
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(0, nullptr) }; // 2717397210
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionZ), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, length), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_period = { "period", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, period), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_magnitude = { "magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, magnitude), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, offset), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, phase), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, attackLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, attackLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, fadeLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, fadeLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This creates the SDL Force Feedback SDL_HapticPeriodic. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticPeriodic\n\x09* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n\x09* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionZ For CARTESIAN values -1,0,1.\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\x09* @param period period of the wave in milliseconds\n\x09* @param magnitude peak value in percent between 0 and 1\n\x09* @param offset mean value of the wave in milliseconds\n\x09* @param phase positive phase shift given by hundredth of a degree. 0 = No phase displacement. 9000 = Displaced 25% of its period. 18000 = Displaced 50% of its period. 27000 = Displaced 75% of its period. 36000 = Displaced 100% of its period, same as 0, but 0 is preferred\n\x09* @param level strength of the constant effect in percent between -1 and 1\n\x09* @param attackLength duration of the attack in milliseconds\n\x09* @param attackLevel level at the start of the attack in percent between 0 and 1\n\x09* @param fadeLength duration of the fade in milliseconds\n\x09* @param fadeLevel level at the end of the fade in percent between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This creates the SDL Force Feedback SDL_HapticPeriodic. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticPeriodic\n@param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n@param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n@param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n@param directionZ For CARTESIAN values -1,0,1.\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n@param period period of the wave in milliseconds\n@param magnitude peak value in percent between 0 and 1\n@param offset mean value of the wave in milliseconds\n@param phase positive phase shift given by hundredth of a degree. 0 = No phase displacement. 9000 = Displaced 25% of its period. 18000 = Displaced 50% of its period. 27000 = Displaced 75% of its period. 36000 = Displaced 100% of its period, same as 0, but 0 is preferred\n@param level strength of the constant effect in percent between -1 and 1\n@param attackLength duration of the attack in milliseconds\n@param attackLevel level at the start of the attack in percent between 0 and 1\n@param fadeLength duration of the fade in milliseconds\n@param fadeLevel level at the end of the fade in percent between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectPeriodic", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 length;
			int32 delay;
			float startLevel;
			float endLevel;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
		static const UECodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_startLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_endLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(0, nullptr) }; // 2717397210
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionZ), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, length), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_startLevel = { "startLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, startLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_endLevel = { "endLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, endLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, attackLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, attackLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, fadeLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, fadeLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_startLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_endLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This creates the SDL Force Feedback SDL_HapticRamp. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticRamp\n\x09* @param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n\x09* @param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n\x09* @param directionZ For CARTESIAN values -1,0,1.\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\x09* @param startLevel beginning strength level in percent between 0 and 1\n\x09* @param endLevel ending strength level in percent between 0 and 1\n\x09* @param attackLength duration of the attack in milliseconds\n\x09* @param attackLevel level at the start of the attack in percent between 0 and 1\n\x09* @param fadeLength duration of the fade in milliseconds\n\x09* @param fadeLevel level at the end of the fade in percent between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This creates the SDL Force Feedback SDL_HapticRamp. Triggering by button is not implemented and a few inputs have been simplified. https://wiki.libsdl.org/SDL_HapticRamp\n@param directionType There are three different ways to determine the direction of an FF effect. Not every device supports every type. See documentation.\n@param directionX For CARTESIAN values -1,0,1. POLAR direction is encoded by hundredths of a degree. SPHERICAL direction is encoded by hundredths of a degree\n@param directionY For CARTESIAN values -1,0,1. SPHERICAL direction is encoded by hundredths of a degree\n@param directionZ For CARTESIAN values -1,0,1.\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n@param startLevel beginning strength level in percent between 0 and 1\n@param endLevel ending strength level in percent between 0 and 1\n@param attackLength duration of the attack in milliseconds\n@param attackLevel level at the start of the attack in percent between 0 and 1\n@param fadeLength duration of the fade in milliseconds\n@param fadeLevel level at the end of the fade in percent between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectRamp", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateMappingFile_Parms
		{
			FString profileName;
			FString fileData;
			bool overwriteExistingFile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_profileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileData;
		static void NewProp_overwriteExistingFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overwriteExistingFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_profileName = { "profileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateMappingFile_Parms, profileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_fileData = { "fileData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateMappingFile_Parms, fileData), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_overwriteExistingFile_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateMappingFile_Parms*)Obj)->overwriteExistingFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_overwriteExistingFile = { "overwriteExistingFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateMappingFile_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_overwriteExistingFile_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateMappingFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateMappingFile_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_profileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_fileData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_overwriteExistingFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "Comment", "/**\n\x09* This allows you to create a standard mapping. Create a mapping and copy the content of the mapping file into the fileData parameter of this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This allows you to create a standard mapping. Create a mapping and copy the content of the mapping file into the fileData parameter of this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createMappingFile", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::SimpleControllerBPLibrary_eventcreateMappingFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::SimpleControllerBPLibrary_eventcreateMappingFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics
	{
		struct SimpleControllerBPLibrary_eventdeleteMappingFile_Parms
		{
			FString profileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_profileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::NewProp_profileName = { "profileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeleteMappingFile_Parms, profileName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventdeleteMappingFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventdeleteMappingFile_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::NewProp_profileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deleteMappingFile", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::SimpleControllerBPLibrary_eventdeleteMappingFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::SimpleControllerBPLibrary_eventdeleteMappingFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms
		{
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "destroyForceFeedbackEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceAttachedEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceDetachedEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms
		{
			int32 directionalPadValue;
			ESimpleControllerDirectionalPad direction;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms, directionalPadValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms, direction), Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad, METADATA_PARAMS(0, nullptr) }; // 46161789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_directionalPadValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "////UI\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FselectedWidgetEventDelegate, UWidget*, mainWidget, UWidget*, selectedWidget, int32, connectionIndex);\n//UFUNCTION()\n//void selectedWidgetEventDelegate(const UWidget* mainWidget, const UWidget* selectedWidget, const int32 connectionIndex);\n//UPROPERTY(BlueprintAssignable, Category = \"SimpleControllerPlugin|Events|UI\")\n//FselectedWidgetEventDelegate onSelectedWidgetEventDelegate;\n" },
		{ "ExpandEnumAsExecs", "direction" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "/UI\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FselectedWidgetEventDelegate, UWidget*, mainWidget, UWidget*, selectedWidget, int32, connectionIndex);\nUFUNCTION()\nvoid selectedWidgetEventDelegate(const UWidget* mainWidget, const UWidget* selectedWidget, const int32 connectionIndex);\nUPROPERTY(BlueprintAssignable, Category = \"SimpleControllerPlugin|Events|UI\")\nFselectedWidgetEventDelegate onSelectedWidgetEventDelegate;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directinalPadValueToDirection", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms
		{
			FString deviceID;
			int32 directionalPadValue;
			int32 directionalPadIndex;
			int32 deviceIndex;
			FSimpleControllerDevice device;
			int32 connectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_directionalPadValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionalPadIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadIndex = { "directionalPadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directionalPadEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics
	{
		struct SimpleControllerBPLibrary_eventdisableConstantForceOnWheel_Parms
		{
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdisableConstantForceOnWheel_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "disableConstantForceOnWheel", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::SimpleControllerBPLibrary_eventdisableConstantForceOnWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::SimpleControllerBPLibrary_eventdisableConstantForceOnWheel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics
	{
		struct SimpleControllerBPLibrary_eventdisableForceFeedbackOnDevice_Parms
		{
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdisableForceFeedbackOnDevice_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "disableForceFeedbackOnDevice", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::SimpleControllerBPLibrary_eventdisableForceFeedbackOnDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::SimpleControllerBPLibrary_eventdisableForceFeedbackOnDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics
	{
		struct SimpleControllerBPLibrary_eventenableConstantForceOnWheel_Parms
		{
			FSimpleControllerDevice device;
			int32 force;
			int32 wheelAxisID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_force;
		static const UECodeGen_Private::FIntPropertyParams NewProp_wheelAxisID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventenableConstantForceOnWheel_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventenableConstantForceOnWheel_Parms, force), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_wheelAxisID = { "wheelAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventenableConstantForceOnWheel_Parms, wheelAxisID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventenableConstantForceOnWheel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventenableConstantForceOnWheel_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_wheelAxisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "Comment", "/**\n\x09* With this function, the FF Constant effect is always applied in the opposite direction of the last movement to make the steering wheel more sluggish. Since it is not possible to distinguish between human movements and movements by the electric motor, it may be that the steering wheel moves back and forth a little by itself when released.\n\x09* @param force min 1 max 100\n\x09*/" },
		{ "CPP_Default_wheelAxisID", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "With this function, the FF Constant effect is always applied in the opposite direction of the last movement to make the steering wheel more sluggish. Since it is not possible to distinguish between human movements and movements by the electric motor, it may be that the steering wheel moves back and forth a little by itself when released.\n@param force min 1 max 100" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "enableConstantForceOnWheel", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::SimpleControllerBPLibrary_eventenableConstantForceOnWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::SimpleControllerBPLibrary_eventenableConstantForceOnWheel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics
	{
		struct SimpleControllerBPLibrary_eventenableForceFeedbackOnDevice_Parms
		{
			FSimpleControllerDevice device;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventenableForceFeedbackOnDevice_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "enableForceFeedbackOnDevice", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::SimpleControllerBPLibrary_eventenableForceFeedbackOnDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::SimpleControllerBPLibrary_eventenableForceFeedbackOnDevice_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics
	{
		struct SimpleControllerBPLibrary_eventexecuteCommandOnController_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			TArray<uint8> bytes;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_bytes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventexecuteCommandOnController_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventexecuteCommandOnController_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventexecuteCommandOnController_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventexecuteCommandOnController_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_bytes_Inner = { "bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_bytes = { "bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventexecuteCommandOnController_Parms, bytes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::NewProp_bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Commands" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "executeCommandOnController", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::SimpleControllerBPLibrary_eventexecuteCommandOnController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::SimpleControllerBPLibrary_eventexecuteCommandOnController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics
	{
		struct SimpleControllerBPLibrary_eventfindControllerByConnectionIndex_Parms
		{
			int32 connectionIndex;
			bool found;
			FSimpleControllerDevice ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static void NewProp_found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByConnectionIndex_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindControllerByConnectionIndex_Parms*)Obj)->found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindControllerByConnectionIndex_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::NewProp_found_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByConnectionIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::NewProp_found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "KeyWords", "find device" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findControllerByConnectionIndex", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::SimpleControllerBPLibrary_eventfindControllerByConnectionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::SimpleControllerBPLibrary_eventfindControllerByConnectionIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics
	{
		struct SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms
		{
			FString deviceID;
			bool found;
			FSimpleControllerDevice ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
		static void NewProp_found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms, deviceID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms*)Obj)->found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findControllerByDeviceID", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics
	{
		struct SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms
		{
			int32 deviceIndex;
			bool found;
			FSimpleControllerDevice ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static void NewProp_found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms*)Obj)->found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findControllerByDeviceIndex", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics
	{
		struct SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms
		{
			int32 connectionIndex;
			bool found;
			int32 deviceIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static void NewProp_found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms*)Obj)->found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_found_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms, deviceIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findDeviceIndexByConnectionIndex", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::SimpleControllerBPLibrary_eventfindDeviceIndexByConnectionIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics
	{
		struct SimpleControllerBPLibrary_eventfireKeyboardButtonEvent_Parms
		{
			int32 keycode;
			ESimpleControllerKeyboardTriggerType type;
			int32 userIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_keycode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_userIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::NewProp_keycode = { "keycode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfireKeyboardButtonEvent_Parms, keycode), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfireKeyboardButtonEvent_Parms, type), Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType, METADATA_PARAMS(0, nullptr) }; // 1562957447
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::NewProp_userIndex = { "userIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfireKeyboardButtonEvent_Parms, userIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::NewProp_keycode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::NewProp_userIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Keyboard" },
		{ "CPP_Default_userIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "fireKeyboardButtonEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::SimpleControllerBPLibrary_eventfireKeyboardButtonEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::SimpleControllerBPLibrary_eventfireKeyboardButtonEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics
	{
		struct SimpleControllerBPLibrary_eventfireMouseButtonEvent_Parms
		{
			ESimpleControllerMouseTriggerButton button;
			ESimpleControllerMouseTriggerType type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_button_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_button;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::NewProp_button_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::NewProp_button = { "button", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfireMouseButtonEvent_Parms, button), Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton, METADATA_PARAMS(0, nullptr) }; // 3771610581
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfireMouseButtonEvent_Parms, type), Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType, METADATA_PARAMS(0, nullptr) }; // 502606701
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::NewProp_button_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::NewProp_button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mouse" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "fireMouseButtonEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::SimpleControllerBPLibrary_eventfireMouseButtonEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::SimpleControllerBPLibrary_eventfireMouseButtonEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics
	{
		struct SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms
		{
			SCDualSenseTriggerEffectStartZone startingZone;
			SCDualSenseTriggerEffectStrength strength;
			bool left;
			bool right;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_startingZone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_startingZone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength;
		static void NewProp_left_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_left;
		static void NewProp_right_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_right;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_startingZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_startingZone = { "startingZone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms, startingZone), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone, METADATA_PARAMS(0, nullptr) }; // 1505549988
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_strength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms, strength), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength, METADATA_PARAMS(0, nullptr) }; // 3787614685
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_left_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms*)Obj)->left = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_left_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_right_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms*)Obj)->right = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_right_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_startingZone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_startingZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_strength_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Commands" },
		{ "CPP_Default_left", "true" },
		{ "CPP_Default_right", "true" },
		{ "CPP_Default_strength", "Value_8" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "generateDualSenseTriggerCommandFeedback", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandFeedback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics
	{
		struct SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms
		{
			SCDualSenseTriggerEffectStrengthMulti strength_0;
			SCDualSenseTriggerEffectStrengthMulti strength_1;
			SCDualSenseTriggerEffectStrengthMulti strength_2;
			SCDualSenseTriggerEffectStrengthMulti strength_3;
			SCDualSenseTriggerEffectStrengthMulti strength_4;
			SCDualSenseTriggerEffectStrengthMulti strength_5;
			SCDualSenseTriggerEffectStrengthMulti strength_6;
			SCDualSenseTriggerEffectStrengthMulti strength_7;
			SCDualSenseTriggerEffectStrengthMulti strength_8;
			SCDualSenseTriggerEffectStrengthMulti strength_9;
			bool left;
			bool right;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_0_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_1_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_2_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_3_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_4_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_4;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_5_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_5;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_6_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_6;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_7_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_7;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_8_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_8;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_9_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_9;
		static void NewProp_left_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_left;
		static void NewProp_right_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_right;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_0_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_0 = { "strength_0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_0), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_1 = { "strength_1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_1), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_2 = { "strength_2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_2), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_3 = { "strength_3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_3), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_4_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_4 = { "strength_4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_4), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_5_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_5 = { "strength_5", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_5), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_6_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_6 = { "strength_6", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_6), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_7_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_7 = { "strength_7", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_7), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_8_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_8 = { "strength_8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_8), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_9_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_9 = { "strength_9", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, strength_9), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_left_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms*)Obj)->left = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_left_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_right_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms*)Obj)->right = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_right_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_0_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_1_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_2_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_3_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_4_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_5_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_6_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_7_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_8_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_9_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_strength_9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Commands" },
		{ "CPP_Default_left", "true" },
		{ "CPP_Default_right", "true" },
		{ "CPP_Default_strength_0", "Value_8" },
		{ "CPP_Default_strength_1", "Value_7" },
		{ "CPP_Default_strength_2", "Value_6" },
		{ "CPP_Default_strength_3", "Value_5" },
		{ "CPP_Default_strength_4", "Value_4" },
		{ "CPP_Default_strength_5", "Value_3" },
		{ "CPP_Default_strength_6", "Value_2" },
		{ "CPP_Default_strength_7", "Value_1" },
		{ "CPP_Default_strength_8", "Value_0" },
		{ "CPP_Default_strength_9", "Value_0" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "generateDualSenseTriggerCommandMultiFeedback", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiFeedback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics
	{
		struct SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms
		{
			uint8 frequency;
			SCDualSenseTriggerEffectStrengthMulti strength_0;
			SCDualSenseTriggerEffectStrengthMulti strength_1;
			SCDualSenseTriggerEffectStrengthMulti strength_2;
			SCDualSenseTriggerEffectStrengthMulti strength_3;
			SCDualSenseTriggerEffectStrengthMulti strength_4;
			SCDualSenseTriggerEffectStrengthMulti strength_5;
			SCDualSenseTriggerEffectStrengthMulti strength_6;
			SCDualSenseTriggerEffectStrengthMulti strength_7;
			SCDualSenseTriggerEffectStrengthMulti strength_8;
			SCDualSenseTriggerEffectStrengthMulti strength_9;
			bool left;
			bool right;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_frequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_0_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_0;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_1_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_2_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_3_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_4_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_4;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_5_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_5;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_6_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_6;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_7_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_7;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_8_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_8;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_9_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength_9;
		static void NewProp_left_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_left;
		static void NewProp_right_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_right;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, frequency), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_0_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_0 = { "strength_0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_0), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_1 = { "strength_1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_1), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_2 = { "strength_2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_2), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_3 = { "strength_3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_3), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_4_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_4 = { "strength_4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_4), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_5_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_5 = { "strength_5", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_5), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_6_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_6 = { "strength_6", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_6), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_7_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_7 = { "strength_7", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_7), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_8_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_8 = { "strength_8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_8), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_9_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_9 = { "strength_9", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, strength_9), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, METADATA_PARAMS(0, nullptr) }; // 2463463634
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_left_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms*)Obj)->left = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_left_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_right_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms*)Obj)->right = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_right_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_0_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_1_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_2_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_3_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_4_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_5_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_6_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_7_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_8_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_9_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_strength_9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Commands" },
		{ "CPP_Default_frequency", "20" },
		{ "CPP_Default_left", "true" },
		{ "CPP_Default_right", "true" },
		{ "CPP_Default_strength_0", "Value_0" },
		{ "CPP_Default_strength_1", "Value_0" },
		{ "CPP_Default_strength_2", "Value_1" },
		{ "CPP_Default_strength_3", "Value_2" },
		{ "CPP_Default_strength_4", "Value_3" },
		{ "CPP_Default_strength_5", "Value_4" },
		{ "CPP_Default_strength_6", "Value_5" },
		{ "CPP_Default_strength_7", "Value_6" },
		{ "CPP_Default_strength_8", "Value_7" },
		{ "CPP_Default_strength_9", "Value_8" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "generateDualSenseTriggerCommandMultiVibration", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandMultiVibration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics
	{
		struct SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandOFF_Parms
		{
			bool left;
			bool right;
			TArray<uint8> ReturnValue;
		};
		static void NewProp_left_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_left;
		static void NewProp_right_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_right;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_left_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandOFF_Parms*)Obj)->left = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandOFF_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_left_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_right_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandOFF_Parms*)Obj)->right = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandOFF_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_right_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandOFF_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Commands" },
		{ "CPP_Default_left", "true" },
		{ "CPP_Default_right", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "generateDualSenseTriggerCommandOFF", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandOFF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandOFF_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics
	{
		struct SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms
		{
			SCDualSenseTriggerEffectStartZone startingZone;
			SCDualSenseTriggerEffectStrength strength;
			uint8 frequency;
			bool left;
			bool right;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_startingZone_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_startingZone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_frequency;
		static void NewProp_left_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_left;
		static void NewProp_right_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_right;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_startingZone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_startingZone = { "startingZone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms, startingZone), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone, METADATA_PARAMS(0, nullptr) }; // 1505549988
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_strength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms, strength), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength, METADATA_PARAMS(0, nullptr) }; // 3787614685
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms, frequency), nullptr, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_left_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms*)Obj)->left = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_left_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_right_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms*)Obj)->right = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_right_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_startingZone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_startingZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_strength_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Commands" },
		{ "CPP_Default_frequency", "20" },
		{ "CPP_Default_left", "true" },
		{ "CPP_Default_right", "true" },
		{ "CPP_Default_strength", "Value_8" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "generateDualSenseTriggerCommandVibration", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandVibration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics
	{
		struct SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms
		{
			SCDualSenseTriggerEffectStartPosition startPosition;
			SCDualSenseTriggerEffectEndPosition endPosition;
			SCDualSenseTriggerEffectStrength strength;
			bool left;
			bool right;
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_startPosition_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_startPosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_endPosition_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_endPosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_strength_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_strength;
		static void NewProp_left_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_left;
		static void NewProp_right_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_right;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_startPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_startPosition = { "startPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms, startPosition), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition, METADATA_PARAMS(0, nullptr) }; // 1980827139
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_endPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_endPosition = { "endPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms, endPosition), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition, METADATA_PARAMS(0, nullptr) }; // 3092050388
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_strength_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms, strength), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength, METADATA_PARAMS(0, nullptr) }; // 3787614685
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_left_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms*)Obj)->left = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_left = { "left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_left_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_right_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms*)Obj)->right = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_right = { "right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_right_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_startPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_startPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_endPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_endPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_strength_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Commands" },
		{ "CPP_Default_endPosition", "Value_6" },
		{ "CPP_Default_left", "true" },
		{ "CPP_Default_right", "true" },
		{ "CPP_Default_startPosition", "Value_2" },
		{ "CPP_Default_strength", "Value_8" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "generateDualSenseTriggerCommandWeapon", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::SimpleControllerBPLibrary_eventgenerateDualSenseTriggerCommandWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics
	{
		struct SimpleControllerBPLibrary_eventgetAxisActions_Parms
		{
			FSimpleControllerMappingProfile profile;
			TMap<FString,FSimpleControllerMappingAxisAction> axisActions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_profile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisActions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_axisActions_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_axisActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::NewProp_profile = { "profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetAxisActions_Parms, profile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::NewProp_axisActions_ValueProp = { "axisActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction, METADATA_PARAMS(0, nullptr) }; // 3232960627
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::NewProp_axisActions_Key_KeyProp = { "axisActions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::NewProp_axisActions = { "axisActions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetAxisActions_Parms, axisActions), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3232960627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::NewProp_profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::NewProp_axisActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::NewProp_axisActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::NewProp_axisActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getAxisActions", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::SimpleControllerBPLibrary_eventgetAxisActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::SimpleControllerBPLibrary_eventgetAxisActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics
	{
		struct SimpleControllerBPLibrary_eventgetAxisValueBySDL_Parms
		{
			FSimpleControllerDevice device;
			int32 axisID;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetAxisValueBySDL_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetAxisValueBySDL_Parms, axisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetAxisValueBySDL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getAxisValueBySDL", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::SimpleControllerBPLibrary_eventgetAxisValueBySDL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::SimpleControllerBPLibrary_eventgetAxisValueBySDL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics
	{
		struct SimpleControllerBPLibrary_eventgetAxisValues_Parms
		{
			FSimpleControllerDevice device;
			TMap<int32,float> axisValues;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValues_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisValues_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_axisValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetAxisValues_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::NewProp_axisValues_ValueProp = { "axisValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::NewProp_axisValues_Key_KeyProp = { "axisValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::NewProp_axisValues = { "axisValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetAxisValues_Parms, axisValues), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::NewProp_axisValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::NewProp_axisValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::NewProp_axisValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* Read the current Axis value. IMPORTANT! Some devices only return a value after they have been used once (button pressed, axis moved) and otherwise return 0 as a value. \n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Read the current Axis value. IMPORTANT! Some devices only return a value after they have been used once (button pressed, axis moved) and otherwise return 0 as a value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getAxisValues", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::SimpleControllerBPLibrary_eventgetAxisValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::SimpleControllerBPLibrary_eventgetAxisValues_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics
	{
		struct SimpleControllerBPLibrary_eventgetBallValueBySDL_Parms
		{
			FSimpleControllerDevice device;
			int32 ballIndex;
			int32 xRel;
			int32 yRel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ballIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_xRel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_yRel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetBallValueBySDL_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::NewProp_ballIndex = { "ballIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetBallValueBySDL_Parms, ballIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::NewProp_xRel = { "xRel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetBallValueBySDL_Parms, xRel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::NewProp_yRel = { "yRel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetBallValueBySDL_Parms, yRel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::NewProp_ballIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::NewProp_xRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::NewProp_yRel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getBallValueBySDL", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::SimpleControllerBPLibrary_eventgetBallValueBySDL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::SimpleControllerBPLibrary_eventgetBallValueBySDL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics
	{
		struct SimpleControllerBPLibrary_eventgetButtonActions_Parms
		{
			FSimpleControllerMappingProfile profile;
			TMap<FString,FSimpleControllerMappingButtonAction> buttonActions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_profile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_buttonActions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_buttonActions_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_buttonActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::NewProp_profile = { "profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetButtonActions_Parms, profile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::NewProp_buttonActions_ValueProp = { "buttonActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction, METADATA_PARAMS(0, nullptr) }; // 708247476
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::NewProp_buttonActions_Key_KeyProp = { "buttonActions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::NewProp_buttonActions = { "buttonActions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetButtonActions_Parms, buttonActions), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 708247476
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::NewProp_profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::NewProp_buttonActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::NewProp_buttonActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::NewProp_buttonActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getButtonActions", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::SimpleControllerBPLibrary_eventgetButtonActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::SimpleControllerBPLibrary_eventgetButtonActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics
	{
		struct SimpleControllerBPLibrary_eventgetButtonName_Parms
		{
			FSimpleControllerDevice device;
			int32 buttonID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetButtonName_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetButtonName_Parms, buttonID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetButtonName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getButtonName", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::SimpleControllerBPLibrary_eventgetButtonName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::SimpleControllerBPLibrary_eventgetButtonName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics
	{
		struct SimpleControllerBPLibrary_eventgetButtonValueBySDL_Parms
		{
			FSimpleControllerDevice device;
			int32 buttonID;
			ESimpleControllerButtonStatus ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetButtonValueBySDL_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetButtonValueBySDL_Parms, buttonID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetButtonValueBySDL_Parms, ReturnValue), Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus, METADATA_PARAMS(0, nullptr) }; // 1836400762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getButtonValueBySDL", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::SimpleControllerBPLibrary_eventgetButtonValueBySDL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::SimpleControllerBPLibrary_eventgetButtonValueBySDL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics
	{
		struct SimpleControllerBPLibrary_eventgetConnectedControllers_Parms
		{
			TArray<FSimpleControllerDevice> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetConnectedControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getConnectedControllers", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::SimpleControllerBPLibrary_eventgetConnectedControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::SimpleControllerBPLibrary_eventgetConnectedControllers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics
	{
		struct SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms
		{
			FSimpleControllerDevice device;
			ESimpleControllerPowerLevel powerLevel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_powerLevel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_powerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_powerLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_powerLevel = { "powerLevel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms, powerLevel), Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel, METADATA_PARAMS(0, nullptr) }; // 2630045115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_powerLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::NewProp_powerLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getCurrentPowerLevel", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::SimpleControllerBPLibrary_eventgetCurrentPowerLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics
	{
		struct SimpleControllerBPLibrary_eventgetHatValueBySDL_Parms
		{
			FSimpleControllerDevice device;
			int32 directionalPadIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionalPadIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetHatValueBySDL_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::NewProp_directionalPadIndex = { "directionalPadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetHatValueBySDL_Parms, directionalPadIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetHatValueBySDL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::NewProp_directionalPadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getHatValueBySDL", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::SimpleControllerBPLibrary_eventgetHatValueBySDL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::SimpleControllerBPLibrary_eventgetHatValueBySDL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics
	{
		struct SimpleControllerBPLibrary_eventgetMappedAxisActions_Parms
		{
			bool isMapped;
			TArray<FString> actionNames;
			int32 axisID;
			int32 connectionIndex;
		};
		static void NewProp_isMapped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isMapped;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_actionNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_isMapped_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgetMappedAxisActions_Parms*)Obj)->isMapped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_isMapped = { "isMapped", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgetMappedAxisActions_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_isMapped_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_actionNames_Inner = { "actionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_actionNames = { "actionNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappedAxisActions_Parms, actionNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappedAxisActions_Parms, axisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappedAxisActions_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_isMapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_actionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_actionNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getMappedAxisActions", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::SimpleControllerBPLibrary_eventgetMappedAxisActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::SimpleControllerBPLibrary_eventgetMappedAxisActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics
	{
		struct SimpleControllerBPLibrary_eventgetMappedButtonActions_Parms
		{
			bool isMapped;
			TArray<FString> actionNames;
			int32 buttonID;
			int32 connectionIndex;
		};
		static void NewProp_isMapped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isMapped;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_actionNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_isMapped_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventgetMappedButtonActions_Parms*)Obj)->isMapped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_isMapped = { "isMapped", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventgetMappedButtonActions_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_isMapped_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_actionNames_Inner = { "actionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_actionNames = { "actionNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappedButtonActions_Parms, actionNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappedButtonActions_Parms, buttonID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappedButtonActions_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_isMapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_actionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_actionNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getMappedButtonActions", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::SimpleControllerBPLibrary_eventgetMappedButtonActions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::SimpleControllerBPLibrary_eventgetMappedButtonActions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics
	{
		struct SimpleControllerBPLibrary_eventgetMappingActionsByTag_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString tag;
			TArray<FSimpleControllerMappingButtonAction> buttonActions;
			TArray<FSimpleControllerMappingAxisAction> axisActions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_buttonActions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_buttonActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisActions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_axisActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappingActionsByTag_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappingActionsByTag_Parms, tag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_buttonActions_Inner = { "buttonActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction, METADATA_PARAMS(0, nullptr) }; // 708247476
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_buttonActions = { "buttonActions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappingActionsByTag_Parms, buttonActions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 708247476
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_axisActions_Inner = { "axisActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction, METADATA_PARAMS(0, nullptr) }; // 3232960627
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_axisActions = { "axisActions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMappingActionsByTag_Parms, axisActions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3232960627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_buttonActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_buttonActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_axisActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::NewProp_axisActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getMappingActionsByTag", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::SimpleControllerBPLibrary_eventgetMappingActionsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::SimpleControllerBPLibrary_eventgetMappingActionsByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics
	{
		struct SimpleControllerBPLibrary_eventgetMousePosition_Parms
		{
			int32 x;
			int32 y;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMousePosition_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetMousePosition_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mouse" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getMousePosition", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::SimpleControllerBPLibrary_eventgetMousePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::SimpleControllerBPLibrary_eventgetMousePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics
	{
		struct SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms
		{
			USimpleControllerBPLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getSimpleControllerTarget", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms
		{
			FString deviceID;
			float valueA;
			float valueB;
			float valueC;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_valueA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_valueB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_valueC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_valueC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueA = { "valueA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, valueA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueA_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueB = { "valueB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, valueB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueB_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueC = { "valueC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, valueC), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueC_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_valueC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "gyroSensorEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::SimpleControllerBPLibrary_eventgyroSensorEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics
	{
		struct SimpleControllerBPLibrary_eventinitIOSPart_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventinitIOSPart_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/** Initializes the gamepad functions on ios. These do not run via SDL but via Unreal and are therefore severely restricted.\n\x09* A player controller is required for each gamepad. This function automatically creates a player controller if none is found. \n\x09* The input mode must be set to Game or Game and UI for the inputs to be recognized.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Initializes the gamepad functions on ios. These do not run via SDL but via Unreal and are therefore severely restricted.\nA player controller is required for each gamepad. This function automatically creates a player controller if none is found.\nThe input mode must be set to Game or Game and UI for the inputs to be recognized." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "initIOSPart", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::SimpleControllerBPLibrary_eventinitIOSPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::SimpleControllerBPLibrary_eventinitIOSPart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics
	{
		struct SimpleControllerBPLibrary_eventisAxisMapped_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventisAxisMapped_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventisAxisMapped_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventisAxisMapped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventisAxisMapped_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "isAxisMapped", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::SimpleControllerBPLibrary_eventisAxisMapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::SimpleControllerBPLibrary_eventisAxisMapped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics
	{
		struct SimpleControllerBPLibrary_eventisButtonMapped_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventisButtonMapped_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventisButtonMapped_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventisButtonMapped_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventisButtonMapped_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "isButtonMapped", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::SimpleControllerBPLibrary_eventisButtonMapped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::SimpleControllerBPLibrary_eventisButtonMapped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics
	{
		struct SimpleControllerBPLibrary_eventmapAxis_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			FSimpleControllerDevice device;
			int32 axisID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventmapAxis_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventmapAxis_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventmapAxis_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventmapAxis_Parms, axisID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventmapAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventmapAxis_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "Comment", "/**\n\x09* This allows you to map an axis manually.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This allows you to map an axis manually." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "mapAxis", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::SimpleControllerBPLibrary_eventmapAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::SimpleControllerBPLibrary_eventmapAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics
	{
		struct SimpleControllerBPLibrary_eventmapButton_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			FSimpleControllerDevice device;
			int32 buttonID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventmapButton_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventmapButton_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventmapButton_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventmapButton_Parms, buttonID), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventmapButton_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventmapButton_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "Comment", "/**\n\x09* This allows you to map an button manually.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This allows you to map an button manually." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "mapButton", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::SimpleControllerBPLibrary_eventmapButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::SimpleControllerBPLibrary_eventmapButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics
	{
		struct SimpleControllerBPLibrary_eventremoveAxisCorrection_Parms
		{
			FSimpleControllerDevice device;
			int32 axisID;
			ESimpleControllerAxisCorrection type;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventremoveAxisCorrection_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventremoveAxisCorrection_Parms, axisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventremoveAxisCorrection_Parms, type), Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection, METADATA_PARAMS(0, nullptr) }; // 3656754177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "removeAxisCorrection", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::SimpleControllerBPLibrary_eventremoveAxisCorrection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::SimpleControllerBPLibrary_eventremoveAxisCorrection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventremoveAxisMapping_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventremoveAxisMapping_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventremoveAxisMapping_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::NewProp_actionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "removeAxisMapping", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::SimpleControllerBPLibrary_eventremoveAxisMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::SimpleControllerBPLibrary_eventremoveAxisMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventremoveButtonMapping_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventremoveButtonMapping_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventremoveButtonMapping_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::NewProp_actionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "removeButtonMapping", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::SimpleControllerBPLibrary_eventremoveButtonMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::SimpleControllerBPLibrary_eventremoveButtonMapping_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics
	{
		struct SimpleControllerBPLibrary_eventrumble_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			float strengthSmallMotor;
			float strengthLargeMotor;
			int32 lengthInMilliseconds;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengthSmallMotor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengthLargeMotor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lengthInMilliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventrumble_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventrumble_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthSmallMotor = { "strengthSmallMotor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, strengthSmallMotor), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthLargeMotor = { "strengthLargeMotor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, strengthLargeMotor), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_lengthInMilliseconds = { "lengthInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, lengthInMilliseconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthSmallMotor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthLargeMotor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_lengthInMilliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.\n\x09* @param strengthSmallMotor Values in percent between 0 and 1\n\x09* @param strengthLargeMotor Values in percent between 0 and 1\n\x09* @param lengthInMilliseconds duration of the effect in milliseconds\n\x09*/" },
		{ "CPP_Default_lengthInMilliseconds", "2000" },
		{ "CPP_Default_strengthLargeMotor", "0.500000" },
		{ "CPP_Default_strengthSmallMotor", "0.500000" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.\n@param strengthSmallMotor Values in percent between 0 and 1\n@param strengthLargeMotor Values in percent between 0 and 1\n@param lengthInMilliseconds duration of the effect in milliseconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "rumble", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::SimpleControllerBPLibrary_eventrumble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::SimpleControllerBPLibrary_eventrumble_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_rumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics
	{
		struct SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms
		{
			bool successful;
			FString errorMessage;
			int32 connectionIndex;
			float strengthSmallMotor;
			float strengthLargeMotor;
			int32 lengthInMilliseconds;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengthSmallMotor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengthLargeMotor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lengthInMilliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_strengthSmallMotor = { "strengthSmallMotor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms, strengthSmallMotor), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_strengthLargeMotor = { "strengthLargeMotor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms, strengthLargeMotor), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_lengthInMilliseconds = { "lengthInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms, lengthInMilliseconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_strengthSmallMotor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_strengthLargeMotor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::NewProp_lengthInMilliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.\n\x09* @param strengthSmallMotor Values in percent between 0 and 1\n\x09* @param strengthLargeMotor Values in percent between 0 and 1\n\x09* @param lengthInMilliseconds duration of the effect in milliseconds\n\x09*/" },
		{ "CPP_Default_lengthInMilliseconds", "2000" },
		{ "CPP_Default_strengthLargeMotor", "0.500000" },
		{ "CPP_Default_strengthSmallMotor", "0.500000" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This effect is mainly intended for gamepads. It can be used to control the two motors that are found in all modern gamepads. With length 0 a running effect can be aborted.\n@param strengthSmallMotor Values in percent between 0 and 1\n@param strengthLargeMotor Values in percent between 0 and 1\n@param lengthInMilliseconds duration of the effect in milliseconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "rumbleByConnectionIndex", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::SimpleControllerBPLibrary_eventrumbleByConnectionIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics
	{
		struct SimpleControllerBPLibrary_eventrumbleTrigger_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			float strengthLeft;
			float strengthRight;
			int32 lengthInMilliseconds;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengthLeft;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengthRight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lengthInMilliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventrumbleTrigger_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventrumbleTrigger_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleTrigger_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleTrigger_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_strengthLeft = { "strengthLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleTrigger_Parms, strengthLeft), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_strengthRight = { "strengthRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleTrigger_Parms, strengthRight), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_lengthInMilliseconds = { "lengthInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleTrigger_Parms, lengthInMilliseconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_strengthLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_strengthRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::NewProp_lengthInMilliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* Gamepads like the Xbox One gamepad have motors in the L1 and R1 triggers. With this function you can vibrate the motors.\n\x09* @param strengthLeft Values in percent between 0 and 1\n\x09* @param strengthRight Values in percent between 0 and 1\n\x09* @param lengthInMilliseconds duration of the effect in milliseconds\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Gamepads like the Xbox One gamepad have motors in the L1 and R1 triggers. With this function you can vibrate the motors.\n@param strengthLeft Values in percent between 0 and 1\n@param strengthRight Values in percent between 0 and 1\n@param lengthInMilliseconds duration of the effect in milliseconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "rumbleTrigger", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::SimpleControllerBPLibrary_eventrumbleTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::SimpleControllerBPLibrary_eventrumbleTrigger_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics
	{
		struct SimpleControllerBPLibrary_eventrumbleWheel_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			float strengthLeftMotor;
			float strengthRightMotor;
			int32 lengthInMilliseconds;
			int32 timeBetweenDirectionChangeInMilliseconds;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengthLeftMotor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengthRightMotor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lengthInMilliseconds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_timeBetweenDirectionChangeInMilliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventrumbleWheel_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventrumbleWheel_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleWheel_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleWheel_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_strengthLeftMotor = { "strengthLeftMotor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleWheel_Parms, strengthLeftMotor), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_strengthRightMotor = { "strengthRightMotor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleWheel_Parms, strengthRightMotor), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_lengthInMilliseconds = { "lengthInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleWheel_Parms, lengthInMilliseconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_timeBetweenDirectionChangeInMilliseconds = { "timeBetweenDirectionChangeInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumbleWheel_Parms, timeBetweenDirectionChangeInMilliseconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_strengthLeftMotor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_strengthRightMotor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_lengthInMilliseconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::NewProp_timeBetweenDirectionChangeInMilliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "CPP_Default_lengthInMilliseconds", "2000" },
		{ "CPP_Default_strengthLeftMotor", "0.500000" },
		{ "CPP_Default_strengthRightMotor", "0.500000" },
		{ "CPP_Default_timeBetweenDirectionChangeInMilliseconds", "10" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "rumbleWheel", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::SimpleControllerBPLibrary_eventrumbleWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::SimpleControllerBPLibrary_eventrumbleWheel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			int32 iterations;
			FSimpleControllerForceFeedbackEffect ReturnValue;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UECodeGen_Private::FIntPropertyParams NewProp_iterations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_iterations = { "iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms, iterations), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Starts an uploaded or stopped effect.\n\x09* @param iterations This allows the effect to be repeated x times\n\x09*/" },
		{ "CPP_Default_iterations", "1" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Starts an uploaded or stopped effect.\n@param iterations This allows the effect to be repeated x times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "runForceFeedbackEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventrunForceFeedbackEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics
	{
		struct SimpleControllerBPLibrary_eventsetAutocenterForceFeedbackSDL_Parms
		{
			FSimpleControllerDevice device;
			int32 autocenter;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_autocenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetAutocenterForceFeedbackSDL_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::NewProp_autocenter = { "autocenter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetAutocenterForceFeedbackSDL_Parms, autocenter), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::NewProp_autocenter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Use this function to set the global autocenter of the device. Device must support the SDL_HAPTIC_AUTOCENTER feature.\n\x09* @param device device to set autocentering on\n\x09* @param autocenter value to set autocenter to (0-100), 0 disables autocentering\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Use this function to set the global autocenter of the device. Device must support the SDL_HAPTIC_AUTOCENTER feature.\n@param device device to set autocentering on\n@param autocenter value to set autocenter to (0-100), 0 disables autocentering" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setAutocenterForceFeedbackSDL", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::SimpleControllerBPLibrary_eventsetAutocenterForceFeedbackSDL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::SimpleControllerBPLibrary_eventsetAutocenterForceFeedbackSDL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics
	{
		struct SimpleControllerBPLibrary_eventsetDeadZone_Parms
		{
			FSimpleControllerDevice device;
			int32 axisID;
			float deadZoneMaxPositive;
			float deadZoneMaxNegative;
			float deadZoneMinPositive;
			float deadZoneMinNegative;
			FSimpleControllerDevice ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deadZoneMaxPositive;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deadZoneMaxNegative;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deadZoneMinPositive;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deadZoneMinNegative;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetDeadZone_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetDeadZone_Parms, axisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_deadZoneMaxPositive = { "deadZoneMaxPositive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetDeadZone_Parms, deadZoneMaxPositive), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_deadZoneMaxNegative = { "deadZoneMaxNegative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetDeadZone_Parms, deadZoneMaxNegative), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_deadZoneMinPositive = { "deadZoneMinPositive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetDeadZone_Parms, deadZoneMinPositive), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_deadZoneMinNegative = { "deadZoneMinNegative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetDeadZone_Parms, deadZoneMinNegative), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetDeadZone_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_deadZoneMaxPositive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_deadZoneMaxNegative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_deadZoneMinPositive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_deadZoneMinNegative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* This allows you to set the deadzone. The value 0 resets the setting. \n\x09* @param deadZoneMaxPositive 0 - 1 All values above this are ignored.\n\x09* @param deadZoneMinPositive 0 - 1 All values below this are ignored.\n\x09* @param deadZoneMaxNegative -1 - 0 All values below this are ignored.\n\x09* @param deadZoneMaxNegative -1 - 0 All values above this are ignored.\n\x09*/" },
		{ "CPP_Default_deadZoneMaxNegative", "-0.900000" },
		{ "CPP_Default_deadZoneMaxPositive", "0.900000" },
		{ "CPP_Default_deadZoneMinNegative", "-0.100000" },
		{ "CPP_Default_deadZoneMinPositive", "0.100000" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This allows you to set the deadzone. The value 0 resets the setting.\n@param deadZoneMaxPositive 0 - 1 All values above this are ignored.\n@param deadZoneMinPositive 0 - 1 All values below this are ignored.\n@param deadZoneMaxNegative -1 - 0 All values below this are ignored.\n@param deadZoneMaxNegative -1 - 0 All values above this are ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setDeadZone", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::SimpleControllerBPLibrary_eventsetDeadZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::SimpleControllerBPLibrary_eventsetDeadZone_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics
	{
		struct SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms
		{
			FSimpleControllerDevice device;
			int32 gain;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FIntPropertyParams NewProp_gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms, gain), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::NewProp_gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Use this function to set the global gain of the specified haptic device. \n\x09* @param device device to set autocentering on\n\x09* @param gain value to set the gain to, should be between 0 and 100\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Use this function to set the global gain of the specified haptic device.\n@param device device to set autocentering on\n@param gain value to set the gain to, should be between 0 and 100" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setGainForceFeedback", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::SimpleControllerBPLibrary_eventsetGainForceFeedback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics
	{
		struct SimpleControllerBPLibrary_eventsetLEDColor_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			FColor color;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventsetLEDColor_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventsetLEDColor_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetLEDColor_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetLEDColor_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetLEDColor_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* Some devices like the PS5 Gamepad Dualsense have an LED. With this function you can change the color.\n\x09* @param color RGB\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Some devices like the PS5 Gamepad Dualsense have an LED. With this function you can change the color.\n@param color RGB" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setLEDColor", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::SimpleControllerBPLibrary_eventsetLEDColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::SimpleControllerBPLibrary_eventsetLEDColor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics
	{
		struct SimpleControllerBPLibrary_eventsetMousePosition_Parms
		{
			int32 x;
			int32 y;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetMousePosition_Parms, x), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetMousePosition_Parms, y), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mouse" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setMousePosition", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::SimpleControllerBPLibrary_eventsetMousePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::SimpleControllerBPLibrary_eventsetMousePosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics
	{
		struct SimpleControllerBPLibrary_eventsetSensor_Parms
		{
			FSimpleControllerDevice device;
			ESimpleControllerSensorType type;
			bool enable;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static void NewProp_enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetSensor_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetSensor_Parms, type), Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType, METADATA_PARAMS(0, nullptr) }; // 183799144
	void Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_enable_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventsetSensor_Parms*)Obj)->enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventsetSensor_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::NewProp_enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* Some devices like the PS5 Gamepad Dualsense have acceleration or gyro sensors. This function allows you to activate and deactivate them. What is gyro and what is acceleration was taken over from SDL. I think the designation is the wrong way round. \n\x09* @param color RGB\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Some devices like the PS5 Gamepad Dualsense have acceleration or gyro sensors. This function allows you to activate and deactivate them. What is gyro and what is acceleration was taken over from SDL. I think the designation is the wrong way round.\n@param color RGB" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setSensor", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::SimpleControllerBPLibrary_eventsetSensor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::SimpleControllerBPLibrary_eventsetSensor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics
	{
		struct SimpleControllerBPLibrary_eventsetUnrealKeyboardAndMouseEvents_Parms
		{
			UObject* WorldContextObject;
			bool keyboardButtons;
			bool mousedButtons;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_keyboardButtons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_keyboardButtons;
		static void NewProp_mousedButtons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mousedButtons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsetUnrealKeyboardAndMouseEvents_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_keyboardButtons_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventsetUnrealKeyboardAndMouseEvents_Parms*)Obj)->keyboardButtons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_keyboardButtons = { "keyboardButtons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventsetUnrealKeyboardAndMouseEvents_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_keyboardButtons_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_mousedButtons_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventsetUnrealKeyboardAndMouseEvents_Parms*)Obj)->mousedButtons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_mousedButtons = { "mousedButtons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventsetUnrealKeyboardAndMouseEvents_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_mousedButtons_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_keyboardButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::NewProp_mousedButtons,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/**\n\x09* This redirects the Unreal keyboard and mouse events to the ControllerButtonAsyncEvent. To undo this, the parameters must be set to False and the editor must be restarted. \n\x09* @param keyboardButtons Keyboard inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus. \n\x09* @param mousedButtons Mouse inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus. \n\x09*/" },
		{ "CPP_Default_keyboardButtons", "false" },
		{ "CPP_Default_mousedButtons", "false" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This redirects the Unreal keyboard and mouse events to the ControllerButtonAsyncEvent. To undo this, the parameters must be set to False and the editor must be restarted.\n@param keyboardButtons Keyboard inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus.\n@param mousedButtons Mouse inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "setUnrealKeyboardAndMouseEvents", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::SimpleControllerBPLibrary_eventsetUnrealKeyboardAndMouseEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::SimpleControllerBPLibrary_eventsetUnrealKeyboardAndMouseEvents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventstopForceFeedbackEffect_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			FSimpleControllerForceFeedbackEffect ReturnValue;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventstopForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventstopForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventstopForceFeedbackEffect_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventstopForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventstopForceFeedbackEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Stops an uploaded effect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Stops an uploaded effect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "stopForceFeedbackEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventstopForceFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventstopForceFeedbackEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_stopRumbleWheel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_stopRumbleWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_stopRumbleWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "stopRumbleWheel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_stopRumbleWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_stopRumbleWheel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_stopRumbleWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_stopRumbleWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms
		{
			FString deviceID;
			int32 touchpadIndex;
			int32 finger;
			float x;
			float y;
			float pressure;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_touchpadIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_touchpadIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finger_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_finger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pressure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pressure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_touchpadIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_touchpadIndex = { "touchpadIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, touchpadIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_touchpadIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_touchpadIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_finger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_finger = { "finger", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, finger), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_finger_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_finger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_x_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_y_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_pressure_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, pressure), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_pressure_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_pressure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_touchpadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_finger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "touchpadDownEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::SimpleControllerBPLibrary_eventtouchpadDownEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms
		{
			FString deviceID;
			int32 touchpadIndex;
			int32 finger;
			float x;
			float y;
			float pressure;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_touchpadIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_touchpadIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finger_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_finger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pressure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pressure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_touchpadIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_touchpadIndex = { "touchpadIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, touchpadIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_touchpadIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_touchpadIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_finger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_finger = { "finger", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, finger), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_finger_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_finger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_x_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_y_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_pressure_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, pressure), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_pressure_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_pressure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_touchpadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_finger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "touchpadMotionEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::SimpleControllerBPLibrary_eventtouchpadMotionEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms
		{
			FString deviceID;
			int32 touchpadIndex;
			int32 finger;
			float x;
			float y;
			float pressure;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_deviceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_touchpadIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_touchpadIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finger_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_finger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pressure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pressure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_touchpadIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_touchpadIndex = { "touchpadIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, touchpadIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_touchpadIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_touchpadIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_finger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_finger = { "finger", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, finger), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_finger_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_finger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_x_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_x_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_y_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_y_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_pressure_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_pressure = { "pressure", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, pressure), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_pressure_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_pressure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_touchpadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_finger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_pressure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "touchpadUpEventDelegate", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::SimpleControllerBPLibrary_eventtouchpadUpEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 length;
			int32 delay;
			float level;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UECodeGen_Private::FIntPropertyParams NewProp_length;
		static const UECodeGen_Private::FIntPropertyParams NewProp_delay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_level;
		static const UECodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, directionX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, directionY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, directionZ), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, length), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, delay), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, attackLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, attackLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, fadeLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms, fadeLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_directionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_directionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_directionZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_attackLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_attackLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_fadeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::NewProp_fadeLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* This allows the FF Constant effect to be updated with new values. This is faster than creating a new effect. \n\x09* @param forceFeedbackEffect The uploaded FF Effect to be updated\n\x09* @param directionX For values -1,0,1. \n\x09* @param directionY For values -1,0,1. \n\x09* @param directionZ For values -1,0,1.\n\x09* @param length duration of the effect in milliseconds\n\x09* @param delay delay before starting the effect in milliseconds\n\x09* @param level strength of the constant effect in percent between 0 and 1\n\x09* @param attackLength duration of the attack in milliseconds\n\x09* @param attackLevel level at the start of the attack in percent between 0 and 1\n\x09* @param fadeLength duration of the fade in milliseconds\n\x09* @param fadeLevel level at the end of the fade in percent between 0 and 1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "This allows the FF Constant effect to be updated with new values. This is faster than creating a new effect.\n@param forceFeedbackEffect The uploaded FF Effect to be updated\n@param directionX For values -1,0,1.\n@param directionY For values -1,0,1.\n@param directionZ For values -1,0,1.\n@param length duration of the effect in milliseconds\n@param delay delay before starting the effect in milliseconds\n@param level strength of the constant effect in percent between 0 and 1\n@param attackLength duration of the attack in milliseconds\n@param attackLevel level at the start of the attack in percent between 0 and 1\n@param fadeLength duration of the fade in milliseconds\n@param fadeLevel level at the end of the fade in percent between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "updateConstantForceFeedbackEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventupdateConstantForceFeedbackEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			int32 iterations;
			FSimpleControllerForceFeedbackEffect ReturnValue;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UECodeGen_Private::FIntPropertyParams NewProp_iterations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_iterations = { "iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, iterations), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect.\n\x09* @param iterations This allows the effect to be repeated x times\n\x09*/" },
		{ "CPP_Default_iterations", "1" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect.\n@param iterations This allows the effect to be repeated x times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "uploadAndRunForceFeedbackEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventuploadForceFeedbackEffect_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerForceFeedbackEffect forceFeedbackEffect;
			FSimpleControllerForceFeedbackEffect ReturnValue;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_forceFeedbackEffect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventuploadForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventuploadForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadForceFeedbackEffect_Parms, errorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect = { "forceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadForceFeedbackEffect_Parms, forceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadForceFeedbackEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 2742355357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_forceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback" },
		{ "Comment", "/**\n\x09* Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "Uploads the effect to the driver and executes it. IMPORTANT! Each device can store a different number of effects at the same time. Some can only store one. Remember to destroy the effect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "uploadForceFeedbackEffect", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventuploadForceFeedbackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::SimpleControllerBPLibrary_eventuploadForceFeedbackEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerBPLibrary);
	UClass* Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister()
	{
		return USimpleControllerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onButtonDownEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onButtonDownEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onButtonUpEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onButtonUpEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onDirectionalPadEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onDirectionalPadEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onBallMovedEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onBallMovedEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onaxisMovedEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onaxisMovedEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ondeviceAttachedEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ondeviceAttachedEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ondeviceDetachedEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ondeviceDetachedEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onaccelerationSensorEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onaccelerationSensorEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ongyroSensorEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ongyroSensorEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ontouchpadMotionEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ontouchpadMotionEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ontouchpadDownEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ontouchpadDownEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ontouchpadUpEventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ontouchpadUpEventDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_simpleControllerWheel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_simpleControllerWheel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate, "accelerationSensorEventDelegate" }, // 719170485
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature, "accelerationSensorEventDelegate__DelegateSignature" }, // 3431916752
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_addAxisCorrection, "addAxisCorrection" }, // 3046572500
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_addMousePosition, "addMousePosition" }, // 1811868620
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate, "axisMovedEventDelegate" }, // 1219251498
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature, "axisMovedEventDelegate__DelegateSignature" }, // 1749040749
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate, "ballMovedEventDelegate" }, // 1396161064
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature, "ballMovedEventDelegate__DelegateSignature" }, // 1105834656
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakAxisAction, "breakAxisAction" }, // 4080287897
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakButtonAction, "breakButtonAction" }, // 2672179098
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo, "breakDeviceForceFeedbackInfo" }, // 1956177596
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo, "breakDeviceInfo" }, // 3774686140
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect, "breakForceFeedbackEffect" }, // 3986479473
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakMappingProfile, "breakMappingProfile" }, // 2691945639
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate, "buttonDownEventDelegate" }, // 3823966503
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature, "buttonDownEventDelegate__DelegateSignature" }, // 3504616462
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton, "buttonIDToButton" }, // 3301643051
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate, "buttonUpEventDelegate" }, // 813960555
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature, "buttonUpEventDelegate__DelegateSignature" }, // 729648124
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_cancelMapping, "cancelMapping" }, // 3799913709
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisActionSettings, "changeAxisActionSettings" }, // 2452945450
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition, "createForceFeedbackEffectCondition" }, // 1125133529
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant, "createForceFeedbackEffectConstant" }, // 2006889664
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic, "createForceFeedbackEffectPeriodic" }, // 4126598179
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp, "createForceFeedbackEffectRamp" }, // 667853482
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createMappingFile, "createMappingFile" }, // 3366749743
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_deleteMappingFile, "deleteMappingFile" }, // 2685024806
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect, "destroyForceFeedbackEffect" }, // 1711539505
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate, "deviceAttachedEventDelegate" }, // 3930863164
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature, "deviceAttachedEventDelegate__DelegateSignature" }, // 221873850
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate, "deviceDetachedEventDelegate" }, // 513893796
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature, "deviceDetachedEventDelegate__DelegateSignature" }, // 2125204866
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection, "directinalPadValueToDirection" }, // 520717293
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate, "directionalPadEventDelegate" }, // 3128267892
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature, "directionalPadEventDelegate__DelegateSignature" }, // 2395235950
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_disableConstantForceOnWheel, "disableConstantForceOnWheel" }, // 1332757615
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_disableForceFeedbackOnDevice, "disableForceFeedbackOnDevice" }, // 855161394
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_enableConstantForceOnWheel, "enableConstantForceOnWheel" }, // 4294296919
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_enableForceFeedbackOnDevice, "enableForceFeedbackOnDevice" }, // 3398724397
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_executeCommandOnController, "executeCommandOnController" }, // 2159466678
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByConnectionIndex, "findControllerByConnectionIndex" }, // 824896577
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID, "findControllerByDeviceID" }, // 2482103792
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex, "findControllerByDeviceIndex" }, // 3967246710
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findDeviceIndexByConnectionIndex, "findDeviceIndexByConnectionIndex" }, // 2290349694
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_fireKeyboardButtonEvent, "fireKeyboardButtonEvent" }, // 3108780517
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_fireMouseButtonEvent, "fireMouseButtonEvent" }, // 2427884356
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandFeedback, "generateDualSenseTriggerCommandFeedback" }, // 3301194413
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiFeedback, "generateDualSenseTriggerCommandMultiFeedback" }, // 2363807246
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandMultiVibration, "generateDualSenseTriggerCommandMultiVibration" }, // 111856872
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandOFF, "generateDualSenseTriggerCommandOFF" }, // 466811006
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandVibration, "generateDualSenseTriggerCommandVibration" }, // 3258525699
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_generateDualSenseTriggerCommandWeapon, "generateDualSenseTriggerCommandWeapon" }, // 508487711
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisActions, "getAxisActions" }, // 3330113520
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValueBySDL, "getAxisValueBySDL" }, // 805131579
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getAxisValues, "getAxisValues" }, // 1338967925
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getBallValueBySDL, "getBallValueBySDL" }, // 3270734747
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonActions, "getButtonActions" }, // 992776985
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonName, "getButtonName" }, // 2567786287
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getButtonValueBySDL, "getButtonValueBySDL" }, // 4059689345
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers, "getConnectedControllers" }, // 4017942007
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getCurrentPowerLevel, "getCurrentPowerLevel" }, // 1477972458
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getHatValueBySDL, "getHatValueBySDL" }, // 1597279181
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedAxisActions, "getMappedAxisActions" }, // 3480668753
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getMappedButtonActions, "getMappedButtonActions" }, // 1396287350
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getMappingActionsByTag, "getMappingActionsByTag" }, // 3093910016
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getMousePosition, "getMousePosition" }, // 175143141
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget, "getSimpleControllerTarget" }, // 3060346229
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate, "gyroSensorEventDelegate" }, // 2709500987
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature, "gyroSensorEventDelegate__DelegateSignature" }, // 3518787032
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_initIOSPart, "initIOSPart" }, // 3532245292
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_isAxisMapped, "isAxisMapped" }, // 4125997553
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_isButtonMapped, "isButtonMapped" }, // 638208783
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_mapAxis, "mapAxis" }, // 4088179417
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_mapButton, "mapButton" }, // 1716044516
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisCorrection, "removeAxisCorrection" }, // 1777588358
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_removeAxisMapping, "removeAxisMapping" }, // 3554956960
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_removeButtonMapping, "removeButtonMapping" }, // 1341776625
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_rumble, "rumble" }, // 3705819014
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleByConnectionIndex, "rumbleByConnectionIndex" }, // 2568402301
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleTrigger, "rumbleTrigger" }, // 4156599496
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_rumbleWheel, "rumbleWheel" }, // 4215353960
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_runForceFeedbackEffect, "runForceFeedbackEffect" }, // 1863894446
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setAutocenterForceFeedbackSDL, "setAutocenterForceFeedbackSDL" }, // 4273980533
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setDeadZone, "setDeadZone" }, // 3238184734
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setGainForceFeedback, "setGainForceFeedback" }, // 2382053525
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setLEDColor, "setLEDColor" }, // 1456459280
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setMousePosition, "setMousePosition" }, // 4013383717
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setSensor, "setSensor" }, // 2913422029
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_setUnrealKeyboardAndMouseEvents, "setUnrealKeyboardAndMouseEvents" }, // 4126902772
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_stopForceFeedbackEffect, "stopForceFeedbackEffect" }, // 416072656
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_stopRumbleWheel, "stopRumbleWheel" }, // 3599245586
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate, "touchpadDownEventDelegate" }, // 1301121893
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature, "touchpadDownEventDelegate__DelegateSignature" }, // 2026514192
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate, "touchpadMotionEventDelegate" }, // 830079129
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature, "touchpadMotionEventDelegate__DelegateSignature" }, // 928323275
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate, "touchpadUpEventDelegate" }, // 2664745042
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature, "touchpadUpEventDelegate__DelegateSignature" }, // 114348744
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_updateConstantForceFeedbackEffect, "updateConstantForceFeedbackEffect" }, // 3028023147
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect, "uploadAndRunForceFeedbackEffect" }, // 3080782352
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_uploadForceFeedbackEffect, "uploadForceFeedbackEffect" }, // 760054131
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleControllerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|ButtonDown" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate = { "onButtonDownEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onButtonDownEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData) }; // 3504616462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|ButtonUp" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate = { "onButtonUpEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onButtonUpEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData) }; // 729648124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|DirectionalPad" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate = { "onDirectionalPadEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onDirectionalPadEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData) }; // 2395235950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|ballMoved" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate = { "onBallMovedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onBallMovedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData) }; // 1105834656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|AxisMoved" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate = { "onaxisMovedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onaxisMovedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData) }; // 1749040749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|DeviceAttached" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate = { "ondeviceAttachedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ondeviceAttachedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData) }; // 221873850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|DeviceDetached" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate = { "ondeviceDetachedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ondeviceDetachedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData) }; // 2125204866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaccelerationSensorEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|SensorAccerlation" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaccelerationSensorEventDelegate = { "onaccelerationSensorEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onaccelerationSensorEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_accelerationSensorEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaccelerationSensorEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaccelerationSensorEventDelegate_MetaData) }; // 3431916752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ongyroSensorEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|SensorGyro" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ongyroSensorEventDelegate = { "ongyroSensorEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ongyroSensorEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_gyroSensorEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ongyroSensorEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ongyroSensorEventDelegate_MetaData) }; // 3518787032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadMotionEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|TouchpadMotion" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadMotionEventDelegate = { "ontouchpadMotionEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ontouchpadMotionEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadMotionEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadMotionEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadMotionEventDelegate_MetaData) }; // 928323275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadDownEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|TouchpadDown" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadDownEventDelegate = { "ontouchpadDownEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ontouchpadDownEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadDownEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadDownEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadDownEventDelegate_MetaData) }; // 2026514192
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadUpEventDelegate_MetaData[] = {
		{ "Category", "SimpleControllerPlugin|Events|TouchpadUp" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadUpEventDelegate = { "ontouchpadUpEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ontouchpadUpEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_touchpadUpEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadUpEventDelegate_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadUpEventDelegate_MetaData) }; // 114348744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_simpleControllerWheel_MetaData[] = {
		{ "Comment", "//TMap<APlayerController*,TArray<USimpleControllerKeyBoardEvent*>> keyboardEvents;\n" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
		{ "ToolTip", "TMap<APlayerController*,TArray<USimpleControllerKeyBoardEvent*>> keyboardEvents;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_simpleControllerWheel = { "simpleControllerWheel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, simpleControllerWheel), Z_Construct_UClass_USimpleControllerWheel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_simpleControllerWheel_MetaData), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_simpleControllerWheel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaccelerationSensorEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ongyroSensorEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadMotionEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadDownEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ontouchpadUpEventDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_simpleControllerWheel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::ClassParams = {
		&USimpleControllerBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerBPLibrary()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerBPLibrary.OuterSingleton, Z_Construct_UClass_USimpleControllerBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerBPLibrary.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerBPLibrary>()
	{
		return USimpleControllerBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerBPLibrary);
	USimpleControllerBPLibrary::~USimpleControllerBPLibrary() {}
	void USimpleControllerUnrealEvents::StaticRegisterNativesUSimpleControllerUnrealEvents()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerUnrealEvents);
	UClass* Z_Construct_UClass_USimpleControllerUnrealEvents_NoRegister()
	{
		return USimpleControllerUnrealEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerUnrealEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerUnrealEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUnrealEvents_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerUnrealEvents_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleControllerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerUnrealEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerUnrealEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerUnrealEvents_Statics::ClassParams = {
		&USimpleControllerUnrealEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUnrealEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerUnrealEvents_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleControllerUnrealEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerUnrealEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerUnrealEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerUnrealEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerUnrealEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerUnrealEvents>()
	{
		return USimpleControllerUnrealEvents::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerUnrealEvents);
	USimpleControllerUnrealEvents::~USimpleControllerUnrealEvents() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleControllerBPLibrary, USimpleControllerBPLibrary::StaticClass, TEXT("USimpleControllerBPLibrary"), &Z_Registration_Info_UClass_USimpleControllerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerBPLibrary), 1494961228U) },
		{ Z_Construct_UClass_USimpleControllerUnrealEvents, USimpleControllerUnrealEvents::StaticClass, TEXT("USimpleControllerUnrealEvents"), &Z_Registration_Info_UClass_USimpleControllerUnrealEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerUnrealEvents), 3517142291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_148061475(TEXT("/Script/SimpleController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
