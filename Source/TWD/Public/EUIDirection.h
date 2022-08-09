#pragma once
#include "CoreMinimal.h"
#include "EUIDirection.generated.h"

UENUM(BlueprintType)
enum class EUIDirection : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
};

