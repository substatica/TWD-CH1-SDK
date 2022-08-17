#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponFirearmAmmo.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "RFloatExp.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmAmmoLauncher.generated.h"

class ASDIHeldActor;
class AActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearmAmmoLauncher : public ASDIWeaponFirearmAmmo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIHeldActor> LaunchedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp LaunchSpeed;
    
public:
    ASDIWeaponFirearmAmmoLauncher(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASDIHeldActor* SpawnLaunchedActor(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIHeldActor> SpawnLaunchedClass, AActor* LaunchedOwner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnLaunchedActor(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIHeldActor> SpawnLaunchedClass, AActor* LaunchedOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLaunchVelocity(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, ASDIHeldActor* LaunchedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ASDIHeldActor> GetLaunchedClass(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform);
    
};

