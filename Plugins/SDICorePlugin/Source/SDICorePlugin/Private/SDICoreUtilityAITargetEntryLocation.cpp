#include "SDICoreUtilityAITargetEntryLocation.h"

FSDICoreUtilityAITargetEntryLocation::FSDICoreUtilityAITargetEntryLocation() {
    this->ViewAngleDeg = 0.00f;
    this->Distance = 0.00f;
    this->Distance2D = 0.00f;
    this->LOSTime = 0.00f;
    this->LostLOSTime = 0.00f;
    this->bHadLOS = false;
    this->bHasLOS = false;
    this->bWasUpdated = false;
}

