// Copyright 2018 David Romanski(Socke). All Rights Reserved.

using System;
using System.IO;
using UnrealBuildTool;

public class SimpleController : ModuleRules
{
    public SimpleController(ReadOnlyTargetRules Target) : base(Target)
    {
        //Type = ModuleType.External;

        string sdlwin = "2.29.0";
        string sdlmac = "2.28.5";
        Console.WriteLine("SimpleControllerPlugin: Expected SDL version. Windows: " + sdlwin + " Mac: " + sdlmac);

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        string thirdParty = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Source/ThirdParty/"));
        string projectDir = "";
        if (Target.ProjectFile != null)
        {
            projectDir = Target.ProjectFile.ToString();
            projectDir = projectDir.Replace(".uproject", "");
        }

        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
			}
            );


        PrivateIncludePaths.AddRange(
            new string[] {

            }
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Json",
                "JsonUtilities"
            }
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "UMG",
                "Json",
                "JsonUtilities",
                "InputCore",
                "DeveloperSettings",
                "ApplicationCore"
            }
            );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string dllPath = Path.Combine(thirdParty, "64", "SDL2.dll");
            string binaryPluginPathSDL = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Win64/SDL2.dll"));
            string binaryPluginPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Win64/"));
            string runtimeDependencyPath = Path.GetFullPath(Path.Combine(projectDir, "../Binaries/Win64/SDL2.dll"));

            //PublicLibraryPaths.Add(Path.Combine(thirdParty, "64"));
            PublicAdditionalLibraries.Add(Path.Combine(thirdParty, "64", "SDL2.lib"));
            PublicDelayLoadDLLs.Add(dllPath);

            if (!Directory.Exists(binaryPluginPath))
            {
                Console.WriteLine("SimpleControllerPlugin: Create Directory: " + binaryPluginPath);
                Directory.CreateDirectory(binaryPluginPath);
            }

            if (!File.Exists(binaryPluginPathSDL))
            {
                Console.WriteLine("SimpleControllerPlugin: Copy SDL2.dll into Plugin Binary Folder: " + dllPath + " -> " + binaryPluginPathSDL);
                File.Copy(dllPath, binaryPluginPathSDL, true);
            }

            if (File.Exists(runtimeDependencyPath))
            {
                FileStream dllPathFileStream = File.OpenRead(dllPath);
                long dllPathSize = dllPathFileStream.Length;
                dllPathFileStream.Close();

                FileStream runtimeDependencyPathFileStream = File.OpenRead(runtimeDependencyPath);
                long runtimeDependencyPathSize = runtimeDependencyPathFileStream.Length;
                runtimeDependencyPathFileStream.Close();

                if (dllPathSize != runtimeDependencyPathSize)
                {
                    File.Copy(dllPath, binaryPluginPathSDL, true);
                    File.Copy(dllPath, runtimeDependencyPath, true);
                    Console.WriteLine("SimpleControllerPlugin: Update SDL2.dll");
                }
                Console.WriteLine("SimpleControllerPlugin: Load SDL2.dll from: " + runtimeDependencyPath);
                RuntimeDependencies.Add(runtimeDependencyPath);
            }
            else
            {
                Console.WriteLine("SimpleControllerPlugin: SDL2.dll not found (Only important on project cooking): " + runtimeDependencyPath);
            }

            PublicIncludePaths.Add(Path.Combine(thirdParty, "include"));

        }

        //SDL must be compiled in debug mode for the lib to work in Unreal.
        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            string dllPath = Path.Combine(thirdParty, "Mac", "libSDL2.dylib");
            string binaryPluginPathSDL = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Mac/libSDL2.dylib"));
            string binaryPluginPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Mac/"));
            string runtimeDependencyPath = Path.GetFullPath(Path.Combine(projectDir, "../Binaries/Mac/libSDL2.dylib"));

            PublicAdditionalLibraries.Add(Path.Combine(thirdParty, "Mac", "libSDL2.dylib"));
            //PublicDelayLoadDLLs.Add(dllPath);

            if (!Directory.Exists(binaryPluginPath))
            {
                Console.WriteLine("SimpleControllerPlugin: Create Directory: " + binaryPluginPath);
                Directory.CreateDirectory(binaryPluginPath);
            }

            if (!File.Exists(binaryPluginPathSDL))
            {
                Console.WriteLine("SimpleControllerPlugin: Copy libSDL2.dylib into Plugin Binary Folder: " + dllPath + " -> " + binaryPluginPathSDL);
                File.Copy(dllPath, binaryPluginPathSDL, false);
            }

            if (File.Exists(runtimeDependencyPath))
            {
                FileStream dllPathFileStream = File.OpenRead(dllPath);
                long dllPathSize = dllPathFileStream.Length;
                dllPathFileStream.Close();

                FileStream runtimeDependencyPathFileStream = File.OpenRead(runtimeDependencyPath);
                long runtimeDependencyPathSize = runtimeDependencyPathFileStream.Length;
                runtimeDependencyPathFileStream.Close();

                if (dllPathSize != runtimeDependencyPathSize)
                {
                    File.Copy(dllPath, binaryPluginPathSDL, true);
                    File.Copy(dllPath, runtimeDependencyPath, true);
                    Console.WriteLine("SimpleControllerPlugin: Update libSDL2.dylib");

                }
                Console.WriteLine("SimpleControllerPlugin: Load libSDL2.dylib from: " + runtimeDependencyPath);
                RuntimeDependencies.Add(runtimeDependencyPath);
                PublicDelayLoadDLLs.Add(runtimeDependencyPath);
            }
            else
            {
                Console.WriteLine("SimpleControllerPlugin: libSDL2.dylib not found (Only important on project cooking): " + runtimeDependencyPath);
            }

            PublicIncludePaths.Add(Path.Combine(thirdParty, "include"));
        }

        if (Target.IsInPlatformGroup(UnrealPlatformGroup.Unix) && !Target.IsInPlatformGroup(UnrealPlatformGroup.Android))
        {
            PrivateIncludePaths.AddRange(
            new string[] {
                Path.Combine(EngineDirectory, "Source/ThirdParty/SDL2/SDL-gui-backend/include")
            }
            );

            PrivateDependencyModuleNames.Add("SDL2");

        }
        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateDependencyModuleNames.Add("Launch");
        }
    }
}
