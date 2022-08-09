#include "SDIActiveRagdollComponent.h"

class UPrimitiveComponent;
class AActor;

void USDIActiveRagdollComponent::UpdatePhysicsAsset() {
}

bool USDIActiveRagdollComponent::TurnOn(float Duration) {
    return false;
}

void USDIActiveRagdollComponent::TurnOff(bool bAllowBlendOut) {
}

void USDIActiveRagdollComponent::SetBoneActiveOverride(FName BoneName, bool bEnabled) {
}

void USDIActiveRagdollComponent::OnStitchedComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USDIActiveRagdollComponent::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USDIActiveRagdollComponent::MeshOnPhysicsStateChange() {
}

bool USDIActiveRagdollComponent::K2IsOn(float& OutActiveTimeRemaining) const {
    return false;
}

bool USDIActiveRagdollComponent::IsValidBone(const FName& BoneName) const {
    return false;
}

bool USDIActiveRagdollComponent::IsActiveBone(const FName& BoneName) const {
    return false;
}

float USDIActiveRagdollComponent::GetDefaultStrengthMultiplyer() const {
    return 0.0f;
}

void USDIActiveRagdollComponent::ClearBoneActiveOverrides(const TArray<FName>& BoneNames) {
}

void USDIActiveRagdollComponent::ClearBoneActiveOverride(FName BoneName) {
}

bool USDIActiveRagdollComponent::ActiveRagdollAllowed() const {
    return false;
}

USDIActiveRagdollComponent::USDIActiveRagdollComponent() {
    this->bEnableGravity = false;
    this->BlendInSpeed = 2.00f;
    this->BlendOutSpeed = 2.00f;
    this->bEngageOnCollision = true;
    this->CollisionActiveDuration = 1.00f;
    this->bHackRecreatePhysicsStateOnCollision = true;
    this->DefaultStrengthMultiplyer = -1.00f;
    this->ActiveTimer = 0.00f;
    this->bToggledOn = false;
    this->bBlendWeightInterpolating = false;
    this->bRagdollActive = false;
}

