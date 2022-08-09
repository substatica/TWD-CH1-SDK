#pragma once
#include "CoreMinimal.h"
#include "ESDIDirection.generated.h"

UENUM(BlueprintType)
enum class ESDIDirection : uint8 {
    None,
    Any,
    Up,
    Left,
    Right,
    Down,
};

