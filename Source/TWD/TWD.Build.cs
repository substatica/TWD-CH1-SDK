using UnrealBuildTool;

public class TWD : ModuleRules {
    public TWD(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "Annosoft",
            "ApexDestruction",
            "AudioMixer",
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "Gauntlet",
            "HeadMountedDisplay",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PhysicsCore",
            "PropertyPath",
            "SDICorePlugin",
            "SDISkinPlugin",
            "SDIStimAndResponsePlugin",
            "SDITuningPlugin",
            "SDIVRPlayerPlugin",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
