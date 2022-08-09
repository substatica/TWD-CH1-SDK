#include "SDITuningCharacter.h"
#include "Net/UnrealNetwork.h"

class ASDITuningCharacter;

ASDITuningCharacter* ASDITuningCharacter::TuneCharacterMovementComponent(FSDITuningAttribute_CharacterMovementComponent Attr, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

void ASDITuningCharacter::OnRep_RepTuningModifiers() {
}

void ASDITuningCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDITuningCharacter, RepTuningModifiers);
}

ASDITuningCharacter::ASDITuningCharacter() {
}

