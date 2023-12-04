// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PGCPP : ModuleRules
{
	public PGCPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
