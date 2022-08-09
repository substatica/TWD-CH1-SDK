#pragma once
#include "CoreMinimal.h"
#include "ESurvivorTargetTypeNative.generated.h"

UENUM(BlueprintType)
enum class ESurvivorTargetTypeNative : uint8 {
    ReveredPlayer,
    FriendlyPlayer,
    HostilePlayer,
    NeutralPlayer,
    AggravatingPlayer,
    FriendlyNPC,
    NeutralNPC,
    HostileNPC,
    Walker,
};

