#pragma once
#include "CoreMinimal.h"
#include "ESlotSideFlags.generated.h"

UENUM(BlueprintType)
enum class ESlotSideFlags : uint8 {
    SlotFront,
    SlotBack,
    SlotRight,
    SlotLeft,
    SlotCornerFrontLeft,
    SlotCornerFrontRight,
    SlotCornerBackLeft,
    SlotCornerBackRight,
};

