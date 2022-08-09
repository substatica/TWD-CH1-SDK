#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVREquipmentActionType.generated.h"

UENUM(BlueprintType)
enum class ETWDNonVREquipmentActionType : uint8 {
    None,
    Grab,
    Drop,
    Store,
    Equip,
    Consume,
    Cancel,
};

