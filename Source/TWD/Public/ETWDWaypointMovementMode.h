#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointMovementMode.generated.h"

UENUM(BlueprintType)
enum class ETWDWaypointMovementMode : uint8 {
    Direct,
    Avoid,
    Retreat,
    Defend,
};

