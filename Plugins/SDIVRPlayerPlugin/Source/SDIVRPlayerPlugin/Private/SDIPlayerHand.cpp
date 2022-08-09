#include "SDIPlayerHand.h"
#include "SDIWeaponHitCapsuleComponent.h"
#include "SDIPlayerHandInteractComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"

class AActor;
class UPrimitiveComponent;
class UActorComponent;
class UObject;
class UDamageType;
class USceneComponent;
class USDIPlayerHandPhysicalInteractComponent;
class ASDIPlayerHand;
class ASDIInventoryActor;
class ASDIInventorySlot;

void ASDIPlayerHand::UpdatePhysicsHandle() {
}

bool ASDIPlayerHand::SwapGripActor(AActor* NewGripActor, UPrimitiveComponent* NewGripComp) {
    return false;
}

void ASDIPlayerHand::StimulusTick_Implementation(const FGameplayTagContainer& Stimuli, float DeltaTime) {
}

bool ASDIPlayerHand::SetPreciseThrowControlEngaged(bool bEngaged) {
    return false;
}

bool ASDIPlayerHand::SetInteractLocked(ESDIInteractiveInteractType Type, bool bLocked) {
    return false;
}

void ASDIPlayerHand::SetInteractDisabled(ESDIInteractiveInteractType Type, bool bDisabled, bool bLocked) {
}

void ASDIPlayerHand::SetHandPhysicsAllowed(bool bAllowed) {
}

bool ASDIPlayerHand::SetGripLocked(bool bLocked) {
    return false;
}

void ASDIPlayerHand::SetGripDisabled(bool bDisabled, bool bLocked) {
}

void ASDIPlayerHand::SetAllInteractLocked(bool bLocked) {
}

void ASDIPlayerHand::SetAllInteractDisabled(bool bDisabled, bool bLocked) {
}

void ASDIPlayerHand::OnWeaponHit_Implementation(bool bPrimaryHand, USDIWeaponHitCapsuleComponent* WeaponHitComponent, AActor* HitActor, UPrimitiveComponent* HitComp, const FVector& HitVelocity, const FTransform& HitTransform, const UDamageType* DamageTypeObject) {
}

void ASDIPlayerHand::OnHandEndOverlap_Implementation(USDIPlayerHandInteractComponent* InteractComp, ESDIInteractRangeType RangeType, AActor* Other, UPrimitiveComponent* OtherComp) {
}

void ASDIPlayerHand::OnHandBeginOverlap_Implementation(USDIPlayerHandInteractComponent* InteractComp, ESDIInteractRangeType RangeType, AActor* Other, UPrimitiveComponent* OtherComp) {
}

bool ASDIPlayerHand::LockHandToGripComponent(UObject* LockOwner, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, bool bResetInterpolation, ESDIHandPose OverrideHandPose, float ArmLengthReleaseFactor, bool bIgnoreCollisionsWithOtherHand) {
    return false;
}

FHitResult ASDIPlayerHand::K2GetInteractResult(ESDIInteractiveInteractType Type) const {
    return FHitResult{};
}

FHitResult ASDIPlayerHand::K2GetGripResult() const {
    return FHitResult{};
}

bool ASDIPlayerHand::IsPreciseThrowControlEngaged() const {
    return false;
}

bool ASDIPlayerHand::IsOverlappingInteractionActorWithWidgetComponent(ESDIInteractRangeType RangeType) const {
    return false;
}

bool ASDIPlayerHand::IsInteractPressed(ESDIInteractiveInteractType Type) const {
    return false;
}

bool ASDIPlayerHand::IsInteractLocked(ESDIInteractiveInteractType Type) const {
    return false;
}

bool ASDIPlayerHand::IsInteractingWithWorld(ESDIInteractiveInteractType Type) const {
    return false;
}

bool ASDIPlayerHand::IsInteractingWithPhysics(ESDIInteractiveInteractType Type) const {
    return false;
}

bool ASDIPlayerHand::IsInteractingWithInteractive(ESDIInteractiveInteractType Type) const {
    return false;
}

bool ASDIPlayerHand::IsInteracting(ESDIInteractiveInteractType Type) const {
    return false;
}

bool ASDIPlayerHand::IsInteractDisabled(ESDIInteractiveInteractType Type) const {
    return false;
}

