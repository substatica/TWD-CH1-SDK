#include "SDISkinCache.h"

class UObject;

void USDISkinCache::CacheMapSkins(const UObject* WorldContextObject, const TArray<UClass*>& Templates, bool bAsync) {
}

USDISkinCache::USDISkinCache() {
    this->bEnableCaching = false;
    this->bCheckForMissingPreAuthoredMeshes = true;
}

