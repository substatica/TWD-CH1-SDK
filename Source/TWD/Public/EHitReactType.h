#pragma once
#include "CoreMinimal.h"
#include "EHitReactType.generated.h"

UENUM(BlueprintType)
enum class EHitReactType : uint8 {
    None,
    Light,
    Medium,
    MediumKnockback,
    Heavy,
};

