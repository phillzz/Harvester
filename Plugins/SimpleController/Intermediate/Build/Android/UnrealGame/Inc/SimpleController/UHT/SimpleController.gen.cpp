// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleController() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerPluginSettings();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerPluginSettings_NoRegister();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerEventType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingProfile();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerEventType;
	static UEnum* ESimpleControllerEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerEventType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerEventType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerEventType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerEventType>()
	{
		return ESimpleControllerEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics::Enumerators[] = {
		{ "ESimpleControllerEventType::OnChange", (int64)ESimpleControllerEventType::OnChange },
		{ "ESimpleControllerEventType::OnTick", (int64)ESimpleControllerEventType::OnTick },
		{ "ESimpleControllerEventType::Persistent30", (int64)ESimpleControllerEventType::Persistent30 },
		{ "ESimpleControllerEventType::Persistent60", (int64)ESimpleControllerEventType::Persistent60 },
		{ "ESimpleControllerEventType::Persistent120", (int64)ESimpleControllerEventType::Persistent120 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "OnChange.DisplayName", "The axis value changes" },
		{ "OnChange.Name", "ESimpleControllerEventType::OnChange" },
		{ "OnTick.DisplayName", "Tick (Once per frame)" },
		{ "OnTick.Name", "ESimpleControllerEventType::OnTick" },
		{ "Persistent120.DisplayName", "Persistent 120 FPS" },
		{ "Persistent120.Name", "ESimpleControllerEventType::Persistent120" },
		{ "Persistent30.DisplayName", "Persistent 30 FPS" },
		{ "Persistent30.Name", "ESimpleControllerEventType::Persistent30" },
		{ "Persistent60.DisplayName", "Persistent 60 FPS" },
		{ "Persistent60.Name", "ESimpleControllerEventType::Persistent60" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerEventType",
		"ESimpleControllerEventType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerEventType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerEventType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerMapDoubleAction;
	static UEnum* ESimpleControllerMapDoubleAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerMapDoubleAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerMapDoubleAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerMapDoubleAction"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerMapDoubleAction.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerMapDoubleAction>()
	{
		return ESimpleControllerMapDoubleAction_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics::Enumerators[] = {
		{ "ESimpleControllerMapDoubleAction::IgnoreInput", (int64)ESimpleControllerMapDoubleAction::IgnoreInput },
		{ "ESimpleControllerMapDoubleAction::DeleteOtherMapping", (int64)ESimpleControllerMapDoubleAction::DeleteOtherMapping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DeleteOtherMapping.DisplayName", "Delete other mapping" },
		{ "DeleteOtherMapping.Name", "ESimpleControllerMapDoubleAction::DeleteOtherMapping" },
		{ "IgnoreInput.DisplayName", "Ignore Input" },
		{ "IgnoreInput.Name", "ESimpleControllerMapDoubleAction::IgnoreInput" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerMapDoubleAction",
		"ESimpleControllerMapDoubleAction",
		Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerMapDoubleAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerMapDoubleAction.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerMapDoubleAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerMapDoubleAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerMapActionType;
	static UEnum* ESimpleControllerMapActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerMapActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerMapActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerMapActionType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerMapActionType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerMapActionType>()
	{
		return ESimpleControllerMapActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics::Enumerators[] = {
		{ "ESimpleControllerMapActionType::Button", (int64)ESimpleControllerMapActionType::Button },
		{ "ESimpleControllerMapActionType::Axis", (int64)ESimpleControllerMapActionType::Axis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics::Enum_MetaDataParams[] = {
		{ "Axis.DisplayName", "Axis" },
		{ "Axis.Name", "ESimpleControllerMapActionType::Axis" },
		{ "BlueprintType", "true" },
		{ "Button.DisplayName", "Button" },
		{ "Button.Name", "ESimpleControllerMapActionType::Button" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerMapActionType",
		"ESimpleControllerMapActionType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerMapActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerMapActionType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerMapActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerMapActionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerButtonStatus;
	static UEnum* ESimpleControllerButtonStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerButtonStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerButtonStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerButtonStatus"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerButtonStatus.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerButtonStatus>()
	{
		return ESimpleControllerButtonStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics::Enumerators[] = {
		{ "ESimpleControllerButtonStatus::Pressed", (int64)ESimpleControllerButtonStatus::Pressed },
		{ "ESimpleControllerButtonStatus::Released", (int64)ESimpleControllerButtonStatus::Released },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Pressed.DisplayName", "Pressed" },
		{ "Pressed.Name", "ESimpleControllerButtonStatus::Pressed" },
		{ "Released.DisplayName", "Released" },
		{ "Released.Name", "ESimpleControllerButtonStatus::Released" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerButtonStatus",
		"ESimpleControllerButtonStatus",
		Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerButtonStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerButtonStatus.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerButtonStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerButtonStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerType;
	static UEnum* ESimpleControllerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerType>()
	{
		return ESimpleControllerType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics::Enumerators[] = {
		{ "ESimpleControllerType::UNKNOWN", (int64)ESimpleControllerType::UNKNOWN },
		{ "ESimpleControllerType::GAMECONTROLLER", (int64)ESimpleControllerType::GAMECONTROLLER },
		{ "ESimpleControllerType::WHEEL", (int64)ESimpleControllerType::WHEEL },
		{ "ESimpleControllerType::ARCADE_STICK", (int64)ESimpleControllerType::ARCADE_STICK },
		{ "ESimpleControllerType::FLIGHT_STICK", (int64)ESimpleControllerType::FLIGHT_STICK },
		{ "ESimpleControllerType::DANCE_PAD", (int64)ESimpleControllerType::DANCE_PAD },
		{ "ESimpleControllerType::GUITAR", (int64)ESimpleControllerType::GUITAR },
		{ "ESimpleControllerType::DRUM_KIT", (int64)ESimpleControllerType::DRUM_KIT },
		{ "ESimpleControllerType::ARCADE_PAD", (int64)ESimpleControllerType::ARCADE_PAD },
		{ "ESimpleControllerType::THROTTLE", (int64)ESimpleControllerType::THROTTLE },
		{ "ESimpleControllerType::KEYBOARD", (int64)ESimpleControllerType::KEYBOARD },
		{ "ESimpleControllerType::MOUSE", (int64)ESimpleControllerType::MOUSE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics::Enum_MetaDataParams[] = {
		{ "ARCADE_PAD.DisplayName", "ARCADE_PAD" },
		{ "ARCADE_PAD.Name", "ESimpleControllerType::ARCADE_PAD" },
		{ "ARCADE_STICK.DisplayName", "ARCADE_STICK" },
		{ "ARCADE_STICK.Name", "ESimpleControllerType::ARCADE_STICK" },
		{ "BlueprintType", "true" },
		{ "DANCE_PAD.DisplayName", "DANCE_PAD" },
		{ "DANCE_PAD.Name", "ESimpleControllerType::DANCE_PAD" },
		{ "DRUM_KIT.DisplayName", "DRUM_KIT" },
		{ "DRUM_KIT.Name", "ESimpleControllerType::DRUM_KIT" },
		{ "FLIGHT_STICK.DisplayName", "FLIGHT_STICK" },
		{ "FLIGHT_STICK.Name", "ESimpleControllerType::FLIGHT_STICK" },
		{ "GAMECONTROLLER.DisplayName", "GAMECONTROLLER" },
		{ "GAMECONTROLLER.Name", "ESimpleControllerType::GAMECONTROLLER" },
		{ "GUITAR.DisplayName", "GUITAR" },
		{ "GUITAR.Name", "ESimpleControllerType::GUITAR" },
		{ "KEYBOARD.DisplayName", "KEYBOARD" },
		{ "KEYBOARD.Name", "ESimpleControllerType::KEYBOARD" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "MOUSE.DisplayName", "MOUSE" },
		{ "MOUSE.Name", "ESimpleControllerType::MOUSE" },
		{ "THROTTLE.DisplayName", "THROTTLE" },
		{ "THROTTLE.Name", "ESimpleControllerType::THROTTLE" },
		{ "UNKNOWN.DisplayName", "UNKNOWN" },
		{ "UNKNOWN.Name", "ESimpleControllerType::UNKNOWN" },
		{ "WHEEL.DisplayName", "WHEEL" },
		{ "WHEEL.Name", "ESimpleControllerType::WHEEL" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerType",
		"ESimpleControllerType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerPowerLevel;
	static UEnum* ESimpleControllerPowerLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerPowerLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerPowerLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerPowerLevel"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerPowerLevel.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerPowerLevel>()
	{
		return ESimpleControllerPowerLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics::Enumerators[] = {
		{ "ESimpleControllerPowerLevel::UNKNOWN", (int64)ESimpleControllerPowerLevel::UNKNOWN },
		{ "ESimpleControllerPowerLevel::EMPTY", (int64)ESimpleControllerPowerLevel::EMPTY },
		{ "ESimpleControllerPowerLevel::LOW", (int64)ESimpleControllerPowerLevel::LOW },
		{ "ESimpleControllerPowerLevel::MEDIUM", (int64)ESimpleControllerPowerLevel::MEDIUM },
		{ "ESimpleControllerPowerLevel::FULL", (int64)ESimpleControllerPowerLevel::FULL },
		{ "ESimpleControllerPowerLevel::WIRED", (int64)ESimpleControllerPowerLevel::WIRED },
		{ "ESimpleControllerPowerLevel::MAX", (int64)ESimpleControllerPowerLevel::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMPTY.DisplayName", "EMPTY" },
		{ "EMPTY.Name", "ESimpleControllerPowerLevel::EMPTY" },
		{ "FULL.DisplayName", "FULL" },
		{ "FULL.Name", "ESimpleControllerPowerLevel::FULL" },
		{ "LOW.DisplayName", "LOW" },
		{ "LOW.Name", "ESimpleControllerPowerLevel::LOW" },
		{ "MAX.DisplayName", "MAX" },
		{ "MAX.Name", "ESimpleControllerPowerLevel::MAX" },
		{ "MEDIUM.DisplayName", "MEDIUM" },
		{ "MEDIUM.Name", "ESimpleControllerPowerLevel::MEDIUM" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "UNKNOWN.DisplayName", "UNKNOWN" },
		{ "UNKNOWN.Name", "ESimpleControllerPowerLevel::UNKNOWN" },
		{ "WIRED.DisplayName", "WIRED" },
		{ "WIRED.Name", "ESimpleControllerPowerLevel::WIRED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerPowerLevel",
		"ESimpleControllerPowerLevel",
		Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerPowerLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerPowerLevel.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerPowerLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerPowerLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerWheelFFDirection;
	static UEnum* ESimpleControllerWheelFFDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerWheelFFDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerWheelFFDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerWheelFFDirection"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerWheelFFDirection.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerWheelFFDirection>()
	{
		return ESimpleControllerWheelFFDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics::Enumerators[] = {
		{ "ESimpleControllerWheelFFDirection::Left", (int64)ESimpleControllerWheelFFDirection::Left },
		{ "ESimpleControllerWheelFFDirection::Right", (int64)ESimpleControllerWheelFFDirection::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "ESimpleControllerWheelFFDirection::Left" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "ESimpleControllerWheelFFDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerWheelFFDirection",
		"ESimpleControllerWheelFFDirection",
		Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerWheelFFDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerWheelFFDirection.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerWheelFFDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerWheelFFDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerAxisCorrection;
	static UEnum* ESimpleControllerAxisCorrection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerAxisCorrection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerAxisCorrection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerAxisCorrection"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerAxisCorrection.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerAxisCorrection>()
	{
		return ESimpleControllerAxisCorrection_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics::Enumerators[] = {
		{ "ESimpleControllerAxisCorrection::Negative", (int64)ESimpleControllerAxisCorrection::Negative },
		{ "ESimpleControllerAxisCorrection::Positive", (int64)ESimpleControllerAxisCorrection::Positive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Negative.DisplayName", "Negative" },
		{ "Negative.Name", "ESimpleControllerAxisCorrection::Negative" },
		{ "Positive.DisplayName", "Positive" },
		{ "Positive.Name", "ESimpleControllerAxisCorrection::Positive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerAxisCorrection",
		"ESimpleControllerAxisCorrection",
		Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerAxisCorrection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerAxisCorrection.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerAxisCorrection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerAxisCorrection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerButton;
	static UEnum* ESimpleControllerMouseTriggerButton_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerButton.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerButton.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerMouseTriggerButton"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerButton.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerMouseTriggerButton>()
	{
		return ESimpleControllerMouseTriggerButton_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics::Enumerators[] = {
		{ "ESimpleControllerMouseTriggerButton::LeftMouseButton", (int64)ESimpleControllerMouseTriggerButton::LeftMouseButton },
		{ "ESimpleControllerMouseTriggerButton::RightMouseButton", (int64)ESimpleControllerMouseTriggerButton::RightMouseButton },
		{ "ESimpleControllerMouseTriggerButton::MiddleMouseButton", (int64)ESimpleControllerMouseTriggerButton::MiddleMouseButton },
		{ "ESimpleControllerMouseTriggerButton::ThumbMouseButton", (int64)ESimpleControllerMouseTriggerButton::ThumbMouseButton },
		{ "ESimpleControllerMouseTriggerButton::ThumbMouseButton2", (int64)ESimpleControllerMouseTriggerButton::ThumbMouseButton2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeftMouseButton.DisplayName", "LeftMouseButton" },
		{ "LeftMouseButton.Name", "ESimpleControllerMouseTriggerButton::LeftMouseButton" },
		{ "MiddleMouseButton.DisplayName", "MiddleMouseButton" },
		{ "MiddleMouseButton.Name", "ESimpleControllerMouseTriggerButton::MiddleMouseButton" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "RightMouseButton.DisplayName", "RightMouseButton" },
		{ "RightMouseButton.Name", "ESimpleControllerMouseTriggerButton::RightMouseButton" },
		{ "ThumbMouseButton.DisplayName", "ThumbMouseButton" },
		{ "ThumbMouseButton.Name", "ESimpleControllerMouseTriggerButton::ThumbMouseButton" },
		{ "ThumbMouseButton2.DisplayName", "ThumbMouseButton2" },
		{ "ThumbMouseButton2.Name", "ESimpleControllerMouseTriggerButton::ThumbMouseButton2" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerMouseTriggerButton",
		"ESimpleControllerMouseTriggerButton",
		Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerButton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerButton.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerButton_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerButton.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerType;
	static UEnum* ESimpleControllerMouseTriggerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerMouseTriggerType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerMouseTriggerType>()
	{
		return ESimpleControllerMouseTriggerType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics::Enumerators[] = {
		{ "ESimpleControllerMouseTriggerType::Down", (int64)ESimpleControllerMouseTriggerType::Down },
		{ "ESimpleControllerMouseTriggerType::Up", (int64)ESimpleControllerMouseTriggerType::Up },
		{ "ESimpleControllerMouseTriggerType::DoubleClick", (int64)ESimpleControllerMouseTriggerType::DoubleClick },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoubleClick.DisplayName", "DoubleClick" },
		{ "DoubleClick.Name", "ESimpleControllerMouseTriggerType::DoubleClick" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "ESimpleControllerMouseTriggerType::Down" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "ESimpleControllerMouseTriggerType::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerMouseTriggerType",
		"ESimpleControllerMouseTriggerType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerMouseTriggerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerKeyboardTriggerType;
	static UEnum* ESimpleControllerKeyboardTriggerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerKeyboardTriggerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerKeyboardTriggerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerKeyboardTriggerType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerKeyboardTriggerType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerKeyboardTriggerType>()
	{
		return ESimpleControllerKeyboardTriggerType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics::Enumerators[] = {
		{ "ESimpleControllerKeyboardTriggerType::Down", (int64)ESimpleControllerKeyboardTriggerType::Down },
		{ "ESimpleControllerKeyboardTriggerType::Up", (int64)ESimpleControllerKeyboardTriggerType::Up },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.DisplayName", "Down" },
		{ "Down.Name", "ESimpleControllerKeyboardTriggerType::Down" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "ESimpleControllerKeyboardTriggerType::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerKeyboardTriggerType",
		"ESimpleControllerKeyboardTriggerType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerKeyboardTriggerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerKeyboardTriggerType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerKeyboardTriggerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerKeyboardTriggerType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleControllerMappingButtonAction;
class UScriptStruct* FSimpleControllerMappingButtonAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleControllerMappingButtonAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleControllerMappingButtonAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerMappingButtonAction"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleControllerMappingButtonAction.OuterSingleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerMappingButtonAction>()
{
	return FSimpleControllerMappingButtonAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStructID_MetaData[];
#endif
		static void NewProp_bStructID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStructID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerMappingButtonAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_description_MetaData[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleControllerMappingButtonAction, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_tag_MetaData[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/*This is for sorting/categorizing. You can find this action with the function \"getMappingActionsByTag\". */" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "This is for sorting/categorizing. You can find this action with the function \"getMappingActionsByTag\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleControllerMappingButtonAction, tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_tag_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_tag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_bStructID_MetaData[] = {
		{ "Comment", "/** If empty Please enter a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored. */" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "If empty Please enter a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_bStructID_SetBit(void* Obj)
	{
		((FSimpleControllerMappingButtonAction*)Obj)->bStructID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_bStructID = { "bStructID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleControllerMappingButtonAction), &Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_bStructID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_bStructID_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_bStructID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewProp_bStructID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerMappingButtonAction",
		Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::PropPointers),
		sizeof(FSimpleControllerMappingButtonAction),
		alignof(FSimpleControllerMappingButtonAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleControllerMappingButtonAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleControllerMappingButtonAction.InnerSingleton, Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleControllerMappingButtonAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleControllerMappingAxisAction;
class UScriptStruct* FSimpleControllerMappingAxisAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleControllerMappingAxisAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleControllerMappingAxisAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerMappingAxisAction"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleControllerMappingAxisAction.OuterSingleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerMappingAxisAction>()
{
	return FSimpleControllerMappingAxisAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_invertAxis_MetaData[];
#endif
		static void NewProp_invertAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_invertAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStructID_MetaData[];
#endif
		static void NewProp_bStructID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStructID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerMappingAxisAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_description_MetaData[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleControllerMappingAxisAction, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_tag_MetaData[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/*This is for sorting/categorizing. You can find this action with the function \"getMappingActionsByTag\". */" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "This is for sorting/categorizing. You can find this action with the function \"getMappingActionsByTag\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleControllerMappingAxisAction, tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_tag_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_tag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_invertAxis_MetaData[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_invertAxis_SetBit(void* Obj)
	{
		((FSimpleControllerMappingAxisAction*)Obj)->invertAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_invertAxis = { "invertAxis", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleControllerMappingAxisAction), &Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_invertAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_invertAxis_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_invertAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_bStructID_MetaData[] = {
		{ "Comment", "/** If empty Please enter a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored. */" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "If empty Please enter a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_bStructID_SetBit(void* Obj)
	{
		((FSimpleControllerMappingAxisAction*)Obj)->bStructID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_bStructID = { "bStructID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleControllerMappingAxisAction), &Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_bStructID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_bStructID_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_bStructID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_invertAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewProp_bStructID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerMappingAxisAction",
		Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::PropPointers),
		sizeof(FSimpleControllerMappingAxisAction),
		alignof(FSimpleControllerMappingAxisAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleControllerMappingAxisAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleControllerMappingAxisAction.InnerSingleton, Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleControllerMappingAxisAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleControllerMappingProfile;
class UScriptStruct* FSimpleControllerMappingProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleControllerMappingProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleControllerMappingProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerMappingProfile, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerMappingProfile"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleControllerMappingProfile.OuterSingleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerMappingProfile>()
{
	return FSimpleControllerMappingProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_structID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_structID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_buttonActions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_buttonActions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttonActions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_buttonActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_axisActions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_axisActions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisActions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_axisActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerMappingProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_structID_MetaData[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "Comment", "/** If empty {00000000-0000-0000-0000-000000000000} Please create a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored. */" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "If empty {00000000-0000-0000-0000-000000000000} Please create a unique ID! This ID is needed to create an internal uniqueness. If an ID has been filled in then the variable can be ignored." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_structID = { "structID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleControllerMappingProfile, structID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_structID_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_structID_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions_ValueProp = { "buttonActions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction, METADATA_PARAMS(0, nullptr) }; // 708247476
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions_Key_KeyProp = { "buttonActions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions_MetaData[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions = { "buttonActions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleControllerMappingProfile, buttonActions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions_MetaData) }; // 708247476
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions_ValueProp = { "axisActions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction, METADATA_PARAMS(0, nullptr) }; // 3232960627
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions_Key_KeyProp = { "axisActions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions_MetaData[] = {
		{ "Category", "SimpleControllerPlugin" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions = { "axisActions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleControllerMappingProfile, axisActions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions_MetaData), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions_MetaData) }; // 3232960627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_structID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_buttonActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewProp_axisActions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerMappingProfile",
		Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::PropPointers),
		sizeof(FSimpleControllerMappingProfile),
		alignof(FSimpleControllerMappingProfile),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerMappingProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleControllerMappingProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleControllerMappingProfile.InnerSingleton, Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleControllerMappingProfile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleControllerDevice;
class UScriptStruct* FSimpleControllerDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleControllerDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleControllerDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerDevice, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerDevice"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleControllerDevice.OuterSingleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerDevice>()
{
	return FSimpleControllerDevice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerDevice>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerDevice",
		nullptr,
		0,
		sizeof(FSimpleControllerDevice),
		alignof(FSimpleControllerDevice),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleControllerDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleControllerDevice.InnerSingleton, Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleControllerDevice.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerSensorType;
	static UEnum* ESimpleControllerSensorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerSensorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerSensorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerSensorType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerSensorType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerSensorType>()
	{
		return ESimpleControllerSensorType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics::Enumerators[] = {
		{ "ESimpleControllerSensorType::ACCELATOR", (int64)ESimpleControllerSensorType::ACCELATOR },
		{ "ESimpleControllerSensorType::GYRO", (int64)ESimpleControllerSensorType::GYRO },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics::Enum_MetaDataParams[] = {
		{ "ACCELATOR.Name", "ESimpleControllerSensorType::ACCELATOR" },
		{ "BlueprintType", "true" },
		{ "GYRO.Name", "ESimpleControllerSensorType::GYRO" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerSensorType",
		"ESimpleControllerSensorType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerSensorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerSensorType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerSensorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerSensorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectType;
	static UEnum* ESimpleControllerForceFeedbackEffectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackEffectType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectType>()
	{
		return ESimpleControllerForceFeedbackEffectType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics::Enumerators[] = {
		{ "ESimpleControllerForceFeedbackEffectType::CONSTANT", (int64)ESimpleControllerForceFeedbackEffectType::CONSTANT },
		{ "ESimpleControllerForceFeedbackEffectType::LEFTRIGHT", (int64)ESimpleControllerForceFeedbackEffectType::LEFTRIGHT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CONSTANT.Name", "ESimpleControllerForceFeedbackEffectType::CONSTANT" },
		{ "LEFTRIGHT.Name", "ESimpleControllerForceFeedbackEffectType::LEFTRIGHT" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerForceFeedbackEffectType",
		"ESimpleControllerForceFeedbackEffectType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType;
	static UEnum* ESimpleControllerForceFeedbackEffectPeriodicType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackEffectPeriodicType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectPeriodicType>()
	{
		return ESimpleControllerForceFeedbackEffectPeriodicType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics::Enumerators[] = {
		{ "ESimpleControllerForceFeedbackEffectPeriodicType::SINE", (int64)ESimpleControllerForceFeedbackEffectPeriodicType::SINE },
		{ "ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE", (int64)ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE },
		{ "ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP", (int64)ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP },
		{ "ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN", (int64)ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "SAWTOOTHDOWN.Name", "ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHDOWN" },
		{ "SAWTOOTHUP.Name", "ESimpleControllerForceFeedbackEffectPeriodicType::SAWTOOTHUP" },
		{ "SINE.Name", "ESimpleControllerForceFeedbackEffectPeriodicType::SINE" },
		{ "TRIANGLE.Name", "ESimpleControllerForceFeedbackEffectPeriodicType::TRIANGLE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerForceFeedbackEffectPeriodicType",
		"ESimpleControllerForceFeedbackEffectPeriodicType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectConditionType;
	static UEnum* ESimpleControllerForceFeedbackEffectConditionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectConditionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackEffectConditionType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectConditionType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackEffectConditionType>()
	{
		return ESimpleControllerForceFeedbackEffectConditionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics::Enumerators[] = {
		{ "ESimpleControllerForceFeedbackEffectConditionType::SPRING", (int64)ESimpleControllerForceFeedbackEffectConditionType::SPRING },
		{ "ESimpleControllerForceFeedbackEffectConditionType::DAMPER", (int64)ESimpleControllerForceFeedbackEffectConditionType::DAMPER },
		{ "ESimpleControllerForceFeedbackEffectConditionType::INERTIA", (int64)ESimpleControllerForceFeedbackEffectConditionType::INERTIA },
		{ "ESimpleControllerForceFeedbackEffectConditionType::FRICTION", (int64)ESimpleControllerForceFeedbackEffectConditionType::FRICTION },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DAMPER.Name", "ESimpleControllerForceFeedbackEffectConditionType::DAMPER" },
		{ "FRICTION.Name", "ESimpleControllerForceFeedbackEffectConditionType::FRICTION" },
		{ "INERTIA.Name", "ESimpleControllerForceFeedbackEffectConditionType::INERTIA" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "SPRING.Name", "ESimpleControllerForceFeedbackEffectConditionType::SPRING" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerForceFeedbackEffectConditionType",
		"ESimpleControllerForceFeedbackEffectConditionType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectConditionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectConditionType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectConditionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackDirectionType;
	static UEnum* ESimpleControllerForceFeedbackDirectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackDirectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackDirectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerForceFeedbackDirectionType"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackDirectionType.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerForceFeedbackDirectionType>()
	{
		return ESimpleControllerForceFeedbackDirectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics::Enumerators[] = {
		{ "ESimpleControllerForceFeedbackDirectionType::CARTESIAN", (int64)ESimpleControllerForceFeedbackDirectionType::CARTESIAN },
		{ "ESimpleControllerForceFeedbackDirectionType::POLAR", (int64)ESimpleControllerForceFeedbackDirectionType::POLAR },
		{ "ESimpleControllerForceFeedbackDirectionType::SPHERICAL", (int64)ESimpleControllerForceFeedbackDirectionType::SPHERICAL },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CARTESIAN.Name", "ESimpleControllerForceFeedbackDirectionType::CARTESIAN" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "POLAR.Name", "ESimpleControllerForceFeedbackDirectionType::POLAR" },
		{ "SPHERICAL.Name", "ESimpleControllerForceFeedbackDirectionType::SPHERICAL" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerForceFeedbackDirectionType",
		"ESimpleControllerForceFeedbackDirectionType",
		Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackDirectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackDirectionType.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackDirectionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleControllerForceFeedbackEffect;
class UScriptStruct* FSimpleControllerForceFeedbackEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleControllerForceFeedbackEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleControllerForceFeedbackEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerForceFeedbackEffect"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleControllerForceFeedbackEffect.OuterSingleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerForceFeedbackEffect>()
{
	return FSimpleControllerForceFeedbackEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerForceFeedbackEffect>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerForceFeedbackEffect",
		nullptr,
		0,
		sizeof(FSimpleControllerForceFeedbackEffect),
		alignof(FSimpleControllerForceFeedbackEffect),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleControllerForceFeedbackEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleControllerForceFeedbackEffect.InnerSingleton, Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleControllerForceFeedbackEffect.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerDirectionalPad;
	static UEnum* ESimpleControllerDirectionalPad_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerDirectionalPad.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerDirectionalPad.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerDirectionalPad"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerDirectionalPad.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerDirectionalPad>()
	{
		return ESimpleControllerDirectionalPad_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics::Enumerators[] = {
		{ "ESimpleControllerDirectionalPad::CENTERED", (int64)ESimpleControllerDirectionalPad::CENTERED },
		{ "ESimpleControllerDirectionalPad::UP", (int64)ESimpleControllerDirectionalPad::UP },
		{ "ESimpleControllerDirectionalPad::RIGHT", (int64)ESimpleControllerDirectionalPad::RIGHT },
		{ "ESimpleControllerDirectionalPad::DOWN", (int64)ESimpleControllerDirectionalPad::DOWN },
		{ "ESimpleControllerDirectionalPad::LEFT", (int64)ESimpleControllerDirectionalPad::LEFT },
		{ "ESimpleControllerDirectionalPad::RIGHTUP", (int64)ESimpleControllerDirectionalPad::RIGHTUP },
		{ "ESimpleControllerDirectionalPad::RIGHTDOWN", (int64)ESimpleControllerDirectionalPad::RIGHTDOWN },
		{ "ESimpleControllerDirectionalPad::LEFTUP", (int64)ESimpleControllerDirectionalPad::LEFTUP },
		{ "ESimpleControllerDirectionalPad::LEFTDOWN", (int64)ESimpleControllerDirectionalPad::LEFTDOWN },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CENTERED.Name", "ESimpleControllerDirectionalPad::CENTERED" },
		{ "DOWN.Name", "ESimpleControllerDirectionalPad::DOWN" },
		{ "LEFT.Name", "ESimpleControllerDirectionalPad::LEFT" },
		{ "LEFTDOWN.Name", "ESimpleControllerDirectionalPad::LEFTDOWN" },
		{ "LEFTUP.Name", "ESimpleControllerDirectionalPad::LEFTUP" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "RIGHT.Name", "ESimpleControllerDirectionalPad::RIGHT" },
		{ "RIGHTDOWN.Name", "ESimpleControllerDirectionalPad::RIGHTDOWN" },
		{ "RIGHTUP.Name", "ESimpleControllerDirectionalPad::RIGHTUP" },
		{ "UP.Name", "ESimpleControllerDirectionalPad::UP" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerDirectionalPad",
		"ESimpleControllerDirectionalPad",
		Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerDirectionalPad.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerDirectionalPad.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerDirectionalPad.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleControllerButtons;
	static UEnum* ESimpleControllerButtons_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerButtons.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleControllerButtons.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_ESimpleControllerButtons, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("ESimpleControllerButtons"));
		}
		return Z_Registration_Info_UEnum_ESimpleControllerButtons.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<ESimpleControllerButtons>()
	{
		return ESimpleControllerButtons_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics::Enumerators[] = {
		{ "ESimpleControllerButtons::Button_0", (int64)ESimpleControllerButtons::Button_0 },
		{ "ESimpleControllerButtons::Button_1", (int64)ESimpleControllerButtons::Button_1 },
		{ "ESimpleControllerButtons::Button_2", (int64)ESimpleControllerButtons::Button_2 },
		{ "ESimpleControllerButtons::Button_3", (int64)ESimpleControllerButtons::Button_3 },
		{ "ESimpleControllerButtons::Button_4", (int64)ESimpleControllerButtons::Button_4 },
		{ "ESimpleControllerButtons::Button_5", (int64)ESimpleControllerButtons::Button_5 },
		{ "ESimpleControllerButtons::Button_6", (int64)ESimpleControllerButtons::Button_6 },
		{ "ESimpleControllerButtons::Button_7", (int64)ESimpleControllerButtons::Button_7 },
		{ "ESimpleControllerButtons::Button_8", (int64)ESimpleControllerButtons::Button_8 },
		{ "ESimpleControllerButtons::Button_9", (int64)ESimpleControllerButtons::Button_9 },
		{ "ESimpleControllerButtons::Button_10", (int64)ESimpleControllerButtons::Button_10 },
		{ "ESimpleControllerButtons::Button_11", (int64)ESimpleControllerButtons::Button_11 },
		{ "ESimpleControllerButtons::Button_12", (int64)ESimpleControllerButtons::Button_12 },
		{ "ESimpleControllerButtons::Button_13", (int64)ESimpleControllerButtons::Button_13 },
		{ "ESimpleControllerButtons::Button_14", (int64)ESimpleControllerButtons::Button_14 },
		{ "ESimpleControllerButtons::Button_15", (int64)ESimpleControllerButtons::Button_15 },
		{ "ESimpleControllerButtons::Button_16", (int64)ESimpleControllerButtons::Button_16 },
		{ "ESimpleControllerButtons::Button_17", (int64)ESimpleControllerButtons::Button_17 },
		{ "ESimpleControllerButtons::Button_18", (int64)ESimpleControllerButtons::Button_18 },
		{ "ESimpleControllerButtons::Button_19", (int64)ESimpleControllerButtons::Button_19 },
		{ "ESimpleControllerButtons::Button_20", (int64)ESimpleControllerButtons::Button_20 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Button_0.Name", "ESimpleControllerButtons::Button_0" },
		{ "Button_1.Name", "ESimpleControllerButtons::Button_1" },
		{ "Button_10.Name", "ESimpleControllerButtons::Button_10" },
		{ "Button_11.Name", "ESimpleControllerButtons::Button_11" },
		{ "Button_12.Name", "ESimpleControllerButtons::Button_12" },
		{ "Button_13.Name", "ESimpleControllerButtons::Button_13" },
		{ "Button_14.Name", "ESimpleControllerButtons::Button_14" },
		{ "Button_15.Name", "ESimpleControllerButtons::Button_15" },
		{ "Button_16.Name", "ESimpleControllerButtons::Button_16" },
		{ "Button_17.Name", "ESimpleControllerButtons::Button_17" },
		{ "Button_18.Name", "ESimpleControllerButtons::Button_18" },
		{ "Button_19.Name", "ESimpleControllerButtons::Button_19" },
		{ "Button_2.Name", "ESimpleControllerButtons::Button_2" },
		{ "Button_20.Name", "ESimpleControllerButtons::Button_20" },
		{ "Button_3.Name", "ESimpleControllerButtons::Button_3" },
		{ "Button_4.Name", "ESimpleControllerButtons::Button_4" },
		{ "Button_5.Name", "ESimpleControllerButtons::Button_5" },
		{ "Button_6.Name", "ESimpleControllerButtons::Button_6" },
		{ "Button_7.Name", "ESimpleControllerButtons::Button_7" },
		{ "Button_8.Name", "ESimpleControllerButtons::Button_8" },
		{ "Button_9.Name", "ESimpleControllerButtons::Button_9" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"ESimpleControllerButtons",
		"ESimpleControllerButtons",
		Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons()
	{
		if (!Z_Registration_Info_UEnum_ESimpleControllerButtons.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleControllerButtons.InnerSingleton, Z_Construct_UEnum_SimpleController_ESimpleControllerButtons_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleControllerButtons.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartZone;
	static UEnum* SCDualSenseTriggerEffectStartZone_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartZone.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartZone.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SCDualSenseTriggerEffectStartZone"));
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartZone.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<SCDualSenseTriggerEffectStartZone>()
	{
		return SCDualSenseTriggerEffectStartZone_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics::Enumerators[] = {
		{ "SCDualSenseTriggerEffectStartZone::Value_0", (int64)SCDualSenseTriggerEffectStartZone::Value_0 },
		{ "SCDualSenseTriggerEffectStartZone::Value_1", (int64)SCDualSenseTriggerEffectStartZone::Value_1 },
		{ "SCDualSenseTriggerEffectStartZone::Value_2", (int64)SCDualSenseTriggerEffectStartZone::Value_2 },
		{ "SCDualSenseTriggerEffectStartZone::Value_3", (int64)SCDualSenseTriggerEffectStartZone::Value_3 },
		{ "SCDualSenseTriggerEffectStartZone::Value_4", (int64)SCDualSenseTriggerEffectStartZone::Value_4 },
		{ "SCDualSenseTriggerEffectStartZone::Value_5", (int64)SCDualSenseTriggerEffectStartZone::Value_5 },
		{ "SCDualSenseTriggerEffectStartZone::Value_6", (int64)SCDualSenseTriggerEffectStartZone::Value_6 },
		{ "SCDualSenseTriggerEffectStartZone::Value_7", (int64)SCDualSenseTriggerEffectStartZone::Value_7 },
		{ "SCDualSenseTriggerEffectStartZone::Value_8", (int64)SCDualSenseTriggerEffectStartZone::Value_8 },
		{ "SCDualSenseTriggerEffectStartZone::Value_9", (int64)SCDualSenseTriggerEffectStartZone::Value_9 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Value_0.DisplayName", "0" },
		{ "Value_0.Name", "SCDualSenseTriggerEffectStartZone::Value_0" },
		{ "Value_1.DisplayName", "1" },
		{ "Value_1.Name", "SCDualSenseTriggerEffectStartZone::Value_1" },
		{ "Value_2.DisplayName", "2" },
		{ "Value_2.Name", "SCDualSenseTriggerEffectStartZone::Value_2" },
		{ "Value_3.DisplayName", "3" },
		{ "Value_3.Name", "SCDualSenseTriggerEffectStartZone::Value_3" },
		{ "Value_4.DisplayName", "4" },
		{ "Value_4.Name", "SCDualSenseTriggerEffectStartZone::Value_4" },
		{ "Value_5.DisplayName", "5" },
		{ "Value_5.Name", "SCDualSenseTriggerEffectStartZone::Value_5" },
		{ "Value_6.DisplayName", "6" },
		{ "Value_6.Name", "SCDualSenseTriggerEffectStartZone::Value_6" },
		{ "Value_7.DisplayName", "7" },
		{ "Value_7.Name", "SCDualSenseTriggerEffectStartZone::Value_7" },
		{ "Value_8.DisplayName", "8" },
		{ "Value_8.Name", "SCDualSenseTriggerEffectStartZone::Value_8" },
		{ "Value_9.DisplayName", "9" },
		{ "Value_9.Name", "SCDualSenseTriggerEffectStartZone::Value_9" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"SCDualSenseTriggerEffectStartZone",
		"SCDualSenseTriggerEffectStartZone",
		Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartZone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartZone.InnerSingleton, Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartZone_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartZone.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartPosition;
	static UEnum* SCDualSenseTriggerEffectStartPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SCDualSenseTriggerEffectStartPosition"));
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartPosition.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<SCDualSenseTriggerEffectStartPosition>()
	{
		return SCDualSenseTriggerEffectStartPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics::Enumerators[] = {
		{ "SCDualSenseTriggerEffectStartPosition::Value_2", (int64)SCDualSenseTriggerEffectStartPosition::Value_2 },
		{ "SCDualSenseTriggerEffectStartPosition::Value_3", (int64)SCDualSenseTriggerEffectStartPosition::Value_3 },
		{ "SCDualSenseTriggerEffectStartPosition::Value_4", (int64)SCDualSenseTriggerEffectStartPosition::Value_4 },
		{ "SCDualSenseTriggerEffectStartPosition::Value_5", (int64)SCDualSenseTriggerEffectStartPosition::Value_5 },
		{ "SCDualSenseTriggerEffectStartPosition::Value_6", (int64)SCDualSenseTriggerEffectStartPosition::Value_6 },
		{ "SCDualSenseTriggerEffectStartPosition::Value_7", (int64)SCDualSenseTriggerEffectStartPosition::Value_7 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Value_2.DisplayName", "2" },
		{ "Value_2.Name", "SCDualSenseTriggerEffectStartPosition::Value_2" },
		{ "Value_3.DisplayName", "3" },
		{ "Value_3.Name", "SCDualSenseTriggerEffectStartPosition::Value_3" },
		{ "Value_4.DisplayName", "4" },
		{ "Value_4.Name", "SCDualSenseTriggerEffectStartPosition::Value_4" },
		{ "Value_5.DisplayName", "5" },
		{ "Value_5.Name", "SCDualSenseTriggerEffectStartPosition::Value_5" },
		{ "Value_6.DisplayName", "6" },
		{ "Value_6.Name", "SCDualSenseTriggerEffectStartPosition::Value_6" },
		{ "Value_7.DisplayName", "7" },
		{ "Value_7.Name", "SCDualSenseTriggerEffectStartPosition::Value_7" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"SCDualSenseTriggerEffectStartPosition",
		"SCDualSenseTriggerEffectStartPosition",
		Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartPosition.InnerSingleton, Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStartPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartPosition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SCDualSenseTriggerEffectEndPosition;
	static UEnum* SCDualSenseTriggerEffectEndPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectEndPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SCDualSenseTriggerEffectEndPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SCDualSenseTriggerEffectEndPosition"));
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectEndPosition.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<SCDualSenseTriggerEffectEndPosition>()
	{
		return SCDualSenseTriggerEffectEndPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics::Enumerators[] = {
		{ "SCDualSenseTriggerEffectEndPosition::Value_3", (int64)SCDualSenseTriggerEffectEndPosition::Value_3 },
		{ "SCDualSenseTriggerEffectEndPosition::Value_4", (int64)SCDualSenseTriggerEffectEndPosition::Value_4 },
		{ "SCDualSenseTriggerEffectEndPosition::Value_5", (int64)SCDualSenseTriggerEffectEndPosition::Value_5 },
		{ "SCDualSenseTriggerEffectEndPosition::Value_6", (int64)SCDualSenseTriggerEffectEndPosition::Value_6 },
		{ "SCDualSenseTriggerEffectEndPosition::Value_7", (int64)SCDualSenseTriggerEffectEndPosition::Value_7 },
		{ "SCDualSenseTriggerEffectEndPosition::Value_8", (int64)SCDualSenseTriggerEffectEndPosition::Value_8 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Value_3.DisplayName", "3" },
		{ "Value_3.Name", "SCDualSenseTriggerEffectEndPosition::Value_3" },
		{ "Value_4.DisplayName", "4" },
		{ "Value_4.Name", "SCDualSenseTriggerEffectEndPosition::Value_4" },
		{ "Value_5.DisplayName", "5" },
		{ "Value_5.Name", "SCDualSenseTriggerEffectEndPosition::Value_5" },
		{ "Value_6.DisplayName", "6" },
		{ "Value_6.Name", "SCDualSenseTriggerEffectEndPosition::Value_6" },
		{ "Value_7.DisplayName", "7" },
		{ "Value_7.Name", "SCDualSenseTriggerEffectEndPosition::Value_7" },
		{ "Value_8.DisplayName", "8" },
		{ "Value_8.Name", "SCDualSenseTriggerEffectEndPosition::Value_8" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"SCDualSenseTriggerEffectEndPosition",
		"SCDualSenseTriggerEffectEndPosition",
		Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectEndPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SCDualSenseTriggerEffectEndPosition.InnerSingleton, Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectEndPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectEndPosition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrength;
	static UEnum* SCDualSenseTriggerEffectStrength_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrength.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrength.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SCDualSenseTriggerEffectStrength"));
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrength.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<SCDualSenseTriggerEffectStrength>()
	{
		return SCDualSenseTriggerEffectStrength_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics::Enumerators[] = {
		{ "SCDualSenseTriggerEffectStrength::Value_1", (int64)SCDualSenseTriggerEffectStrength::Value_1 },
		{ "SCDualSenseTriggerEffectStrength::Value_2", (int64)SCDualSenseTriggerEffectStrength::Value_2 },
		{ "SCDualSenseTriggerEffectStrength::Value_3", (int64)SCDualSenseTriggerEffectStrength::Value_3 },
		{ "SCDualSenseTriggerEffectStrength::Value_4", (int64)SCDualSenseTriggerEffectStrength::Value_4 },
		{ "SCDualSenseTriggerEffectStrength::Value_5", (int64)SCDualSenseTriggerEffectStrength::Value_5 },
		{ "SCDualSenseTriggerEffectStrength::Value_6", (int64)SCDualSenseTriggerEffectStrength::Value_6 },
		{ "SCDualSenseTriggerEffectStrength::Value_7", (int64)SCDualSenseTriggerEffectStrength::Value_7 },
		{ "SCDualSenseTriggerEffectStrength::Value_8", (int64)SCDualSenseTriggerEffectStrength::Value_8 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Value_1.DisplayName", "1" },
		{ "Value_1.Name", "SCDualSenseTriggerEffectStrength::Value_1" },
		{ "Value_2.DisplayName", "2" },
		{ "Value_2.Name", "SCDualSenseTriggerEffectStrength::Value_2" },
		{ "Value_3.DisplayName", "3" },
		{ "Value_3.Name", "SCDualSenseTriggerEffectStrength::Value_3" },
		{ "Value_4.DisplayName", "4" },
		{ "Value_4.Name", "SCDualSenseTriggerEffectStrength::Value_4" },
		{ "Value_5.DisplayName", "5" },
		{ "Value_5.Name", "SCDualSenseTriggerEffectStrength::Value_5" },
		{ "Value_6.DisplayName", "6" },
		{ "Value_6.Name", "SCDualSenseTriggerEffectStrength::Value_6" },
		{ "Value_7.DisplayName", "7" },
		{ "Value_7.Name", "SCDualSenseTriggerEffectStrength::Value_7" },
		{ "Value_8.DisplayName", "8" },
		{ "Value_8.Name", "SCDualSenseTriggerEffectStrength::Value_8" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"SCDualSenseTriggerEffectStrength",
		"SCDualSenseTriggerEffectStrength",
		Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrength.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrength.InnerSingleton, Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrength_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrength.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrengthMulti;
	static UEnum* SCDualSenseTriggerEffectStrengthMulti_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrengthMulti.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrengthMulti.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti, (UObject*)Z_Construct_UPackage__Script_SimpleController(), TEXT("SCDualSenseTriggerEffectStrengthMulti"));
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrengthMulti.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UEnum* StaticEnum<SCDualSenseTriggerEffectStrengthMulti>()
	{
		return SCDualSenseTriggerEffectStrengthMulti_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics::Enumerators[] = {
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_0", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_0 },
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_1", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_1 },
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_2", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_2 },
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_3", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_3 },
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_4", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_4 },
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_5", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_5 },
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_6", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_6 },
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_7", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_7 },
		{ "SCDualSenseTriggerEffectStrengthMulti::Value_8", (int64)SCDualSenseTriggerEffectStrengthMulti::Value_8 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "Value_0.DisplayName", "0" },
		{ "Value_0.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_0" },
		{ "Value_1.DisplayName", "1" },
		{ "Value_1.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_1" },
		{ "Value_2.DisplayName", "2" },
		{ "Value_2.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_2" },
		{ "Value_3.DisplayName", "3" },
		{ "Value_3.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_3" },
		{ "Value_4.DisplayName", "4" },
		{ "Value_4.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_4" },
		{ "Value_5.DisplayName", "5" },
		{ "Value_5.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_5" },
		{ "Value_6.DisplayName", "6" },
		{ "Value_6.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_6" },
		{ "Value_7.DisplayName", "7" },
		{ "Value_7.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_7" },
		{ "Value_8.DisplayName", "8" },
		{ "Value_8.Name", "SCDualSenseTriggerEffectStrengthMulti::Value_8" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		"SCDualSenseTriggerEffectStrengthMulti",
		"SCDualSenseTriggerEffectStrengthMulti",
		Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti()
	{
		if (!Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrengthMulti.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrengthMulti.InnerSingleton, Z_Construct_UEnum_SimpleController_SCDualSenseTriggerEffectStrengthMulti_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrengthMulti.InnerSingleton;
	}
	void USimpleControllerPluginSettings::StaticRegisterNativesUSimpleControllerPluginSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerPluginSettings);
	UClass* Z_Construct_UClass_USimpleControllerPluginSettings_NoRegister()
	{
		return USimpleControllerPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SDL_EVENTS_THREAD_MetaData[];
#endif
		static void NewProp_SDL_EVENTS_THREAD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SDL_EVENTS_THREAD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CREATE_PLAYER_CONTROLLER_MetaData[];
#endif
		static void NewProp_CREATE_PLAYER_CONTROLLER_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CREATE_PLAYER_CONTROLLER;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WHEEL_FF_TEST_MetaData[];
#endif
		static void NewProp_WHEEL_FF_TEST_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WHEEL_FF_TEST;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XINPUT_ENABLED_MetaData[];
#endif
		static void NewProp_XINPUT_ENABLED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_XINPUT_ENABLED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DIRECTINPUT_ENABLED_MetaData[];
#endif
		static void NewProp_DIRECTINPUT_ENABLED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DIRECTINPUT_ENABLED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_RAWINPUT_MetaData[];
#endif
		static void NewProp_JOYSTICK_RAWINPUT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_RAWINPUT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_WGI_MetaData[];
#endif
		static void NewProp_JOYSTICK_WGI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_WGI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_GAMECUBE_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_GAMECUBE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_GAMECUBE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE_MetaData[];
#endif
		static void NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_JOY_CONS_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_JOY_CONS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_JOY_CONS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_LUNA_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_LUNA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_LUNA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_SHIELD_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_SHIELD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_SHIELD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_PS3_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_PS3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_PS3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_PS4_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_PS4_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_PS4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_PS5_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_PS5_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_PS5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_STADIA_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_STADIA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_STADIA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_STEAM_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_STEAM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_STEAM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_SWITCH_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_SWITCH_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_SWITCH;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_WII_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_WII_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_WII;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_XBOX_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_XBOX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_XBOX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_XBOX_360_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_XBOX_360_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_XBOX_360;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_XBOX_ONE_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_XBOX_ONE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_XBOX_ONE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED_MetaData[];
#endif
		static void NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT_MetaData[];
#endif
		static void NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_ROG_CHAKRAM_MetaData[];
#endif
		static void NewProp_JOYSTICK_ROG_CHAKRAM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_ROG_CHAKRAM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_THREAD_MetaData[];
#endif
		static void NewProp_JOYSTICK_THREAD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_THREAD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LINUX_DIGITAL_HATS_MetaData[];
#endif
		static void NewProp_LINUX_DIGITAL_HATS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LINUX_DIGITAL_HATS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LINUX_HAT_DEADZONES_MetaData[];
#endif
		static void NewProp_LINUX_HAT_DEADZONES_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LINUX_HAT_DEADZONES;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LINUX_JOYSTICK_CLASSIC_MetaData[];
#endif
		static void NewProp_LINUX_JOYSTICK_CLASSIC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LINUX_JOYSTICK_CLASSIC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LINUX_JOYSTICK_DEADZONES_MetaData[];
#endif
		static void NewProp_LINUX_JOYSTICK_DEADZONES_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LINUX_JOYSTICK_DEADZONES;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS_MetaData[];
#endif
		static void NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ACCELEROMETER_AS_JOYSTICK_MetaData[];
#endif
		static void NewProp_ACCELEROMETER_AS_JOYSTICK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ACCELEROMETER_AS_JOYSTICK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING_MetaData[];
#endif
		static void NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Simple Controller Plugin" },
		{ "IncludePath", "SimpleController.h" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_SDL_EVENTS_THREAD_MetaData[] = {
		{ "Category", "System. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* True runs the SDL events in a separate thread. This allows events to run independently of the tick rate, but it is necessary to constantly switch to the game thread. Do not activate it on linux.  */" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "True runs the SDL events in a separate thread. This allows events to run independently of the tick rate, but it is necessary to constantly switch to the game thread. Do not activate it on linux." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_SDL_EVENTS_THREAD_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->SDL_EVENTS_THREAD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_SDL_EVENTS_THREAD = { "SDL_EVENTS_THREAD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_SDL_EVENTS_THREAD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_SDL_EVENTS_THREAD_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_SDL_EVENTS_THREAD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_CREATE_PLAYER_CONTROLLER_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/**\n\x09*  IOS only. Creates a Player Controller Object Reference for cheach additional Controller*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "IOS only. Creates a Player Controller Object Reference for cheach additional Controller" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_CREATE_PLAYER_CONTROLLER_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->CREATE_PLAYER_CONTROLLER = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_CREATE_PLAYER_CONTROLLER = { "CREATE_PLAYER_CONTROLLER", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_CREATE_PLAYER_CONTROLLER_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_CREATE_PLAYER_CONTROLLER_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_CREATE_PLAYER_CONTROLLER_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_WHEEL_FF_TEST_MetaData[] = {
		{ "Category", "Wheel" },
		{ "Comment", "/**\n\x09*  After connecting a Froce Feedback steering wheel, move it briefly with different settings to determine which settings FF works with. */" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "After connecting a Froce Feedback steering wheel, move it briefly with different settings to determine which settings FF works with." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_WHEEL_FF_TEST_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->WHEEL_FF_TEST = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_WHEEL_FF_TEST = { "WHEEL_FF_TEST", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_WHEEL_FF_TEST_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_WHEEL_FF_TEST_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_WHEEL_FF_TEST_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_ENABLED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable that lets you disable the detection and use of Xinput gamepad devices*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable that lets you disable the detection and use of Xinput gamepad devices" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_ENABLED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->XINPUT_ENABLED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_ENABLED = { "XINPUT_ENABLED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_ENABLED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_ENABLED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_ENABLED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_DIRECTINPUT_ENABLED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable that lets you disable the detection and use of DirectInput gamepad devices*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable that lets you disable the detection and use of DirectInput gamepad devices" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_DIRECTINPUT_ENABLED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->DIRECTINPUT_ENABLED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_DIRECTINPUT_ENABLED = { "DIRECTINPUT_ENABLED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_DIRECTINPUT_ENABLED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_DIRECTINPUT_ENABLED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_DIRECTINPUT_ENABLED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI joystick drivers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI joystick drivers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI = { "JOYSTICK_HIDAPI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable controlling whether the RAWINPUT joystick drivers should be used for better handling XInput-capable devices.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the RAWINPUT joystick drivers should be used for better handling XInput-capable devices." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_RAWINPUT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT = { "JOYSTICK_RAWINPUT", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_WGI_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*A variable controlling whether Windows.Gaming.Input should be used for controller handling.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether Windows.Gaming.Input should be used for controller handling." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_WGI_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_WGI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_WGI = { "JOYSTICK_WGI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_WGI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_WGI_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_WGI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_GAMECUBE_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI driver for Nintendo GameCube controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for Nintendo GameCube controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_GAMECUBE_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_GAMECUBE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_GAMECUBE = { "JOYSTICK_HIDAPI_GAMECUBE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_GAMECUBE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_GAMECUBE_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_GAMECUBE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether \"low_frequency_rumble\" and \"high_frequency_rumble\" is used to implement*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether \"low_frequency_rumble\" and \"high_frequency_rumble\" is used to implement" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_GAMECUBE_RUMBLE_BRAKE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE = { "JOYSTICK_GAMECUBE_RUMBLE_BRAKE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOY_CONS_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI driver for Nintendo Switch Joy-Cons should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for Nintendo Switch Joy-Cons should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOY_CONS_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_JOY_CONS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOY_CONS = { "JOYSTICK_HIDAPI_JOY_CONS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOY_CONS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOY_CONS_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOY_CONS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether Nintendo Switch Joy-Con controllers will be combined into a single Pro-like controller when using the HIDAPI driver*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether Nintendo Switch Joy-Con controllers will be combined into a single Pro-like controller when using the HIDAPI driver" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_COMBINE_JOY_CONS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS = { "JOYSTICK_HIDAPI_COMBINE_JOY_CONS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether Nintendo Switch Joy-Con controllers will be in vertical mode when using the HIDAPI driver*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether Nintendo Switch Joy-Con controllers will be in vertical mode when using the HIDAPI driver" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_VERTICAL_JOY_CONS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS = { "JOYSTICK_HIDAPI_VERTICAL_JOY_CONS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_LUNA_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI driver for Amazon Luna controllers connected via Bluetooth should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for Amazon Luna controllers connected via Bluetooth should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_LUNA_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_LUNA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_LUNA = { "JOYSTICK_HIDAPI_LUNA", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_LUNA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_LUNA_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_LUNA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI driver for Nintendo Online classic controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for Nintendo Online classic controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_NINTENDO_CLASSIC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC = { "JOYSTICK_HIDAPI_NINTENDO_CLASSIC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SHIELD_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI driver for NVIDIA SHIELD controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for NVIDIA SHIELD controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SHIELD_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_SHIELD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SHIELD = { "JOYSTICK_HIDAPI_SHIELD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SHIELD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SHIELD_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SHIELD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS3_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI driver for PS3 controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for PS3 controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS3_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_PS3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS3 = { "JOYSTICK_HIDAPI_PS3", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS3_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS3_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI driver for PS4 controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for PS4 controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_PS4 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4 = { "JOYSTICK_HIDAPI_PS4", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether extended input reports should be used for PS4 controllers when using the HIDAPI driver.\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - extended reports are not enabled (the default)\n\x09*    true       - extended reports\n\x09*\n\x09*  Extended input reports allow rumble on Bluetooth PS4 controllers, but\n\x09*  break DirectInput handling for applications that don't use SDL.\n\x09*\n\x09*  Once extended reports are enabled, they can not be disabled without\n\x09*  power cycling the controller.\n\x09*\n\x09*  For compatibility with applications written for versions of SDL prior\n\x09*  to the introduction of PS5 controller support, this value will also\n\x09*  control the state of extended reports on PS5 controllers when the\n\x09*  SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE hint is not explicitly set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether extended input reports should be used for PS4 controllers when using the HIDAPI driver.\n\nThis variable can be set to the following values:\n  false       - extended reports are not enabled (the default)\n  true       - extended reports\n\nExtended input reports allow rumble on Bluetooth PS4 controllers, but\nbreak DirectInput handling for applications that don't use SDL.\n\nOnce extended reports are enabled, they can not be disabled without\npower cycling the controller.\n\nFor compatibility with applications written for versions of SDL prior\nto the introduction of PS5 controller support, this value will also\ncontrol the state of extended reports on PS5 controllers when the\nSDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE hint is not explicitly set." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_PS4_RUMBLE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE = { "JOYSTICK_HIDAPI_PS4_RUMBLE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether extended input reports should be used for PS5 controllers when using the HIDAPI driver.\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - extended reports are not enabled (the default)\n\x09*    true       - extended reports\n\x09*\n\x09*  Extended input reports allow rumble on Bluetooth PS5 controllers, but\n\x09*  break DirectInput handling for applications that don't use SDL.\n\x09*\n\x09*  Once extended reports are enabled, they can not be disabled without\n\x09*  power cycling the controller.\n\x09*\n\x09*  For compatibility with applications written for versions of SDL prior\n\x09*  to the introduction of PS5 controller support, this value defaults to\n\x09*  the value of SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether extended input reports should be used for PS5 controllers when using the HIDAPI driver.\n\nThis variable can be set to the following values:\n  false       - extended reports are not enabled (the default)\n  true       - extended reports\n\nExtended input reports allow rumble on Bluetooth PS5 controllers, but\nbreak DirectInput handling for applications that don't use SDL.\n\nOnce extended reports are enabled, they can not be disabled without\npower cycling the controller.\n\nFor compatibility with applications written for versions of SDL prior\nto the introduction of PS5 controller support, this value defaults to\nthe value of SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_PS5_RUMBLE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE = { "JOYSTICK_HIDAPI_PS5_RUMBLE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/*A variable controlling whether the HIDAPI driver for PS5 controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for PS5 controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_PS5 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5 = { "JOYSTICK_HIDAPI_PS5", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/* A variable controlling whether the player LEDs should be lit to indicate which player is associated with a PS5 controller.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the player LEDs should be lit to indicate which player is associated with a PS5 controller." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_PS5_PLAYER_LED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED = { "JOYSTICK_HIDAPI_PS5_PLAYER_LED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STADIA_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/* A variable controlling whether the HIDAPI driver for Google Stadia controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for Google Stadia controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STADIA_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_STADIA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STADIA = { "JOYSTICK_HIDAPI_STADIA", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STADIA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STADIA_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STADIA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STEAM_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the HIDAPI driver for Bluetooth Steam Controllers should be used.\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - HIDAPI driver is not used\n\x09*    true       - HIDAPI driver is used for Steam Controllers, which requires Bluetooth access\n\x09*                and may prompt the user for permission on iOS and Android.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for Bluetooth Steam Controllers should be used.\n\nThis variable can be set to the following values:\n  false       - HIDAPI driver is not used\n  true       - HIDAPI driver is used for Steam Controllers, which requires Bluetooth access\n              and may prompt the user for permission on iOS and Android." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STEAM_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_STEAM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STEAM = { "JOYSTICK_HIDAPI_STEAM", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STEAM_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STEAM_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STEAM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/* A variable controlling whether the HIDAPI driver for Nintendo Switch controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for Nintendo Switch controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_SWITCH = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH = { "JOYSTICK_HIDAPI_SWITCH", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the Home button LED should be turned on when a Nintendo Switch Pro controller is opened\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - home button LED is turned off\n\x09*    true       - home button LED is turned on\n\x09*\n\x09*  By default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the Home button LED should be turned on when a Nintendo Switch Pro controller is opened\n\nThis variable can be set to the following values:\n  false       - home button LED is turned off\n  true       - home button LED is turned on\n\nBy default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_SWITCH_HOME_LED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED = { "JOYSTICK_HIDAPI_SWITCH_HOME_LED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the Home button LED should be turned on when a Nintendo Switch Joy-Con controller is opened\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false      - home button LED is turned off\n\x09*    true       - home button LED is turned on\n\x09*\n\x09*  By default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the Home button LED should be turned on when a Nintendo Switch Joy-Con controller is opened\n\nThis variable can be set to the following values:\n  false      - home button LED is turned off\n  true       - home button LED is turned on\n\nBy default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_JOYCON_HOME_LED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED = { "JOYSTICK_HIDAPI_JOYCON_HOME_LED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the player LEDs should be lit to indicate which player is associated with a Nintendo Switch controller.\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - player LEDs are not enabled\n\x09*    true     - player LEDs are enabled (the default)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the player LEDs should be lit to indicate which player is associated with a Nintendo Switch controller.\n\nThis variable can be set to the following values:\n  false       - player LEDs are not enabled\n  true     - player LEDs are enabled (the default)" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_SWITCH_PLAYER_LED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED = { "JOYSTICK_HIDAPI_SWITCH_PLAYER_LED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the HIDAPI driver for Nintendo Wii and Wii U controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for Nintendo Wii and Wii U controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_WII = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII = { "JOYSTICK_HIDAPI_WII", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the player LEDs should be lit to indicate which player is associated with a Wii controller.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the player LEDs should be lit to indicate which player is associated with a Wii controller." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_WII_PLAYER_LED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED = { "JOYSTICK_HIDAPI_WII_PLAYER_LED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable controlling whether the HIDAPI driver for XBox controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for XBox controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_XBOX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX = { "JOYSTICK_HIDAPI_XBOX", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the HIDAPI driver for XBox 360 controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for XBox 360 controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_XBOX_360 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360 = { "JOYSTICK_HIDAPI_XBOX_360", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the player LEDs should be lit to indicate which player is associated with an Xbox 360 controller.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the player LEDs should be lit to indicate which player is associated with an Xbox 360 controller." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED = { "JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the HIDAPI driver for XBox 360 wireless controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for XBox 360 wireless controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_XBOX_360_WIRELESS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS = { "JOYSTICK_HIDAPI_XBOX_360_WIRELESS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the HIDAPI driver for XBox One controllers should be used.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the HIDAPI driver for XBox One controllers should be used." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_XBOX_ONE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE = { "JOYSTICK_HIDAPI_XBOX_ONE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether the Home button LED should be turned on when an Xbox One controller is opened\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - home button LED is turned off\n\x09*    true       - home button LED is turned on\n\x09*\n\x09*  By default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED. The default brightness is 0.4.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the Home button LED should be turned on when an Xbox One controller is opened\n\nThis variable can be set to the following values:\n  false       - home button LED is turned off\n  true       - home button LED is turned on\n\nBy default the Home button LED state is not changed. This hint can also be set to a floating point value between 0.0 and 1.0 which controls the brightness of the Home button LED. The default brightness is 0.4." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED = { "JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable controlling whether the RAWINPUT driver should pull correlated data from XInput.\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false      - RAWINPUT driver will only use data from raw input APIs\n\x09*    true       - RAWINPUT driver will also pull data from XInput, providing\n\x09*                better trigger axes, guide button presses, and rumble support\n\x09*                for Xbox controllers\n\x09*\n\x09*  The default is true.  This hint applies to any joysticks opened after setting the hint.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the RAWINPUT driver should pull correlated data from XInput.\n\n This variable can be set to the following values:\n   false      - RAWINPUT driver will only use data from raw input APIs\n   true       - RAWINPUT driver will also pull data from XInput, providing\n               better trigger axes, guide button presses, and rumble support\n               for Xbox controllers\n\n The default is true.  This hint applies to any joysticks opened after setting the hint." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_RAWINPUT_CORRELATE_XINPUT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT = { "JOYSTICK_RAWINPUT_CORRELATE_XINPUT", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ROG_CHAKRAM_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*A variable controlling whether the ROG Chakram mice should show up as joysticks*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the ROG Chakram mice should show up as joysticks" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ROG_CHAKRAM_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_ROG_CHAKRAM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ROG_CHAKRAM = { "JOYSTICK_ROG_CHAKRAM", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ROG_CHAKRAM_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ROG_CHAKRAM_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ROG_CHAKRAM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_THREAD_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable controlling whether a separate thread should be used\n\x09*          for handling joystick detection and raw input messages on Windows*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether a separate thread should be used\n         for handling joystick detection and raw input messages on Windows" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_THREAD_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_THREAD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_THREAD = { "JOYSTICK_THREAD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_THREAD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_THREAD_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_THREAD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_DIGITAL_HATS_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable controlling whether joysticks on Linux will always treat 'hat' axis inputs (ABS_HAT0X - ABS_HAT3Y) as 8-way digital hats without checking whether they may be analog.\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - Only map hat axis inputs to digital hat outputs if the input axes appear to actually be digital (the default)\n\x09*    true       - Always handle the input axes numbered ABS_HAT0X to ABS_HAT3Y as digital hats\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether joysticks on Linux will always treat 'hat' axis inputs (ABS_HAT0X - ABS_HAT3Y) as 8-way digital hats without checking whether they may be analog.\n\n This variable can be set to the following values:\n   false       - Only map hat axis inputs to digital hat outputs if the input axes appear to actually be digital (the default)\n   true       - Always handle the input axes numbered ABS_HAT0X to ABS_HAT3Y as digital hats" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_DIGITAL_HATS_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->LINUX_DIGITAL_HATS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_DIGITAL_HATS = { "LINUX_DIGITAL_HATS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_DIGITAL_HATS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_DIGITAL_HATS_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_DIGITAL_HATS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_HAT_DEADZONES_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable controlling whether digital hats on Linux will apply deadzones to their underlying input axes or use unfiltered values.\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - Return digital hat values based on unfiltered input axis values\n\x09*    true       - Return digital hat values with deadzones on the input axes taken into account (the default)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether digital hats on Linux will apply deadzones to their underlying input axes or use unfiltered values.\n\n This variable can be set to the following values:\n   false       - Return digital hat values based on unfiltered input axis values\n   true       - Return digital hat values with deadzones on the input axes taken into account (the default)" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_HAT_DEADZONES_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->LINUX_HAT_DEADZONES = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_HAT_DEADZONES = { "LINUX_HAT_DEADZONES", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_HAT_DEADZONES_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_HAT_DEADZONES_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_HAT_DEADZONES_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_CLASSIC_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*  A variable controlling whether to use the classic /dev/input/js* joystick interface or the newer /dev/input/event* joystick interface on Linux\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - Use /dev/input/event*\n\x09*    true       - Use /dev/input/js*\n\x09*\n\x09*  By default the /dev/input/event* interfaces are used\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether to use the classic /dev/input/js* joystick interface or the newer /dev/input/event* joystick interface on Linux\n\nThis variable can be set to the following values:\n  false       - Use /dev/input/event*\n  true       - Use /dev/input/js*\n\nBy default the /dev/input/event* interfaces are used" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_CLASSIC_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->LINUX_JOYSTICK_CLASSIC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_CLASSIC = { "LINUX_JOYSTICK_CLASSIC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_CLASSIC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_CLASSIC_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_CLASSIC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_DEADZONES_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable controlling whether joysticks on Linux adhere to their HID-defined deadzones or return unfiltered values.*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether joysticks on Linux adhere to their HID-defined deadzones or return unfiltered values." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_DEADZONES_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->LINUX_JOYSTICK_DEADZONES = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_DEADZONES = { "LINUX_JOYSTICK_DEADZONES", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_DEADZONES_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_DEADZONES_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_DEADZONES_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09*A variable that lets you enable joystick (and gamecontroller) events even when your app is in the background.\n\x09*\n\x09*  The variable can be set to the following values:\n\x09*    false       - Disable joystick & gamecontroller input events when the\n\x09*                application is in the background.\n\x09*    true       - Enable joystick & gamecontroller input events when the\n\x09*                application is in the background.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable that lets you enable joystick (and gamecontroller) events even when your app is in the background.\n\n The variable can be set to the following values:\n   false       - Disable joystick & gamecontroller input events when the\n               application is in the background.\n   true       - Enable joystick & gamecontroller input events when the\n               application is in the background." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->JOYSTICK_ALLOW_BACKGROUND_EVENTS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS = { "JOYSTICK_ALLOW_BACKGROUND_EVENTS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_ACCELEROMETER_AS_JOYSTICK_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable controlling whether the Android / iOS built-in\n\x09*  accelerometer should be listed as a joystick device.\n\x09*\n\x09*  This variable can be set to the following values:\n\x09*    false       - The accelerometer is not listed as a joystick\n\x09*    true       - The accelerometer is available as a 3 axis joystick.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable controlling whether the Android / iOS built-in\n accelerometer should be listed as a joystick device.\n\n This variable can be set to the following values:\n   false       - The accelerometer is not listed as a joystick\n   true       - The accelerometer is available as a 3 axis joystick." },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_ACCELEROMETER_AS_JOYSTICK_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->ACCELEROMETER_AS_JOYSTICK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_ACCELEROMETER_AS_JOYSTICK = { "ACCELEROMETER_AS_JOYSTICK", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_ACCELEROMETER_AS_JOYSTICK_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_ACCELEROMETER_AS_JOYSTICK_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_ACCELEROMETER_AS_JOYSTICK_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING_MetaData[] = {
		{ "Category", "SDL Setting. Changes take effect after editor restart" },
		{ "Comment", "/**\n\x09* A variable that causes SDL to use the old axis and button mapping for XInput devices.\n\x09*\n\x09*  This hint is for backwards compatibility only and will be removed in SDL 2.1\n\x09*/" },
		{ "ModuleRelativePath", "Public/SimpleController.h" },
		{ "ToolTip", "A variable that causes SDL to use the old axis and button mapping for XInput devices.\n\n This hint is for backwards compatibility only and will be removed in SDL 2.1" },
	};
#endif
	void Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING_SetBit(void* Obj)
	{
		((USimpleControllerPluginSettings*)Obj)->XINPUT_USE_OLD_JOYSTICK_MAPPING = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING = { "XINPUT_USE_OLD_JOYSTICK_MAPPING", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleControllerPluginSettings), &Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING_MetaData), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_SDL_EVENTS_THREAD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_CREATE_PLAYER_CONTROLLER,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_WHEEL_FF_TEST,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_ENABLED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_DIRECTINPUT_ENABLED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_WGI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_GAMECUBE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_GAMECUBE_RUMBLE_BRAKE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOY_CONS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_COMBINE_JOY_CONS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_LUNA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_NINTENDO_CLASSIC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SHIELD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS4_RUMBLE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_RUMBLE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_PS5_PLAYER_LED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STADIA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_STEAM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_HOME_LED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_JOYCON_HOME_LED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_SWITCH_PLAYER_LED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_WII_PLAYER_LED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_PLAYER_LED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_360_WIRELESS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_HIDAPI_XBOX_ONE_HOME_LED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_RAWINPUT_CORRELATE_XINPUT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ROG_CHAKRAM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_THREAD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_DIGITAL_HATS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_HAT_DEADZONES,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_CLASSIC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_LINUX_JOYSTICK_DEADZONES,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_JOYSTICK_ALLOW_BACKGROUND_EVENTS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_ACCELEROMETER_AS_JOYSTICK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerPluginSettings_Statics::NewProp_XINPUT_USE_OLD_JOYSTICK_MAPPING,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerPluginSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerPluginSettings_Statics::ClassParams = {
		&USimpleControllerPluginSettings::StaticClass,
		"SimpleController",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleControllerPluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerPluginSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerPluginSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USimpleControllerPluginSettings()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerPluginSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerPluginSettings.OuterSingleton, Z_Construct_UClass_USimpleControllerPluginSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerPluginSettings.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerPluginSettings>()
	{
		return USimpleControllerPluginSettings::StaticClass();
	}
	USimpleControllerPluginSettings::USimpleControllerPluginSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerPluginSettings);
	USimpleControllerPluginSettings::~USimpleControllerPluginSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::EnumInfo[] = {
		{ ESimpleControllerEventType_StaticEnum, TEXT("ESimpleControllerEventType"), &Z_Registration_Info_UEnum_ESimpleControllerEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 981907741U) },
		{ ESimpleControllerMapDoubleAction_StaticEnum, TEXT("ESimpleControllerMapDoubleAction"), &Z_Registration_Info_UEnum_ESimpleControllerMapDoubleAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1983148986U) },
		{ ESimpleControllerMapActionType_StaticEnum, TEXT("ESimpleControllerMapActionType"), &Z_Registration_Info_UEnum_ESimpleControllerMapActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 206521530U) },
		{ ESimpleControllerButtonStatus_StaticEnum, TEXT("ESimpleControllerButtonStatus"), &Z_Registration_Info_UEnum_ESimpleControllerButtonStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1836400762U) },
		{ ESimpleControllerType_StaticEnum, TEXT("ESimpleControllerType"), &Z_Registration_Info_UEnum_ESimpleControllerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3801166578U) },
		{ ESimpleControllerPowerLevel_StaticEnum, TEXT("ESimpleControllerPowerLevel"), &Z_Registration_Info_UEnum_ESimpleControllerPowerLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2630045115U) },
		{ ESimpleControllerWheelFFDirection_StaticEnum, TEXT("ESimpleControllerWheelFFDirection"), &Z_Registration_Info_UEnum_ESimpleControllerWheelFFDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1138683303U) },
		{ ESimpleControllerAxisCorrection_StaticEnum, TEXT("ESimpleControllerAxisCorrection"), &Z_Registration_Info_UEnum_ESimpleControllerAxisCorrection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3656754177U) },
		{ ESimpleControllerMouseTriggerButton_StaticEnum, TEXT("ESimpleControllerMouseTriggerButton"), &Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerButton, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3771610581U) },
		{ ESimpleControllerMouseTriggerType_StaticEnum, TEXT("ESimpleControllerMouseTriggerType"), &Z_Registration_Info_UEnum_ESimpleControllerMouseTriggerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 502606701U) },
		{ ESimpleControllerKeyboardTriggerType_StaticEnum, TEXT("ESimpleControllerKeyboardTriggerType"), &Z_Registration_Info_UEnum_ESimpleControllerKeyboardTriggerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1562957447U) },
		{ ESimpleControllerSensorType_StaticEnum, TEXT("ESimpleControllerSensorType"), &Z_Registration_Info_UEnum_ESimpleControllerSensorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 183799144U) },
		{ ESimpleControllerForceFeedbackEffectType_StaticEnum, TEXT("ESimpleControllerForceFeedbackEffectType"), &Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 285947336U) },
		{ ESimpleControllerForceFeedbackEffectPeriodicType_StaticEnum, TEXT("ESimpleControllerForceFeedbackEffectPeriodicType"), &Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectPeriodicType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3703386885U) },
		{ ESimpleControllerForceFeedbackEffectConditionType_StaticEnum, TEXT("ESimpleControllerForceFeedbackEffectConditionType"), &Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackEffectConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1526945435U) },
		{ ESimpleControllerForceFeedbackDirectionType_StaticEnum, TEXT("ESimpleControllerForceFeedbackDirectionType"), &Z_Registration_Info_UEnum_ESimpleControllerForceFeedbackDirectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2717397210U) },
		{ ESimpleControllerDirectionalPad_StaticEnum, TEXT("ESimpleControllerDirectionalPad"), &Z_Registration_Info_UEnum_ESimpleControllerDirectionalPad, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 46161789U) },
		{ ESimpleControllerButtons_StaticEnum, TEXT("ESimpleControllerButtons"), &Z_Registration_Info_UEnum_ESimpleControllerButtons, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1607718636U) },
		{ SCDualSenseTriggerEffectStartZone_StaticEnum, TEXT("SCDualSenseTriggerEffectStartZone"), &Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartZone, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1505549988U) },
		{ SCDualSenseTriggerEffectStartPosition_StaticEnum, TEXT("SCDualSenseTriggerEffectStartPosition"), &Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStartPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1980827139U) },
		{ SCDualSenseTriggerEffectEndPosition_StaticEnum, TEXT("SCDualSenseTriggerEffectEndPosition"), &Z_Registration_Info_UEnum_SCDualSenseTriggerEffectEndPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3092050388U) },
		{ SCDualSenseTriggerEffectStrength_StaticEnum, TEXT("SCDualSenseTriggerEffectStrength"), &Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrength, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3787614685U) },
		{ SCDualSenseTriggerEffectStrengthMulti_StaticEnum, TEXT("SCDualSenseTriggerEffectStrengthMulti"), &Z_Registration_Info_UEnum_SCDualSenseTriggerEffectStrengthMulti, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2463463634U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::ScriptStructInfo[] = {
		{ FSimpleControllerMappingButtonAction::StaticStruct, Z_Construct_UScriptStruct_FSimpleControllerMappingButtonAction_Statics::NewStructOps, TEXT("SimpleControllerMappingButtonAction"), &Z_Registration_Info_UScriptStruct_SimpleControllerMappingButtonAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleControllerMappingButtonAction), 708247476U) },
		{ FSimpleControllerMappingAxisAction::StaticStruct, Z_Construct_UScriptStruct_FSimpleControllerMappingAxisAction_Statics::NewStructOps, TEXT("SimpleControllerMappingAxisAction"), &Z_Registration_Info_UScriptStruct_SimpleControllerMappingAxisAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleControllerMappingAxisAction), 3232960627U) },
		{ FSimpleControllerMappingProfile::StaticStruct, Z_Construct_UScriptStruct_FSimpleControllerMappingProfile_Statics::NewStructOps, TEXT("SimpleControllerMappingProfile"), &Z_Registration_Info_UScriptStruct_SimpleControllerMappingProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleControllerMappingProfile), 1352928207U) },
		{ FSimpleControllerDevice::StaticStruct, Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::NewStructOps, TEXT("SimpleControllerDevice"), &Z_Registration_Info_UScriptStruct_SimpleControllerDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleControllerDevice), 1490416654U) },
		{ FSimpleControllerForceFeedbackEffect::StaticStruct, Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect_Statics::NewStructOps, TEXT("SimpleControllerForceFeedbackEffect"), &Z_Registration_Info_UScriptStruct_SimpleControllerForceFeedbackEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleControllerForceFeedbackEffect), 2742355357U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleControllerPluginSettings, USimpleControllerPluginSettings::StaticClass, TEXT("USimpleControllerPluginSettings"), &Z_Registration_Info_UClass_USimpleControllerPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerPluginSettings), 1712474855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_29485146(TEXT("/Script/SimpleController"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
