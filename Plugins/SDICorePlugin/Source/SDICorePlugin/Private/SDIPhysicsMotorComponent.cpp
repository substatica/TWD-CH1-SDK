#include "SDIPhysicsMotorComponent.h"

class USceneComponent;
class UCurveFloat;
class UPrimitiveComponent;

void USDIPhysicsMotorComponent::SetUpdateDesiredTransformDuringPhysics(bool bUpdate) {
}

void USDIPhysicsMotorComponent::SetRotationPIDSettings(FSDIPIDControllerSettings Settings) {
}

void USDIPhysicsMotorComponent::SetRotationGainCurves(UCurveFloat* InProportionalGainCurve, UCurveFloat* InDerivativeGainCurve, float MinMass) {
}

void USDIPhysicsMotorComponent::SetRotationGainCurveMinMass(float MinMass) {
}

void USDIPhysicsMotorComponent::SetNeedsDesiredTransformEveryFrame(bool bRefreshEveryFrame) {
}

void USDIPhysicsMotorComponent::SetLocationPIDSettings(FSDIPIDControllerSettings Settings) {
}

void USDIPhysicsMotorComponent::SetDesiredWorldTransform(const FTransform& NewDesiredTransform, USceneComponent* NewDesiredRelativeComp, FName NewDesiredRelativeSocket) {
}

void USDIPhysicsMotorComponent::SetDesiredWorldLocationAndRotation(FVector NewDesiredLocation, FRotator NewDesiredRotation, USceneComponent* NewDesiredRelativeComp, FName NewDesiredRelativeSocket) {
}

void USDIPhysicsMotorComponent::SetDesiredRelativeTransform(const FTransform& NewDesiredTransform, USceneComponent* NewDesiredRelativeComp, FName NewDesiredRelativeSocket) {
}

void USDIPhysicsMotorComponent::SetDesiredRelativeLocationAndRotation(FVector NewDesiredLocation, FRotator NewDesiredRotation, USceneComponent* NewDesiredRelativeComp, FName NewDesiredRelativeSocket) {
}

void USDIPhysicsMotorComponent::ResetPID() {
}

FName USDIPhysicsMotorComponent::GetRigidBodyName() const {
    return NAME_None;
}

UPrimitiveComponent* USDIPhysicsMotorComponent::GetRigidBodyComponent() const {
    return NULL;
}

void USDIPhysicsMotorComponent::DetachFromRigidBody() {
}

void USDIPhysicsMotorComponent::ClearDesiredTransform(bool bResetPID) {
}

void USDIPhysicsMotorComponent::AttachToRigidBody(UPrimitiveComponent* Component, FName BodyName) {
}

USDIPhysicsMotorComponent::USDIPhysicsMotorComponent() {
    this->RotationProportionalGainCurve = NULL;
    this->RotationDerivativeGainCurve = NULL;
    this->RotationGainCurveMinMass = 0.00f;
    this->bNeedsDesiredTransformEveryFrame = false;
    this->bUpdateDesiredTransformDuringPhysics = true;
    this->DesiredTransformSetFrame = 4294967295;
    this->bPendingDesiredTransform = false;
    this->bPendingClearDesiredTransform = false;
    this->bPendingClearResetPID = false;
}

