#pragma once
#include "CoreMinimal.h"
#include "ETWDPSVRBackwardsMovementMode.generated.h"

UENUM()
enum class ETWDPSVRBackwardsMovementMode : uint8 {
    Fixed,
    Mirror,
    Controller,
};

