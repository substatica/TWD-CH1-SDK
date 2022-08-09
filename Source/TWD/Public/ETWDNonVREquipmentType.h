#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVREquipmentType.generated.h"

UENUM(BlueprintType)
enum class ETWDNonVREquipmentType : uint8 {
    None,
    Large,
    Small,
    Consumable,
};

