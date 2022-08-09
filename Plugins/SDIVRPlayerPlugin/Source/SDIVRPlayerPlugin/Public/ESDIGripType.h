#pragma once
#include "CoreMinimal.h"
#include "ESDIGripType.generated.h"

UENUM()
enum class ESDIGripType : uint8 {
    Any,
    Primary,
    Secondary,
    Other,
};

