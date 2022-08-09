#include "TWDCharacterSkin.h"

UTWDCharacterSkin::UTWDCharacterSkin() {
    this->PreAuthoredDuplicateWeightMul = 1.00f;
    this->HairDuplicateWeightMul = 1.00f;
    this->HeadDuplicateWeightMul = 1.00f;
    this->TorsoDuplicateWeightMul = 1.00f;
    this->LegDuplicateWeightMul = 1.00f;
    this->ScalarDuplicateTolerance = 0.00f;
    this->ColorChannelDuplicateTolerance = 0.00f;
    this->bRestrictHairDuplication = false;
    this->bRestrictHeadDuplication = false;
    this->bRestrictTorsoDuplication = false;
    this->bRestrictLegDuplication = false;
}

