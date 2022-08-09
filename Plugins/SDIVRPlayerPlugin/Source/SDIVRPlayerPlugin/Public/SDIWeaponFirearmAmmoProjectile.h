#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "SDIWeaponFirearmAmmo.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmAmmoProjectile.generated.h"

class ASDIProjectileActor;
class AActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearmAmmoProjectile : public ASDIWeaponFirearmAmmo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASDIProjectileActor> ProjectileClass;
    
public:
    ASDIWeaponFirearmAmmoProjectile();
protected:
    UFUNCTION(BlueprintNativeEvent)
    ASDIProjectileActor* SpawnProjectile(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIProjectileActor> SpawnProjectileClass, AActor* ProjectileOwner);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnProjectile(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIProjectileActor> SpawnProjectileClass, AActor* ProjectileOwner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ASDIProjectileActor> GetProjectileClass(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform);
    
};

