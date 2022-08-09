#pragma once
#include "CoreMinimal.h"
#include "EPopoutLocation.generated.h"

UENUM()
enum class EPopoutLocation : uint8 {
    PL_Left,
    PL_Right,
    PL_MAX UMETA(Hidden),
};

