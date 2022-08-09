#pragma once
#include "CoreMinimal.h"
#include "ESurvivorTargetRelation.generated.h"

UENUM()
enum class ESurvivorTargetRelation {
    Friendly,
    Neutral,
    Hostile,
    Aggravating,
    Count,
};

