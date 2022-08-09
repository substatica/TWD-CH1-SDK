#pragma once
#include "CoreMinimal.h"
#include "ETWDWeaponDismemberState.generated.h"

UENUM(BlueprintType)
enum class ETWDWeaponDismemberState : uint8 {
    None,
    InterpIn,
    Dismember,
    InterpOut,
};

