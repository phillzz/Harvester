// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../SimpleController/Public/SimpleControllerMobile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerMobile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMobile();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerMobile_NoRegister();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerUnrealMobileEvents();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerUnrealMobileEvents_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
	void USimpleControllerMobile::StaticRegisterNativesUSimpleControllerMobile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerMobile);
	UClass* Z_Construct_UClass_USimpleControllerMobile_NoRegister()
	{
		return USimpleControllerMobile::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerMobile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerMobile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMobile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerMobile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerMobile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerMobile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerMobile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerMobile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerMobile_Statics::ClassParams = {
		&USimpleControllerMobile::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerMobile_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerMobile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleControllerMobile()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerMobile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerMobile.OuterSingleton, Z_Construct_UClass_USimpleControllerMobile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerMobile.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerMobile>()
	{
		return USimpleControllerMobile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerMobile);
	USimpleControllerMobile::~USimpleControllerMobile() {}
	void USimpleControllerUnrealMobileEvents::StaticRegisterNativesUSimpleControllerUnrealMobileEvents()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleControllerUnrealMobileEvents);
	UClass* Z_Construct_UClass_USimpleControllerUnrealMobileEvents_NoRegister()
	{
		return USimpleControllerUnrealMobileEvents::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleControllerMobile.h" },
		{ "ModuleRelativePath", "Public/SimpleControllerMobile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerUnrealMobileEvents>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics::ClassParams = {
		&USimpleControllerUnrealMobileEvents::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USimpleControllerUnrealMobileEvents()
	{
		if (!Z_Registration_Info_UClass_USimpleControllerUnrealMobileEvents.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleControllerUnrealMobileEvents.OuterSingleton, Z_Construct_UClass_USimpleControllerUnrealMobileEvents_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleControllerUnrealMobileEvents.OuterSingleton;
	}
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerUnrealMobileEvents>()
	{
		return USimpleControllerUnrealMobileEvents::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerUnrealMobileEvents);
	USimpleControllerUnrealMobileEvents::~USimpleControllerUnrealMobileEvents() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMobile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMobile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleControllerMobile, USimpleControllerMobile::StaticClass, TEXT("USimpleControllerMobile"), &Z_Registration_Info_UClass_USimpleControllerMobile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerMobile), 2988224232U) },
		{ Z_Construct_UClass_USimpleControllerUnrealMobileEvents, USimpleControllerUnrealMobileEvents::StaticClass, TEXT("USimpleControllerUnrealMobileEvents"), &Z_Registration_Info_UClass_USimpleControllerUnrealMobileEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleControllerUnrealMobileEvents), 189492628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMobile_h_2112449997(TEXT("/Script/SimpleController"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMobile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleController_Source_SimpleController_Public_SimpleControllerMobile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
