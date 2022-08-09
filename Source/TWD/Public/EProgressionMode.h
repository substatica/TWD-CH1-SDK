#pragma once
#include "CoreMinimal.h"
#include "EProgressionMode.generated.h"

UENUM()
enum class EProgressionMode : uint8 {
    EPM_Story,
    EPM_Wave,
    EPM_COUNT,
    EPM_MAX UMETA(Hidden),
};

