// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../SimpleController/Public/SimpleControllerWheel.h"
#include "../../SimpleController/Public/SimpleController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerWheel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_UAutocenterAsyncEvent();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_UAutocenterAsyncEvent_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerWheel();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerWheel_NoRegister();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	DEFINE_FUNCTION(USimpleControllerWheel::execwheelAxisEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->wheelAxisEvent(Z_Param_deviceID,Z_Param_axisID,Z_Param_axisValue,Z_Param_deviceIndex,Z_Param_device,Z_Param_connectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerWheel::execupdateConstantForceOnWheel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_force);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerWheel::updateConstantForceOnWheel(Z_Param_force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerWheel::execupdateAutocenterWheel)
	{
		P_GET_UBOOL(Z_Param_stopWhenCentered);
		P_GET_PROPERTY(FFloatProperty,Z_Param_defaultStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_slowdownStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_autocenterDesiredEndPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerWheel::updateAutocenterWheel(Z_Param_stopWhenCentered,Z_Param_defaultStrength,Z_Param_slowdownStrength,Z_Param_autocenterDesiredEndPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerWheel::execstopAutocenter)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerWheel::stopAutocenter(Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerWheel::execmoveWheel)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerWheelFFDirection,Z_Param_direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengt);
		P_GET_PROPERTY(FIntProperty,Z_Param_lengthInMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerWheel::moveWheel(Z_Param_device,ESimpleControllerWheelFFDirection(Z_Param_direction),Z_Param_strengt,Z_Param_lengthInMilliseconds);
		P_NATIVE_END;
	}
	void USimpleControllerWheel::StaticRegisterNativesUSimpleControllerWheel()
	{
		UClass* Class = USimpleControllerWheel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "moveWheel", &USimpleControllerWheel::execmoveWheel },
			{ "stopAutocenter", &USimpleControllerWheel::execstopAutocenter },
			{ "updateAutocenterWheel", &USimpleControllerWheel::execupdateAutocenterWheel },
			{ "updateConstantForceOnWheel", &USimpleControllerWheel::execupdateConstantForceOnWheel },
			{ "wheelAxisEvent", &USimpleControllerWheel::execwheelAxisEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics
	{
		struct SimpleControllerWheel_eventmoveWheel_Parms
		{
			FSimpleControllerDevice device;
			ESimpleControllerWheelFFDirection direction;
			float strengt;
			int32 lengthInMilliseconds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static const UECodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_strengt;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lengthInMilliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventmoveWheel_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventmoveWheel_Parms, direction), Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection, METADATA_PARAMS(0, nullptr) }; // 1138683303
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_strengt = { "strengt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventmoveWheel_Parms, strengt), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_lengthInMilliseconds = { "lengthInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventmoveWheel_Parms, lengthInMilliseconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_strengt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::NewProp_lengthInMilliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "Comment", "/**\n\x09* Moves a ForceFeedback steering wheel\n\x09* @param strengt 0 - 1\n\x09*/" },
		{ "CPP_Default_lengthInMilliseconds", "1000" },
		{ "CPP_Default_strengt", "0.500000" },
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
		{ "ToolTip", "Moves a ForceFeedback steering wheel\n@param strengt 0 - 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerWheel, nullptr, "moveWheel", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::SimpleControllerWheel_eventmoveWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::SimpleControllerWheel_eventmoveWheel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerWheel_moveWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerWheel_moveWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics
	{
		struct SimpleControllerWheel_eventstopAutocenter_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventstopAutocenter_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerWheel, nullptr, "stopAutocenter", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::SimpleControllerWheel_eventstopAutocenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::SimpleControllerWheel_eventstopAutocenter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics
	{
		struct SimpleControllerWheel_eventupdateAutocenterWheel_Parms
		{
			bool stopWhenCentered;
			float defaultStrength;
			float slowdownStrength;
			float autocenterDesiredEndPosition;
		};
		static void NewProp_stopWhenCentered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_stopWhenCentered;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slowdownStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_autocenterDesiredEndPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_stopWhenCentered_SetBit(void* Obj)
	{
		((SimpleControllerWheel_eventupdateAutocenterWheel_Parms*)Obj)->stopWhenCentered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_stopWhenCentered = { "stopWhenCentered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleControllerWheel_eventupdateAutocenterWheel_Parms), &Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_stopWhenCentered_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_defaultStrength = { "defaultStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventupdateAutocenterWheel_Parms, defaultStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_slowdownStrength = { "slowdownStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventupdateAutocenterWheel_Parms, slowdownStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_autocenterDesiredEndPosition = { "autocenterDesiredEndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventupdateAutocenterWheel_Parms, autocenterDesiredEndPosition), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_stopWhenCentered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_defaultStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_slowdownStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::NewProp_autocenterDesiredEndPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "Comment", "/**\n\x09* New values for an already running Autocenter effect.\n\x09* @param defaultStrength 0 - 1\n\x09* @param slowdownStrength 0 - 1\n\x09* @param autocenterDesiredEndPosition -1 - 1\n\x09*/" },
		{ "CPP_Default_autocenterDesiredEndPosition", "0.000000" },
		{ "CPP_Default_defaultStrength", "1.000000" },
		{ "CPP_Default_slowdownStrength", "0.120000" },
		{ "CPP_Default_stopWhenCentered", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
		{ "ToolTip", "New values for an already running Autocenter effect.\n@param defaultStrength 0 - 1\n@param slowdownStrength 0 - 1\n@param autocenterDesiredEndPosition -1 - 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerWheel, nullptr, "updateAutocenterWheel", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::SimpleControllerWheel_eventupdateAutocenterWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::SimpleControllerWheel_eventupdateAutocenterWheel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics
	{
		struct SimpleControllerWheel_eventupdateConstantForceOnWheel_Parms
		{
			int32 force;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_force;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventupdateConstantForceOnWheel_Parms, force), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::NewProp_force,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "Comment", "/**\n\x09* New values for an already running effect.\n\x09* @param force min 1 max 100\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
		{ "ToolTip", "New values for an already running effect.\n@param force min 1 max 100" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerWheel, nullptr, "updateConstantForceOnWheel", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::SimpleControllerWheel_eventupdateConstantForceOnWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::SimpleControllerWheel_eventupdateConstantForceOnWheel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics
	{
		struct SimpleControllerWheel_eventwheelAxisEvent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventwheelAxisEvent_Parms, deviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceID_MetaData), Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventwheelAxisEvent_Parms, axisID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisID_MetaData), Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventwheelAxisEvent_Parms, axisValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisValue_MetaData), Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventwheelAxisEvent_Parms, deviceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceIndex_MetaData), Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventwheelAxisEvent_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_device_MetaData), Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_device_MetaData) }; // 1490416654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_connectionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleControllerWheel_eventwheelAxisEvent_Parms, connectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_connectionIndex_MetaData), Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_connectionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_deviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::NewProp_connectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//void removeRumbleThread(FSimpleControllerDevice* device);\n" },
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
		{ "ToolTip", "void removeRumbleThread(FSimpleControllerDevice* device);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerWheel, nullptr, "wheelAxisEvent", nullptr, nullptr, Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::SimpleControllerWheel_eventwheelAxisEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::SimpleControllerWheel_eventwheelAxisEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerWheel);
	UClass* Z_Construct_UClass_USimpleControllerWheel_NoRegister()
	{
		return USimpleControllerWheel::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerWheel_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerWheel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerWheel_moveWheel, "moveWheel" }, // 1042583333
		{ &Z_Construct_UFunction_USimpleControllerWheel_stopAutocenter, "stopAutocenter" }, // 2530602402
		{ &Z_Construct_UFunction_USimpleControllerWheel_updateAutocenterWheel, "updateAutocenterWheel" }, // 2089772713
		{ &Z_Construct_UFunction_USimpleControllerWheel_updateConstantForceOnWheel, "updateConstantForceOnWheel" }, // 1818683358
		{ &Z_Construct_UFunction_USimpleControllerWheel_wheelAxisEvent, "wheelAxisEvent" }, // 1580606570
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerWheel_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerWheel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerWheel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerWheel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerWheel_Statics::ClassParams = {
		&USimpleControllerWheel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerWheel_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerWheel_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleControllerWheel()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerWheel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerWheel.OuterSingleton, Z_Construct_UClass_USimpleControllerWheel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerWheel.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerWheel>()
	{
		return USimpleControllerWheel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerWheel);
	USimpleControllerWheel::~USimpleControllerWheel() {}
	struct Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutocenterAsyncEvent, nullptr, "AutocenterEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAutocenterAsyncEvent::FAutocenterEvent_DelegateWrapper(const FMulticastScriptDelegate& AutocenterEvent)
{
	AutocenterEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAutocenterAsyncEvent::execautocenterWheel)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_UBOOL(Z_Param_stopWhenCentered);
		P_GET_PROPERTY(FFloatProperty,Z_Param_defaultStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_slowdownStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_autocenterDesiredEndPosition);
		P_GET_UBOOL(Z_Param_showLogs);
		P_GET_PROPERTY(FIntProperty,Z_Param_wheelAxisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAutocenterAsyncEvent**)Z_Param__Result=UAutocenterAsyncEvent::autocenterWheel(Z_Param_device,Z_Param_stopWhenCentered,Z_Param_defaultStrength,Z_Param_slowdownStrength,Z_Param_autocenterDesiredEndPosition,Z_Param_showLogs,Z_Param_wheelAxisID);
		P_NATIVE_END;
	}
	void UAutocenterAsyncEvent::StaticRegisterNativesUAutocenterAsyncEvent()
	{
		UClass* Class = UAutocenterAsyncEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "autocenterWheel", &UAutocenterAsyncEvent::execautocenterWheel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics
	{
		struct AutocenterAsyncEvent_eventautocenterWheel_Parms
		{
			FSimpleControllerDevice device;
			bool stopWhenCentered;
			float defaultStrength;
			float slowdownStrength;
			float autocenterDesiredEndPosition;
			bool showLogs;
			int32 wheelAxisID;
			UAutocenterAsyncEvent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_device;
		static void NewProp_stopWhenCentered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_stopWhenCentered;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slowdownStrength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_autocenterDesiredEndPosition;
		static void NewProp_showLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showLogs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_wheelAxisID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutocenterAsyncEvent_eventautocenterWheel_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(0, nullptr) }; // 1490416654
	void Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_stopWhenCentered_SetBit(void* Obj)
	{
		((AutocenterAsyncEvent_eventautocenterWheel_Parms*)Obj)->stopWhenCentered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_stopWhenCentered = { "stopWhenCentered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutocenterAsyncEvent_eventautocenterWheel_Parms), &Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_stopWhenCentered_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_defaultStrength = { "defaultStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutocenterAsyncEvent_eventautocenterWheel_Parms, defaultStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_slowdownStrength = { "slowdownStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutocenterAsyncEvent_eventautocenterWheel_Parms, slowdownStrength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_autocenterDesiredEndPosition = { "autocenterDesiredEndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutocenterAsyncEvent_eventautocenterWheel_Parms, autocenterDesiredEndPosition), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_showLogs_SetBit(void* Obj)
	{
		((AutocenterAsyncEvent_eventautocenterWheel_Parms*)Obj)->showLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_showLogs = { "showLogs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutocenterAsyncEvent_eventautocenterWheel_Parms), &Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_showLogs_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_wheelAxisID = { "wheelAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutocenterAsyncEvent_eventautocenterWheel_Parms, wheelAxisID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutocenterAsyncEvent_eventautocenterWheel_Parms, ReturnValue), Z_Construct_UClass_UAutocenterAsyncEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_stopWhenCentered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_defaultStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_slowdownStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_autocenterDesiredEndPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_showLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_wheelAxisID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SimpleControllerPlugin|ForceFeedback|Wheel" },
		{ "Comment", "/**\n\x09* Centers the steering wheel. It uses FF Constant effect to move the steering wheel to the axis value 0.\n\x09* @param defaultStrength 0 - 1\n\x09* @param slowdownStrength 0 - 1\n\x09* @param autocenterDesiredEndPosition -1 - 1\n\x09*/" },
		{ "CPP_Default_autocenterDesiredEndPosition", "0.000000" },
		{ "CPP_Default_defaultStrength", "1.000000" },
		{ "CPP_Default_showLogs", "false" },
		{ "CPP_Default_slowdownStrength", "0.120000" },
		{ "CPP_Default_stopWhenCentered", "true" },
		{ "CPP_Default_wheelAxisID", "0" },
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
		{ "ToolTip", "Centers the steering wheel. It uses FF Constant effect to move the steering wheel to the axis value 0.\n@param defaultStrength 0 - 1\n@param slowdownStrength 0 - 1\n@param autocenterDesiredEndPosition -1 - 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutocenterAsyncEvent, nullptr, "autocenterWheel", nullptr, nullptr, Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::AutocenterAsyncEvent_eventautocenterWheel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::AutocenterAsyncEvent_eventautocenterWheel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutocenterAsyncEvent);
	UClass* Z_Construct_UClass_UAutocenterAsyncEvent_NoRegister()
	{
		return UAutocenterAsyncEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAutocenterAsyncEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_finished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_finished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutocenterAsyncEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutocenterAsyncEvent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutocenterAsyncEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature, "AutocenterEvent__DelegateSignature" }, // 1899807174
		{ &Z_Construct_UFunction_UAutocenterAsyncEvent_autocenterWheel, "autocenterWheel" }, // 3312970677
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutocenterAsyncEvent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutocenterAsyncEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerWheel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutocenterAsyncEvent_Statics::NewProp_finished_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerWheel.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAutocenterAsyncEvent_Statics::NewProp_finished = { "finished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutocenterAsyncEvent, finished), Z_Construct_UDelegateFunction_UAutocenterAsyncEvent_AutocenterEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutocenterAsyncEvent_Statics::NewProp_finished_MetaData), Z_Construct_UClass_UAutocenterAsyncEvent_Statics::NewProp_finished_MetaData) }; // 1899807174
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutocenterAsyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutocenterAsyncEvent_Statics::NewProp_finished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutocenterAsyncEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutocenterAsyncEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutocenterAsyncEvent_Statics::ClassParams = {
		&UAutocenterAsyncEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutocenterAsyncEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutocenterAsyncEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutocenterAsyncEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutocenterAsyncEvent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutocenterAsyncEvent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAutocenterAsyncEvent()
	{
		if (!Z_Registration_Info_UClass_UAutocenterAsyncEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutocenterAsyncEvent.OuterSingleton, Z_Construct_UClass_UAutocenterAsyncEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutocenterAsyncEvent.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<UAutocenterAsyncEvent>()
	{
		return UAutocenterAsyncEvent::StaticClass();
	}
	UAutocenterAsyncEvent::UAutocenterAsyncEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutocenterAsyncEvent);
	UAutocenterAsyncEvent::~UAutocenterAsyncEvent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerWheel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerWheel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleControllerWheel, USimpleControllerWheel::StaticClass, TEXT("USimpleControllerWheel"), &Z_Registration_Info_UClass_USimpleControllerWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerWheel), 4095275991U) },
		{ Z_Construct_UClass_UAutocenterAsyncEvent, UAutocenterAsyncEvent::StaticClass, TEXT("UAutocenterAsyncEvent"), &Z_Registration_Info_UClass_UAutocenterAsyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutocenterAsyncEvent), 1254430308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerWheel_h_3438754003(TEXT("/Script/SimpleController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerWheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerWheel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
