#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterGrappleState.generated.h"

UENUM(BlueprintType)
enum class ETWDCharacterGrappleState : uint8 {
    None,
    __VICTIM_BEGIN,
    Held,
    Bleedout,
    __VICTIM_END,
    __ATTACKER_BEGIN,
    Holding,
    PushBack,
    Attack,
    __ATTACKER_END,
};

