// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Grappling_hook : ModuleRules
{
	public Grappling_hook(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
