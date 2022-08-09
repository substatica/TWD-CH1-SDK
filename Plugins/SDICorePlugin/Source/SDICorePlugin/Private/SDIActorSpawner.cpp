#include "SDIActorSpawner.h"
#include "Templates/SubclassOf.h"

class ASDIObjectPool;
class AActor;

AActor* ASDIActorSpawner::SpawnSpecificClass(TSubclassOf<AActor> ClassType, ASDIObjectPool* Pool) {
    return NULL;
}

AActor* ASDIActorSpawner::SpawnOne() {
    return NULL;
}

AActor* ASDIActorSpawner::SpawnIndex(int32 Index) {
    return NULL;
}

void ASDIActorSpawner::SetSpawnerEnabled(bool bEnable) {
}



bool ASDIActorSpawner::IsSpawnerEnabled() const {
    return false;
}

ASDIActorSpawner::ASDIActorSpawner() {
    this->bHasSpawned = false;
    this->SpawnNetwork = NULL;
    this->bMultiUseSpawner = false;
    this->SpawnHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->SpawnLevel = NULL;
    this->CullDistanceFallback = 5000.00f;
    this->bLimitBPAccessToSpawnClasses = false;
    this->bIsEnabled = true;
    this->bDeferredSpawn = false;
    this->bUsesNineRotationAdjustments = true;
    this->bSimulateGravityOnSpawn = true;
    this->SimulateGravityCheckDistance = 500.00f;
}

