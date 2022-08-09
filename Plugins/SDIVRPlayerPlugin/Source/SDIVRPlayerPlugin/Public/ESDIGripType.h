#pragma once
#include "CoreMinimal.h"
#include "ESDIGripType.generated.h"

UENUM(BlueprintType)
enum class ESDIGripType : uint8 {
    Any,
    Primary,
    Secondary,
    Other,
};

