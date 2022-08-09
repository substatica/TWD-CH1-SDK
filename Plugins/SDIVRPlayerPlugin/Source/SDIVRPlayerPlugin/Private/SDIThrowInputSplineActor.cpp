#include "SDIThrowInputSplineActor.h"

void ASDIThrowInputSplineActor::UpdateThrowInputSpline_Implementation(float DeltaSeconds) {
}

ASDIThrowInputSplineActor::ASDIThrowInputSplineActor() {
    this->bArcRequiresHold = false;
    this->bArcThrowOnRelease = false;
    this->bArcAllowThrowBehind = false;
    this->bArcUseThrowMove = true;
    this->ArcThrowMoveYawAngleDeltaDegrees = 45.00f;
    this->bMinArcVelocityUpdateArc = false;
    this->MinArcVelocityResolution = 10;
    this->MinArcVelocityMaxDistanceError = 32.00f;
}

