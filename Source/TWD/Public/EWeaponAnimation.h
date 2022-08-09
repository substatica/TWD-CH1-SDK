#pragma once
#include "CoreMinimal.h"
#include "EWeaponAnimation.generated.h"

UENUM(BlueprintType)
enum class EWeaponAnimation : uint8 {
    None,
    Rifle,
    Pistol,
    Shotgun,
};

