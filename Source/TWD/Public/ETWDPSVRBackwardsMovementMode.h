#pragma once
#include "CoreMinimal.h"
#include "ETWDPSVRBackwardsMovementMode.generated.h"

UENUM(BlueprintType)
enum class ETWDPSVRBackwardsMovementMode : uint8 {
    Fixed,
    Mirror,
    Controller,
};

