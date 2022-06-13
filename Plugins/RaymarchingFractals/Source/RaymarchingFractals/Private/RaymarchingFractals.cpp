// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaymarchingFractals.h"
#include "ShaderCore.h"

#define LOCTEXT_NAMESPACE "FRaymarchingFractalsModule"

void FRaymarchingFractalsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
		FString PluginShaderDir = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("RaymarchingFractals/Shaders"));
		AddShaderSourceDirectoryMapping("/RaymarchingFractals", PluginShaderDir);
}

void FRaymarchingFractalsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	ResetAllShaderSourceDirectoryMappings();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRaymarchingFractalsModule, RaymarchingFractals)