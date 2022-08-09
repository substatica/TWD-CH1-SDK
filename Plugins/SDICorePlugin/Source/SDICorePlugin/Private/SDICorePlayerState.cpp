#include "SDICorePlayerState.h"
#include "Net/UnrealNetwork.h"

void ASDICorePlayerState::ServerSetMonkeyMode_Implementation(uint8 NewMonkeyMode, ESDIUtilityAIDifficulty NewMonkeyDifficulty) {
}
bool ASDICorePlayerState::ServerSetMonkeyMode_Validate(uint8 NewMonkeyMode, ESDIUtilityAIDifficulty NewMonkeyDifficulty) {
    return true;
}

bool ASDICorePlayerState::IsSmartMonkey() const {
    return false;
}

bool ASDICorePlayerState::IsMonkey() const {
    return false;
}

float ASDICorePlayerState::GetServerTimestamp() const {
    return 0.0f;
}

uint8 ASDICorePlayerState::GetMonkeyMode() const {
    return 0;
}

ESDIUtilityAIDifficulty ASDICorePlayerState::GetMonkeyDifficulty() const {
    return ESDIUtilityAIDifficulty::Easy;
}

void ASDICorePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDICorePlayerState, RepMonkeyDifficulty);
    DOREPLIFETIME(ASDICorePlayerState, RepMonkeyMode);
}

ASDICorePlayerState::ASDICorePlayerState() {
    this->RepMonkeyDifficulty = ESDIUtilityAIDifficulty::Medium;
    this->RepMonkeyMode = 0;
}

