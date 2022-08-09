#pragma once
#include "CoreMinimal.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmAmmoTracePelletHit.h"
#include "SDIWeaponFirearmAmmoTracePendingPelletHitFX.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIWeaponFirearmAmmoTracePendingPelletHitFX : public FSDIWeaponFirearmFiredPelletInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform ShotTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIWeaponFirearmAmmoTracePelletHit> PelletHits;
    
    FSDIWeaponFirearmAmmoTracePendingPelletHitFX();
};

