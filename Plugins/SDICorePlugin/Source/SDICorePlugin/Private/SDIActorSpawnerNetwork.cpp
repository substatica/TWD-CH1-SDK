#include "SDIActorSpawnerNetwork.h"

class AActor;
class ASDIActorSpawner;

TArray<AActor*> ASDIActorSpawnerNetwork::SpawnSeveralOfTier(int32 Count, int32 Tier) {
    return TArray<AActor*>();
}

TArray<AActor*> ASDIActorSpawnerNetwork::SpawnSeveralInTierRange(int32 Count, int32 TierMin, int32 TierMax) {
    return TArray<AActor*>();
}

TArray<AActor*> ASDIActorSpawnerNetwork::SpawnSeveral(int32 Count, int32 Index) {
    return TArray<AActor*>();
}

AActor* ASDIActorSpawnerNetwork::SpawnOneOfTier(int32 Tier) {
    return NULL;
}

AActor* ASDIActorSpawnerNetwork::SpawnOne() {
    return NULL;
}

TArray<AActor*> ASDIActorSpawnerNetwork::SpawnAllInTierRange(int32 TierMin, int32 TierMax) {
    return TArray<AActor*>();
}

TArray<AActor*> ASDIActorSpawnerNetwork::SpawnAll(int32 Index) {
    return TArray<AActor*>();
}

TArray<AActor*> ASDIActorSpawnerNetwork::GetCurrentSpawnedActors() {
    return TArray<AActor*>();
}

ASDIActorSpawner* ASDIActorSpawnerNetwork::FindAvailableSpawner(bool bRemoveWhenFound) {
    return NULL;
}

ASDIActorSpawnerNetwork::ASDIActorSpawnerNetwork() {
    this->bSingleUseSpawnpoints = true;
    this->bUseConnectionReroutePoint = true;
    this->SpacialComponent = NULL;
}

