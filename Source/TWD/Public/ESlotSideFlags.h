#pragma once
#include "CoreMinimal.h"
#include "ESlotSideFlags.generated.h"

UENUM()
enum class ESlotSideFlags {
    SlotFront,
    SlotBack,
    SlotRight,
    SlotLeft,
    SlotCornerFrontLeft,
    SlotCornerFrontRight,
    SlotCornerBackLeft,
    SlotCornerBackRight,
};

