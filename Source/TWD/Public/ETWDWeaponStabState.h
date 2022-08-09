#pragma once
#include "CoreMinimal.h"
#include "ETWDWeaponStabState.generated.h"

UENUM(BlueprintType)
enum class ETWDWeaponStabState : uint8 {
    None,
    Stab,
    Push,
    Pull,
    Drag,
    Stuck,
};

