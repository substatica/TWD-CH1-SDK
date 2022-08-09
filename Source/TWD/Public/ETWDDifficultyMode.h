#pragma once
#include "CoreMinimal.h"
#include "ETWDDifficultyMode.generated.h"

UENUM()
enum class ETWDDifficultyMode : uint8 {
    ETWDDifficulty_Low,
    ETWDDifficulty_Med,
    ETWDDifficulty_High,
    ETWDDifficulty_COUNT,
    ETWDDifficulty_MAX UMETA(Hidden),
};

