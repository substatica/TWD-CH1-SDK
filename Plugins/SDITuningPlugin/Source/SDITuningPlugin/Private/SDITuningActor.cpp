#include "SDITuningActor.h"
#include "Net/UnrealNetwork.h"

void ASDITuningActor::OnRep_RepTuningModifiers() {
}

void ASDITuningActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDITuningActor, RepTuningModifiers);
}

ASDITuningActor::ASDITuningActor() {
}

