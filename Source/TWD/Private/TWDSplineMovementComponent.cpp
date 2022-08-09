#include "TWDSplineMovementComponent.h"

class ATWDSplineTrackBase;

void UTWDSplineMovementComponent::UseDefaultSpeed() {
}

void UTWDSplineMovementComponent::SetSpeed(float Speed) {
}

void UTWDSplineMovementComponent::SetDistance(float NewDistance, bool bTriggerEvents) {
}

void UTWDSplineMovementComponent::SetAcceleration(float NewAcceleration) {
}

bool UTWDSplineMovementComponent::IsMovingAlongSpline() const {
    return false;
}

ATWDSplineTrackBase* UTWDSplineMovementComponent::GetSplineTrack() const {
    return NULL;
}

float UTWDSplineMovementComponent::GetCurrentSpeed() const {
    return 0.0f;
}

void UTWDSplineMovementComponent::ChangeTrack(ATWDSplineTrackBase* NewTrack, bool bMaintainDistance) {
}

UTWDSplineMovementComponent::UTWDSplineMovementComponent() {
    this->SplineTrack = NULL;
    this->DefaultSpeed = 600.00f;
    this->bUseAcceleration = false;
    this->Acceleration = 200.00f;
    this->Distance = 0.00f;
    this->CurrentSpeed = 0.00f;
    this->DesiredSpeed = 0.00f;
}

