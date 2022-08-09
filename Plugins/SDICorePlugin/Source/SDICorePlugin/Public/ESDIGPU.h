#pragma once
#include "CoreMinimal.h"
#include "ESDIGPU.generated.h"

UENUM()
enum class ESDIGPU : uint8 {
    GPU_Unknown,
    GPU_AMD,
    GPU_Intel,
    GPU_NVIDIA,
    GPU_PS4,
    GPU_Switch,
    GPU_XboxOne,
    GPU_MAX UMETA(Hidden),
};

