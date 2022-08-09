#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_SDIWeaponFirearm.h"
#include "SDITuningAttribute_TWDWeaponGun.generated.h"

USTRUCT(BlueprintType)
struct FSDITuningAttribute_TWDWeaponGun : public FSDITuningAttribute_SDIWeaponFirearm {
    GENERATED_BODY()
public:
    TWD_API FSDITuningAttribute_TWDWeaponGun();
};

