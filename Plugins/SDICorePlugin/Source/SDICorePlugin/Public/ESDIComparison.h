#pragma once
#include "CoreMinimal.h"
#include "ESDIComparison.generated.h"

UENUM(BlueprintType)
enum class ESDIComparison : uint8 {
    Worse,
    Similar,
    Better,
};

