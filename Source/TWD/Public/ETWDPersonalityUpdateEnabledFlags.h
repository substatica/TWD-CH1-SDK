#pragma once
#include "CoreMinimal.h"
#include "ETWDPersonalityUpdateEnabledFlags.generated.h"

UENUM()
enum class ETWDPersonalityUpdateEnabledFlags {
    ShouldCombat,
    ShouldCower,
    ShouldAggravate,
    ShouldStandGround,
};

