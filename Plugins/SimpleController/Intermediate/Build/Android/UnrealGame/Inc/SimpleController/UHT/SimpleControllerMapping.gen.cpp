// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleControllerMapping.h"
#include "SimpleController/Public/SimpleController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerMapping() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingAxis();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingAxis_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingAxisEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingAxisEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingButton();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingButton_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingCalibrateAxis();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingLoad();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingLoad_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingSave();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMappingSave_NoRegister();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerEventType();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingProfile();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent, nullptr, "ControllerButtonEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerMappedButtonAsyncEvent::FControllerButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerButtonEvent)
{
	ControllerButtonEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerMappedButtonAsyncEvent::execcontrollerEventMappedButton)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerMappedButtonAsyncEvent**)Z_Param__Result=USimpleControllerMappedButtonAsyncEvent::controllerEventMappedButton(Z_Param_mappingProfile,Z_Param_actionName);
		P_NATIVE_END;
	}
	void USimpleControllerMappedButtonAsyncEvent::StaticRegisterNativesUSimpleControllerMappedButtonAsyncEvent()
	{
		UClass* Class = USimpleControllerMappedButtonAsyncEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "controllerEventMappedButton", &USimpleControllerMappedButtonAsyncEvent::execcontrollerEventMappedButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics
	{
		struct SimpleControllerMappedButtonAsyncEvent_eventcontrollerEventMappedButton_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			USimpleControllerMappedButtonAsyncEvent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappedButtonAsyncEvent_eventcontrollerEventMappedButton_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappedButtonAsyncEvent_eventcontrollerEventMappedButton_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappedButtonAsyncEvent_eventcontrollerEventMappedButton_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent, nullptr, "controllerEventMappedButton", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::SimpleControllerMappedButtonAsyncEvent_eventcontrollerEventMappedButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::SimpleControllerMappedButtonAsyncEvent_eventcontrollerEventMappedButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerMappedButtonAsyncEvent);
	UClass* Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_NoRegister()
	{
		return USimpleControllerMappedButtonAsyncEvent::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actionPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_actionPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actionReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_actionReleased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature, "ControllerButtonEvent__DelegateSignature" }, // 2246489660
		{ &Z_Construct_UFunction_USimpleControllerMappedButtonAsyncEvent_controllerEventMappedButton, "controllerEventMappedButton" }, // 693636280
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionPressed = { "actionPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappedButtonAsyncEvent, actionPressed), Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionPressed_MetaData), Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionPressed_MetaData) }; // 2246489660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionReleased = { "actionReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappedButtonAsyncEvent, actionReleased), Z_Construct_UDelegateFunction_USimpleControllerMappedButtonAsyncEvent_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionReleased_MetaData), Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionReleased_MetaData) }; // 2246489660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::NewProp_actionReleased,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerMappedButtonAsyncEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::ClassParams = {
		&USimpleControllerMappedButtonAsyncEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerMappedButtonAsyncEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerMappedButtonAsyncEvent.OuterSingleton, Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerMappedButtonAsyncEvent.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerMappedButtonAsyncEvent>()
	{
		return USimpleControllerMappedButtonAsyncEvent::StaticClass();
	}
	USimpleControllerMappedButtonAsyncEvent::USimpleControllerMappedButtonAsyncEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerMappedButtonAsyncEvent);
	USimpleControllerMappedButtonAsyncEvent::~USimpleControllerMappedButtonAsyncEvent() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics
	{
		struct SimpleControllerMappingAxisEvents_eventControllerAxisEvent_Parms
		{
			float axisValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxisEvents_eventControllerAxisEvent_Parms, axisValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingAxisEvents, nullptr, "ControllerAxisEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::SimpleControllerMappingAxisEvents_eventControllerAxisEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::SimpleControllerMappingAxisEvents_eventControllerAxisEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerMappingAxisEvents::FControllerAxisEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxisEvent, const float axisValue)
{
	struct SimpleControllerMappingAxisEvents_eventControllerAxisEvent_Parms
	{
		float axisValue;
	};
	SimpleControllerMappingAxisEvents_eventControllerAxisEvent_Parms Parms;
	Parms.axisValue=axisValue;
	ControllerAxisEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerMappingAxisEvents::execcontrollerEventMappedAxis)
	{
		P_GET_ENUM(ESimpleControllerEventType,Z_Param_triggerEventIf);
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerMappingAxisEvents**)Z_Param__Result=USimpleControllerMappingAxisEvents::controllerEventMappedAxis(ESimpleControllerEventType(Z_Param_triggerEventIf),Z_Param_mappingProfile,Z_Param_actionName);
		P_NATIVE_END;
	}
	void USimpleControllerMappingAxisEvents::StaticRegisterNativesUSimpleControllerMappingAxisEvents()
	{
		UClass* Class = USimpleControllerMappingAxisEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "controllerEventMappedAxis", &USimpleControllerMappingAxisEvents::execcontrollerEventMappedAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics
	{
		struct SimpleControllerMappingAxisEvents_eventcontrollerEventMappedAxis_Parms
		{
			ESimpleControllerEventType triggerEventIf;
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			USimpleControllerMappingAxisEvents* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_triggerEventIf_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_triggerEventIf;
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_triggerEventIf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_triggerEventIf = { "triggerEventIf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxisEvents_eventcontrollerEventMappedAxis_Parms, triggerEventIf), Z_Construct_UEnum_SimpleController_ESimpleControllerEventType, METADATA_PARAMS(0, nullptr) }; // 981907741
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxisEvents_eventcontrollerEventMappedAxis_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxisEvents_eventcontrollerEventMappedAxis_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxisEvents_eventcontrollerEventMappedAxis_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerMappingAxisEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_triggerEventIf_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_triggerEventIf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingAxisEvents, nullptr, "controllerEventMappedAxis", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::SimpleControllerMappingAxisEvents_eventcontrollerEventMappedAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::SimpleControllerMappingAxisEvents_eventcontrollerEventMappedAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerMappingAxisEvents);
	UClass* Z_Construct_UClass_USimpleControllerMappingAxisEvents_NoRegister()
	{
		return USimpleControllerMappingAxisEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics
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
	UObject* (*const Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature, "ControllerAxisEvent__DelegateSignature" }, // 787182190
		{ &Z_Construct_UFunction_USimpleControllerMappingAxisEvents_controllerEventMappedAxis, "controllerEventMappedAxis" }, // 3987977521
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::NewProp_onAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::NewProp_onAction = { "onAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingAxisEvents, onAction), Z_Construct_UDelegateFunction_USimpleControllerMappingAxisEvents_ControllerAxisEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::NewProp_onAction_MetaData), Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::NewProp_onAction_MetaData) }; // 787182190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::NewProp_onAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerMappingAxisEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::ClassParams = {
		&USimpleControllerMappingAxisEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerMappingAxisEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerMappingAxisEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerMappingAxisEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerMappingAxisEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerMappingAxisEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerMappingAxisEvents>()
	{
		return USimpleControllerMappingAxisEvents::StaticClass();
	}
	USimpleControllerMappingAxisEvents::USimpleControllerMappingAxisEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerMappingAxisEvents);
	USimpleControllerMappingAxisEvents::~USimpleControllerMappingAxisEvents() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics
	{
		struct SimpleControllerMappingButton_eventControllerMappingEvent_Parms
		{
			FSimpleControllerMappingButtonAction action;
			int32 seconds;
			FSimpleControllerDevice usedDevice;
			int32 usedButtonID;
			int32 usedConnectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usedDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_usedDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usedButtonID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_usedButtonID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usedConnectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_usedConnectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventControllerMappingEvent_Parms, action), Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action_MetaData) }; // 708247476
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventControllerMappingEvent_Parms, seconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice = { "usedDevice", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventControllerMappingEvent_Parms, usedDevice), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedButtonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedButtonID = { "usedButtonID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventControllerMappingEvent_Parms, usedButtonID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedButtonID_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedButtonID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex = { "usedConnectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventControllerMappingEvent_Parms, usedConnectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedButtonID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingButton, nullptr, "ControllerMappingEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::SimpleControllerMappingButton_eventControllerMappingEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::SimpleControllerMappingButton_eventControllerMappingEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerMappingButton::FControllerMappingEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerMappingEvent, const FSimpleControllerMappingButtonAction action, const int32 seconds, const FSimpleControllerDevice usedDevice, const int32 usedButtonID, const int32 usedConnectionIndex)
{
	struct SimpleControllerMappingButton_eventControllerMappingEvent_Parms
	{
		FSimpleControllerMappingButtonAction action;
		int32 seconds;
		FSimpleControllerDevice usedDevice;
		int32 usedButtonID;
		int32 usedConnectionIndex;
	};
	SimpleControllerMappingButton_eventControllerMappingEvent_Parms Parms;
	Parms.action=action;
	Parms.seconds=seconds;
	Parms.usedDevice=usedDevice;
	Parms.usedButtonID=usedButtonID;
	Parms.usedConnectionIndex=usedConnectionIndex;
	ControllerMappingEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerMappingButton::execstartMappingButton)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeInSeconds);
		P_GET_UBOOL(Z_Param_allowMultipleMapping);
		P_GET_UBOOL(Z_Param_keyboardButtons);
		P_GET_UBOOL(Z_Param_mousedButtons);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerMappingButton**)Z_Param__Result=USimpleControllerMappingButton::startMappingButton(Z_Param_WorldContextObject,Z_Param_mappingProfile,Z_Param_actionName,Z_Param_timeInSeconds,Z_Param_allowMultipleMapping,Z_Param_keyboardButtons,Z_Param_mousedButtons);
		P_NATIVE_END;
	}
	void USimpleControllerMappingButton::StaticRegisterNativesUSimpleControllerMappingButton()
	{
		UClass* Class = USimpleControllerMappingButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "startMappingButton", &USimpleControllerMappingButton::execstartMappingButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics
	{
		struct SimpleControllerMappingButton_eventstartMappingButton_Parms
		{
			UObject* WorldContextObject;
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			int32 timeInSeconds;
			bool allowMultipleMapping;
			bool keyboardButtons;
			bool mousedButtons;
			USimpleControllerMappingButton* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_timeInSeconds;
		static void NewProp_allowMultipleMapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_allowMultipleMapping;
		static void NewProp_keyboardButtons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_keyboardButtons;
		static void NewProp_mousedButtons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mousedButtons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventstartMappingButton_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventstartMappingButton_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventstartMappingButton_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_timeInSeconds = { "timeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventstartMappingButton_Parms, timeInSeconds), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_allowMultipleMapping_SetBit(void* Obj)
	{
		((SimpleControllerMappingButton_eventstartMappingButton_Parms*)Obj)->allowMultipleMapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_allowMultipleMapping = { "allowMultipleMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerMappingButton_eventstartMappingButton_Parms), &Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_allowMultipleMapping_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_keyboardButtons_SetBit(void* Obj)
	{
		((SimpleControllerMappingButton_eventstartMappingButton_Parms*)Obj)->keyboardButtons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_keyboardButtons = { "keyboardButtons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerMappingButton_eventstartMappingButton_Parms), &Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_keyboardButtons_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_mousedButtons_SetBit(void* Obj)
	{
		((SimpleControllerMappingButton_eventstartMappingButton_Parms*)Obj)->mousedButtons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_mousedButtons = { "mousedButtons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerMappingButton_eventstartMappingButton_Parms), &Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_mousedButtons_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingButton_eventstartMappingButton_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerMappingButton_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_timeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_allowMultipleMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_keyboardButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_mousedButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "Comment", "/**\n\x09* @param keyboardButtons Keyboard inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus. \n\x09* @param mousedButtons Mouse inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus. \n\x09*/" },
		{ "CPP_Default_allowMultipleMapping", "false" },
		{ "CPP_Default_keyboardButtons", "false" },
		{ "CPP_Default_mousedButtons", "false" },
		{ "CPP_Default_timeInSeconds", "5" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
		{ "ToolTip", "@param keyboardButtons Keyboard inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus.\n@param mousedButtons Mouse inputs are also mapped. Important! The Unreal functions are used for this. All project settings are overwritten (only in RAM). Has the usual Unreal problems with Focus." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingButton, nullptr, "startMappingButton", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::SimpleControllerMappingButton_eventstartMappingButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::SimpleControllerMappingButton_eventstartMappingButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerMappingButton);
	UClass* Z_Construct_UClass_USimpleControllerMappingButton_NoRegister()
	{
		return USimpleControllerMappingButton::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerMappingButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successful_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_successful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_error_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_error;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isMapped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_isMapped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeOut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_timeOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_timer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerMappingButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerMappingButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature, "ControllerMappingEvent__DelegateSignature" }, // 4064429598
		{ &Z_Construct_UFunction_USimpleControllerMappingButton_startMappingButton, "startMappingButton" }, // 2042344826
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_successful_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingButton, successful), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_successful_MetaData), Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_successful_MetaData) }; // 4064429598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_error_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingButton, error), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_error_MetaData), Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_error_MetaData) }; // 4064429598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_isMapped_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_isMapped = { "isMapped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingButton, isMapped), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_isMapped_MetaData), Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_isMapped_MetaData) }; // 4064429598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timeOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timeOut = { "timeOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingButton, timeOut), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timeOut_MetaData), Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timeOut_MetaData) }; // 4064429598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timer_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingButton, timer), Z_Construct_UDelegateFunction_USimpleControllerMappingButton_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timer_MetaData), Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timer_MetaData) }; // 4064429598
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerMappingButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_isMapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingButton_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerMappingButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerMappingButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerMappingButton_Statics::ClassParams = {
		&USimpleControllerMappingButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerMappingButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerMappingButton_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingButton_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerMappingButton()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerMappingButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerMappingButton.OuterSingleton, Z_Construct_UClass_USimpleControllerMappingButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerMappingButton.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerMappingButton>()
	{
		return USimpleControllerMappingButton::StaticClass();
	}
	USimpleControllerMappingButton::USimpleControllerMappingButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerMappingButton);
	USimpleControllerMappingButton::~USimpleControllerMappingButton() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics
	{
		struct SimpleControllerMappingAxis_eventControllerMappingEvent_Parms
		{
			FSimpleControllerMappingAxisAction action;
			int32 seconds;
			FSimpleControllerDevice usedDevice;
			int32 usedAxisID;
			int32 usedConnectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usedDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_usedDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usedAxisID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_usedAxisID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_usedConnectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_usedConnectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventControllerMappingEvent_Parms, action), Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action_MetaData) }; // 3232960627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventControllerMappingEvent_Parms, seconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice = { "usedDevice", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventControllerMappingEvent_Parms, usedDevice), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedAxisID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedAxisID = { "usedAxisID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventControllerMappingEvent_Parms, usedAxisID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedAxisID_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedAxisID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex = { "usedConnectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventControllerMappingEvent_Parms, usedConnectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedAxisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::NewProp_usedConnectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingAxis, nullptr, "ControllerMappingEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::SimpleControllerMappingAxis_eventControllerMappingEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::SimpleControllerMappingAxis_eventControllerMappingEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerMappingAxis::FControllerMappingEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerMappingEvent, const FSimpleControllerMappingAxisAction action, const int32 seconds, const FSimpleControllerDevice usedDevice, const int32 usedAxisID, const int32 usedConnectionIndex)
{
	struct SimpleControllerMappingAxis_eventControllerMappingEvent_Parms
	{
		FSimpleControllerMappingAxisAction action;
		int32 seconds;
		FSimpleControllerDevice usedDevice;
		int32 usedAxisID;
		int32 usedConnectionIndex;
	};
	SimpleControllerMappingAxis_eventControllerMappingEvent_Parms Parms;
	Parms.action=action;
	Parms.seconds=seconds;
	Parms.usedDevice=usedDevice;
	Parms.usedAxisID=usedAxisID;
	Parms.usedConnectionIndex=usedConnectionIndex;
	ControllerMappingEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerMappingAxis::execstartMappingAxis)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeInSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minAxisValueToReact);
		P_GET_UBOOL(Z_Param_allowMultipleMapping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerMappingAxis**)Z_Param__Result=USimpleControllerMappingAxis::startMappingAxis(Z_Param_mappingProfile,Z_Param_actionName,Z_Param_timeInSeconds,Z_Param_minAxisValueToReact,Z_Param_allowMultipleMapping);
		P_NATIVE_END;
	}
	void USimpleControllerMappingAxis::StaticRegisterNativesUSimpleControllerMappingAxis()
	{
		UClass* Class = USimpleControllerMappingAxis::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "startMappingAxis", &USimpleControllerMappingAxis::execstartMappingAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics
	{
		struct SimpleControllerMappingAxis_eventstartMappingAxis_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			int32 timeInSeconds;
			float minAxisValueToReact;
			bool allowMultipleMapping;
			USimpleControllerMappingAxis* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_timeInSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minAxisValueToReact;
		static void NewProp_allowMultipleMapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_allowMultipleMapping;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventstartMappingAxis_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventstartMappingAxis_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_timeInSeconds = { "timeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventstartMappingAxis_Parms, timeInSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_minAxisValueToReact = { "minAxisValueToReact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventstartMappingAxis_Parms, minAxisValueToReact), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_allowMultipleMapping_SetBit(void* Obj)
	{
		((SimpleControllerMappingAxis_eventstartMappingAxis_Parms*)Obj)->allowMultipleMapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_allowMultipleMapping = { "allowMultipleMapping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerMappingAxis_eventstartMappingAxis_Parms), &Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_allowMultipleMapping_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingAxis_eventstartMappingAxis_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerMappingAxis_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_timeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_minAxisValueToReact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_allowMultipleMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "CPP_Default_allowMultipleMapping", "false" },
		{ "CPP_Default_minAxisValueToReact", "0.500000" },
		{ "CPP_Default_timeInSeconds", "5" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingAxis, nullptr, "startMappingAxis", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::SimpleControllerMappingAxis_eventstartMappingAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::SimpleControllerMappingAxis_eventstartMappingAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerMappingAxis);
	UClass* Z_Construct_UClass_USimpleControllerMappingAxis_NoRegister()
	{
		return USimpleControllerMappingAxis::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerMappingAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successful_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_successful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_error_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_error;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isMapped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_isMapped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeOut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_timeOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_timer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerMappingAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerMappingAxis_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature, "ControllerMappingEvent__DelegateSignature" }, // 3686543830
		{ &Z_Construct_UFunction_USimpleControllerMappingAxis_startMappingAxis, "startMappingAxis" }, // 3731011146
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingAxis_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_successful_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingAxis, successful), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_successful_MetaData), Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_successful_MetaData) }; // 3686543830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_error_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingAxis, error), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_error_MetaData), Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_error_MetaData) }; // 3686543830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_isMapped_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_isMapped = { "isMapped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingAxis, isMapped), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_isMapped_MetaData), Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_isMapped_MetaData) }; // 3686543830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timeOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timeOut = { "timeOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingAxis, timeOut), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timeOut_MetaData), Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timeOut_MetaData) }; // 3686543830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timer_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingAxis, timer), Z_Construct_UDelegateFunction_USimpleControllerMappingAxis_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timer_MetaData), Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timer_MetaData) }; // 3686543830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerMappingAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_isMapped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingAxis_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerMappingAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerMappingAxis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerMappingAxis_Statics::ClassParams = {
		&USimpleControllerMappingAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerMappingAxis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerMappingAxis_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingAxis_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerMappingAxis()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerMappingAxis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerMappingAxis.OuterSingleton, Z_Construct_UClass_USimpleControllerMappingAxis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerMappingAxis.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerMappingAxis>()
	{
		return USimpleControllerMappingAxis::StaticClass();
	}
	USimpleControllerMappingAxis::USimpleControllerMappingAxis(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerMappingAxis);
	USimpleControllerMappingAxis::~USimpleControllerMappingAxis() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics
	{
		struct SimpleControllerMappingCalibrateAxis_eventControllerCalibrateEvent_Parms
		{
			float axisValue;
			int32 seconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingCalibrateAxis_eventControllerCalibrateEvent_Parms, axisValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_seconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingCalibrateAxis_eventControllerCalibrateEvent_Parms, seconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_seconds_MetaData), Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_seconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::NewProp_seconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingCalibrateAxis, nullptr, "ControllerCalibrateEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::SimpleControllerMappingCalibrateAxis_eventControllerCalibrateEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::SimpleControllerMappingCalibrateAxis_eventControllerCalibrateEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerMappingCalibrateAxis::FControllerCalibrateEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerCalibrateEvent, const float axisValue, const int32 seconds)
{
	struct SimpleControllerMappingCalibrateAxis_eventControllerCalibrateEvent_Parms
	{
		float axisValue;
		int32 seconds;
	};
	SimpleControllerMappingCalibrateAxis_eventControllerCalibrateEvent_Parms Parms;
	Parms.axisValue=axisValue;
	Parms.seconds=seconds;
	ControllerCalibrateEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerMappingCalibrateAxis::execremoveCalibrationFromMappedAxis)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerMappingCalibrateAxis::removeCalibrationFromMappedAxis(Z_Param_mappingProfile,Z_Param_actionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerMappingCalibrateAxis::execcalibrateMappedAxis)
	{
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_GET_PROPERTY(FStrProperty,Z_Param_actionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeInSecondsPerStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerMappingCalibrateAxis**)Z_Param__Result=USimpleControllerMappingCalibrateAxis::calibrateMappedAxis(Z_Param_mappingProfile,Z_Param_actionName,Z_Param_timeInSecondsPerStep);
		P_NATIVE_END;
	}
	void USimpleControllerMappingCalibrateAxis::StaticRegisterNativesUSimpleControllerMappingCalibrateAxis()
	{
		UClass* Class = USimpleControllerMappingCalibrateAxis::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "calibrateMappedAxis", &USimpleControllerMappingCalibrateAxis::execcalibrateMappedAxis },
			{ "removeCalibrationFromMappedAxis", &USimpleControllerMappingCalibrateAxis::execremoveCalibrationFromMappedAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics
	{
		struct SimpleControllerMappingCalibrateAxis_eventcalibrateMappedAxis_Parms
		{
			FSimpleControllerMappingProfile mappingProfile;
			FString actionName;
			int32 timeInSecondsPerStep;
			USimpleControllerMappingCalibrateAxis* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_actionName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_timeInSecondsPerStep;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingCalibrateAxis_eventcalibrateMappedAxis_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingCalibrateAxis_eventcalibrateMappedAxis_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::NewProp_timeInSecondsPerStep = { "timeInSecondsPerStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingCalibrateAxis_eventcalibrateMappedAxis_Parms, timeInSecondsPerStep), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingCalibrateAxis_eventcalibrateMappedAxis_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::NewProp_actionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::NewProp_timeInSecondsPerStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "Comment", "/**\n\x09* The addAxisCorrection function is applied to the mapped axis based on user input. The user must first move the axis to the maximum and then to the minimum. In the case of a pedal, the minimum is when the pedal is released.\n\x09*/" },
		{ "CPP_Default_timeInSecondsPerStep", "2" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
		{ "ToolTip", "The addAxisCorrection function is applied to the mapped axis based on user input. The user must first move the axis to the maximum and then to the minimum. In the case of a pedal, the minimum is when the pedal is released." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingCalibrateAxis, nullptr, "calibrateMappedAxis", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::SimpleControllerMappingCalibrateAxis_eventcalibrateMappedAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::SimpleControllerMappingCalibrateAxis_eventcalibrateMappedAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics
	{
		struct SimpleControllerMappingCalibrateAxis_eventremoveCalibrationFromMappedAxis_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingCalibrateAxis_eventremoveCalibrationFromMappedAxis_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::NewProp_actionName = { "actionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingCalibrateAxis_eventremoveCalibrationFromMappedAxis_Parms, actionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::NewProp_actionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingCalibrateAxis, nullptr, "removeCalibrationFromMappedAxis", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::SimpleControllerMappingCalibrateAxis_eventremoveCalibrationFromMappedAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::SimpleControllerMappingCalibrateAxis_eventremoveCalibrationFromMappedAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerMappingCalibrateAxis);
	UClass* Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_NoRegister()
	{
		return USimpleControllerMappingCalibrateAxis::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finishedMax_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_finishedMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finishedMin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_finishedMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_error_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_error;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_timer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisValueChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_axisValueChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_calibrateMappedAxis, "calibrateMappedAxis" }, // 2253324511
		{ &Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature, "ControllerCalibrateEvent__DelegateSignature" }, // 3667800540
		{ &Z_Construct_UFunction_USimpleControllerMappingCalibrateAxis_removeCalibrationFromMappedAxis, "removeCalibrationFromMappedAxis" }, // 3638665072
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMax = { "finishedMax", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingCalibrateAxis, finishedMax), Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMax_MetaData), Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMax_MetaData) }; // 3667800540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMin = { "finishedMin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingCalibrateAxis, finishedMin), Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMin_MetaData), Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMin_MetaData) }; // 3667800540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_error_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingCalibrateAxis, error), Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_error_MetaData), Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_error_MetaData) }; // 3667800540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_timer_MetaData[] = {
		{ "Comment", "//UPROPERTY(BlueprintAssignable)\n//FControllerCalibrateEvent timeOut;\n" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
		{ "ToolTip", "UPROPERTY(BlueprintAssignable)\nFControllerCalibrateEvent timeOut;" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingCalibrateAxis, timer), Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_timer_MetaData), Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_timer_MetaData) }; // 3667800540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_axisValueChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_axisValueChange = { "axisValueChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingCalibrateAxis, axisValueChange), Z_Construct_UDelegateFunction_USimpleControllerMappingCalibrateAxis_ControllerCalibrateEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_axisValueChange_MetaData), Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_axisValueChange_MetaData) }; // 3667800540
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_finishedMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_timer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::NewProp_axisValueChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerMappingCalibrateAxis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::ClassParams = {
		&USimpleControllerMappingCalibrateAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerMappingCalibrateAxis()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerMappingCalibrateAxis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerMappingCalibrateAxis.OuterSingleton, Z_Construct_UClass_USimpleControllerMappingCalibrateAxis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerMappingCalibrateAxis.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerMappingCalibrateAxis>()
	{
		return USimpleControllerMappingCalibrateAxis::StaticClass();
	}
	USimpleControllerMappingCalibrateAxis::USimpleControllerMappingCalibrateAxis(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerMappingCalibrateAxis);
	USimpleControllerMappingCalibrateAxis::~USimpleControllerMappingCalibrateAxis() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingSave, nullptr, "ControllerMappingEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerMappingSave::FControllerMappingEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerMappingEvent)
{
	ControllerMappingEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerMappingSave::execsaveMappingToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_profileName);
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerMappingSave**)Z_Param__Result=USimpleControllerMappingSave::saveMappingToFile(Z_Param_profileName,Z_Param_mappingProfile);
		P_NATIVE_END;
	}
	void USimpleControllerMappingSave::StaticRegisterNativesUSimpleControllerMappingSave()
	{
		UClass* Class = USimpleControllerMappingSave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "saveMappingToFile", &USimpleControllerMappingSave::execsaveMappingToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics
	{
		struct SimpleControllerMappingSave_eventsaveMappingToFile_Parms
		{
			FString profileName;
			FSimpleControllerMappingProfile mappingProfile;
			USimpleControllerMappingSave* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_profileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::NewProp_profileName = { "profileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingSave_eventsaveMappingToFile_Parms, profileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingSave_eventsaveMappingToFile_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingSave_eventsaveMappingToFile_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerMappingSave_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::NewProp_profileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "Comment", "/**\n\x09* The file is saved in the directory from the Unreal function \"ProjectSavedDir\". \n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
		{ "ToolTip", "The file is saved in the directory from the Unreal function \"ProjectSavedDir\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingSave, nullptr, "saveMappingToFile", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::SimpleControllerMappingSave_eventsaveMappingToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::SimpleControllerMappingSave_eventsaveMappingToFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerMappingSave);
	UClass* Z_Construct_UClass_USimpleControllerMappingSave_NoRegister()
	{
		return USimpleControllerMappingSave::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerMappingSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successful_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_successful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_failed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerMappingSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingSave_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerMappingSave_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature, "ControllerMappingEvent__DelegateSignature" }, // 1340322950
		{ &Z_Construct_UFunction_USimpleControllerMappingSave_saveMappingToFile, "saveMappingToFile" }, // 1405078486
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingSave_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingSave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_successful_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingSave, successful), Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_successful_MetaData), Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_successful_MetaData) }; // 1340322950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_failed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_failed = { "failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingSave, failed), Z_Construct_UDelegateFunction_USimpleControllerMappingSave_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_failed_MetaData), Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_failed_MetaData) }; // 1340322950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerMappingSave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingSave_Statics::NewProp_failed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerMappingSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerMappingSave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerMappingSave_Statics::ClassParams = {
		&USimpleControllerMappingSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerMappingSave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingSave_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingSave_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerMappingSave_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingSave_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerMappingSave()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerMappingSave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerMappingSave.OuterSingleton, Z_Construct_UClass_USimpleControllerMappingSave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerMappingSave.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerMappingSave>()
	{
		return USimpleControllerMappingSave::StaticClass();
	}
	USimpleControllerMappingSave::USimpleControllerMappingSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerMappingSave);
	USimpleControllerMappingSave::~USimpleControllerMappingSave() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingLoad, nullptr, "ControllerMappingEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerMappingLoad::FControllerMappingEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerMappingEvent)
{
	ControllerMappingEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerMappingLoad::execloadMappingFromFile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_profileName);
		P_GET_STRUCT(FSimpleControllerMappingProfile,Z_Param_mappingProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerMappingLoad**)Z_Param__Result=USimpleControllerMappingLoad::loadMappingFromFile(Z_Param_WorldContextObject,Z_Param_profileName,Z_Param_mappingProfile);
		P_NATIVE_END;
	}
	void USimpleControllerMappingLoad::StaticRegisterNativesUSimpleControllerMappingLoad()
	{
		UClass* Class = USimpleControllerMappingLoad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "loadMappingFromFile", &USimpleControllerMappingLoad::execloadMappingFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics
	{
		struct SimpleControllerMappingLoad_eventloadMappingFromFile_Parms
		{
			UObject* WorldContextObject;
			FString profileName;
			FSimpleControllerMappingProfile mappingProfile;
			USimpleControllerMappingLoad* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_profileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_mappingProfile;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingLoad_eventloadMappingFromFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::NewProp_profileName = { "profileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingLoad_eventloadMappingFromFile_Parms, profileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::NewProp_mappingProfile = { "mappingProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingLoad_eventloadMappingFromFile_Parms, mappingProfile), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, METADATA_PARAMS(0, nullptr) }; // 1352928207
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerMappingLoad_eventloadMappingFromFile_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerMappingLoad_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::NewProp_profileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::NewProp_mappingProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Mapping" },
		{ "Comment", "/**\n\x09* The file is loaded from the directory from the Unreal function \"ProjectSavedDir\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
		{ "ToolTip", "The file is loaded from the directory from the Unreal function \"ProjectSavedDir\"." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerMappingLoad, nullptr, "loadMappingFromFile", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::SimpleControllerMappingLoad_eventloadMappingFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::SimpleControllerMappingLoad_eventloadMappingFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerMappingLoad);
	UClass* Z_Construct_UClass_USimpleControllerMappingLoad_NoRegister()
	{
		return USimpleControllerMappingLoad::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerMappingLoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_successful_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_successful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_failed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerMappingLoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingLoad_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerMappingLoad_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature, "ControllerMappingEvent__DelegateSignature" }, // 279773706
		{ &Z_Construct_UFunction_USimpleControllerMappingLoad_loadMappingFromFile, "loadMappingFromFile" }, // 1010042828
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingLoad_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingLoad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_successful_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingLoad, successful), Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_successful_MetaData), Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_successful_MetaData) }; // 279773706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_failed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerMapping.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_failed = { "failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerMappingLoad, failed), Z_Construct_UDelegateFunction_USimpleControllerMappingLoad_ControllerMappingEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_failed_MetaData), Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_failed_MetaData) }; // 279773706
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerMappingLoad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_successful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerMappingLoad_Statics::NewProp_failed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerMappingLoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerMappingLoad>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerMappingLoad_Statics::ClassParams = {
		&USimpleControllerMappingLoad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerMappingLoad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingLoad_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingLoad_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerMappingLoad_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMappingLoad_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerMappingLoad()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerMappingLoad.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerMappingLoad.OuterSingleton, Z_Construct_UClass_USimpleControllerMappingLoad_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerMappingLoad.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerMappingLoad>()
	{
		return USimpleControllerMappingLoad::StaticClass();
	}
	USimpleControllerMappingLoad::USimpleControllerMappingLoad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerMappingLoad);
	USimpleControllerMappingLoad::~USimpleControllerMappingLoad() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMapping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleControllerMappedButtonAsyncEvent, USimpleControllerMappedButtonAsyncEvent::StaticClass, TEXT("USimpleControllerMappedButtonAsyncEvent"), &Z_Registration_Info_UClass_USimpleControllerMappedButtonAsyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerMappedButtonAsyncEvent), 3507379727U) },
		{ Z_Construct_UClass_USimpleControllerMappingAxisEvents, USimpleControllerMappingAxisEvents::StaticClass, TEXT("USimpleControllerMappingAxisEvents"), &Z_Registration_Info_UClass_USimpleControllerMappingAxisEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerMappingAxisEvents), 3844134141U) },
		{ Z_Construct_UClass_USimpleControllerMappingButton, USimpleControllerMappingButton::StaticClass, TEXT("USimpleControllerMappingButton"), &Z_Registration_Info_UClass_USimpleControllerMappingButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerMappingButton), 176974735U) },
		{ Z_Construct_UClass_USimpleControllerMappingAxis, USimpleControllerMappingAxis::StaticClass, TEXT("USimpleControllerMappingAxis"), &Z_Registration_Info_UClass_USimpleControllerMappingAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerMappingAxis), 1680795533U) },
		{ Z_Construct_UClass_USimpleControllerMappingCalibrateAxis, USimpleControllerMappingCalibrateAxis::StaticClass, TEXT("USimpleControllerMappingCalibrateAxis"), &Z_Registration_Info_UClass_USimpleControllerMappingCalibrateAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerMappingCalibrateAxis), 1618894673U) },
		{ Z_Construct_UClass_USimpleControllerMappingSave, USimpleControllerMappingSave::StaticClass, TEXT("USimpleControllerMappingSave"), &Z_Registration_Info_UClass_USimpleControllerMappingSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerMappingSave), 637826024U) },
		{ Z_Construct_UClass_USimpleControllerMappingLoad, USimpleControllerMappingLoad::StaticClass, TEXT("USimpleControllerMappingLoad"), &Z_Registration_Info_UClass_USimpleControllerMappingLoad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerMappingLoad), 309106659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMapping_h_244697231(TEXT("/Script/SimpleController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMapping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
