#include "SDIHeldActor.h"
#include "Net/UnrealNetwork.h"
#include "SDIImpactEffectsComponent.h"
#include "SDICollisionChannelIgnoranceComponent.h"
#include "SDIPhysicsMotorComponent.h"

class ASDIThrowInputSplineActor;
class AActor;
class USceneComponent;
class UActorComponent;
class UPrimitiveComponent;
class UObject;
class ASDIPlayerHand;
class APawn;
class UHapticFeedbackEffect_Base;
class USDIWeaponHitCapsuleComponent;

bool ASDIHeldActor::WasThrown() const {
    return false;
}

bool ASDIHeldActor::WasRecentlyDropped(float WithinSeconds) const {
    return false;
}

bool ASDIHeldActor::WasLaunched() const {
    return false;
}

bool ASDIHeldActor::WasHeldByPlayerHand() const {
    return false;
}

bool ASDIHeldActor::WasHeldByPlayer() const {
    return false;
}

bool ASDIHeldActor::WasHeldByAI() const {
    return false;
}

void ASDIHeldActor::UpdateTickEnabled_Implementation() {
}

bool ASDIHeldActor::UpdateThrowInputSpline_Implementation(ASDIThrowInputSplineActor* Spline, AActor* Destination, float DeltaSeconds) {
    return false;
}

void ASDIHeldActor::UpdatePhysicsConstraints() {
}

void ASDIHeldActor::UpdateAttachmentInfos(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocket) {
}

bool ASDIHeldActor::ThrowInputSplineUseMinVelocity_Implementation(ASDIThrowInputSplineActor* Spline) const {
    return false;
}

bool ASDIHeldActor::TeleportHeldActor(const FTransform& Transform, UActorComponent* GripComp, bool bDropIfHeld, bool bStartPhysics, float PhysicsDelay, FVector ThrowVelocity, FVector AngularVelocityDeg) {
    return false;
}

void ASDIHeldActor::StartPhysicsFromTimer() {
}

bool ASDIHeldActor::ShouldTickBeEnabled_Implementation() const {
    return false;
}

void ASDIHeldActor::SetOverrideNonVRAnimatedAttachSocket(FName Socket) {
}

void ASDIHeldActor::SetHeldActorTransform(const FTransform& Transform, bool bMoveHands) {
}

bool ASDIHeldActor::SetDropAttachInfo(USceneComponent* Parent, FName SocketName, const FTransform& RelTransform) {
    return false;
}

void ASDIHeldActor::RecreatePhysicsConstraints() {
}

void ASDIHeldActor::PlayGrabbedEffects_Implementation() {
}

void ASDIHeldActor::OnRep_RepSecondaryHandGripInfo(const FSDIReplicatedGripInfo& OldRepSecondaryHandGripInfo) {
}

void ASDIHeldActor::OnRep_RepPrimaryHandGripInfo(const FSDIReplicatedGripInfo& OldRepPrimaryHandGripInfo) {
}

void ASDIHeldActor::OnRep_bRepCustomThrowPhysicsEngaged(bool OldbRepCustomThrowPhysicsEngaged) {
}

void ASDIHeldActor::OnImpactEffectsComponentImpact_Implementation(USDIImpactEffectsComponent* Comp, const FVector& Velocity, const FVector& NormalImpulse, const FHitResult& Hit) {
}

