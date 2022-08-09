#pragma once
#include "CoreMinimal.h"
#include "ESDIInteractRangeType.generated.h"

UENUM(BlueprintType)
enum class ESDIInteractRangeType : uint8 {
    Close,
    Ranged,
    Physical,
    Any,
};

