#include "TWDPlayerState.h"
#include "Net/UnrealNetwork.h"

void ATWDPlayerState::SetHubStateInfo(const FTWDHubStateInfo& NewHubState) {
}

FTWDHubStateInfo ATWDPlayerState::GetHubStateInfo() const {
    return FTWDHubStateInfo{};
}

float ATWDPlayerState::GetFactionReputation(EFaction Faction) {
    return 0.0f;
}

EFactionReaction ATWDPlayerState::GetFactionReaction(EFaction Faction) {
    return EFactionReaction::Hated;
}

void ATWDPlayerState::AddFactionReputation(EFaction Faction, float Reputation) {
}

void ATWDPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDPlayerState, RepHubState);
    DOREPLIFETIME(ATWDPlayerState, RepPlayerState);
}

ATWDPlayerState::ATWDPlayerState() {
}

