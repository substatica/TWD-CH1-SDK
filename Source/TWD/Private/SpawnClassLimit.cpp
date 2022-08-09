#include "SpawnClassLimit.h"

FSpawnClassLimit::FSpawnClassLimit() {
    this->ActorClass = NULL;
    this->SpawnLimit = 0;
    this->bIncludeDeadCharacters = false;
    this->bIncludeNonRunningLogicCharacters = false;
}

