// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DeepTank : ModuleRules
{
	public DeepTank(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
