// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FishPossess : ModuleRules
{
	public FishPossess(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
