#pragma once
#include "CoreMinimal.h"
#include "ESDIDirection.generated.h"

UENUM()
enum class ESDIDirection : uint8 {
    None,
    Any,
    Up,
    Left,
    Right,
    Down,
};

