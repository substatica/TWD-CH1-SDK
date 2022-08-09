#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointTriggerAction.generated.h"

UENUM(BlueprintType)
enum class ETWDWaypointTriggerAction : uint8 {
    None,
    Wait,
    Next,
    Previous,
    Abort,
    Restart,
};

