#pragma once
#include "CoreMinimal.h"
#include "ESurvivorTargetTypeNative.generated.h"

UENUM()
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

