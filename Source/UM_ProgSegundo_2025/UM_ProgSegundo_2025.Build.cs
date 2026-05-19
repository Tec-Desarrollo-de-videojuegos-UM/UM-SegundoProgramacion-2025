// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UM_ProgSegundo_2025 : ModuleRules
{
	public UM_ProgSegundo_2025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UM_ProgSegundo_2025",
			"UM_ProgSegundo_2025/Variant_Platforming",
			"UM_ProgSegundo_2025/Variant_Platforming/Animation",
			"UM_ProgSegundo_2025/Variant_Combat",
			"UM_ProgSegundo_2025/Variant_Combat/AI",
			"UM_ProgSegundo_2025/Variant_Combat/Animation",
			"UM_ProgSegundo_2025/Variant_Combat/Gameplay",
			"UM_ProgSegundo_2025/Variant_Combat/Interfaces",
			"UM_ProgSegundo_2025/Variant_Combat/UI",
			"UM_ProgSegundo_2025/Variant_SideScrolling",
			"UM_ProgSegundo_2025/Variant_SideScrolling/AI",
			"UM_ProgSegundo_2025/Variant_SideScrolling/Gameplay",
			"UM_ProgSegundo_2025/Variant_SideScrolling/Interfaces",
			"UM_ProgSegundo_2025/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
