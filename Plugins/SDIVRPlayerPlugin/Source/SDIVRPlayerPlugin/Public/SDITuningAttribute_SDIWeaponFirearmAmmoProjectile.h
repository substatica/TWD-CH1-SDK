#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmo.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmoProjectile.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDITuningAttribute_SDIWeaponFirearmAmmoProjectile : public FSDITuningAttribute_SDIWeaponFirearmAmmo {
    GENERATED_BODY()
public:
    FSDITuningAttribute_SDIWeaponFirearmAmmoProjectile();
};

