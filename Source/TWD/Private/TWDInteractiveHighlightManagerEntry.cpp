#include "TWDInteractiveHighlightManagerEntry.h"

FTWDInteractiveHighlightManagerEntry::FTWDInteractiveHighlightManagerEntry() {
    this->Actor = NULL;
    this->Component = NULL;
    this->bAnyInteractions = false;
    this->bLeftHandClose = false;
    this->bLeftHandRanged = false;
    this->bRightHandClose = false;
    this->bRightHandRanged = false;
    this->bValidLOS = false;
    this->bHasLOS = false;
    this->bOutOfRange = false;
    this->Highlight = 0.00f;
    this->Type = ETWDInteractionType::Grab;
    this->HighlightActor = NULL;
}

