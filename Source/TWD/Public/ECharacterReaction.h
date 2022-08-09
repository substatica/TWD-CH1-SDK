#pragma once
#include "CoreMinimal.h"
#include "ECharacterReaction.generated.h"

UENUM()
enum class ECharacterReaction : uint8 {
    Flee,
    Combat,
    Cower,
    StandGround,
    Shakedown,
    Beg,
    Help,
    Ignore,
    Warn,
    Communicate,
    AssignedMove,
    Aggravate,
};

