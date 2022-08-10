#include "SDIObjectPoolManager.h"
#include "Templates/SubclassOf.h"

class UObject;
class ASDIObjectPool;

void USDIObjectPoolManager::AddPoolStatic(const UObject* WorldContextObject, UClass* InObjectClass, int32 InStartingPoolSize, int32 InMaxPoolSize, TSubclassOf<ASDIObjectPool> InPoolClass) {
}

UObject* USDIObjectPoolManager::AcquireFromPoolStatic(const UObject* WorldContextObject, /*const*/ UClass*& ObjectClass, FVector Location, FRotator Rotation, FVector Scale3D, bool bCreateIfNecessary) {
    return NULL;
}

USDIObjectPoolManager::USDIObjectPoolManager() {
    this->bEnablePooling = true;
    this->Pools.AddDefaulted(10);
}

