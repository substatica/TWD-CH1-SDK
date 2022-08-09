#include "TWDAIHumanTargetTracker.h"

UTWDAIHumanTargetTracker::UTWDAIHumanTargetTracker() {
    this->AttackAngleThickness = 0.00f;
    this->EvalTime = 0.00f;
    this->EvalTimestamp = 0.00f;
    this->EvalDistance = 0.00f;
    this->bEvalLastTargetPositionValid = false;
    this->bAboveGround = false;
    this->InitialRingCount = 0;
    this->InitialRingRadius = 0.00f;
    this->BetweenRingSpacing = 0.00f;
    this->FightSlotRadius = 0.00f;
    this->FightSlotSpacing = 0.00f;
    this->FightSlotShift = 0.00f;
    this->bIsOnTopOfBoxMode = false;
    this->bChooseSlotBasedOnAttackerLocation = false;
    this->AIRingHeightExtent = 0.00f;
}

