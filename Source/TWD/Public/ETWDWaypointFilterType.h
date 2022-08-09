#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointFilterType.generated.h"

UENUM(BlueprintType)
enum class ETWDWaypointFilterType : uint8 {
    Any,
    All,
    FirstAlive,
};

