#include "SDIStimAndResponseProjectileActor.h"
#include "Net/UnrealNetwork.h"

void ASDIStimAndResponseProjectileActor::StimulusTick_Implementation(const FGameplayTagContainer& Stimuli, float DeltaTime) {
}

void ASDIStimAndResponseProjectileActor::OnRep_RepStimulusData() {
}

void ASDIStimAndResponseProjectileActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDIStimAndResponseProjectileActor, RepStimulusData);
}

ASDIStimAndResponseProjectileActor::ASDIStimAndResponseProjectileActor(const FObjectInitializer&) {
}

