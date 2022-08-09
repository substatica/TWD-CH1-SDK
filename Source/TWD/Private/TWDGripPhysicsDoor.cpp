#include "TWDGripPhysicsDoor.h"

class ATWDCharacter;
class ATWDPlayerCharacter;
class UPrimitiveComponent;
class UAkAudioEvent;
class AActor;
class UAkComponent;

bool ATWDGripPhysicsDoor::UsePlayerKeyIfExists_Implementation(ATWDPlayerCharacter* PlayerCharacter) {
    return false;
}


void ATWDGripPhysicsDoor::UpdateDoorBreakingState_Implementation(ATWDCharacter* Breaker, bool bIsLeaving) {
}

bool ATWDGripPhysicsDoor::SetDoorShut(bool bWillShut, bool bForce) {
    return false;
}

bool ATWDGripPhysicsDoor::SetDoorLocked(bool bWillLock) {
    return false;
}

void ATWDGripPhysicsDoor::SetDoorLocalAngle(float Angle) {
}

void ATWDGripPhysicsDoor::SetBrokenDoorOcclusion() {
}

void ATWDGripPhysicsDoor::QuickReleasePlayersHand() {
}

void ATWDGripPhysicsDoor::PushPlayerAwayFromDoor() {
}






void ATWDGripPhysicsDoor::OnDoorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void ATWDGripPhysicsDoor::OnDoorBreak_Implementation(FVector Direction) {
}

bool ATWDGripPhysicsDoor::NonVROpenDoor(ATWDCharacter* Character) {
    return false;
}

void ATWDGripPhysicsDoor::MultiCastPlayDoorNoise_Implementation(UAkAudioEvent* Event) {
}

bool ATWDGripPhysicsDoor::IsDoorWithinShutRange() {
    return false;
}

bool ATWDGripPhysicsDoor::IsDoorWithinNavCuttingRange() {
    return false;
}

bool ATWDGripPhysicsDoor::IsDoorShut() {
    return false;
}

bool ATWDGripPhysicsDoor::IsDoorLocked() {
    return false;
}

bool ATWDGripPhysicsDoor::IsDoorHeldByPlayer() const {
    return false;
}

bool ATWDGripPhysicsDoor::IsDoorBroken() {
    return false;
}

float ATWDGripPhysicsDoor::GetDoorLocalAngle() const {
    return 0.0f;
}


UAkComponent* ATWDGripPhysicsDoor::GetClosestAkComponent() const {
    return NULL;
}

void ATWDGripPhysicsDoor::EnableDynamicObstacle(bool enable) {
}

bool ATWDGripPhysicsDoor::CanBeBroken() {
    return false;
}

void ATWDGripPhysicsDoor::BreakDoor_Implementation(FVector Direction) {
}

void ATWDGripPhysicsDoor::ApplyPushForce_Implementation(FVector push) {
}

ATWDGripPhysicsDoor::ATWDGripPhysicsDoor() {
    this->PlayerHand = NULL;
    this->ServerCommPlayerPawn = NULL;
    this->CurrentSpeed = 0.00f;
    this->LastTickSpeed = 0.00f;
    this->SimulatePhysicsConstraint = NULL;
    this->bCanBeBroken = false;
    this->bIsBroken = false;
    this->BreakDoorTime = 7.00f;
    this->NumAIRequiredToBreak = 2;
    this->PrimaryBreaker = NULL;
    this->bIsLocked = false;
    this->bIsShut = false;
    this->bCanShut = false;
    this->bStartLocked = false;
    this->AngularShutZone = 3.00f;
    this->LinearShutZone = 3.00f;
    this->AutoPopOpen = false;
    this->AutoPopOpenYaw = 5.00f;
    this->bDoorPassedShutThreshold = false;
    this->AngularNavCuttingZone = 50.00f;
    this->AngularNavCuttingZoneMin = 10.00f;
    this->PushBackPlayerDistance = 200.00f;
    this->PushBackPlayerTime = 0.15f;
    this->PushBackPlayerMaxSpeed = 340282346638528859811704183484516925440.00f;
    this->CurrentlyGrabbedByHandAndLocked = NULL;
    this->CachedGripComponent = NULL;
    this->NonVRDoorTargetAngle = 0.00f;
    this->bNonVRDoorAutoOpen = false;
    this->NonVRDoorOpenDirection = 0.00f;
    this->NonVRMaxAngleVelocity = 360.00f;
    this->NonVRAngleDeltaOpenEnough = 0.00f;
    this->bDoorOpensOutward = false;
    this->ActiveDoorKnob = NULL;
    this->DoorHealth = 50.00f;
    this->Portal = NULL;
    this->BreakingNoise = NULL;
    this->StrainingNoise = NULL;
    this->StrainingHealthTrigger = 0.00f;
    this->BreakingNoiseRadius = 0.00f;
    this->BreakingNoiseVolume = 0.00f;
}

