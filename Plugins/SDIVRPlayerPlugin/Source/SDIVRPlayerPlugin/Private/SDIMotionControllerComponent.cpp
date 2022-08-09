#include "SDIMotionControllerComponent.h"

void USDIMotionControllerComponent::GetVelocityInfo(float Timespan, FVector& MinVel, FVector& AvgVel, FVector& MaxVel, float& ScalarMinVel, float& ScalarAvgVel, float& ScalarMaxVel) const {
}

FVector USDIMotionControllerComponent::GetSpringVelocity() const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetMinVelocity(float Timespan, float& ScalarVel) const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetMinAngularVelocity(float Timespan, float& ScalarAngVel) const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetMinAcceleration(float Timespan, float& ScalarAcc) const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetMaxVelocity(float Timespan, float& ScalarVel) const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetMaxAngularVelocity(float Timespan, float& ScalarAngVel) const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetMaxAcceleration(float Timespan, float& ScalarAcc) const {
    return FVector{};
}

FRotator USDIMotionControllerComponent::GetComponentRotationalVelocity() const {
    return FRotator{};
}

FRotator USDIMotionControllerComponent::GetComponentRotationalAcceleration() const {
    return FRotator{};
}

FVector USDIMotionControllerComponent::GetComponentAngularVelocity() const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetComponentAcceleration() const {
    return FVector{};
}

FBox USDIMotionControllerComponent::GetBounds(float Timespan) const {
    return FBox{};
}

FVector USDIMotionControllerComponent::GetAverageVelocity(float Timespan, float& ScalarVel) const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetAverageAngularVelocity(float Timespan, float& ScalarAngVel) const {
    return FVector{};
}

FVector USDIMotionControllerComponent::GetAverageAcceleration(float Timespan, float& ScalarAcc) const {
    return FVector{};
}

void USDIMotionControllerComponent::GetAngularVelocityInfo(float Timespan, FVector& MinAngVel, FVector& AvgAngVel, FVector& MaxAngVel, float& ScalarMinAngVel, float& ScalarAvgAngVel, float& ScalarMaxAngVel) const {
}

void USDIMotionControllerComponent::GetAccelerationInfo(float Timespan, FVector& MinAcc, FVector& AvgAcc, FVector& MaxAcc, float& ScalarMinAcc, float& ScalarAvgAcc, float& ScalarMaxAcc) const {
}

USDIMotionControllerComponent::USDIMotionControllerComponent() {
    this->ADSReturnLerpTime = 0.00f;
    this->TrackingReturnLerpTime = 0.50f;
    this->ADSBlendTime = 0.50f;
    this->MaxADSControllerOffset = 8.00f;
    this->TrackedRelSpeedSmoothingFactor = 0.90f;
    this->bFirstTick = true;
    this->TrackedRelSpeed = 0.00f;
    this->SmoothedTrackedRelSpeed = 0.00f;
    this->bAdjustingForTracking = false;
    this->bAdjustingForADS = false;
    this->bADSUsingRightEye = false;
    this->ADSTime = 0.00f;
    this->AdjustedRelTransformLerp = 1.00f;
    this->AdjustedRelTransformLerpTime = 0.00f;
    this->LastTrackingStatus = ETrackingStatus::NotTracked;
    this->bUntrackedRelTransformValid = false;
}

