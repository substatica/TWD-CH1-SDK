#pragma once
#include "CoreMinimal.h"
#include "EReserveSlotResult.generated.h"

UENUM()
enum class EReserveSlotResult {
    ReserveSlot_Failed,
    ReserveSlot_Reserved,
    ReserveSlot_SameSlot,
    ReserveSlot_UseTempLocation,
    ReserveSlot_MAX UMETA(Hidden),
};

