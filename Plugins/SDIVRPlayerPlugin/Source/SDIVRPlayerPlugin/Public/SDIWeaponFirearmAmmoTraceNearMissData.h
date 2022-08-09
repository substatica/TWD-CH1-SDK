#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmAmmoTraceNearMissData.generated.h"

class ASDICharacter;
class AController;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIWeaponFirearmAmmoTraceNearMissData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ASDICharacter* NearMissedCharacter;
    
    UPROPERTY(Transient)
    AController* Instigator;
    
    UPROPERTY(Transient)
    FVector Location;
    
    UPROPERTY(Transient)
    FVector FlyingDirection;
    
    UPROPERTY(Transient)
    float DistanceRayToCapsuleAxis;
    
    UPROPERTY(Transient)
    float ShotTotalRange;
    
    UPROPERTY(Transient)
    bool bDamagedOtherCharacter;
    
    FSDIWeaponFirearmAmmoTraceNearMissData();
};

