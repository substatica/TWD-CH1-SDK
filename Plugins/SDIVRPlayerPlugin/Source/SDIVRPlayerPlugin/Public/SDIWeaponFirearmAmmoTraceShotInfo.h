#pragma once
#include "CoreMinimal.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "SDITransform_NetQuantize.h"
#include "SDIWeaponFirearmAmmoTracePelletHit.h"
#include "SDIWeaponFirearmAmmoTraceNearMissData.h"
#include "SDIWeaponFirearmAmmoTraceShotInfo.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIWeaponFirearmAmmoTraceShotInfo : public FSDIWeaponFirearmFiredPelletInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 ShotID;
    
    UPROPERTY(Transient)
    FSDITransform_NetQuantize ShotTransform;
    
    UPROPERTY(Transient)
    TArray<FSDIWeaponFirearmAmmoTracePelletHit> PelletHits;
    
    UPROPERTY(Transient)
    TArray<FSDIWeaponFirearmAmmoTraceNearMissData> NearMissData;
    
    FSDIWeaponFirearmAmmoTraceShotInfo();
};

