#pragma once
#include "CoreMinimal.h"
#include "ENPCRelationFlags.generated.h"

UENUM(BlueprintType)
enum class ENPCRelationFlags : uint8 {
    NearbyEnemy = 0x1,
    NearbyAlly,
};

