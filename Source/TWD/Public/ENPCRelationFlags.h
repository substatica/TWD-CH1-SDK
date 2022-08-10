#pragma once
#include "CoreMinimal.h"
#include "ENPCRelationFlags.generated.h"

UENUM(BlueprintType)
enum class ENPCRelationFlags : uint8 {
    None = 0x0,
    NearbyEnemy = 0x1,
    NearbyAlly,
};

