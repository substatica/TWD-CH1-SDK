#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterHitRegion.generated.h"

UENUM(BlueprintType)
enum class ETWDCharacterHitRegion : uint8 {
    None,
    Right_Leg,
    Left_Leg,
    Right_Arm,
    Left_Arm,
    Body,
    Head,
};

