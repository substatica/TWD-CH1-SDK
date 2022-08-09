#pragma once
#include "CoreMinimal.h"
#include "EHandleType.generated.h"

UENUM(BlueprintType)
enum class EHandleType : uint8 {
    NoMovement,
    RotatingHandle,
};

