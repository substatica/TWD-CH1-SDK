#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterGrappleLocation.generated.h"

UENUM(BlueprintType)
enum class ETWDCharacterGrappleLocation : uint8 {
    Unknown,
    Head,
    LeftArm,
    RightArm,
    BothArms,
    Neck,
    Front,
    Back,
    Count,
};

