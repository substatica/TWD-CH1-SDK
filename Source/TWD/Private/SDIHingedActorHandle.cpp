#include "SDIHingedActorHandle.h"

class ASDISlidingInteractiveActor;
class AActor;
class ASDIHingedInteractiveActor;

void ASDIHingedActorHandle::SetDoorLocked(bool bNewLock) {
}

bool ASDIHingedActorHandle::IsDoorLocked() {
    return false;
}

bool ASDIHingedActorHandle::IsDoorClosed() {
    return false;
}

ASDISlidingInteractiveActor* ASDIHingedActorHandle::GetSlidingActor() {
    return NULL;
}

ASDIHingedInteractiveActor* ASDIHingedActorHandle::GetHingedActor() {
    return NULL;
}

AActor* ASDIHingedActorHandle::GetDoor() {
    return NULL;
}

ASDIHingedActorHandle::ASDIHingedActorHandle() {
    this->GrippedComponent = NULL;
    this->RotationDetectionArrow = NULL;
    this->PlayerHand = NULL;
    this->HandleType = EHandleType::NoMovement;
    this->RotationToOpen = 40.00f;
    this->RotationAllowedIfUnlocked = 60.00f;
    this->RotationAllowedIfLocked = 5.00f;
    this->ArmLengthReleaseFactor = 2.00f;
    this->ArmLengthReleaseFactorTime = 0.50f;
    this->bForceHideHighlight = true;
    this->CurrentGrippedComponent = NULL;
}

