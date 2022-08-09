#pragma once
#include "CoreMinimal.h"
#include "EPopoutLocation.generated.h"

UENUM(BlueprintType)
enum class EPopoutLocation : uint8 {
    PL_Left,
    PL_Right,
    PL_MAX UMETA(Hidden),
};

