#pragma once
#include "CoreMinimal.h"
#include "ESDISpreadPattern.generated.h"

UENUM(BlueprintType)
enum class ESDISpreadPattern : uint8 {
    Random,
    Line,
    Circle,
    Circle_2,
    BullsEye,
    BullsEye_2,
    Spiral,
    DualSpiral,
    CustomFixed,
};

