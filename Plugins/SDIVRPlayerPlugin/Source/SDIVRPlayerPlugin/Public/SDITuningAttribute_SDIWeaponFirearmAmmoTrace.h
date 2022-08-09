#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmo.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmoTrace.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDITuningAttribute_SDIWeaponFirearmAmmoTrace : public FSDITuningAttribute_SDIWeaponFirearmAmmo {
    GENERATED_BODY()
public:
    FSDITuningAttribute_SDIWeaponFirearmAmmoTrace();
};

