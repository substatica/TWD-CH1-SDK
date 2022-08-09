#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterTargetPriorityOverride.generated.h"

UENUM(BlueprintType)
enum class ETWDCharacterTargetPriorityOverride : uint8 {
    None,
    Lowest,
    Highest,
    Exclude,
};

