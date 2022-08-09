#pragma once
#include "CoreMinimal.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "SDIWeaponFirearmAmmoTracePelletHit.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmAmmoTracePendingPelletHitFX.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIWeaponFirearmAmmoTracePendingPelletHitFX : public FSDIWeaponFirearmFiredPelletInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FTransform ShotTransform;
    
    UPROPERTY(Transient)
    TArray<FSDIWeaponFirearmAmmoTracePelletHit> PelletHits;
    
    FSDIWeaponFirearmAmmoTracePendingPelletHitFX();
};

