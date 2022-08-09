#pragma once
#include "CoreMinimal.h"
#include "ETWDPersonalityTargetInfo.generated.h"

UENUM()
enum class ETWDPersonalityTargetInfo : uint8 {
    HoldingRequiredInventory,
    HoldingWeapon,
    Threat,
    HighThreat,
    Count,
};

