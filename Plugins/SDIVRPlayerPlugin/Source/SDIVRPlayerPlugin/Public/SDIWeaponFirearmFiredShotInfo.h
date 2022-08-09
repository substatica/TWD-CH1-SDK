#pragma once
#include "CoreMinimal.h"
#include "SDIWeaponFirearmFiredShotInfo.generated.h"

class ASDIWeaponFirearmAmmo;
class AController;
class ASDIWeaponFirearm;
class USDIWeaponFirearmFireModeComponent;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIWeaponFirearmFiredShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    AController* EventInstigator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIWeaponFirearm* Firearm;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USDIWeaponFirearmFireModeComponent* Firemode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIWeaponFirearmAmmo* FiredAmmo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsADS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Accuracy;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 NumRoundsFired;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Burst;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 BurstCount;
    
    FSDIWeaponFirearmFiredShotInfo();
};

