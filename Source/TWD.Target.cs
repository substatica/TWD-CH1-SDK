using UnrealBuildTool;

public class TWDTarget : TargetRules {
	public TWDTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"TWD",
		});
	}
}
