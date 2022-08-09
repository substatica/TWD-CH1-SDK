#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVRMeleeAttackType.generated.h"

UENUM(BlueprintType)
enum class ETWDNonVRMeleeAttackType : uint8 {
    None,
    Normal,
    AngleOfStrike,
    Shove,
    Throw,
    PrecisionStab,
    Splay,
    Extract,
};

