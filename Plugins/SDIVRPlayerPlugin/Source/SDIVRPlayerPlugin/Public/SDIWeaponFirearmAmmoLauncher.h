#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "SDIWeaponFirearmAmmo.h"
#include "RFloatExp.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmAmmoLauncher.generated.h"

class ASDIHeldActor;
class AActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearmAmmoLauncher : public ASDIWeaponFirearmAmmo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASDIHeldActor> LaunchedClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloatExp LaunchSpeed;
    
public:
    ASDIWeaponFirearmAmmoLauncher();
protected:
    UFUNCTION(BlueprintNativeEvent)
    ASDIHeldActor* SpawnLaunchedActor(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIHeldActor> SpawnLaunchedClass, AActor* LaunchedOwner);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnLaunchedActor(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIHeldActor> SpawnLaunchedClass, AActor* LaunchedOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLaunchVelocity(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, ASDIHeldActor* LaunchedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ASDIHeldActor> GetLaunchedClass(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform);
    
};

