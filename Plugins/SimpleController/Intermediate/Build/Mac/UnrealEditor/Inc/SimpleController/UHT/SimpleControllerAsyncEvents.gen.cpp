// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../SimpleController/Public/SimpleControllerAsyncEvents.h"
#include "../../SimpleController/Public/SimpleController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerAsyncEvents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerAxisAsyncEvent();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerAxisAsyncEvent_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerButtonAsyncEvent();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerButtonAsyncEvent_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerStatusAsyncEvent();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerStatusAsyncEvent_NoRegister();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerEventType();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics
	{
		struct SimpleControllerStatusAsyncEvent_eventControllerStatusEvent_Parms
		{
			FSimpleControllerDevice device;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerStatusAsyncEvent_eventControllerStatusEvent_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::NewProp_device_MetaData), Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerStatusAsyncEvent, nullptr, "ControllerStatusEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::SimpleControllerStatusAsyncEvent_eventControllerStatusEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::SimpleControllerStatusAsyncEvent_eventControllerStatusEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerStatusAsyncEvent::FControllerStatusEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerStatusEvent, const FSimpleControllerDevice device)
{
	struct SimpleControllerStatusAsyncEvent_eventControllerStatusEvent_Parms
	{
		FSimpleControllerDevice device;
	};
	SimpleControllerStatusAsyncEvent_eventControllerStatusEvent_Parms Parms;
	Parms.device=device;
	ControllerStatusEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerStatusAsyncEvent::execcontrollerStatusAsyncEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerStatusAsyncEvent**)Z_Param__Result=USimpleControllerStatusAsyncEvent::controllerStatusAsyncEvent();
		P_NATIVE_END;
	}
	void USimpleControllerStatusAsyncEvent::StaticRegisterNativesUSimpleControllerStatusAsyncEvent()
	{
		UClass* Class = USimpleControllerStatusAsyncEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "controllerStatusAsyncEvent", &USimpleControllerStatusAsyncEvent::execcontrollerStatusAsyncEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics
	{
		struct SimpleControllerStatusAsyncEvent_eventcontrollerStatusAsyncEvent_Parms
		{
			USimpleControllerStatusAsyncEvent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerStatusAsyncEvent_eventcontrollerStatusAsyncEvent_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerStatusAsyncEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|AsyncEvents" },
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerStatusAsyncEvent, nullptr, "controllerStatusAsyncEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::SimpleControllerStatusAsyncEvent_eventcontrollerStatusAsyncEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::SimpleControllerStatusAsyncEvent_eventcontrollerStatusAsyncEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerStatusAsyncEvent);
	UClass* Z_Construct_UClass_USimpleControllerStatusAsyncEvent_NoRegister()
	{
		return USimpleControllerStatusAsyncEvent::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attached_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_attached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_detached_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_detached;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerStatusAsyncEvent_controllerStatusAsyncEvent, "controllerStatusAsyncEvent" }, // 1117489131
		{ &Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature, "ControllerStatusEvent__DelegateSignature" }, // 471543089
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerAsyncEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_attached_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_attached = { "attached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerStatusAsyncEvent, attached), Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_attached_MetaData), Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_attached_MetaData) }; // 471543089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_detached_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_detached = { "detached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerStatusAsyncEvent, detached), Z_Construct_UDelegateFunction_USimpleControllerStatusAsyncEvent_ControllerStatusEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_detached_MetaData), Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_detached_MetaData) }; // 471543089
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_attached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::NewProp_detached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerStatusAsyncEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::ClassParams = {
		&USimpleControllerStatusAsyncEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerStatusAsyncEvent()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerStatusAsyncEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerStatusAsyncEvent.OuterSingleton, Z_Construct_UClass_USimpleControllerStatusAsyncEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerStatusAsyncEvent.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerStatusAsyncEvent>()
	{
		return USimpleControllerStatusAsyncEvent::StaticClass();
	}
	USimpleControllerStatusAsyncEvent::USimpleControllerStatusAsyncEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerStatusAsyncEvent);
	USimpleControllerStatusAsyncEvent::~USimpleControllerStatusAsyncEvent() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics
	{
		struct SimpleControllerButtonAsyncEvent_eventControllerButtonEvent_Parms
		{
			int32 buttonID;
			int32 connectionIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerButtonAsyncEvent_eventControllerButtonEvent_Parms, buttonID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_buttonID_MetaData), Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_buttonID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerButtonAsyncEvent_eventControllerButtonEvent_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_connectionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerButtonAsyncEvent_eventControllerButtonEvent_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_device_MetaData), Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_buttonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerButtonAsyncEvent, nullptr, "ControllerButtonEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::SimpleControllerButtonAsyncEvent_eventControllerButtonEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::SimpleControllerButtonAsyncEvent_eventControllerButtonEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerButtonAsyncEvent::FControllerButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerButtonEvent, const int32 buttonID, const int32 connectionIndex, const FSimpleControllerDevice device)
{
	struct SimpleControllerButtonAsyncEvent_eventControllerButtonEvent_Parms
	{
		int32 buttonID;
		int32 connectionIndex;
		FSimpleControllerDevice device;
	};
	SimpleControllerButtonAsyncEvent_eventControllerButtonEvent_Parms Parms;
	Parms.buttonID=buttonID;
	Parms.connectionIndex=connectionIndex;
	Parms.device=device;
	ControllerButtonEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerButtonAsyncEvent::execcontrollerButtonAsyncEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerButtonAsyncEvent**)Z_Param__Result=USimpleControllerButtonAsyncEvent::controllerButtonAsyncEvent();
		P_NATIVE_END;
	}
	void USimpleControllerButtonAsyncEvent::StaticRegisterNativesUSimpleControllerButtonAsyncEvent()
	{
		UClass* Class = USimpleControllerButtonAsyncEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "controllerButtonAsyncEvent", &USimpleControllerButtonAsyncEvent::execcontrollerButtonAsyncEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics
	{
		struct SimpleControllerButtonAsyncEvent_eventcontrollerButtonAsyncEvent_Parms
		{
			USimpleControllerButtonAsyncEvent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerButtonAsyncEvent_eventcontrollerButtonAsyncEvent_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerButtonAsyncEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|AsyncEvents" },
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerButtonAsyncEvent, nullptr, "controllerButtonAsyncEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::SimpleControllerButtonAsyncEvent_eventcontrollerButtonAsyncEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::SimpleControllerButtonAsyncEvent_eventcontrollerButtonAsyncEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerButtonAsyncEvent);
	UClass* Z_Construct_UClass_USimpleControllerButtonAsyncEvent_NoRegister()
	{
		return USimpleControllerButtonAsyncEvent::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonDown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_buttonDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonUp_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_buttonUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerButtonAsyncEvent_controllerButtonAsyncEvent, "controllerButtonAsyncEvent" }, // 1057610675
		{ &Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature, "ControllerButtonEvent__DelegateSignature" }, // 3782705649
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/" },
		{ "IncludePath", "SimpleControllerAsyncEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonDown_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonDown = { "buttonDown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerButtonAsyncEvent, buttonDown), Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonDown_MetaData), Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonDown_MetaData) }; // 3782705649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonUp_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonUp = { "buttonUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerButtonAsyncEvent, buttonUp), Z_Construct_UDelegateFunction_USimpleControllerButtonAsyncEvent_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonUp_MetaData), Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonUp_MetaData) }; // 3782705649
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::NewProp_buttonUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerButtonAsyncEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::ClassParams = {
		&USimpleControllerButtonAsyncEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerButtonAsyncEvent()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerButtonAsyncEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerButtonAsyncEvent.OuterSingleton, Z_Construct_UClass_USimpleControllerButtonAsyncEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerButtonAsyncEvent.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerButtonAsyncEvent>()
	{
		return USimpleControllerButtonAsyncEvent::StaticClass();
	}
	USimpleControllerButtonAsyncEvent::USimpleControllerButtonAsyncEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerButtonAsyncEvent);
	USimpleControllerButtonAsyncEvent::~USimpleControllerButtonAsyncEvent() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics
	{
		struct SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms
		{
			int32 axisID;
			float axisValue;
			int32 connectionIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_axisID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms, axisID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisID_MetaData), Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms, axisValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData), Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_connectionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_device_MetaData), Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_device_MetaData) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerAxisAsyncEvent, nullptr, "ControllerAxisEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerAxisAsyncEvent::FControllerAxisEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxisEvent, const int32 axisID, const float axisValue, const int32 connectionIndex, const FSimpleControllerDevice device)
{
	struct SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms
	{
		int32 axisID;
		float axisValue;
		int32 connectionIndex;
		FSimpleControllerDevice device;
	};
	SimpleControllerAxisAsyncEvent_eventControllerAxisEvent_Parms Parms;
	Parms.axisID=axisID;
	Parms.axisValue=axisValue;
	Parms.connectionIndex=connectionIndex;
	Parms.device=device;
	ControllerAxisEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerAxisAsyncEvent::execcontrollerAxisAsyncEvent)
	{
		P_GET_ENUM(ESimpleControllerEventType,Z_Param_triggerEventIf);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerAxisAsyncEvent**)Z_Param__Result=USimpleControllerAxisAsyncEvent::controllerAxisAsyncEvent(ESimpleControllerEventType(Z_Param_triggerEventIf));
		P_NATIVE_END;
	}
	void USimpleControllerAxisAsyncEvent::StaticRegisterNativesUSimpleControllerAxisAsyncEvent()
	{
		UClass* Class = USimpleControllerAxisAsyncEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "controllerAxisAsyncEvent", &USimpleControllerAxisAsyncEvent::execcontrollerAxisAsyncEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics
	{
		struct SimpleControllerAxisAsyncEvent_eventcontrollerAxisAsyncEvent_Parms
		{
			ESimpleControllerEventType triggerEventIf;
			USimpleControllerAxisAsyncEvent* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_triggerEventIf_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_triggerEventIf;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::NewProp_triggerEventIf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::NewProp_triggerEventIf = { "triggerEventIf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerAxisAsyncEvent_eventcontrollerAxisAsyncEvent_Parms, triggerEventIf), Z_Construct_UEnum_SimpleController_ESimpleControllerEventType, METADATA_PARAMS(0, nullptr) }; // 981907741
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerAxisAsyncEvent_eventcontrollerAxisAsyncEvent_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerAxisAsyncEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::NewProp_triggerEventIf_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::NewProp_triggerEventIf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|AsyncEvents" },
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerAxisAsyncEvent, nullptr, "controllerAxisAsyncEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::SimpleControllerAxisAsyncEvent_eventcontrollerAxisAsyncEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::SimpleControllerAxisAsyncEvent_eventcontrollerAxisAsyncEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerAxisAsyncEvent);
	UClass* Z_Construct_UClass_USimpleControllerAxisAsyncEvent_NoRegister()
	{
		return USimpleControllerAxisAsyncEvent::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerAxisAsyncEvent_controllerAxisAsyncEvent, "controllerAxisAsyncEvent" }, // 1947516620
		{ &Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature, "ControllerAxisEvent__DelegateSignature" }, // 1742220712
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/" },
		{ "IncludePath", "SimpleControllerAsyncEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::NewProp_onAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerAsyncEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::NewProp_onAction = { "onAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerAxisAsyncEvent, onAction), Z_Construct_UDelegateFunction_USimpleControllerAxisAsyncEvent_ControllerAxisEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::NewProp_onAction_MetaData), Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::NewProp_onAction_MetaData) }; // 1742220712
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::NewProp_onAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerAxisAsyncEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::ClassParams = {
		&USimpleControllerAxisAsyncEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerAxisAsyncEvent()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerAxisAsyncEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerAxisAsyncEvent.OuterSingleton, Z_Construct_UClass_USimpleControllerAxisAsyncEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerAxisAsyncEvent.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerAxisAsyncEvent>()
	{
		return USimpleControllerAxisAsyncEvent::StaticClass();
	}
	USimpleControllerAxisAsyncEvent::USimpleControllerAxisAsyncEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerAxisAsyncEvent);
	USimpleControllerAxisAsyncEvent::~USimpleControllerAxisAsyncEvent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerAsyncEvents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerAsyncEvents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleControllerStatusAsyncEvent, USimpleControllerStatusAsyncEvent::StaticClass, TEXT("USimpleControllerStatusAsyncEvent"), &Z_Registration_Info_UClass_USimpleControllerStatusAsyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerStatusAsyncEvent), 4246580049U) },
		{ Z_Construct_UClass_USimpleControllerButtonAsyncEvent, USimpleControllerButtonAsyncEvent::StaticClass, TEXT("USimpleControllerButtonAsyncEvent"), &Z_Registration_Info_UClass_USimpleControllerButtonAsyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerButtonAsyncEvent), 707316884U) },
		{ Z_Construct_UClass_USimpleControllerAxisAsyncEvent, USimpleControllerAxisAsyncEvent::StaticClass, TEXT("USimpleControllerAxisAsyncEvent"), &Z_Registration_Info_UClass_USimpleControllerAxisAsyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerAxisAsyncEvent), 2750221958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerAsyncEvents_h_1609973512(TEXT("/Script/SimpleController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerAsyncEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerAsyncEvents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
