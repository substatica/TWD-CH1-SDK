#pragma once
#include "CoreMinimal.h"
#include "ESDIWeaponAttachmentType.generated.h"

UENUM(BlueprintType)
enum class ESDIWeaponAttachmentType : uint8 {
    Tuner,
    Clip,
    Barrel,
    UnderBarrel,
    ForeGrip,
    SightMod,
    Ammo,
};