void ASDIHeldActor::OnComponentHitCustomThrowPhysics(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASDIHeldActor::OnActorHitCustomThrowPhysics(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASDIHeldActor::NonVRTickPostPhysics(UObject* TickOwner, float DeltaTime) {
}

bool ASDIHeldActor::LaunchHeldActor(const FVector& LinearVelocity, const FVector& AngularVelocityDeg) {
    return false;
}

bool ASDIHeldActor::IsPhysicsMotorActive() const {
    return false;
}

bool ASDIHeldActor::IsInterpolating() const {
    return false;
}

bool ASDIHeldActor::IsHeldByPlayerHand() const {
    return false;
}

bool ASDIHeldActor::IsHeldByPlayer() const {
    return false;
}

bool ASDIHeldActor::IsHeldByAI() const {
    return false;
}

bool ASDIHeldActor::IsBeingHeld() const {
    return false;
}

bool ASDIHeldActor::IgnoreSecondaryGripForIK() const {
    return false;
}

bool ASDIHeldActor::GrabWithHand(ASDIPlayerHand* hand, bool bPrimary, bool bInterpolate, bool bUseDesiredGripInfo) {
    return false;
}

bool ASDIHeldActor::Grab_Implementation(AActor* Grabber, EControllerHand hand, bool bPrimary, ASDIPlayerHand* HandPtr, bool bInterpolate, bool bUseDesiredGripInfo) {
    return false;
}

void ASDIHeldActor::GetThrowInfo_Implementation(ASDIPlayerHand* OldPrimaryHeldHand, EControllerHand OldPrimaryHeldHandEnum, ASDIPlayerHand* OldSecondaryHeldHand, EControllerHand OldSecondaryHeldHandEnum, FTransform& OutTransform, FVector& OutLinearVelocity, FVector& OutAngularVelocity, bool& bOutCustomThrowPhysicsEngaged) {
}

UPrimitiveComponent* ASDIHeldActor::GetSimulatePhysicsComponent() const {
    return NULL;
}

UActorComponent* ASDIHeldActor::GetSecondaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const {
    return NULL;
}

EControllerHand ASDIHeldActor::GetSecondaryHeldHandEnum() const {
    return EControllerHand::Left;
}

ASDIPlayerHand* ASDIHeldActor::GetSecondaryHeldHand() const {
    return NULL;
}

UPrimitiveComponent* ASDIHeldActor::GetSecondaryGripCollision() const {
    return NULL;
}

AActor* ASDIHeldActor::GetRepHeldBy() const {
    return NULL;
}

UActorComponent* ASDIHeldActor::GetPrimaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const {
    return NULL;
}

EControllerHand ASDIHeldActor::GetPrimaryHeldHandEnum() const {
    return EControllerHand::Left;
}

ASDIPlayerHand* ASDIHeldActor::GetPrimaryHeldHand() const {
    return NULL;
}

UPrimitiveComponent* ASDIHeldActor::GetPrimaryGripCollision() const {
    return NULL;
}

AActor* ASDIHeldActor::GetLocalHeldBy() const {
    return NULL;
}

UActorComponent* ASDIHeldActor::GetLastSecondaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const {
    return NULL;
}

EControllerHand ASDIHeldActor::GetLastSecondaryHeldHandEnum() const {
    return EControllerHand::Left;
}

ASDIPlayerHand* ASDIHeldActor::GetLastSecondaryHeldHand() const {
    return NULL;
}

UActorComponent* ASDIHeldActor::GetLastPrimaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const {
    return NULL;
}

EControllerHand ASDIHeldActor::GetLastPrimaryHeldHandEnum() const {
    return EControllerHand::Left;
}

ASDIPlayerHand* ASDIHeldActor::GetLastPrimaryHeldHand() const {
    return NULL;
}

APawn* ASDIHeldActor::GetLastHeldByPawn() const {
    return NULL;
}

AActor* ASDIHeldActor::GetLastHeldBy() const {
    return NULL;
}

float ASDIHeldActor::GetLastDroppedTimestamp() const {
    return 0.0f;
}

bool ASDIHeldActor::GetHeldState(bool& bOutIsHeldByPlayerHand, bool& bOutWasThrown, bool& bOutWasLaunched) const {
    return false;
}

APawn* ASDIHeldActor::GetHeldByPawn() const {
    return NULL;
}

AActor* ASDIHeldActor::GetHeldBy() const {
    return NULL;
}

UActorComponent* ASDIHeldActor::GetGripPoint_Implementation(const FTransform& HandTransform, EControllerHand hand, ESDIGripType GripType, ESDIHandPose& OutHandPose, FSDIGripInfo& OutGripInfo, bool bUseDesiredGripInfo, bool bDistanceOnly) const {
    return NULL;
}

UHapticFeedbackEffect_Base* ASDIHeldActor::GetGrabbedFeedback_Implementation(ASDIPlayerHand* hand, float InterpolationTime) const {
    return NULL;
}

FVector ASDIHeldActor::GetAvgGripLocation(ESDIGripType GripType) const {
    return FVector{};
}

void ASDIHeldActor::DroppedFromSpawn(AActor* SimulateLastHeldBy) {
}

void ASDIHeldActor::Dropped_Implementation() {
}

void ASDIHeldActor::Drop_Implementation() {
}

bool ASDIHeldActor::DisablePhysicsCollisionDuringInterpolation() const {
    return false;
}

void ASDIHeldActor::DisableNonSDISkelMeshTickFromTimer() {
}

void ASDIHeldActor::ClearOverrideNonVRAnimatedAttachSocket() {
}

void ASDIHeldActor::ClearLaunched() {
}

void ASDIHeldActor::ClearDropAttachInfo() {
}

bool ASDIHeldActor::ChangeHandGrip(ASDIPlayerHand* hand, UActorComponent* NewGripComp, FSDIGripInfo NewGripInfo, bool bInterpolate, bool bUseHandForPivot, ESDIHandPose Pose) {
    return false;
}

bool ASDIHeldActor::ChangeGrip(EControllerHand hand, UActorComponent* NewGripComp, FSDIGripInfo NewGripInfo, bool bInterpolate, bool bUseHandForPivot, ESDIHandPose Pose) {
    return false;
}

bool ASDIHeldActor::CanHitComponentApplyDamage_Implementation(const USDIWeaponHitCapsuleComponent* HitComponent) const {
    return false;
}

void ASDIHeldActor::AttachToWithGripTransform(USceneComponent* Parent, FName SocketName, FTransform GripTransform, bool bInterpolate, UActorComponent* GripComp, FSDIGripInfo GripInfo, ASDIPlayerHand* hand, bool bUseHandForPivot) {
}

void ASDIHeldActor::AttachToWithGripComp(USceneComponent* Parent, FName SocketName, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, ASDIPlayerHand* hand) {
}

void ASDIHeldActor::AttachToHandWithGripTransform(ASDIPlayerHand* hand, FTransform GripTransform, bool bInterpolate, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bUseHandForPivot) {
}

void ASDIHeldActor::AttachToHandWithGripComp(ASDIPlayerHand* hand, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, bool bUseHandForPivot) {
}

bool ASDIHeldActor::AllowRangedPickup() const {
    return false;
}

void ASDIHeldActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDIHeldActor, bRepDropIsAttached);
    DOREPLIFETIME(ASDIHeldActor, RepHeldBy);
    DOREPLIFETIME(ASDIHeldActor, RepPrimaryHandGripInfo);
    DOREPLIFETIME(ASDIHeldActor, RepSecondaryHandGripInfo);
    DOREPLIFETIME(ASDIHeldActor, bRepCustomThrowPhysicsEngaged);
    DOREPLIFETIME(ASDIHeldActor, bRepLaunched);
}

