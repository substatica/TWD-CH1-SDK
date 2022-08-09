#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponFirearmAmmo.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmAmmoProjectile.generated.h"

class ASDIProjectileActor;
class AActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearmAmmoProjectile : public ASDIWeaponFirearmAmmo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIProjectileActor> ProjectileClass;
    
public:
    ASDIWeaponFirearmAmmoProjectile();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASDIProjectileActor* SpawnProjectile(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIProjectileActor> SpawnProjectileClass, AActor* ProjectileOwner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnProjectile(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIProjectileActor> SpawnProjectileClass, AActor* ProjectileOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ASDIProjectileActor> GetProjectileClass(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform);
    
};

