#pragma once
#include "CoreMinimal.h"
#include "ETWDLootType.generated.h"

UENUM(BlueprintType)
enum class ETWDLootType : uint8 {
    Default,
    Food,
    Water,
    Medical,
    Clothing,
    Ammo,
    Fuel,
    Special,
    Weapon,
    Firearm,
    Junk,
    Bandages,
};

