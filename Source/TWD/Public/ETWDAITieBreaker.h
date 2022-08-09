#pragma once
#include "CoreMinimal.h"
#include "ETWDAITieBreaker.generated.h"

UENUM(BlueprintType)
enum class ETWDAITieBreaker : uint8 {
    Range,
    Age,
    Strength,
};

