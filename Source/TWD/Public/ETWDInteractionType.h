#pragma once
#include "CoreMinimal.h"
#include "ETWDInteractionType.generated.h"

UENUM(BlueprintType)
enum class ETWDInteractionType : uint8 {
    Grab,
    SecondaryGrip,
    Interact,
    FingerInteract,
    Nearby,
};

