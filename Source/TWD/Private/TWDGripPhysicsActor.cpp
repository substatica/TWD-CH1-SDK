#include "TWDGripPhysicsActor.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;

void ATWDGripPhysicsActor::SetRepGripPhysicsRotator(FRotator NewRotator) {
}

void ATWDGripPhysicsActor::OnRep_GripPhysicsRotator(FRotator NewRotator) {
}

void ATWDGripPhysicsActor::OnPhysicsComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void ATWDGripPhysicsActor::OnPhysicsComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

FRotator ATWDGripPhysicsActor::GetRepGripPhysicsRotator() const {
    return FRotator{};
}

void ATWDGripPhysicsActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDGripPhysicsActor, RepGripPhysicsRotator);
}

ATWDGripPhysicsActor::ATWDGripPhysicsActor() {
    this->bForceHideHighlight = true;
    this->bTickWhileAwake = false;
    this->SimulatePhysicsComponent = NULL;
    this->NonVRMaxInteractDistance = 150.00f;
}

