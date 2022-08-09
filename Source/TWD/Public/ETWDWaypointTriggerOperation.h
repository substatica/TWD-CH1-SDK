#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointTriggerOperation.generated.h"

UENUM(BlueprintType)
enum class ETWDWaypointTriggerOperation : uint8 {
    Any,
    All,
};

