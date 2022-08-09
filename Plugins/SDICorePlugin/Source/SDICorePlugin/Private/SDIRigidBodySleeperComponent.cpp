#include "SDIRigidBodySleeperComponent.h"

class UPrimitiveComponent;

void USDIRigidBodySleeperComponent::UpdateRegisteredBodies() {
}

void USDIRigidBodySleeperComponent::StopMonitoring() {
}

void USDIRigidBodySleeperComponent::StartMonitoring(bool bReset) {
}

void USDIRigidBodySleeperComponent::ReRegisterComponent() {
}

void USDIRigidBodySleeperComponent::RegisterComponent(UPrimitiveComponent* Component, const TArray<FName>& BodyNames) {
}

void USDIRigidBodySleeperComponent::OnPhysicsComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void USDIRigidBodySleeperComponent::OnPhysicsComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void USDIRigidBodySleeperComponent::ForceWake() {
}

void USDIRigidBodySleeperComponent::ForceSleep() {
}

USDIRigidBodySleeperComponent::USDIRigidBodySleeperComponent() {
    this->bUseWakeEvents = false;
    this->LowActivityDurationForSleep = 1.00f;
    this->LowActivityTranslationThreshold = 16.00f;
    this->LowActivityVelocityThreshold = -1.00f;
    this->ActivityTimestamp = 0.00f;
}

