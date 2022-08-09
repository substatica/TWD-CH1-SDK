#include "SDIWeaponHitCapsuleComponent.h"

class ASDIHeldActor;
class USceneComponent;
class UAkComponent;
class UPrimitiveComponent;
class AActor;
class ASDIPlayerHand;
class USDIWeaponHitCapsuleComponent;
class AController;
class APawn;

void USDIWeaponHitCapsuleComponent::UpdateAttachmentInfo(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocketName) {
}

void USDIWeaponHitCapsuleComponent::SetMovementLoopComponent(UAkComponent* Comp) {
}

void USDIWeaponHitCapsuleComponent::ResetMotionHistory(bool bReserveAbs, bool bReserveRel) {
}

void USDIWeaponHitCapsuleComponent::OnProjectileMovementStop(const FHitResult& ImpactResult) {
}

void USDIWeaponHitCapsuleComponent::OnPhysicsComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void USDIWeaponHitCapsuleComponent::OnPhysicsComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void USDIWeaponHitCapsuleComponent::OnOwnerActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void USDIWeaponHitCapsuleComponent::OnHeldActorGrabbed(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* HandPtr) {
}

void USDIWeaponHitCapsuleComponent::OnHeldActorDropped(ASDIHeldActor* HeldActor, AActor* DroppedBy) {
}

bool USDIWeaponHitCapsuleComponent::MeleeWeaponCouldCauseDamageToHitResult(AActor* Weapon, USDIWeaponHitCapsuleComponent*& OutComp, const FHitResult& HitResult, bool bCheckVelocity, bool bCheckHistory, bool bCheckValidDamageValues) {
    return false;
}

bool USDIWeaponHitCapsuleComponent::MeleeWeaponCouldCauseDamage(AActor* Weapon, USDIWeaponHitCapsuleComponent*& OutComp, AActor* Target, bool bCheckVelocity, bool bCheckHistory, bool bCheckValidDamageValues) {
    return false;
}

bool USDIWeaponHitCapsuleComponent::IsTwoHanded() const {
    return false;
}

bool USDIWeaponHitCapsuleComponent::HandleExternalHitFromActor(AActor* Actor, const FHitResult& HitInfo, bool bCheckHistory, bool bAddToHistory, bool bOnlyActorHitCallback) {
    return false;
}

bool USDIWeaponHitCapsuleComponent::HandleExternalHit(const FHitResult& HitInfo, bool bCheckHistory, bool bAddToHistory) {
    return false;
}

FTransform USDIWeaponHitCapsuleComponent::GetWeaponHitCapsuleTransform() const {
    return FTransform{};
}

USDIWeaponHitCapsuleComponent* USDIWeaponHitCapsuleComponent::GetWeaponHit(AActor* Actor, const FHitResult& HitInfo, bool bUseFindBestFallback, bool bOnlyActorHitCallback, bool bOnlyCanDamage) {
    return NULL;
}

UAkComponent* USDIWeaponHitCapsuleComponent::GetMovementLoopComponent() const {
    return NULL;
}

bool USDIWeaponHitCapsuleComponent::GetInstigatorInfo(AController*& OutController, APawn*& OutPawn) const {
    return false;
}

USDIWeaponHitCapsuleComponent* USDIWeaponHitCapsuleComponent::FindBestExternalWeaponHit(AActor* Actor, const FHitResult& HitInfo, bool bOnlyActorHitCallback, bool bOnlyCanDamage) {
    return NULL;
}

float USDIWeaponHitCapsuleComponent::ComputeVelocityDamagePercent(bool bUseRelativeHistory) const {
    return 0.0f;
}

FVector USDIWeaponHitCapsuleComponent::ComputeImpactVelocity(const FHitResult& ImpactResult, float& OutScalarVel, bool bUseRelativeHistory) const {
    return FVector{};
}

FVector USDIWeaponHitCapsuleComponent::ComputeAvgTopVelocity(float AvgTime, float& ScalarVel, bool bUseRelativeHistory) const {
    return FVector{};
}

FVector USDIWeaponHitCapsuleComponent::ComputeAvgBottomVelocity(float AvgTime, float& ScalarVel, bool bUseRelativeHistory) const {
    return FVector{};
}

bool USDIWeaponHitCapsuleComponent::CanApplyDamage() const {
    return false;
}

USDIWeaponHitCapsuleComponent::USDIWeaponHitCapsuleComponent() {
    this->DamageHistoryDuration = 0.50f;
    this->CollisionHistoryDuration = 0.50f;
    this->VelocityAvgTime = 0.15f;
    this->ImpactDamageVelocityAvgTime = 0.04f;
    this->DamageIndexVelocityAvgTime = 0.04f;
    this->bUseActorHitCallback = true;
    this->bUseOverlapHitDetection = true;
    this->bUseOverlapHitDetectionNonVR = false;
    this->bUseActorForDamageHistory = true;
    this->bDamageOnImpactOnly = true;
    this->bDamageOnlyWhenHeld = false;
    this->bCanDamageInstigator = false;
    this->bBroadcastToAllOnWeaponHit = true;
    this->bAlwaysTickWhenActive = false;
    this->bDetachFromHierarchy = true;
    this->bAllowActiveInVR = true;
    this->bAllowActiveInNonVR = true;
    this->HitReactImpulseMultiplier = 1.00f;
    this->HitReactMinSpeed = 100.00f;
    this->MovementLoopEvent = NULL;
    this->MovementLoopStopEvent = NULL;
    this->MovementLoopRTPC = TEXT("MeleeWhoosh_Vel");
    this->bRankAllAxisTypesEvenly = false;
    this->bNonVRUsePlaneForOverlap = true;
    this->bNonVRPlaneCanUseOverlapScaleOverrides = false;
    this->NonVRPlaneNormalAxis = EAxis::Y;
    this->NonVRPlaneHalfHeight = 1.00f;
    this->LastTickTimeStamp = -1.00f;
    this->bRegisteredOnActorHit = false;
    this->MovementLoopComponent = NULL;
    this->bPlayingMovementLoop = false;
}

