#pragma once
#include "CoreMinimal.h"
#include "EAssignmentPriority.generated.h"

UENUM(BlueprintType)
enum class EAssignmentPriority : uint8 {
    PlayerLo,
    PlayerHi,
    Design,
};

