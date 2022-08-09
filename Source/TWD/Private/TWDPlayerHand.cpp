#include "TWDPlayerHand.h"
#include "TWDWidgetComponent.h"

class ASDIInventorySlot;
class AActor;
class UPrimitiveComponent;

bool ATWDPlayerHand::WouldGripInventorySlot(ASDIInventorySlot*& OutSlot) const {
    return false;
}

void ATWDPlayerHand::StopSimulatingMovement() {
}

void ATWDPlayerHand::StopSimulatingIKThrow() {
}

bool ATWDPlayerHand::SimulateMovementVelocity(TArray<FTransform>& RelativePath, float Velocity, bool bInterrupt, bool bAddCurrentTransformAsStart) {
    return false;
}

bool ATWDPlayerHand::SimulateMovementDuration(TArray<FTransform>& RelativePath, float Duration, bool bInterrupt, bool bAddCurrentTransformAsStart) {
    return false;
}

void ATWDPlayerHand::SimulateIKThrow(const FVector& ThrowVel, bool bInterrupt) {
}

void ATWDPlayerHand::SetStabCooldown(float Time) {
}


void ATWDPlayerHand::SetHandHidden(bool bHide) {
}

void ATWDPlayerHand::OnStaminaActionFailed_Implementation() {
}

void ATWDPlayerHand::OnStaminaActionEnded_Implementation() {
}

void ATWDPlayerHand::OnPhysicalHandMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ATWDPlayerHand::OnHeldActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ATWDPlayerHand::OnApplyGameUserSettings_Implementation() {
}

void ATWDPlayerHand::OnApplyCheatModes_Implementation() {
}

bool ATWDPlayerHand::IsSimulatingMovement() const {
    return false;
}

bool ATWDPlayerHand::IsSimulatingIKThrow() const {
    return false;
}

float ATWDPlayerHand::GetGrappledStabCooldown() const {
    return 0.0f;
}

float ATWDPlayerHand::GetDismemberStabCooldown() const {
    return 0.0f;
}

bool ATWDPlayerHand::CanStab() const {
    return false;
}

ATWDPlayerHand::ATWDPlayerHand() {
    this->StaminaDrainLoopFeedback = NULL;
    this->StaminaActionFailedFeedback = NULL;
    this->StaminaActionEndedFeedback = NULL;
    this->GrappledStabCooldown = 0.50f;
    this->DismemberStabCooldown = 0.50f;
    this->PauseWidgetComponent = CreateDefaultSubobject<UTWDWidgetComponent>(TEXT("PauseWidgetComponent"));
    this->PauseButtonPressFeedback = NULL;
    this->IKThrowInterp = 1.00f;
    this->SimulatedMovementDuration = 0.00f;
    this->SimulatedMovementTime = 0.00f;
    this->StaminaDrainLoopFeedbackId = 0;
    this->LastStaminaPct = 1.00f;
    this->StabCooldown = 0.00f;
    this->bGoofyFingerGunFired = false;
    this->bGoofyFingerGunReadyToFire = false;
    this->LastPhysicalHandMeshHitTimeStamp = 0.00f;
    this->LastHeldActorHitTimeStamp = 0.00f;
    this->InventoryDataWidgetComponent = CreateDefaultSubobject<UTWDWidgetComponent>(TEXT("InventoryDataWidgetComponent"));
    this->InventoryDataWidgetDelaySeconds = 0.10f;
    this->InventoryDataWidget = NULL;
    this->InventoryDataRange = 42.00f;
    this->InventoryDataRangeDelta = 8.00f;
    this->InventoryAngleThreshold = 0.50f;
    this->InventoryAngleThresholdDelta = 0.30f;
    this->InventoryIdleVelocityTime = 0.25f;
    this->InventoryIdleVelocityThreshold = 50.00f;
    this->InventoryIdleVelocityThresholdDelta = 10.00f;
    this->PauseWidgetOffsetZ = 0.00f;
}

