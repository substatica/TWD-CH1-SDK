#pragma once
#include "CoreMinimal.h"
#include "ETWDPSVRMovementMode.generated.h"

UENUM(BlueprintType)
enum class ETWDPSVRMovementMode : uint8 {
    Fixed,
    Hybrid,
    Controller,
};

