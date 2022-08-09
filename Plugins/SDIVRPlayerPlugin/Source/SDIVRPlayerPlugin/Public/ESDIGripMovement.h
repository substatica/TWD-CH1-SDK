#pragma once
#include "CoreMinimal.h"
#include "ESDIGripMovement.generated.h"

UENUM(BlueprintType)
enum class ESDIGripMovement : uint8 {
    Locked,
    Maintain,
    Adjust,
    Free,
    MaintainCosmetic,
    AdjustCosmetic,
    FreeCosmetic,
};

