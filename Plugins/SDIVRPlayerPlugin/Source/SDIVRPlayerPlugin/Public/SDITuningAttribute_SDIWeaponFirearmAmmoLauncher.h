#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmo.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmoLauncher.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDITuningAttribute_SDIWeaponFirearmAmmoLauncher : public FSDITuningAttribute_SDIWeaponFirearmAmmo {
    GENERATED_BODY()
public:
    FSDITuningAttribute_SDIWeaponFirearmAmmoLauncher();
};

