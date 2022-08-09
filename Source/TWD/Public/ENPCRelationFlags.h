#pragma once
#include "CoreMinimal.h"
#include "ENPCRelationFlags.generated.h"

UENUM()
enum class ENPCRelationFlags {
    NearbyEnemy = 0x1,
    NearbyAlly,
};