bool ASDIPlayerHand::IsHandUsingPhysics() const {
    return false;
}

bool ASDIPlayerHand::IsGripPressed() const {
    return false;
}

bool ASDIPlayerHand::IsGrippingWorld() const {
    return false;
}

bool ASDIPlayerHand::IsGrippingPhysics() const {
    return false;
}

bool ASDIPlayerHand::IsGrippingModal() const {
    return false;
}

bool ASDIPlayerHand::IsGrippingInteractive() const {
    return false;
}

bool ASDIPlayerHand::IsGrippingAttachPhysics() const {
    return false;
}

bool ASDIPlayerHand::IsGripping() const {
    return false;
}

bool ASDIPlayerHand::IsGripPhysicsConstraintAttachedTo(const UPrimitiveComponent* Other, FName BoneName) const {
    return false;
}

bool ASDIPlayerHand::IsGripLocked() const {
    return false;
}

bool ASDIPlayerHand::IsGripDisabled() const {
    return false;
}

bool ASDIPlayerHand::IsAnyInteractingWithWorld() const {
    return false;
}

bool ASDIPlayerHand::IsAnyInteractingWithPhysics() const {
    return false;
}

bool ASDIPlayerHand::IsAnyInteractingWithInteractive() const {
    return false;
}

bool ASDIPlayerHand::IsAnyInteracting() const {
    return false;
}

bool ASDIPlayerHand::IsAnyInteractDisabled() const {
    return false;
}

void ASDIPlayerHand::InteractReleaseAll() {
}

void ASDIPlayerHand::InteractRelease(ESDIInteractiveInteractType Type) {
}

void ASDIPlayerHand::InteractPress(ESDIInteractiveInteractType Type) {
}

void ASDIPlayerHand::InputPreciseThrowReleased() {
}

void ASDIPlayerHand::InputPreciseThrowPressed() {
}

void ASDIPlayerHand::InputPreciseThrowFacingLR(float Value) {
}

void ASDIPlayerHand::InputPreciseThrowFacingFB(float Value) {
}

void ASDIPlayerHand::InputPreciseThrowAxis(float Value) {
}

void ASDIPlayerHand::InputInteractType(ESDIInteractiveInteractType Type, float Value) {
}

void ASDIPlayerHand::InputInteractTertiary(float Value) {
}

void ASDIPlayerHand::InputInteractSecondary(float Value) {
}

void ASDIPlayerHand::InputInteractPrimary(float Value) {
}

void ASDIPlayerHand::InputInteract(float Value) {
}

void ASDIPlayerHand::InputGrip(float Value) {
}

bool ASDIPlayerHand::HighlightHandPoseAllowsGrip(ESDIHandPose HighlightHandPose) const {
    return false;
}

void ASDIPlayerHand::GripRelease() {
}

void ASDIPlayerHand::GripPress() {
}

bool ASDIPlayerHand::GripPhysicsComponent(UPrimitiveComponent* GripComp, FName BoneName, const FVector& GripPoint, bool bLockRotation) {
    return false;
}

void ASDIPlayerHand::GripDetachPhysics(bool bInterpolate) {
}

bool ASDIPlayerHand::GripAttachPhysics(UPrimitiveComponent* PhysicsComp, FName BoneName, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, bool bResetInterpolation, ESDIHandPose OverrideHandPose, float ArmLengthReleaseFactor, float ArmLengthReleaseTime, bool bIgnoreCollisionsWithOtherHand) {
    return false;
}

FTransform ASDIPlayerHand::GetVisualHeldActorAttachPointTransform() const {
    return FTransform{};
}

FTransform ASDIPlayerHand::GetTrackedHeldActorAttachPointTransform() const {
    return FTransform{};
}

float ASDIPlayerHand::GetTargetActivityLevelFadeScale() const {
    return 0.0f;
}

float ASDIPlayerHand::GetTargetActivityLevel() const {
    return 0.0f;
}

USDIPlayerHandInteractComponent* ASDIPlayerHand::GetRangedInteractComponent() const {
    return NULL;
}

bool ASDIPlayerHand::GetPreciseThrowVelocity(FVector& OutVelocity) const {
    return false;
}

UPhysicsHandleComponent* ASDIPlayerHand::GetPhysicsHandle() const {
    return NULL;
}

