#include "SDITuningActorComponent.h"
#include "Net/UnrealNetwork.h"

void USDITuningActorComponent::OnRep_RepTuningModifiers() {
}

void USDITuningActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USDITuningActorComponent, RepTuningModifiers);
}

USDITuningActorComponent::USDITuningActorComponent() {
}

