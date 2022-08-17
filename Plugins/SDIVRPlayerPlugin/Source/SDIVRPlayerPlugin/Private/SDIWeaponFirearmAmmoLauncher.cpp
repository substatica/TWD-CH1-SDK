#include "SDIWeaponFirearmAmmoLauncher.h"
#include "Templates/SubclassOf.h"

class AActor;
class ASDIHeldActor;

ASDIHeldActor* ASDIWeaponFirearmAmmoLauncher::SpawnLaunchedActor_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIHeldActor> SpawnLaunchedClass, AActor* LaunchedOwner) {
    return NULL;
}

void ASDIWeaponFirearmAmmoLauncher::ServerSpawnLaunchedActor_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIHeldActor> SpawnLaunchedClass, AActor* LaunchedOwner) {
}
bool ASDIWeaponFirearmAmmoLauncher::ServerSpawnLaunchedActor_Validate(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, TSubclassOf<ASDIHeldActor> SpawnLaunchedClass, AActor* LaunchedOwner) {
    return true;
}

FVector ASDIWeaponFirearmAmmoLauncher::GetLaunchVelocity_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, ASDIHeldActor* LaunchedActor) {
    return FVector{};
}

TSubclassOf<ASDIHeldActor> ASDIWeaponFirearmAmmoLauncher::GetLaunchedClass_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform) {
    return NULL;
}

ASDIWeaponFirearmAmmoLauncher::ASDIWeaponFirearmAmmoLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LaunchedClass = NULL;
}

