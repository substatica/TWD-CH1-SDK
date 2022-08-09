#pragma once
#include "CoreMinimal.h"
#include "ETWDLockonType.generated.h"

UENUM(BlueprintType)
enum class ETWDLockonType : uint8 {
    None,
    SpecialMelee,
    WeaponStick,
    WeaponStickRagdoll,
    Dismember,
};