ASDIHeldActor::ASDIHeldActor() {
    this->ImpactEffectsComponent = CreateDefaultSubobject<USDIImpactEffectsComponent>(TEXT("ImpactEffectsComponent"));
    this->PrimaryGripCollision = NULL;
    this->SecondaryGripCollision = NULL;
    this->SimulatePhysicsComponent = NULL;
    this->CollisionIgnoranceComp = CreateDefaultSubobject<USDICollisionChannelIgnoranceComponent>(TEXT("CollisionIgnorance"));
    this->PhysicsMotorComp = CreateDefaultSubobject<USDIPhysicsMotorComponent>(TEXT("PhysicsMotor"));
    this->bDestroyObsoleteRootComponent = true;
    this->bAllowRangedPickup = true;
    this->bDisablePhysicsCollisionDuringInterpolation = true;
    this->bAllowHoldingWithSecondary = false;
    this->bIgnoreSecondaryGripForIK = false;
    this->bMoveToHolderLevelOnPickup = true;
    this->bMoveToOriginalLevelOnDrop = false;
    this->GrabLocationInterpolationSpeed = 512.00f;
    this->GrabRotationInterpolationSpeedDeg = 1080.00f;
    this->GrabMaxInterpolationTime = 0.15f;
    this->ArmLengthReleaseFactor = 2.00f;
    this->ArmLengthReleaseFactorTime = 0.50f;
    this->GrabbedFeedback = NULL;
    this->GrabbedSound = NULL;
    this->bPlayGrabbedEffectsAfterInterpolation = true;
    this->bPlayGrabbedFeedbackAfterInterpolation = true;
    this->bThrowInputSplineUseMinVelocity = true;
    this->bManageNonSDISkelMeshesTick = true;
    this->bAlwaysTickNonSDISkelMeshes = false;
    this->NonSDISkelMeshesExtraTickTime = 1.50f;
    this->InitialSimulatePhysics = EInitialSimulatePhysics::Default;
    this->bCustomThrowPhysics = false;
    this->CustomThrowPhysicsMode = ECustomThrowPhysicsMode::OrientToVelocity;
    this->CustomThrowAxis = ESDIAxis::PosZ;
    this->CustomThrowSpinSpeedDeg = 720.00f;
    this->CustomThrowPhysicsMinLinearVelocity = 128.00f;
    this->bDebugReplicationInfo = false;
    this->PhysicsHandGripInterpolationSpeed = 5.00f;
    this->HandPoseBlendSpeed = 8.00f;
    this->InternalEndPlayReason = 255;
    this->PrimaryHeldHand = NULL;
    this->PrimaryHeldHandGripComp = NULL;
    this->PrimaryHeldHandEnum = EControllerHand::AnyHand;
    this->PrimaryHeldHandGripLerp = 0.00f;
    this->PrevPrimaryHeldHandGripLerp = 0.00f;
    this->SecondaryHeldHand = NULL;
    this->SecondaryHeldHandGripComp = NULL;
    this->SecondaryHeldHandEnum = EControllerHand::AnyHand;
    this->SecondaryHeldHandGripLerp = 0.00f;
    this->PrevSecondaryHeldHandGripLerp = 0.00f;
    this->bRepDropIsAttached = false;
    this->RepHeldBy = NULL;
    this->LocalHeldBy = NULL;
    this->LastPrimaryHeldHandEnum = EControllerHand::AnyHand;
    this->LastSecondaryHeldHandEnum = EControllerHand::AnyHand;
    this->PrimaryArmLengthReleaseFactorTimer = 0.00f;
    this->SecondaryArmLengthReleaseFactorTimer = 0.00f;
    this->InterpolationDuration = 0.00f;
    this->InterpolationTimer = 0.00f;
    this->InterpolationEndComp = NULL;
    this->InterpolationGripComp = NULL;
    this->bInterpolationUseHandForPivot = false;
    this->bPlayGrabbedEffects = false;
    this->bRepCustomThrowPhysicsEngaged = false;
    this->bLocalCustomThrowPhysicsEngaged = false;
    this->LastDroppedTimestamp = 0.00f;
    this->bInsideUpdatePhysicsConstraints = false;
    this->bRepLaunched = false;
    this->bSimulatePhysicsComponentGravityEnabledSet = false;
    this->bSimulatePhysicsComponentGravityEnabled = false;
    this->bOverrideNonVRAnimatedAttachSocketSet = false;
}

