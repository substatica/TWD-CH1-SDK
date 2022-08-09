#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVRGrappleMinigameState.generated.h"

UENUM(BlueprintType)
enum class ETWDNonVRGrappleMinigameState : uint8 {
    None,
    Delay,
    Wait,
    PressWindow,
    Failure,
    Success,
};

