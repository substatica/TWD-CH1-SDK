#include "SDISlidingInteractiveActor.h"

void ASDISlidingInteractiveActor::SetLocked(bool bWillLock) {
}



bool ASDISlidingInteractiveActor::IsLocked() const {
    return false;
}

ASDISlidingInteractiveActor::ASDISlidingInteractiveActor() {
    this->SlidingComponent = NULL;
    this->HandleActor = NULL;
    this->MaxOpenSpeed = 0.75f;
    this->Deceleration = -0.01f;
    this->PlayerHand = NULL;
    this->bIsLocked = false;
    this->CurrentOpenPercentage = 0.00f;
    this->CurrentSpeed = 0.00f;
    this->bIsClosed = false;
}

