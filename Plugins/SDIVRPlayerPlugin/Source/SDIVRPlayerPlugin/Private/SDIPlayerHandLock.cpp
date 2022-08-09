#include "SDIPlayerHandLock.h"

FSDIPlayerHandLock::FSDIPlayerHandLock() {
    this->bDebugRender = false;
    this->bLockLocation = false;
    this->bResetLocationSpring = false;
    this->LocationArmLengthReleaseFactor = 0.00f;
    this->LocationExceedingArmLengthReleaseFactorTime = 0.00f;
    this->bIgnoreCollisionsWithOtherHand = false;
    this->bLockRotation = false;
    this->LocationLimitLerp = 0.00f;
    this->bLocationLimitLerpReset = false;
    this->RotationLimitLerp = 0.00f;
    this->bRotationLimitLerpReset = false;
    this->LockHandPose = ESDIHandPose::HP_Fist;
    this->bLockGripCollisionIgnored = false;
}

