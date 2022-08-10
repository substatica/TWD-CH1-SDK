#include "SDIWeaponFirearmAmmoTrace.h"

class ASDIWeaponFirearmAmmoTrace;
class AActor;

ASDIWeaponFirearmAmmoTrace* ASDIWeaponFirearmAmmoTrace::TuneSDIWeaponFirearmAmmoTrace(FSDITuningAttribute_SDIWeaponFirearmAmmoTrace Attr, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

void ASDIWeaponFirearmAmmoTrace::SpawnTracerFX_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FVector& EndLocation) {
}

bool ASDIWeaponFirearmAmmoTrace::SpawnImpactFX_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& Hit) {
    return false;
}

void ASDIWeaponFirearmAmmoTrace::ServerHandleHitsAndNearMisses_Implementation(const FSDIWeaponFirearmAmmoTraceShotInfo& TraceShotInfo) {
}
bool ASDIWeaponFirearmAmmoTrace::ServerHandleHitsAndNearMisses_Validate(const FSDIWeaponFirearmAmmoTraceShotInfo& TraceShotInfo) {
    return true;
}

void ASDIWeaponFirearmAmmoTrace::MulticastHandleHits_Implementation(int32 ShotID, const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform, const TArray<FSDIWeaponFirearmAmmoTracePelletHit>& PelletHits) {
}

void ASDIWeaponFirearmAmmoTrace::HandlePelletHitFXTimer() {
}

void ASDIWeaponFirearmAmmoTrace::HandleNearMisses_Implementation(const TArray<FSDIWeaponFirearmAmmoTraceNearMissData>& NearMissData) {
}

void ASDIWeaponFirearmAmmoTrace::HandleHit_Implementation(int32 ShotID, const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& Hit, const TArray<AActor*>& InDamagedActors, TArray<AActor*>& OutDamagedActors) {
}

float ASDIWeaponFirearmAmmoTrace::GetTraceRange_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform) {
    return 0.0f;
}

float ASDIWeaponFirearmAmmoTrace::GetTraceImpactVelocity_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& Hit, const TArray<AActor*>& DamagedActors) {
    return 0.0f;
}

TArray<AActor*> ASDIWeaponFirearmAmmoTrace::GetTraceIgnoreActors_Implementation(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform) {
    return TArray<AActor*>();
}

// TEnumAsByte<ECollisionChannel> ASDIWeaponFirearmAmmoTrace::GetTraceChannel_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform) {
//    return ECC_WorldStatic;
// }

void ASDIWeaponFirearmAmmoTrace::GetDamageMultiplier_Implementation(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& Hit, const TArray<AActor*>& DamagedActors, float& OutDirectDamageMultiplier, float& OutRadialDamageMultiplier) {
}

bool ASDIWeaponFirearmAmmoTrace::AllowTracePassThrough_Implementation(int32 PassThroughCount, const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FVector& TraceStart, const FVector& TraceEnd, const FHitResult& LastHit, const TArray<FHitResult>& AllHits) const {
    return false;
}

bool ASDIWeaponFirearmAmmoTrace::AllowHitPassThrough_Implementation(int32 PassThroughCount, const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, const FTransform& SpreadShotTransform, const FHitResult& LastHit, int32 LastHitIndex, const TArray<FHitResult>& AllHits, const TArray<AActor*>& DamagedActors) const {
    return false;
}

ASDIWeaponFirearmAmmoTrace::ASDIWeaponFirearmAmmoTrace() {
    this->TraceRange = 16384.00f;
    this->TraceImpactVelocity = 8192.00f;
    this->TraceImpactMass = 1.00f;
    this->HitReactImpulseMultiplier = 1.00f;
    this->NearMissAlertRange = 50.00f;
    this->AsyncTracePlatformLevel = 2;
    this->PassThroughAsyncTracePlatformLevel = 2;
    this->TraceChannel = ECC_WorldDynamic;
}

