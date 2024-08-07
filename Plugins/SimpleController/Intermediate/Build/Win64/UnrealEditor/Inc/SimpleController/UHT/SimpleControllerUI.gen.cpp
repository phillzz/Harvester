// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../SimpleController/Public/SimpleControllerUI.h"
#include "../../SimpleController/Public/SimpleController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerUI() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerUIEnableSelection();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerUIEnableSelection_NoRegister();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerUIDirection;
	static UEnum* ESimpleControllerUIDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerUIDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerUIDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerUIDirection"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerUIDirection.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerUIDirection>()
	{
		return ESimpleControllerUIDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics::Enumerators[] = {
		{ "ESimpleControllerUIDirection::NONE", (int64)ESimpleControllerUIDirection::NONE },
		{ "ESimpleControllerUIDirection::RIGHT", (int64)ESimpleControllerUIDirection::RIGHT },
		{ "ESimpleControllerUIDirection::LEFT", (int64)ESimpleControllerUIDirection::LEFT },
		{ "ESimpleControllerUIDirection::TOP", (int64)ESimpleControllerUIDirection::TOP },
		{ "ESimpleControllerUIDirection::BOTTOM", (int64)ESimpleControllerUIDirection::BOTTOM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BOTTOM.DisplayName", "Bottom" },
		{ "BOTTOM.Name", "ESimpleControllerUIDirection::BOTTOM" },
		{ "Comment", "//struct FSimpleControllerUIStore\n//{\n//public:\n//\x09UWidget* mainWidget = nullptr;\n//\x09TArray<UWidget*> children;\n//};\n" },
		{ "LEFT.DisplayName", "Left" },
		{ "LEFT.Name", "ESimpleControllerUIDirection::LEFT" },
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
		{ "NONE.DisplayName", "none" },
		{ "NONE.Name", "ESimpleControllerUIDirection::NONE" },
		{ "RIGHT.DisplayName", "Right" },
		{ "RIGHT.Name", "ESimpleControllerUIDirection::RIGHT" },
		{ "ToolTip", "struct FSimpleControllerUIStore\n{\npublic:\n       UWidget* mainWidget = nullptr;\n       TArray<UWidget*> children;\n};" },
		{ "TOP.DisplayName", "Top" },
		{ "TOP.Name", "ESimpleControllerUIDirection::TOP" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerUIDirection",
		"ESimpleControllerUIDirection",
		Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerUIDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerUIDirection.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerUIDirection.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms
		{
			UWidget* mainWidget;
			UWidget* selectedWidget;
			int32 connectionIndex;
			bool hasNewSelection;
			ESimpleControllerUIDirection lastDirection;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mainWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mainWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selectedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_selectedWidget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static void NewProp_hasNewSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasNewSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_lastDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_lastDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_mainWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_mainWidget = { "mainWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms, mainWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_mainWidget_MetaData), Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_mainWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_selectedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_selectedWidget = { "selectedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms, selectedWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_selectedWidget_MetaData), Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_selectedWidget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms, connectionIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_hasNewSelection_SetBit(void* Obj)
	{
		((SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms*)Obj)->hasNewSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_hasNewSelection = { "hasNewSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms), &Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_hasNewSelection_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_lastDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_lastDirection = { "lastDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms, lastDirection), Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection, METADATA_PARAMS(0, nullptr) }; // 2267094962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_mainWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_selectedWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_connectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_hasNewSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_lastDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::NewProp_lastDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "selectedWidgetEventDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USimpleControllerUIEnableSelection::FselectedWidgetEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& selectedWidgetEventDelegate, UWidget* mainWidget, UWidget* selectedWidget, int32 connectionIndex, bool hasNewSelection, ESimpleControllerUIDirection lastDirection)
{
	struct SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms
	{
		UWidget* mainWidget;
		UWidget* selectedWidget;
		int32 connectionIndex;
		bool hasNewSelection;
		ESimpleControllerUIDirection lastDirection;
	};
	SimpleControllerUIEnableSelection_eventselectedWidgetEventDelegate_Parms Parms;
	Parms.mainWidget=mainWidget;
	Parms.selectedWidget=selectedWidget;
	Parms.connectionIndex=connectionIndex;
	Parms.hasNewSelection=hasNewSelection ? true : false;
	Parms.lastDirection=lastDirection;
	selectedWidgetEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USimpleControllerUIEnableSelection::execselectUIElement)
	{
		P_GET_OBJECT(UWidget,Z_Param_widget);
		P_GET_PROPERTY(FIntProperty,Z_Param_fakeConnectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->selectUIElement(Z_Param_widget,Z_Param_fakeConnectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerUIEnableSelection::execselectNextUIElement)
	{
		P_GET_ENUM(ESimpleControllerUIDirection,Z_Param_direction);
		P_GET_PROPERTY(FIntProperty,Z_Param_fakeConnectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->selectNextUIElement(ESimpleControllerUIDirection(Z_Param_direction),Z_Param_fakeConnectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerUIEnableSelection::execresumeSimpleControllerUISelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resumeSimpleControllerUISelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerUIEnableSelection::execpauseSimpleControllerUISelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->pauseSimpleControllerUISelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerUIEnableSelection::execdestroySimpleControllerUISelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->destroySimpleControllerUISelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerUIEnableSelection::execenableSimpleControllerUISelection)
	{
		P_GET_OBJECT_REF(USimpleControllerUIEnableSelection,Z_Param_Out_activeUIElement);
		P_GET_OBJECT(UWidget,Z_Param_mainWidget);
		P_GET_TARRAY(UWidget*,Z_Param_childWidgets);
		P_GET_OBJECT(UWidget,Z_Param_defaultWidgetToSelect);
		P_GET_TARRAY(int32,Z_Param_connectionIndexes);
		P_GET_UBOOL(Z_Param_useDpad);
		P_GET_PROPERTY(FIntProperty,Z_Param_horizontalAxisID);
		P_GET_PROPERTY(FIntProperty,Z_Param_verticalAxisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerUIEnableSelection**)Z_Param__Result=USimpleControllerUIEnableSelection::enableSimpleControllerUISelection(Z_Param_Out_activeUIElement,Z_Param_mainWidget,Z_Param_childWidgets,Z_Param_defaultWidgetToSelect,Z_Param_connectionIndexes,Z_Param_useDpad,Z_Param_horizontalAxisID,Z_Param_verticalAxisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerUIEnableSelection::execuiDirectionalPadEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->uiDirectionalPadEvent(Z_Param_deviceID,Z_Param_directionalPadValue,Z_Param_directionalPadIndex,Z_Param_deviceIndex,Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerUIEnableSelection::execuiAxisEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->uiAxisEvent(Z_Param_deviceID,Z_Param_axisID,Z_Param_axisValue,Z_Param_deviceIndex,Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	void USimpleControllerUIEnableSelection::StaticRegisterNativesUSimpleControllerUIEnableSelection()
	{
		UClass* Class = USimpleControllerUIEnableSelection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "destroySimpleControllerUISelection", &USimpleControllerUIEnableSelection::execdestroySimpleControllerUISelection },
			{ "enableSimpleControllerUISelection", &USimpleControllerUIEnableSelection::execenableSimpleControllerUISelection },
			{ "pauseSimpleControllerUISelection", &USimpleControllerUIEnableSelection::execpauseSimpleControllerUISelection },
			{ "resumeSimpleControllerUISelection", &USimpleControllerUIEnableSelection::execresumeSimpleControllerUISelection },
			{ "selectNextUIElement", &USimpleControllerUIEnableSelection::execselectNextUIElement },
			{ "selectUIElement", &USimpleControllerUIEnableSelection::execselectUIElement },
			{ "uiAxisEvent", &USimpleControllerUIEnableSelection::execuiAxisEvent },
			{ "uiDirectionalPadEvent", &USimpleControllerUIEnableSelection::execuiDirectionalPadEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerUIEnableSelection_destroySimpleControllerUISelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_destroySimpleControllerUISelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|UI" },
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_destroySimpleControllerUISelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "destroySimpleControllerUISelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_destroySimpleControllerUISelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerUIEnableSelection_destroySimpleControllerUISelection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USimpleControllerUIEnableSelection_destroySimpleControllerUISelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerUIEnableSelection_destroySimpleControllerUISelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics
	{
		struct SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms
		{
			USimpleControllerUIEnableSelection* activeUIElement;
			UWidget* mainWidget;
			TArray<UWidget*> childWidgets;
			UWidget* defaultWidgetToSelect;
			TArray<int32> connectionIndexes;
			bool useDpad;
			int32 horizontalAxisID;
			int32 verticalAxisID;
			USimpleControllerUIEnableSelection* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_activeUIElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mainWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mainWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_childWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_childWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_childWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultWidgetToSelect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultWidgetToSelect;
		static const UECodeGen_Private::FIntPropertyParams NewProp_connectionIndexes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_connectionIndexes;
		static void NewProp_useDpad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useDpad;
		static const UECodeGen_Private::FIntPropertyParams NewProp_horizontalAxisID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_verticalAxisID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_activeUIElement = { "activeUIElement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms, activeUIElement), Z_Construct_UClass_USimpleControllerUIEnableSelection_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_mainWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_mainWidget = { "mainWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms, mainWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_mainWidget_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_mainWidget_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_childWidgets_Inner = { "childWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_childWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_childWidgets = { "childWidgets", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms, childWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_childWidgets_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_childWidgets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_defaultWidgetToSelect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_defaultWidgetToSelect = { "defaultWidgetToSelect", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms, defaultWidgetToSelect), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_defaultWidgetToSelect_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_defaultWidgetToSelect_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_connectionIndexes_Inner = { "connectionIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_connectionIndexes = { "connectionIndexes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms, connectionIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_useDpad_SetBit(void* Obj)
	{
		((SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms*)Obj)->useDpad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_useDpad = { "useDpad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms), &Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_useDpad_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_horizontalAxisID = { "horizontalAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms, horizontalAxisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_verticalAxisID = { "verticalAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms, verticalAxisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerUIEnableSelection_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_activeUIElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_mainWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_childWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_childWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_defaultWidgetToSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_connectionIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_connectionIndexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_useDpad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_horizontalAxisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_verticalAxisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|UI" },
		{ "Comment", "/*\n\x09* This function activates the UI control of the plugin for this UI element. Can be destroyed, pausend and resumed\n\x09* @param mainWidget This widget contains the widgets that can be selected. \n\x09* @param childWidgets These are the widgets that can be selected.\n\x09*/" },
		{ "CPP_Default_horizontalAxisID", "0" },
		{ "CPP_Default_useDpad", "true" },
		{ "CPP_Default_verticalAxisID", "1" },
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
		{ "ToolTip", "* This function activates the UI control of the plugin for this UI element. Can be destroyed, pausend and resumed\n* @param mainWidget This widget contains the widgets that can be selected.\n* @param childWidgets These are the widgets that can be selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "enableSimpleControllerUISelection", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::SimpleControllerUIEnableSelection_eventenableSimpleControllerUISelection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerUIEnableSelection_pauseSimpleControllerUISelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_pauseSimpleControllerUISelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|UI" },
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_pauseSimpleControllerUISelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "pauseSimpleControllerUISelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_pauseSimpleControllerUISelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerUIEnableSelection_pauseSimpleControllerUISelection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USimpleControllerUIEnableSelection_pauseSimpleControllerUISelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerUIEnableSelection_pauseSimpleControllerUISelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerUIEnableSelection_resumeSimpleControllerUISelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_resumeSimpleControllerUISelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|UI" },
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_resumeSimpleControllerUISelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "resumeSimpleControllerUISelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_resumeSimpleControllerUISelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerUIEnableSelection_resumeSimpleControllerUISelection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_USimpleControllerUIEnableSelection_resumeSimpleControllerUISelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerUIEnableSelection_resumeSimpleControllerUISelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics
	{
		struct SimpleControllerUIEnableSelection_eventselectNextUIElement_Parms
		{
			ESimpleControllerUIDirection direction;
			int32 fakeConnectionIndex;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fakeConnectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventselectNextUIElement_Parms, direction), Z_Construct_UEnum_SimpleController_ESimpleControllerUIDirection, METADATA_PARAMS(0, nullptr) }; // 2267094962
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::NewProp_fakeConnectionIndex = { "fakeConnectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventselectNextUIElement_Parms, fakeConnectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::NewProp_direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::NewProp_fakeConnectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|UI" },
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "selectNextUIElement", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::SimpleControllerUIEnableSelection_eventselectNextUIElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::SimpleControllerUIEnableSelection_eventselectNextUIElement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics
	{
		struct SimpleControllerUIEnableSelection_eventselectUIElement_Parms
		{
			UWidget* widget;
			int32 fakeConnectionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fakeConnectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventselectUIElement_Parms, widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::NewProp_widget_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::NewProp_widget_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::NewProp_fakeConnectionIndex = { "fakeConnectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventselectUIElement_Parms, fakeConnectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::NewProp_widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::NewProp_fakeConnectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|UI" },
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "selectUIElement", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::SimpleControllerUIEnableSelection_eventselectUIElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::SimpleControllerUIEnableSelection_eventselectUIElement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics
	{
		struct SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms, axisID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisID_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms, axisValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisValue_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "uiAxisEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::SimpleControllerUIEnableSelection_eventuiAxisEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics
	{
		struct SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_directionalPadValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms, directionalPadValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_directionalPadValue_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_directionalPadValue_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_directionalPadIndex = { "directionalPadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms, directionalPadIndex), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_directionalPadValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_directionalPadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerUIEnableSelection, nullptr, "uiDirectionalPadEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::SimpleControllerUIEnableSelection_eventuiDirectionalPadEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerUIEnableSelection);
	UClass* Z_Construct_UClass_USimpleControllerUIEnableSelection_NoRegister()
	{
		return USimpleControllerUIEnableSelection::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSelect_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSelect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerUIEnableSelection_destroySimpleControllerUISelection, "destroySimpleControllerUISelection" }, // 4257970990
		{ &Z_Construct_UFunction_USimpleControllerUIEnableSelection_enableSimpleControllerUISelection, "enableSimpleControllerUISelection" }, // 4125443329
		{ &Z_Construct_UFunction_USimpleControllerUIEnableSelection_pauseSimpleControllerUISelection, "pauseSimpleControllerUISelection" }, // 1706614584
		{ &Z_Construct_UFunction_USimpleControllerUIEnableSelection_resumeSimpleControllerUISelection, "resumeSimpleControllerUISelection" }, // 2393970297
		{ &Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature, "selectedWidgetEventDelegate__DelegateSignature" }, // 3467964629
		{ &Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectNextUIElement, "selectNextUIElement" }, // 2575326845
		{ &Z_Construct_UFunction_USimpleControllerUIEnableSelection_selectUIElement, "selectUIElement" }, // 3324737846
		{ &Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiAxisEvent, "uiAxisEvent" }, // 711964238
		{ &Z_Construct_UFunction_USimpleControllerUIEnableSelection_uiDirectionalPadEvent, "uiDirectionalPadEvent" }, // 1838409551
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerUI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::NewProp_onSelect_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerUI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::NewProp_onSelect = { "onSelect", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleControllerUIEnableSelection, onSelect), Z_Construct_UDelegateFunction_USimpleControllerUIEnableSelection_selectedWidgetEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::NewProp_onSelect_MetaData), Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::NewProp_onSelect_MetaData) }; // 3467964629
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::NewProp_onSelect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerUIEnableSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::ClassParams = {
		&USimpleControllerUIEnableSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerUIEnableSelection()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerUIEnableSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerUIEnableSelection.OuterSingleton, Z_Construct_UClass_USimpleControllerUIEnableSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerUIEnableSelection.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerUIEnableSelection>()
	{
		return USimpleControllerUIEnableSelection::StaticClass();
	}
	USimpleControllerUIEnableSelection::USimpleControllerUIEnableSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerUIEnableSelection);
	USimpleControllerUIEnableSelection::~USimpleControllerUIEnableSelection() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_Statics::EnumInfo[] = {
		{ ESimpleControllerUIDirection_StaticEnum, TEXT("ESimpleControllerUIDirection"), &Z_Registration_Info_UEnum_ESimpleControllerUIDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2267094962U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleControllerUIEnableSelection, USimpleControllerUIEnableSelection::StaticClass, TEXT("USimpleControllerUIEnableSelection"), &Z_Registration_Info_UClass_USimpleControllerUIEnableSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerUIEnableSelection), 453972324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_141749887(TEXT("/Script/SimpleController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerUI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
