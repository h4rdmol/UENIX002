// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NIXUE002 : ModuleRules
{
	public NIXUE002(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
