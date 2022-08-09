#pragma once
#include "CoreMinimal.h"
#include "ETWDInventoryType.generated.h"

UENUM(BlueprintType)
enum class ETWDInventoryType : uint8 {
    Default,
    WeaponSmall,
    WeaponLarge,
    Backpack,
    Notebook,
    Ammo,
    Attachment,
    Flashlight,
    KeyItem,
};

