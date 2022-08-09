#include "TWDBTT_PerformReaction.h"

class ATWDCharacter;

void UTWDBTT_PerformReaction::PlayAnimationActionCallback(ATWDCharacter* Character, bool bSucceed) {
}

UTWDBTT_PerformReaction::UTWDBTT_PerformReaction() {
    this->AnimFailSafeTime = 0.25f;
    this->WaitOverTimestamp = 0.00f;
    this->AnimOverTimestamp = 0.00f;
}

