#include "TWDWalkerAICharacter.h"

void ATWDWalkerAICharacter::SetSurpriseDoorBreaking(bool bEnable) {
}

void ATWDWalkerAICharacter::Native_CheckPlayerOnTopOfCarDamage() {
}

bool ATWDWalkerAICharacter::GetSurpriseDoorBreaking() {
    return false;
}

float ATWDWalkerAICharacter::GetShadowMovementModifier() {
    return 0.0f;
}

float ATWDWalkerAICharacter::GetNonGrappleSpeedMultiplier() const {
    return 0.0f;
}

bool ATWDWalkerAICharacter::GetHasAgro() const {
    return false;
}

FTWDBehaviorTreeVars ATWDWalkerAICharacter::GetCurrentBTVars() const {
    return FTWDBehaviorTreeVars{};
}

FVector ATWDWalkerAICharacter::GetAssignedCombatRingLocation() const {
    return FVector{};
}

void ATWDWalkerAICharacter::ClearCurrentTarget() {
}

ATWDWalkerAICharacter::ATWDWalkerAICharacter() {
    this->DistanceToTarget = 0.00f;
    this->bIsLungeAttack = false;
    this->bIsFailedLungeAttack = false;
    this->CurrentTarget = NULL;
    this->FemaleSkin = NULL;
    this->FemaleChance = 0.50f;
    this->bSurpriseDoorBreaking = false;
    this->SurpriseDoorBreakingTimeStamp = 0.00f;
    this->SurpriseDoorBreakingTime = 0.50f;
    this->bIsAbleToBreakAllDoors = false;
    this->bIsTutorialFightCircleIdle = false;
    this->bIsEliteWalker = false;
    this->bHasHelmet = false;
    this->bWasSpawnedFromHuman = false;
    this->bShadowMovement = false;
    this->ShadowMovementEnableRadius = 600.00f;
    this->ShadowMovementDisableRadius = 500.00f;
    this->ShadowMovementModifier = 4.00f;
    this->PlayerOnCarDamageDistance = 160.00f;
    this->PlayerOnCarDamageTimestamp = 2.00f;
    this->PlayerOnCarDamageTime = 1.50f;
    this->PlayerOnCarStaminaDamage = 5.00f;
    this->PlayerOnCarDamageDistanceSq = 0.00f;
    this->BP_PlayingGrappleLoop = false;
    this->isDumb = false;
    this->hasAgro = false;
    this->NonVRNonGrappleSpeedMultipier = 1.00f;
}

