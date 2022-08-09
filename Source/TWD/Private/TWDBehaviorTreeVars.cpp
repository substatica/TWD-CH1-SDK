#include "TWDBehaviorTreeVars.h"

FTWDBehaviorTreeVars::FTWDBehaviorTreeVars() {
    this->SlowDownToAttackDist = 0.00f;
    this->MaxVelSpeedMatching = 0.00f;
    this->MaxVelSpeedMatchingForNonGrapplers = 0.00f;
    this->TotalTimeToAttackSpeed = 0.00f;
    this->SlowDownAttackSpeed = 0.00f;
    this->FastAttackSpeed = 0.00f;
    this->AttackRange = 0.00f;
    this->AttackRangeForSprinting = 0.00f;
    this->NonGrappleSpeedMultiplier = 0.00f;
    this->NonGrappleSpeedMultiplierCurve = NULL;
}

