#pragma once
#include "CoreMinimal.h"
#include "ESurvivorTargetRelation.generated.h"

UENUM(BlueprintType)
enum class ESurvivorTargetRelation : uint8 {
    Friendly,
    Neutral,
    Hostile,
    Aggravating,
    Count,
};

