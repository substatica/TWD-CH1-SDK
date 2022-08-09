#pragma once
#include "CoreMinimal.h"
#include "ETWDViveMovementMode.generated.h"

UENUM(BlueprintType)
enum class ETWDViveMovementMode : uint8 {
    Click,
    Hybrid,
    Touch,
};

