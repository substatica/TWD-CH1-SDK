#include "SDIPlayerHandInteractComponentEntry.h"

FSDIPlayerHandInteractComponentEntry::FSDIPlayerHandInteractComponentEntry() {
    this->Distance = 0.00f;
    this->LateralDistance = 0.00f;
    this->ScreenAngleDeg = 0.00f;
    this->SortScore = 0.00f;
    this->RangeType = ESDIInteractRangeType::Close;
    this->ControllerHand = EControllerHand::Left;
    this->bInsideCapsule = false;
    this->bEmbedded = false;
    this->bOnscreen = false;
    this->bHighlighted = false;
    this->bTestedLOS = false;
    this->bUsedShortcutLOS = false;
    this->bValidLOS = false;
    this->bHasLOS = false;
    this->bTestedValidInteractionHighlight = false;
    this->bValidInteractionHighlight = false;
}

