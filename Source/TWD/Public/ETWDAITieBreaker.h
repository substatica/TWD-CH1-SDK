#pragma once
#include "CoreMinimal.h"
#include "ETWDAITieBreaker.generated.h"

UENUM()
enum class ETWDAITieBreaker : uint8 {
    Range,
    Age,
    Strength,
};

