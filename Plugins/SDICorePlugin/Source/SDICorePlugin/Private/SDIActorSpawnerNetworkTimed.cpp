#include "SDIActorSpawnerNetworkTimed.h"

class AActor;

bool ASDIActorSpawnerNetworkTimed::WillSpawnAgain() {
    return false;
}

void ASDIActorSpawnerNetworkTimed::StartSpawnTimer() {
}

void ASDIActorSpawnerNetworkTimed::SpawnTimerComplete() {
}

int32 ASDIActorSpawnerNetworkTimed::GetRemainingSpawnCount() {
    return 0;
}

TArray<AActor*> ASDIActorSpawnerNetworkTimed::ActivateTimedEvent() {
    return TArray<AActor*>();
}

ASDIActorSpawnerNetworkTimed::ASDIActorSpawnerNetworkTimed() {
    this->bLooping = false;
    this->bSpawnFirstBeforeTimer = true;
    this->MaxLoopCount = -1;
    this->MaxSpawnsActiveAtOnce = -1;
}

