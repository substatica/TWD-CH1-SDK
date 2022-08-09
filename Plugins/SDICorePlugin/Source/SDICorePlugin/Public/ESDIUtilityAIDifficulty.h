#pragma once
#include "CoreMinimal.h"
#include "ESDIUtilityAIDifficulty.generated.h"

UENUM(BlueprintType)
enum class ESDIUtilityAIDifficulty : uint8 {
    Easy,
    Medium,
    Hard,
    Dynamic,
    Random,
    RandomEverySpawn,
};

