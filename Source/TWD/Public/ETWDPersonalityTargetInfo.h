#pragma once
#include "CoreMinimal.h"
#include "ETWDPersonalityTargetInfo.generated.h"

UENUM(BlueprintType)
enum class ETWDPersonalityTargetInfo : uint8 {
    HoldingRequiredInventory,
    HoldingWeapon,
    Threat,
    HighThreat,
    Count,
};

