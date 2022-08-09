#pragma once
#include "CoreMinimal.h"
#include "ETWDCombatStates.generated.h"

UENUM()
enum class ETWDCombatStates : uint8 {
    None,
    Started,
    Searching,
    Standing,
    MovingToCover,
    Moving,
    Firing,
    Reloading,
};

