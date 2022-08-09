#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmoProjectile.h"
#include "SDITuningAttribute_TWDWeaponFirearmAmmoProjectile.generated.h"

USTRUCT(BlueprintType)
struct FSDITuningAttribute_TWDWeaponFirearmAmmoProjectile : public FSDITuningAttribute_SDIWeaponFirearmAmmoProjectile {
    GENERATED_BODY()
public:
    TWD_API FSDITuningAttribute_TWDWeaponFirearmAmmoProjectile();
};

