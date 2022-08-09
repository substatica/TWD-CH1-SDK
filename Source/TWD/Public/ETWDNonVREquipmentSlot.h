#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVREquipmentSlot.generated.h"

UENUM(BlueprintType)
enum class ETWDNonVREquipmentSlot : uint8 {
    Any,
    None,
    Large,
    Small,
    Consumable1,
    Consumable2,
    Temporary,
};

