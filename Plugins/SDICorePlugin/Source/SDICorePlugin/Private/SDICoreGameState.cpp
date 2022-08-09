#include "SDICoreGameState.h"
#include "Net/UnrealNetwork.h"
#include "SDICoreFXManager.h"

void ASDICoreGameState::OnRep_RepServerTimeStamp(float OldRepServerTimeStamp) {
}

float ASDICoreGameState::GetServerTimestamp() const {
    return 0.0f;
}

float ASDICoreGameState::GetServerTickMS() const {
    return 0.0f;
}

void ASDICoreGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDICoreGameState, RepServerTimeStamp);
    DOREPLIFETIME(ASDICoreGameState, ServerTimeStamp);
    DOREPLIFETIME(ASDICoreGameState, RepServerTickMS);
}

ASDICoreGameState::ASDICoreGameState() {
    this->FXManagerClass = ASDICoreFXManager::StaticClass();
    this->RepServerTimeStamp = 0.00f;
    this->RepServerTimeStampDelta = 0.00f;
    this->RepServerTimeStampDeltaRemaining = 0.00f;
    this->ServerTimeStamp = 0.00f;
    this->SmoothedServerTickMS = 0.00f;
    this->RepServerTickMS = 0;
}

