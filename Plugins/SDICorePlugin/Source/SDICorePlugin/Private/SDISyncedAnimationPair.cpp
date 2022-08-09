#include "SDISyncedAnimationPair.h"

FSDISyncedAnimationPair::FSDISyncedAnimationPair() {
    this->MasterAnimSequence = NULL;
    this->SlaveAnimSequence = NULL;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->PlayRate = 0.00f;
}

