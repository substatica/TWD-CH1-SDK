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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ShotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITransform_NetQuantize ShotTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIWeaponFirearmAmmoTracePelletHit> PelletHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIWeaponFirearmAmmoTraceNearMissData> NearMissData;
    
    FSDIWeaponFirearmAmmoTraceShotInfo();
};

