#include "SDIObjectPool.h"

class UObject;

int32 ASDIObjectPool::K2GetPoolSize(int32& Active, int32& Pooled) const {
    return 0;
}

bool ASDIObjectPool::IsInsideAPool(UObject* Object) {
    return false;
}

bool ASDIObjectPool::IsFromAPool(UObject* Object) {
    return false;
}

UObject* ASDIObjectPool::AcquireFromPool(FVector Location, FRotator Rotation, FVector Scale3D, bool bCreateIfNecessary) {
    return NULL;
}

ASDIObjectPool::ASDIObjectPool() {
    this->ObjectClass = NULL;
    this->StartingPoolSize = 0;
    this->MaxPoolSize = 0;
}

