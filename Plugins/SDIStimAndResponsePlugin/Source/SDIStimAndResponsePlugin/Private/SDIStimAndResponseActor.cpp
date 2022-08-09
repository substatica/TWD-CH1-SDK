#include "SDIStimAndResponseActor.h"
#include "Net/UnrealNetwork.h"

void ASDIStimAndResponseActor::StimulusTick_Implementation(const FGameplayTagContainer& Stimuli, float DeltaTime) {
}

void ASDIStimAndResponseActor::OnRep_RepStimulusData() {
}

void ASDIStimAndResponseActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDIStimAndResponseActor, RepStimulusData);
}

ASDIStimAndResponseActor::ASDIStimAndResponseActor() {
}

