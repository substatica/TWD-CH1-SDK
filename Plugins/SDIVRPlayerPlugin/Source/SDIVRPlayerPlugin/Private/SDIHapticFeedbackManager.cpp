#include "SDIHapticFeedbackManager.h"

FSDIHapticFeedbackManager::FSDIHapticFeedbackManager() {
    this->HandEnum = EControllerHand::Left;
    this->AmplitudeBlendOp = ESDIMathOperation::Max;
    this->FrequencyBlendOp = ESDIMathOperation::Max;
    this->bCustomHapticFeedbackActive = false;
    this->bActiveEffectsLastTick = false;
}

