// Copyright 2018 David Romanski(Socke). All Rights Reserved.

#include "SimpleController.h"

bool FSimpleControllerModule::moduleIsRun = true;

uint8 SCDualSenseTriggerEffectTypes::Off = 0x05;			// 00 00 0 101
uint8 SCDualSenseTriggerEffectTypes::Feedback = 0x21;		// 00 10 0 001
uint8 SCDualSenseTriggerEffectTypes::Weapon = 0x25;			// 00 10 0 101
uint8 SCDualSenseTriggerEffectTypes::Vibration = 0x26;		// 00 10 0 110

#define LOCTEXT_NAMESPACE "FSimpleControllerModule"

void FSimpleControllerModule::StartupModule()
{
#if PLATFORM_WINDOWS
	copyDLL("SimpleController/Binaries/Win64/SDL2.dll", "Binaries/Win64", "SDL2.dll");
#if ENGINE_MAJOR_VERSION == 4
	copyDLL("SimpleController/Binaries/Win32/SDL2.dll", "Binaries/Win32", "SDL2.dll");
#endif
#endif
#if PLATFORM_MAC
	copyDLL("SimpleController/Binaries/Mac/libSDL2.dylib", "Binaries/Mac", "libSDL2.dylib");
#endif
}

void FSimpleControllerModule::copyDLL(FString source, FString target, FString dllName)
{

	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString dllSource = FPaths::ConvertRelativePathToFull(FPaths::ProjectPluginsDir()) + source;
	if (!FPaths::FileExists(dllSource)) {
		dllSource = FPaths::ConvertRelativePathToFull(FPaths::EnginePluginsDir()) + "Marketplace/" + source;
	}

	if (FPaths::FileExists(dllSource)) {
		FString binPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() + target);
		if (!FPaths::DirectoryExists(binPath)) {
			platformFile.CreateDirectoryTree(*binPath);
		}
		FString dllTarget = binPath + "/" + dllName;
		if (!FPaths::FileExists(dllTarget)) {
			UE_LOG(LogTemp, Display, TEXT("SimpleControllerPlugin: Copy SDL2 lib into Project Binary: %s <- %s"), *dllTarget, *dllSource);
			platformFile.CopyFile(*dllTarget, *dllSource);
		}
		else {
			if (platformFile.FileSize(*dllTarget) != platformFile.FileSize(*dllSource)) {
				UE_LOG(LogTemp, Display, TEXT("SimpleControllerPlugin: Update SDL2 lib in Project Binary: %s <- %s"), *dllTarget, *dllSource);
				platformFile.DeleteFile(*dllTarget);
				platformFile.CopyFile(*dllTarget, *dllSource);
			}
		}
	}
}

void FSimpleControllerModule::ShutdownModule()
{
	moduleIsRun = false;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSimpleControllerModule, SimpleController)
