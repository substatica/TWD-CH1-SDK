#pragma once
#include "CoreMinimal.h"
#include "EAIBaseGroundMovementSpeedType.generated.h"

UENUM(BlueprintType)
enum class EAIBaseGroundMovementSpeedType : uint8 {
    Walk,
    Stroll,
    Jog,
    Run,
    Dash,
    Crawling,
    MAX_TYPES,
};

