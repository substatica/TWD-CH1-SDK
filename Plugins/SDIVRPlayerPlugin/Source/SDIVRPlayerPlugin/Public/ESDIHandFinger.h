#pragma once
#include "CoreMinimal.h"
#include "ESDIHandFinger.generated.h"

UENUM(BlueprintType)
enum class ESDIHandFinger : uint8 {
    Unknown,
    Thumb,
    Index,
    Middle,
    Ring,
    Pinky,
};

