#pragma once
#include "CoreMinimal.h"
#include "ESlotType.generated.h"

UENUM()
enum class ESlotType : uint8 {
    Default,
    Character,
    Backpack,
    Flashlight,
    Shoulder,
};

