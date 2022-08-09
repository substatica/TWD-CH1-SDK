#include "SDIHingedInteractiveActor.h"

class UPrimitiveComponent;
class AActor;

void ASDIHingedInteractiveActor::SetDoorLocked(bool bLocked) {
}




void ASDIHingedInteractiveActor::OnDoorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


bool ASDIHingedInteractiveActor::IsDoorLocked() {
    return false;
}

void ASDIHingedInteractiveActor::DoorHitTimerCompleted() {
}

ASDIHingedInteractiveActor::ASDIHingedInteractiveActor() {
    this->DoorComponent = NULL;
    this->HandleActor = NULL;
    this->YawDeceleration = -0.75f;
    this->bOpensAwayFromPlayerOnly = true;
    this->MaxYawSpeed = 60.00f;
    this->CurrentYawSpeed = 0.00f;
    this->ImpulseMultiplier = 4.00f;
    this->OnHitTimerIteration = 0.10f;
    this->DoorShutBufferZoneSize = 5.00f;
    this->PlayerHand = NULL;
    this->bHandleGripped = false;
    this->bDoorIsLocked = false;
    this->bDoorIsClosed = true;
    this->PositiveRotationArrow = NULL;
    this->GripPointArrow = NULL;
    this->DoorOpenSound = NULL;
    this->DoorClosedSound = NULL;
}

