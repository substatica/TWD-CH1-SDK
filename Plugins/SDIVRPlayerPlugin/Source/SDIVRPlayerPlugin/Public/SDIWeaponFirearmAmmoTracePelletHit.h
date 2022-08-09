#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIWeaponFirearmAmmoTracePelletHit.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIWeaponFirearmAmmoTracePelletHit {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FTransform SpreadShotTransform;
    
    UPROPERTY(Transient)
    TArray<FHitResult> Hits;
    
    FSDIWeaponFirearmAmmoTracePelletHit();
};

