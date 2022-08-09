#include "TWDBTT_FollowPath.h"

class ATWDCharacter;

void UTWDBTT_FollowPath::PlayAnimationActionCallback(ATWDCharacter* Character, bool bSucceed) {
}

UTWDBTT_FollowPath::UTWDBTT_FollowPath() {
    this->AcceptanceRadius = 50.00f;
    this->FindPathIfMissing = true;
    this->RadiusRandom = 0.00f;
    this->AnimFailSafeTime = 0.10f;
    this->FacingCloseEnough = 0.01f;
}

