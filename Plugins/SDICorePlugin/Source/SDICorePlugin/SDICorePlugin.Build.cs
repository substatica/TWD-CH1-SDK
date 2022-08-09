using UnrealBuildTool;

public class SDICorePlugin : ModuleRules {
    public SDICorePlugin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PhysicsCore",
            "PropertyPath",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
