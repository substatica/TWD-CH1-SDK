#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDIWeaponFirearmAmmoTrace.h"
#include "SDITuningAttribute_TWDWeaponFirearmAmmoTrace.generated.h"

USTRUCT(BlueprintType)
struct FSDITuningAttribute_TWDWeaponFirearmAmmoTrace : public FSDITuningAttribute_SDIWeaponFirearmAmmoTrace {
    GENERATED_BODY()
public:
    TWD_API FSDITuningAttribute_TWDWeaponFirearmAmmoTrace();
};

