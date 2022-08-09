#include "SpawnableBouquetElement.h"

FSpawnableBouquetElement::FSpawnableBouquetElement() {
    this->ActorClass = NULL;
    this->bAnchored = false;
    this->bEnablePhysics = false;
    this->SpawnContext = ETWDCharacterHitRegion::None;
}

