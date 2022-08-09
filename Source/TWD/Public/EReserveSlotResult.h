#pragma once
#include "CoreMinimal.h"
#include "EReserveSlotResult.generated.h"

UENUM(BlueprintType)
enum class EReserveSlotResult : uint8 {
    ReserveSlot_Failed,
    ReserveSlot_Reserved,
    ReserveSlot_SameSlot,
    ReserveSlot_UseTempLocation,
    ReserveSlot_MAX UMETA(Hidden),
};

