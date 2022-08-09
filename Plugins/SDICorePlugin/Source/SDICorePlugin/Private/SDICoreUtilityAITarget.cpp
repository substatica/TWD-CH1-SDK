#include "SDICoreUtilityAITarget.h"

FSDICoreUtilityAITarget::FSDICoreUtilityAITarget() {
    this->Owner = NULL;
    this->PriorityForceSwitchThreshold = 0.00f;
    this->Timer = 0.00f;
    this->bChangedTarget = false;
}