USDIPlayerHandPhysicalInteractComponent* ASDIPlayerHand::GetPhysicalInteractComponent() const {
    return NULL;
}

ASDIPlayerHand* ASDIPlayerHand::GetOtherPlayerHand() const {
    return NULL;
}

ASDIInventorySlot* ASDIPlayerHand::GetInventorySlot(ASDIInventoryActor* Inv, bool bIgnoreInventoryAllowed) const {
    return NULL;
}

AActor* ASDIPlayerHand::GetInventoryOwner(bool bReset) const {
    return NULL;
}

float ASDIPlayerHand::GetInteractPressedTime(ESDIInteractiveInteractType Type) const {
    return 0.0f;
}

float ASDIPlayerHand::GetInteractInputValue(ESDIInteractiveInteractType Type) const {
    return 0.0f;
}

USDIPlayerHandInteractComponent* ASDIPlayerHand::GetInteractComponentByType(ESDIInteractRangeType RangeType) const {
    return NULL;
}

USDIPlayerHandInteractComponent* ASDIPlayerHand::GetInteractComponent() const {
    return NULL;
}

AActor* ASDIPlayerHand::GetInteractActor(ESDIInteractiveInteractType Type) const {
    return NULL;
}

AActor* ASDIPlayerHand::GetHolderActor(bool bReset) const {
    return NULL;
}

FTransform ASDIPlayerHand::GetHeldActorAttachPointTransform() const {
    return FTransform{};
}

USceneComponent* ASDIPlayerHand::GetHeldActorAttachPoint(FName& SocketName) const {
    return NULL;
}

float ASDIPlayerHand::GetGripPressedTime() const {
    return 0.0f;
}

FName ASDIPlayerHand::GetGrippingPhysicsComponentBoneName() const {
    return NAME_None;
}

UPrimitiveComponent* ASDIPlayerHand::GetGrippingPhysicsComponent() const {
    return NULL;
}

UPhysicsConstraintComponent* ASDIPlayerHand::GetGripPhysicsConstraint() const {
    return NULL;
}

float ASDIPlayerHand::GetGripInputValue() const {
    return 0.0f;
}

ESDIPlayerHandGripInputMode ASDIPlayerHand::GetGripInputMode() const {
    return ESDIPlayerHandGripInputMode::Normal;
}

UActorComponent* ASDIPlayerHand::GetGripComponent(FSDIGripInfo& OutGripInfo) const {
    return NULL;
}

AActor* ASDIPlayerHand::GetGripActor() const {
    return NULL;
}

ESDIHandPose ASDIPlayerHand::GetDefaultHighlightHandPose() const {
    return ESDIHandPose::HP_Fist;
}

UActorComponent* ASDIPlayerHand::FindBestGrip(const USceneComponent* ParentComp, FTransform& RelTransform, ESDIHandPose& HandPose, FSDIGripInfo& OutGripInfo, ESDIGripType GripType, bool bUseTracked, bool bRecurse, bool bActiveOnly, bool bApplyRotationConstraints, bool bUseDesiredGripInfo, bool bDistanceOnly) const {
    return NULL;
}

void ASDIPlayerHand::DestroyThrowInputSpline() {
}

void ASDIPlayerHand::CreateThrowInputSpline() {
}

bool ASDIPlayerHand::CanHandUsePhysics() const {
    return false;
}

bool ASDIPlayerHand::BreakGripPhysicsConstraintWith(UPrimitiveComponent* Other, FName BoneName) {
    return false;
}

bool ASDIPlayerHand::AreGripPhysicsConstraintsAttachedToSameComponent(const ASDIPlayerHand* OtherHand, bool bSameBone) const {
    return false;
}

bool ASDIPlayerHand::AreAllInteractDisabled() const {
    return false;
}

void ASDIPlayerHand::AdjustThrowInfo(UPrimitiveComponent* ThrownComponent, FTransform& InOutTransform, FVector& InOutLinearVelocity, FVector& InOutAngularVelocity) const {
}

