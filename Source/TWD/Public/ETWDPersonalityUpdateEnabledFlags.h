#pragma once
#include "CoreMinimal.h"
#include "ETWDPersonalityUpdateEnabledFlags.generated.h"

UENUM(BlueprintType)
enum class ETWDPersonalityUpdateEnabledFlags : uint8 {
    ShouldCombat,
    ShouldCower,
    ShouldAggravate,
    ShouldStandGround,
};

