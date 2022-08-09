#pragma once
#include "CoreMinimal.h"
#include "ERequiredInventoryType.generated.h"

UENUM(BlueprintType)
enum class ERequiredInventoryType : uint8 {
    None,
    LootType,
    InventoryActor,
};