ASDIPlayerHand::ASDIPlayerHand() {
    this->InteractComponent = CreateDefaultSubobject<USDIPlayerHandInteractComponent>(TEXT("InteractComponent"));
    this->RangedInteractComponent = CreateDefaultSubobject<USDIPlayerHandInteractComponent>(TEXT("RangedInteractComponent"));
    this->PhysicalInteractComponent = NULL;
    this->PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));
    this->GripPhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("GripPhysicsConstraint"));
    this->NonVRPhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("NonVRPhysicsConstraint"));
    this->bCollideHeldActor = true;
    this->bCollidePhysicalInteractComponent = false;
    this->CollidePhysicalInteractComponentShapeInflation = -0.25f;
    this->HeldActorAttachPointSocket = TEXT("HeldActorAttachPoint");
    this->GripPressThreshold = 0.50f;
    this->GripReleaseThreshold = 0.25f;
    this->KnucklesGripPressThreshold = 0.90f;
    this->KnucklesGripReleaseThreshold = 0.25f;
    this->bGripValidInteractionHighlightsOnly = false;
    this->bGripAllowOffscreenRanged = false;
    this->bGripAllowOffscreenClose = true;
    this->bAllowRangedGrip = true;
    this->bAllowRangedInteract = false;
    this->GripOffScreenAngleDeg = 90.00f;
    this->InteractPressThreshold = 0.50f;
    this->InteractReleaseThreshold = 0.25f;
    this->bInteractValidInteractionHighlightsOnly = true;
    this->MaxSimulatingPhysicsMassToPickup = 0.00f;
    this->GrabPhysicsFeedback = NULL;
    this->ThrowAvgVelocityBlend = 0.50f;
    this->ThrowAvgVelocityTime = 0.15f;
    this->ThrowVelocityMultiplier = 1.00f;
    this->ThrowVelocityMultiplierMassCurve = NULL;
    this->ThrowMaxVelocityMassCurve = NULL;
    this->ThrowVelocityPhysicsOverrideBlend = 0.00f;
    this->bAllowTeleportWhileGrippingWorld = false;
    this->bAllowTeleportWhileGrippingPhysics = true;
    this->bAllowTeleportWhileGrippingInteractive = true;
    this->TeleportMaxSimulatingPhysicsMass = 30.00f;
    this->bSimulateHeldActorWeight = false;
    this->SimulatedHeldActorWeightMinMass = 1.00f;
    this->SimulatedGravityTorqueAngularAcc = 15.00f;
    this->SimulatedGravityLinearAcc = 50.00f;
    this->SimulatedInertiaTorqueAcc = 90.00f;
    this->SimulatedInertiaLinearAcc = 5.00f;
    this->SimulatedAngularVelocityMax = 1080.00f;
    this->SimulatedAngularVelocityDecay = 1.00f;
    this->SimulatedLinearVelocityMax = -1.00f;
    this->SimulatedLinearVelocityDecay = 5.00f;
    this->SimulatedHandTorqueAngularAcc = 90.00f;
    this->SimulatedHandLinearAcc = 50.00f;
    this->FistWeaponCapsule = CreateDefaultSubobject<USDIWeaponHitCapsuleComponent>(TEXT("FistWeaponCapsule"));
    this->OpenHandWeaponCapsule = CreateDefaultSubobject<USDIWeaponHitCapsuleComponent>(TEXT("OpenHandWeaponCapsule"));
    this->FistWeaponGripInputThreshold = 0.60f;
    this->HandActivityLevelActiveSpeedThreshold = 50.00f;
    this->HandActivityLevelActiveAccelThreshold = 500.00f;
    this->HandActivityIdleTimeLimit = 2.00f;
    this->BodySlotMaxDistance = 10.00f;
    this->BodySlotOnscreenAngleDegrees = 10.00f;
    this->DefaultHighlightHandPose = ESDIHandPose::HP_Open;
    this->GripAllowedHighlightHandPoses.AddDefaulted(1);
    this->bGripPressed = false;
    this->bInputModalGripPressed = false;
    this->GripInputValue = 0.00f;
    this->GripPressedTime = -1.00f;
    this->bGripLocked = false;
    this->bGripDisabled = false;
    this->bInsideGripRelease = false;
    this->bInsideInteractRelease = false;
    this->ThrowInputSpline = NULL;
    this->bHandPhysicsAllowed = true;
    this->GrippingPhysicsComponentArmLengthReleaseTime = 0.00f;
    this->HandActivityLevel = 0.00f;
    this->HandTargetActivityLevel = 1.00f;
    this->HandTargetActivityLevelFadeScale = 1.00f;
    this->HandActivityLevelIdleTime = 0.00f;
}

