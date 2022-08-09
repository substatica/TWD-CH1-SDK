#include "TWDInteractiveHighlightManager.h"

class AActor;
class USceneComponent;

void ATWDInteractiveHighlightManager::SetCustomHighlight(AActor* Actor, USceneComponent* Component, bool bHighlighted, ETWDInteractionType Type) {
}

ATWDInteractiveHighlightManager::ATWDInteractiveHighlightManager() {
    this->NearbyRadius = 256.00f;
    this->NearbyOverlapChannel = ECC_GameTraceChannel2;
    this->NearbyLOSChannel = ECC_WorldDynamic;
    this->bNearbyDistributeLOSChecks = true;
    this->bNearbyDistributeUpdates = true;
    this->NearbyDistributionCounter = 0;
}

