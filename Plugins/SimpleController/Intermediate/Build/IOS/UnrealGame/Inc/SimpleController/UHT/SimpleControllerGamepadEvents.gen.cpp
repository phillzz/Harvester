// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleControllerGamepadEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerGamepadEvents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_NoRegister();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerEventType();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents, nullptr, "ControllerButtonEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerGamepadFaceButtonEvents::FControllerButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerButtonEvent)
{
	ControllerButtonEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerGamepadFaceButtonEvents::execgamepadEventFaceButtons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerGamepadFaceButtonEvents**)Z_Param__Result=USimpleControllerGamepadFaceButtonEvents::gamepadEventFaceButtons(Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerGamepadFaceButtonEvents::StaticRegisterNativesUSimpleControllerGamepadFaceButtonEvents()
	{
		UClass* Class = USimpleControllerGamepadFaceButtonEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "gamepadEventFaceButtons", &USimpleControllerGamepadFaceButtonEvents::execgamepadEventFaceButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics
	{
		struct SimpleControllerGamepadFaceButtonEvents_eventgamepadEventFaceButtons_Parms
		{
			int32 connectionIndex;
			USimpleControllerGamepadFaceButtonEvents* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadFaceButtonEvents_eventgamepadEventFaceButtons_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadFaceButtonEvents_eventgamepadEventFaceButtons_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Gamepad|Buttons" },
		{ "Comment", "/*UObject* WorldContextObject,*/" },
		{ "CPP_Default_connectionIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
		{ "ToolTip", "UObject* WorldContextObject," },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents, nullptr, "gamepadEventFaceButtons", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::SimpleControllerGamepadFaceButtonEvents_eventgamepadEventFaceButtons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::SimpleControllerGamepadFaceButtonEvents_eventgamepadEventFaceButtons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerGamepadFaceButtonEvents);
	UClass* Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_NoRegister()
	{
		return USimpleControllerGamepadFaceButtonEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bottomPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_bottomPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bottomReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_bottomReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_topPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_topReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftReleased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, "ControllerButtonEvent__DelegateSignature" }, // 22608616
		{ &Z_Construct_UFunction_USimpleControllerGamepadFaceButtonEvents_gamepadEventFaceButtons, "gamepadEventFaceButtons" }, // 3618399393
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerGamepadEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomPressed = { "bottomPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadFaceButtonEvents, bottomPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomPressed_MetaData) }; // 22608616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomReleased = { "bottomReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadFaceButtonEvents, bottomReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomReleased_MetaData) }; // 22608616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topPressed = { "topPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadFaceButtonEvents, topPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topPressed_MetaData) }; // 22608616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topReleased = { "topReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadFaceButtonEvents, topReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topReleased_MetaData) }; // 22608616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightPressed = { "rightPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadFaceButtonEvents, rightPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightPressed_MetaData) }; // 22608616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightReleased = { "rightReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadFaceButtonEvents, rightReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightReleased_MetaData) }; // 22608616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftPressed = { "leftPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadFaceButtonEvents, leftPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftPressed_MetaData) }; // 22608616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftReleased = { "leftReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadFaceButtonEvents, leftReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadFaceButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftReleased_MetaData) }; // 22608616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_bottomReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_topReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_rightReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::NewProp_leftReleased,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerGamepadFaceButtonEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::ClassParams = {
		&USimpleControllerGamepadFaceButtonEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerGamepadFaceButtonEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerGamepadFaceButtonEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerGamepadFaceButtonEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerGamepadFaceButtonEvents>()
	{
		return USimpleControllerGamepadFaceButtonEvents::StaticClass();
	}
	USimpleControllerGamepadFaceButtonEvents::USimpleControllerGamepadFaceButtonEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerGamepadFaceButtonEvents);
	USimpleControllerGamepadFaceButtonEvents::~USimpleControllerGamepadFaceButtonEvents() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents, nullptr, "ControllerButtonEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerGamepadControlButtonEvents::FControllerButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerButtonEvent)
{
	ControllerButtonEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerGamepadControlButtonEvents::execgamepadEventControlButtons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerGamepadControlButtonEvents**)Z_Param__Result=USimpleControllerGamepadControlButtonEvents::gamepadEventControlButtons(Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerGamepadControlButtonEvents::StaticRegisterNativesUSimpleControllerGamepadControlButtonEvents()
	{
		UClass* Class = USimpleControllerGamepadControlButtonEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "gamepadEventControlButtons", &USimpleControllerGamepadControlButtonEvents::execgamepadEventControlButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics
	{
		struct SimpleControllerGamepadControlButtonEvents_eventgamepadEventControlButtons_Parms
		{
			int32 connectionIndex;
			USimpleControllerGamepadControlButtonEvents* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadControlButtonEvents_eventgamepadEventControlButtons_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadControlButtonEvents_eventgamepadEventControlButtons_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Gamepad|Buttons" },
		{ "CPP_Default_connectionIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents, nullptr, "gamepadEventControlButtons", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::SimpleControllerGamepadControlButtonEvents_eventgamepadEventControlButtons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::SimpleControllerGamepadControlButtonEvents_eventgamepadEventControlButtons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerGamepadControlButtonEvents);
	UClass* Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_NoRegister()
	{
		return USimpleControllerGamepadControlButtonEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_backPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_backPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_backReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_backReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_startPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_startReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guidePressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_guidePressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_guideReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_guideReleased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature, "ControllerButtonEvent__DelegateSignature" }, // 1006896227
		{ &Z_Construct_UFunction_USimpleControllerGamepadControlButtonEvents_gamepadEventControlButtons, "gamepadEventControlButtons" }, // 1868401571
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerGamepadEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backPressed = { "backPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadControlButtonEvents, backPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backPressed_MetaData) }; // 1006896227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backReleased = { "backReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadControlButtonEvents, backReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backReleased_MetaData) }; // 1006896227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startPressed = { "startPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadControlButtonEvents, startPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startPressed_MetaData) }; // 1006896227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startReleased = { "startReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadControlButtonEvents, startReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startReleased_MetaData) }; // 1006896227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guidePressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guidePressed = { "guidePressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadControlButtonEvents, guidePressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guidePressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guidePressed_MetaData) }; // 1006896227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guideReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guideReleased = { "guideReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadControlButtonEvents, guideReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadControlButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guideReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guideReleased_MetaData) }; // 1006896227
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_backReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_startReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guidePressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::NewProp_guideReleased,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerGamepadControlButtonEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::ClassParams = {
		&USimpleControllerGamepadControlButtonEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerGamepadControlButtonEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerGamepadControlButtonEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerGamepadControlButtonEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerGamepadControlButtonEvents>()
	{
		return USimpleControllerGamepadControlButtonEvents::StaticClass();
	}
	USimpleControllerGamepadControlButtonEvents::USimpleControllerGamepadControlButtonEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerGamepadControlButtonEvents);
	USimpleControllerGamepadControlButtonEvents::~USimpleControllerGamepadControlButtonEvents() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents, nullptr, "ControllerButtonEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerGamepadStickButtonEvents::FControllerButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerButtonEvent)
{
	ControllerButtonEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerGamepadStickButtonEvents::execgamepadEventStickButtons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerGamepadStickButtonEvents**)Z_Param__Result=USimpleControllerGamepadStickButtonEvents::gamepadEventStickButtons(Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerGamepadStickButtonEvents::StaticRegisterNativesUSimpleControllerGamepadStickButtonEvents()
	{
		UClass* Class = USimpleControllerGamepadStickButtonEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "gamepadEventStickButtons", &USimpleControllerGamepadStickButtonEvents::execgamepadEventStickButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics
	{
		struct SimpleControllerGamepadStickButtonEvents_eventgamepadEventStickButtons_Parms
		{
			int32 connectionIndex;
			USimpleControllerGamepadStickButtonEvents* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadStickButtonEvents_eventgamepadEventStickButtons_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadStickButtonEvents_eventgamepadEventStickButtons_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Gamepad|Buttons" },
		{ "CPP_Default_connectionIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents, nullptr, "gamepadEventStickButtons", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::SimpleControllerGamepadStickButtonEvents_eventgamepadEventStickButtons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::SimpleControllerGamepadStickButtonEvents_eventgamepadEventStickButtons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerGamepadStickButtonEvents);
	UClass* Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_NoRegister()
	{
		return USimpleControllerGamepadStickButtonEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftStickPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftStickPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftStickReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftStickReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightStickPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightStickPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightStickReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightStickReleased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature, "ControllerButtonEvent__DelegateSignature" }, // 209688316
		{ &Z_Construct_UFunction_USimpleControllerGamepadStickButtonEvents_gamepadEventStickButtons, "gamepadEventStickButtons" }, // 2286599147
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerGamepadEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickPressed = { "leftStickPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadStickButtonEvents, leftStickPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickPressed_MetaData) }; // 209688316
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickReleased = { "leftStickReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadStickButtonEvents, leftStickReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickReleased_MetaData) }; // 209688316
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickPressed = { "rightStickPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadStickButtonEvents, rightStickPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickPressed_MetaData) }; // 209688316
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickReleased = { "rightStickReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadStickButtonEvents, rightStickReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickReleased_MetaData) }; // 209688316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_leftStickReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::NewProp_rightStickReleased,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerGamepadStickButtonEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::ClassParams = {
		&USimpleControllerGamepadStickButtonEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerGamepadStickButtonEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerGamepadStickButtonEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerGamepadStickButtonEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerGamepadStickButtonEvents>()
	{
		return USimpleControllerGamepadStickButtonEvents::StaticClass();
	}
	USimpleControllerGamepadStickButtonEvents::USimpleControllerGamepadStickButtonEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerGamepadStickButtonEvents);
	USimpleControllerGamepadStickButtonEvents::~USimpleControllerGamepadStickButtonEvents() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents, nullptr, "ControllerButtonEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerGamepadShoulderButtonEvents::FControllerButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerButtonEvent)
{
	ControllerButtonEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerGamepadShoulderButtonEvents::execgamepadEventShoulderButtons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerGamepadShoulderButtonEvents**)Z_Param__Result=USimpleControllerGamepadShoulderButtonEvents::gamepadEventShoulderButtons(Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerGamepadShoulderButtonEvents::StaticRegisterNativesUSimpleControllerGamepadShoulderButtonEvents()
	{
		UClass* Class = USimpleControllerGamepadShoulderButtonEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "gamepadEventShoulderButtons", &USimpleControllerGamepadShoulderButtonEvents::execgamepadEventShoulderButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics
	{
		struct SimpleControllerGamepadShoulderButtonEvents_eventgamepadEventShoulderButtons_Parms
		{
			int32 connectionIndex;
			USimpleControllerGamepadShoulderButtonEvents* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadShoulderButtonEvents_eventgamepadEventShoulderButtons_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadShoulderButtonEvents_eventgamepadEventShoulderButtons_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Gamepad|Buttons" },
		{ "CPP_Default_connectionIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents, nullptr, "gamepadEventShoulderButtons", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::SimpleControllerGamepadShoulderButtonEvents_eventgamepadEventShoulderButtons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::SimpleControllerGamepadShoulderButtonEvents_eventgamepadEventShoulderButtons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerGamepadShoulderButtonEvents);
	UClass* Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_NoRegister()
	{
		return USimpleControllerGamepadShoulderButtonEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftShoulderPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftShoulderPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftShoulderReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftShoulderReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightShoulderPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightShoulderPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightShoulderReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightShoulderReleased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature, "ControllerButtonEvent__DelegateSignature" }, // 2863585648
		{ &Z_Construct_UFunction_USimpleControllerGamepadShoulderButtonEvents_gamepadEventShoulderButtons, "gamepadEventShoulderButtons" }, // 3431960052
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerGamepadEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderPressed = { "leftShoulderPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadShoulderButtonEvents, leftShoulderPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderPressed_MetaData) }; // 2863585648
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderReleased = { "leftShoulderReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadShoulderButtonEvents, leftShoulderReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderReleased_MetaData) }; // 2863585648
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderPressed = { "rightShoulderPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadShoulderButtonEvents, rightShoulderPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderPressed_MetaData) }; // 2863585648
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderReleased = { "rightShoulderReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadShoulderButtonEvents, rightShoulderReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadShoulderButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderReleased_MetaData) }; // 2863585648
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_leftShoulderReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::NewProp_rightShoulderReleased,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerGamepadShoulderButtonEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::ClassParams = {
		&USimpleControllerGamepadShoulderButtonEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerGamepadShoulderButtonEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerGamepadShoulderButtonEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerGamepadShoulderButtonEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerGamepadShoulderButtonEvents>()
	{
		return USimpleControllerGamepadShoulderButtonEvents::StaticClass();
	}
	USimpleControllerGamepadShoulderButtonEvents::USimpleControllerGamepadShoulderButtonEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerGamepadShoulderButtonEvents);
	USimpleControllerGamepadShoulderButtonEvents::~USimpleControllerGamepadShoulderButtonEvents() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents, nullptr, "ControllerButtonEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerGamepadDpadButtonEvents::FControllerButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerButtonEvent)
{
	ControllerButtonEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerGamepadDpadButtonEvents::execgamepadEventDpadButtons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerGamepadDpadButtonEvents**)Z_Param__Result=USimpleControllerGamepadDpadButtonEvents::gamepadEventDpadButtons(Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerGamepadDpadButtonEvents::StaticRegisterNativesUSimpleControllerGamepadDpadButtonEvents()
	{
		UClass* Class = USimpleControllerGamepadDpadButtonEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "gamepadEventDpadButtons", &USimpleControllerGamepadDpadButtonEvents::execgamepadEventDpadButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics
	{
		struct SimpleControllerGamepadDpadButtonEvents_eventgamepadEventDpadButtons_Parms
		{
			int32 connectionIndex;
			USimpleControllerGamepadDpadButtonEvents* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadDpadButtonEvents_eventgamepadEventDpadButtons_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadDpadButtonEvents_eventgamepadEventDpadButtons_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Gamepad|Buttons" },
		{ "CPP_Default_connectionIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents, nullptr, "gamepadEventDpadButtons", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::SimpleControllerGamepadDpadButtonEvents_eventgamepadEventDpadButtons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::SimpleControllerGamepadDpadButtonEvents_eventgamepadEventDpadButtons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerGamepadDpadButtonEvents);
	UClass* Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_NoRegister()
	{
		return USimpleControllerGamepadDpadButtonEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bottomDpadPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_bottomDpadPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bottomDpadReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_bottomDpadReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topDpadPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_topDpadPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topDpadReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_topDpadReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightDpadPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightDpadPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightDpadReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightDpadReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftDpadPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftDpadPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftDpadReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftDpadReleased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, "ControllerButtonEvent__DelegateSignature" }, // 2628094987
		{ &Z_Construct_UFunction_USimpleControllerGamepadDpadButtonEvents_gamepadEventDpadButtons, "gamepadEventDpadButtons" }, // 2588551993
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerGamepadEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadPressed = { "bottomDpadPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadDpadButtonEvents, bottomDpadPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadPressed_MetaData) }; // 2628094987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadReleased = { "bottomDpadReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadDpadButtonEvents, bottomDpadReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadReleased_MetaData) }; // 2628094987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadPressed = { "topDpadPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadDpadButtonEvents, topDpadPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadPressed_MetaData) }; // 2628094987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadReleased = { "topDpadReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadDpadButtonEvents, topDpadReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadReleased_MetaData) }; // 2628094987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadPressed = { "rightDpadPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadDpadButtonEvents, rightDpadPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadPressed_MetaData) }; // 2628094987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadReleased = { "rightDpadReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadDpadButtonEvents, rightDpadReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadReleased_MetaData) }; // 2628094987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadPressed = { "leftDpadPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadDpadButtonEvents, leftDpadPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadPressed_MetaData) }; // 2628094987
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadReleased = { "leftDpadReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadDpadButtonEvents, leftDpadReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadDpadButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadReleased_MetaData) }; // 2628094987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_bottomDpadReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_topDpadReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_rightDpadReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::NewProp_leftDpadReleased,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerGamepadDpadButtonEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::ClassParams = {
		&USimpleControllerGamepadDpadButtonEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerGamepadDpadButtonEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerGamepadDpadButtonEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerGamepadDpadButtonEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerGamepadDpadButtonEvents>()
	{
		return USimpleControllerGamepadDpadButtonEvents::StaticClass();
	}
	USimpleControllerGamepadDpadButtonEvents::USimpleControllerGamepadDpadButtonEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerGamepadDpadButtonEvents);
	USimpleControllerGamepadDpadButtonEvents::~USimpleControllerGamepadDpadButtonEvents() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents, nullptr, "ControllerButtonEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerGamepadSpecialButtonEvents::FControllerButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerButtonEvent)
{
	ControllerButtonEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USimpleControllerGamepadSpecialButtonEvents::execgamepadEventSpecialButtons)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerGamepadSpecialButtonEvents**)Z_Param__Result=USimpleControllerGamepadSpecialButtonEvents::gamepadEventSpecialButtons(Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerGamepadSpecialButtonEvents::StaticRegisterNativesUSimpleControllerGamepadSpecialButtonEvents()
	{
		UClass* Class = USimpleControllerGamepadSpecialButtonEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "gamepadEventSpecialButtons", &USimpleControllerGamepadSpecialButtonEvents::execgamepadEventSpecialButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics
	{
		struct SimpleControllerGamepadSpecialButtonEvents_eventgamepadEventSpecialButtons_Parms
		{
			int32 connectionIndex;
			USimpleControllerGamepadSpecialButtonEvents* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadSpecialButtonEvents_eventgamepadEventSpecialButtons_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadSpecialButtonEvents_eventgamepadEventSpecialButtons_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Gamepad|Buttons" },
		{ "CPP_Default_connectionIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents, nullptr, "gamepadEventSpecialButtons", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::SimpleControllerGamepadSpecialButtonEvents_eventgamepadEventSpecialButtons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::SimpleControllerGamepadSpecialButtonEvents_eventgamepadEventSpecialButtons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerGamepadSpecialButtonEvents);
	UClass* Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_NoRegister()
	{
		return USimpleControllerGamepadSpecialButtonEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Misc1Pressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Misc1Pressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Misc1Released_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Misc1Released;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxElitePaddleP1Pressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_XboxElitePaddleP1Pressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxElitePaddleP1Released_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_XboxElitePaddleP1Released;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxElitePaddleP2Pressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_XboxElitePaddleP2Pressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxElitePaddleP2Released_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_XboxElitePaddleP2Released;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxElitePaddleP3Pressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_XboxElitePaddleP3Pressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxElitePaddleP3Released_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_XboxElitePaddleP3Released;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxElitePaddleP4Pressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_XboxElitePaddleP4Pressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XboxElitePaddleP4Released_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_XboxElitePaddleP4Released;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PSTouchpadPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PSTouchpadPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PSTouchpadReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PSTouchpadReleased;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, "ControllerButtonEvent__DelegateSignature" }, // 1805092930
		{ &Z_Construct_UFunction_USimpleControllerGamepadSpecialButtonEvents_gamepadEventSpecialButtons, "gamepadEventSpecialButtons" }, // 1501157825
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerGamepadEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Pressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Pressed = { "Misc1Pressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, Misc1Pressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Pressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Pressed_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Released_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Released = { "Misc1Released", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, Misc1Released), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Released_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Released_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Pressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Pressed = { "XboxElitePaddleP1Pressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, XboxElitePaddleP1Pressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Pressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Pressed_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Released_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Released = { "XboxElitePaddleP1Released", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, XboxElitePaddleP1Released), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Released_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Released_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Pressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Pressed = { "XboxElitePaddleP2Pressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, XboxElitePaddleP2Pressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Pressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Pressed_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Released_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Released = { "XboxElitePaddleP2Released", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, XboxElitePaddleP2Released), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Released_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Released_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Pressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Pressed = { "XboxElitePaddleP3Pressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, XboxElitePaddleP3Pressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Pressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Pressed_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Released_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Released = { "XboxElitePaddleP3Released", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, XboxElitePaddleP3Released), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Released_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Released_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Pressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Pressed = { "XboxElitePaddleP4Pressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, XboxElitePaddleP4Pressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Pressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Pressed_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Released_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Released = { "XboxElitePaddleP4Released", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, XboxElitePaddleP4Released), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Released_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Released_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadPressed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadPressed = { "PSTouchpadPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, PSTouchpadPressed), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadPressed_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadPressed_MetaData) }; // 1805092930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadReleased_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadReleased = { "PSTouchpadReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadSpecialButtonEvents, PSTouchpadReleased), Z_Construct_UDelegateFunction_USimpleControllerGamepadSpecialButtonEvents_ControllerButtonEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadReleased_MetaData), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadReleased_MetaData) }; // 1805092930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_Misc1Released,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP1Released,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP2Released,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP3Released,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Pressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_XboxElitePaddleP4Released,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::NewProp_PSTouchpadReleased,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerGamepadSpecialButtonEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::ClassParams = {
		&USimpleControllerGamepadSpecialButtonEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerGamepadSpecialButtonEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerGamepadSpecialButtonEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerGamepadSpecialButtonEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerGamepadSpecialButtonEvents>()
	{
		return USimpleControllerGamepadSpecialButtonEvents::StaticClass();
	}
	USimpleControllerGamepadSpecialButtonEvents::USimpleControllerGamepadSpecialButtonEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerGamepadSpecialButtonEvents);
	USimpleControllerGamepadSpecialButtonEvents::~USimpleControllerGamepadSpecialButtonEvents() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics
	{
		struct SimpleControllerGamepadStickAxisEvents_eventControllerAxisEvent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadStickAxisEvents_eventControllerAxisEvent_Parms, axisValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents, nullptr, "ControllerAxisEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::SimpleControllerGamepadStickAxisEvents_eventControllerAxisEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::SimpleControllerGamepadStickAxisEvents_eventControllerAxisEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerGamepadStickAxisEvents::FControllerAxisEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxisEvent, const float axisValue)
{
	struct SimpleControllerGamepadStickAxisEvents_eventControllerAxisEvent_Parms
	{
		float axisValue;
	};
	SimpleControllerGamepadStickAxisEvents_eventControllerAxisEvent_Parms Parms;
	Parms.axisValue=axisValue;
	ControllerAxisEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerGamepadStickAxisEvents::execgamepadEventStickAxis)
	{
		P_GET_ENUM(ESimpleControllerEventType,Z_Param_triggerEventIf);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerGamepadStickAxisEvents**)Z_Param__Result=USimpleControllerGamepadStickAxisEvents::gamepadEventStickAxis(ESimpleControllerEventType(Z_Param_triggerEventIf),Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerGamepadStickAxisEvents::StaticRegisterNativesUSimpleControllerGamepadStickAxisEvents()
	{
		UClass* Class = USimpleControllerGamepadStickAxisEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "gamepadEventStickAxis", &USimpleControllerGamepadStickAxisEvents::execgamepadEventStickAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics
	{
		struct SimpleControllerGamepadStickAxisEvents_eventgamepadEventStickAxis_Parms
		{
			ESimpleControllerEventType triggerEventIf;
			int32 connectionIndex;
			USimpleControllerGamepadStickAxisEvents* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_triggerEventIf_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_triggerEventIf;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::NewProp_triggerEventIf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::NewProp_triggerEventIf = { "triggerEventIf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadStickAxisEvents_eventgamepadEventStickAxis_Parms, triggerEventIf), Z_Construct_UEnum_SimpleController_ESimpleControllerEventType, METADATA_PARAMS(0, nullptr) }; // 981907741
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadStickAxisEvents_eventgamepadEventStickAxis_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadStickAxisEvents_eventgamepadEventStickAxis_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::NewProp_triggerEventIf_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::NewProp_triggerEventIf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Gamepad|Axis" },
		{ "CPP_Default_connectionIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents, nullptr, "gamepadEventStickAxis", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::SimpleControllerGamepadStickAxisEvents_eventgamepadEventStickAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::SimpleControllerGamepadStickAxisEvents_eventgamepadEventStickAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerGamepadStickAxisEvents);
	UClass* Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_NoRegister()
	{
		return USimpleControllerGamepadStickAxisEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftStickX_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftStickX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftStickY_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftStickY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightStickX_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightStickX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightStickY_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightStickY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature, "ControllerAxisEvent__DelegateSignature" }, // 1306276920
		{ &Z_Construct_UFunction_USimpleControllerGamepadStickAxisEvents_gamepadEventStickAxis, "gamepadEventStickAxis" }, // 306006599
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerGamepadEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickX_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickX = { "leftStickX", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadStickAxisEvents, leftStickX), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickX_MetaData), Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickX_MetaData) }; // 1306276920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickY_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickY = { "leftStickY", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadStickAxisEvents, leftStickY), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickY_MetaData), Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickY_MetaData) }; // 1306276920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickX_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickX = { "rightStickX", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadStickAxisEvents, rightStickX), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickX_MetaData), Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickX_MetaData) }; // 1306276920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickY_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickY = { "rightStickY", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadStickAxisEvents, rightStickY), Z_Construct_UDelegateFunction_USimpleControllerGamepadStickAxisEvents_ControllerAxisEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickY_MetaData), Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickY_MetaData) }; // 1306276920
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_leftStickY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::NewProp_rightStickY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerGamepadStickAxisEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::ClassParams = {
		&USimpleControllerGamepadStickAxisEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerGamepadStickAxisEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerGamepadStickAxisEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerGamepadStickAxisEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerGamepadStickAxisEvents>()
	{
		return USimpleControllerGamepadStickAxisEvents::StaticClass();
	}
	USimpleControllerGamepadStickAxisEvents::USimpleControllerGamepadStickAxisEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerGamepadStickAxisEvents);
	USimpleControllerGamepadStickAxisEvents::~USimpleControllerGamepadStickAxisEvents() {}
	struct Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics
	{
		struct SimpleControllerGamepadTriggerAxisEvents_eventControllerAxisEvent_Parms
		{
			float axisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadTriggerAxisEvents_eventControllerAxisEvent_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents, nullptr, "ControllerAxisEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::SimpleControllerGamepadTriggerAxisEvents_eventControllerAxisEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::SimpleControllerGamepadTriggerAxisEvents_eventControllerAxisEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerGamepadTriggerAxisEvents::FControllerAxisEvent_DelegateWrapper(const FMulticastScriptDelegate& ControllerAxisEvent, float axisValue)
{
	struct SimpleControllerGamepadTriggerAxisEvents_eventControllerAxisEvent_Parms
	{
		float axisValue;
	};
	SimpleControllerGamepadTriggerAxisEvents_eventControllerAxisEvent_Parms Parms;
	Parms.axisValue=axisValue;
	ControllerAxisEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerGamepadTriggerAxisEvents::execgamepadEventTriggerAxis)
	{
		P_GET_ENUM(ESimpleControllerEventType,Z_Param_triggerEventIf);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerGamepadTriggerAxisEvents**)Z_Param__Result=USimpleControllerGamepadTriggerAxisEvents::gamepadEventTriggerAxis(ESimpleControllerEventType(Z_Param_triggerEventIf),Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerGamepadTriggerAxisEvents::StaticRegisterNativesUSimpleControllerGamepadTriggerAxisEvents()
	{
		UClass* Class = USimpleControllerGamepadTriggerAxisEvents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "gamepadEventTriggerAxis", &USimpleControllerGamepadTriggerAxisEvents::execgamepadEventTriggerAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics
	{
		struct SimpleControllerGamepadTriggerAxisEvents_eventgamepadEventTriggerAxis_Parms
		{
			ESimpleControllerEventType triggerEventIf;
			int32 connectionIndex;
			USimpleControllerGamepadTriggerAxisEvents* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_triggerEventIf_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_triggerEventIf;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::NewProp_triggerEventIf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::NewProp_triggerEventIf = { "triggerEventIf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadTriggerAxisEvents_eventgamepadEventTriggerAxis_Parms, triggerEventIf), Z_Construct_UEnum_SimpleController_ESimpleControllerEventType, METADATA_PARAMS(0, nullptr) }; // 981907741
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadTriggerAxisEvents_eventgamepadEventTriggerAxis_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerGamepadTriggerAxisEvents_eventgamepadEventTriggerAxis_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::NewProp_triggerEventIf_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::NewProp_triggerEventIf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|Events|Gamepad|Axis" },
		{ "CPP_Default_connectionIndex", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents, nullptr, "gamepadEventTriggerAxis", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::SimpleControllerGamepadTriggerAxisEvents_eventgamepadEventTriggerAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::SimpleControllerGamepadTriggerAxisEvents_eventgamepadEventTriggerAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerGamepadTriggerAxisEvents);
	UClass* Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_NoRegister()
	{
		return USimpleControllerGamepadTriggerAxisEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_leftTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_rightTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature, "ControllerAxisEvent__DelegateSignature" }, // 4089984621
		{ &Z_Construct_UFunction_USimpleControllerGamepadTriggerAxisEvents_gamepadEventTriggerAxis, "gamepadEventTriggerAxis" }, // 39165802
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerGamepadEvents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_leftTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_leftTrigger = { "leftTrigger", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadTriggerAxisEvents, leftTrigger), Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_leftTrigger_MetaData), Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_leftTrigger_MetaData) }; // 4089984621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_rightTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerGamepadEvents.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_rightTrigger = { "rightTrigger", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerGamepadTriggerAxisEvents, rightTrigger), Z_Construct_UDelegateFunction_USimpleControllerGamepadTriggerAxisEvents_ControllerAxisEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_rightTrigger_MetaData), Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_rightTrigger_MetaData) }; // 4089984621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_leftTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::NewProp_rightTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerGamepadTriggerAxisEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::ClassParams = {
		&USimpleControllerGamepadTriggerAxisEvents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerGamepadTriggerAxisEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerGamepadTriggerAxisEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerGamepadTriggerAxisEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerGamepadTriggerAxisEvents>()
	{
		return USimpleControllerGamepadTriggerAxisEvents::StaticClass();
	}
	USimpleControllerGamepadTriggerAxisEvents::USimpleControllerGamepadTriggerAxisEvents(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerGamepadTriggerAxisEvents);
	USimpleControllerGamepadTriggerAxisEvents::~USimpleControllerGamepadTriggerAxisEvents() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerGamepadEvents_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerGamepadEvents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleControllerGamepadFaceButtonEvents, USimpleControllerGamepadFaceButtonEvents::StaticClass, TEXT("USimpleControllerGamepadFaceButtonEvents"), &Z_Registration_Info_UClass_USimpleControllerGamepadFaceButtonEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerGamepadFaceButtonEvents), 1292320968U) },
		{ Z_Construct_UClass_USimpleControllerGamepadControlButtonEvents, USimpleControllerGamepadControlButtonEvents::StaticClass, TEXT("USimpleControllerGamepadControlButtonEvents"), &Z_Registration_Info_UClass_USimpleControllerGamepadControlButtonEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerGamepadControlButtonEvents), 188061413U) },
		{ Z_Construct_UClass_USimpleControllerGamepadStickButtonEvents, USimpleControllerGamepadStickButtonEvents::StaticClass, TEXT("USimpleControllerGamepadStickButtonEvents"), &Z_Registration_Info_UClass_USimpleControllerGamepadStickButtonEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerGamepadStickButtonEvents), 1413913009U) },
		{ Z_Construct_UClass_USimpleControllerGamepadShoulderButtonEvents, USimpleControllerGamepadShoulderButtonEvents::StaticClass, TEXT("USimpleControllerGamepadShoulderButtonEvents"), &Z_Registration_Info_UClass_USimpleControllerGamepadShoulderButtonEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerGamepadShoulderButtonEvents), 3240988795U) },
		{ Z_Construct_UClass_USimpleControllerGamepadDpadButtonEvents, USimpleControllerGamepadDpadButtonEvents::StaticClass, TEXT("USimpleControllerGamepadDpadButtonEvents"), &Z_Registration_Info_UClass_USimpleControllerGamepadDpadButtonEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerGamepadDpadButtonEvents), 2851907093U) },
		{ Z_Construct_UClass_USimpleControllerGamepadSpecialButtonEvents, USimpleControllerGamepadSpecialButtonEvents::StaticClass, TEXT("USimpleControllerGamepadSpecialButtonEvents"), &Z_Registration_Info_UClass_USimpleControllerGamepadSpecialButtonEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerGamepadSpecialButtonEvents), 3510854351U) },
		{ Z_Construct_UClass_USimpleControllerGamepadStickAxisEvents, USimpleControllerGamepadStickAxisEvents::StaticClass, TEXT("USimpleControllerGamepadStickAxisEvents"), &Z_Registration_Info_UClass_USimpleControllerGamepadStickAxisEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerGamepadStickAxisEvents), 3134867064U) },
		{ Z_Construct_UClass_USimpleControllerGamepadTriggerAxisEvents, USimpleControllerGamepadTriggerAxisEvents::StaticClass, TEXT("USimpleControllerGamepadTriggerAxisEvents"), &Z_Registration_Info_UClass_USimpleControllerGamepadTriggerAxisEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerGamepadTriggerAxisEvents), 2084843078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerGamepadEvents_h_4285055318(TEXT("/Script/SimpleController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerGamepadEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerGamepadEvents_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
