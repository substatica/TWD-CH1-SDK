#pragma once
#include "CoreMinimal.h"
#include "EMapTerritoryNodeStatus.generated.h"

UENUM(BlueprintType)
enum class EMapTerritoryNodeStatus : uint8 {
    Locked,
    Unlocked,
    Explored,
};

