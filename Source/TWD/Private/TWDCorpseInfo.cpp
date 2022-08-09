#include "TWDCorpseInfo.h"

FTWDCorpseInfo::FTWDCorpseInfo() {
    this->Corpse = NULL;
    this->bOffscreen = false;
    this->Distance = 0.00f;
    this->TimeDead = 0.00f;
    this->CleanupTimestamp = 0.00f;
    this->bHighPriorityCorpse = false;
    this->bCorpseCleanupCanSpawnWalker = false;
    this->bBeingDragged = false;
    this->MinDistanceCorpseCleanupFromPlayer = 0.00f;
    this->NumCorpsesTouched = 0;
}

