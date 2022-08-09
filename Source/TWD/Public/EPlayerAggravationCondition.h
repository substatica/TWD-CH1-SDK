#pragma once
#include "CoreMinimal.h"
#include "EPlayerAggravationCondition.generated.h"

UENUM(BlueprintType)
enum class EPlayerAggravationCondition : uint8 {
    None,
    InCombatVolume,
    InStandGroundVolume,
    HoldingWeapon,
    PointingWeapon,
    MenacingWithWeapon,
    DeepInCombatVolume,
    ResistingShakedown,
    Count,
};

