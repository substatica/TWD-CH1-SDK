#include "TWDPlayerHeldActorDrift.h"

void UTWDPlayerHeldActorDrift::UpdateDrift(const FVector& Vel, const FRotator& AimRot, const float DeltaSeconds) {
}

void UTWDPlayerHeldActorDrift::Initialize(const FVector& Vel, const FRotator& AimRot) {
}

FRotator UTWDPlayerHeldActorDrift::GetTangentialVelocity() const {
    return FRotator{};
}

UTWDPlayerHeldActorDrift::UTWDPlayerHeldActorDrift() {
    this->DefaultItemDistanceFromCamera = 1.00f;
    this->ItemDistanceFromCameraMultiplierMin = 0.50f;
    this->ItemDistanceFromCameraMultiplierMax = 1.50f;
    this->MaxDriftOffset = 80.00f;
    this->DriftBoundaryFactorCurve = NULL;
    this->ItemDistanceFromCamera = 0.00f;
    this->ItemDistanceFrom_Z_Axis = 0.00f;
    this->CentripetalAccelerationFromYawInterp = 0.00f;
    this->CentripetalAccelerationFromPitchInterp = 0.00f;
}

