// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HW2 : ModuleRules
{
	public HW2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
