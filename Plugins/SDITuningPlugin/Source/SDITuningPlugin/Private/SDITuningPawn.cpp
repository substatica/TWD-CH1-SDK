#include "SDITuningPawn.h"
#include "Net/UnrealNetwork.h"

void ASDITuningPawn::OnRep_RepTuningModifiers() {
}

void ASDITuningPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDITuningPawn, RepTuningModifiers);
}

ASDITuningPawn::ASDITuningPawn() {
}

