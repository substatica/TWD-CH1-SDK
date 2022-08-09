#pragma once
#include "CoreMinimal.h"
#include "ETWDWaypointTriggerEvent.generated.h"

UENUM(BlueprintType)
enum class ETWDWaypointTriggerEvent : uint8 {
    Arrive,
    Depart,
    Occupy,
    Clear,
    MoveTo,
    MoveFrom,
    WaitFinish,
};

