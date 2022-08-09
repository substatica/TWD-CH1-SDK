#include "TWDGameAchievements.h"

bool UTWDGameAchievements::UnlockAchievement(ETWDAchievement Achievement) {
    return false;
}

bool UTWDGameAchievements::IsAchievementSystemReady() const {
    return false;
}

void UTWDGameAchievements::DebugResetAchievements() {
}

UTWDGameAchievements::UTWDGameAchievements() {
    this->bAchievementSystemReady = false;
    this->bUseFloatForAchievementProgress = false;
}

