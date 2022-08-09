#include "SDICoreUtilityAITargetEntry.h"

FSDICoreUtilityAITargetEntry::FSDICoreUtilityAITargetEntry() {
    this->Owner = NULL;
    this->Timer = 0.00f;
    this->Priority = 0.00f;
    this->AttitudeTowards = ETeamAttitude::Friendly;
    this->AttitudeFrom = ETeamAttitude::Friendly;
    this->bTeamAttitudeUpdated = false;
    this->bForced = false;
    this->bLocationBased = false;
}

