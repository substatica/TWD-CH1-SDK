#include "TWDAnimInstanceWalker.h"

class UAnimSequenceBase;

void UTWDAnimInstanceWalker::TWDAnimBP_CompleteIdleFidget() {
}

void UTWDAnimInstanceWalker::TWDAnimBP_CalculateDirection() {
}

void UTWDAnimInstanceWalker::TurnInPlace_SetFlags() {
}

void UTWDAnimInstanceWalker::SetCharacterValues() {
}

UAnimSequenceBase* UTWDAnimInstanceWalker::GetRandomAnimation(const TArray<UAnimSequenceBase*>& inArray) const {
    return NULL;
}

void UTWDAnimInstanceWalker::CombatAndLookAtValues_SetAggroValues() {
}

bool UTWDAnimInstanceWalker::CombatAndLookAtValues_HeadTracking() {
    return false;
}

float UTWDAnimInstanceWalker::AverageFloatArrayNativized(TArray<float> inArray) {
    return 0.0f;
}

void UTWDAnimInstanceWalker::AnimGraphValues_Locomotion() {
}

UTWDAnimInstanceWalker::UTWDAnimInstanceWalker() {
    this->NearTargetDistance = 500.00f;
    this->LungeDistance = 350.00f;
    this->GrappleAttackMinDistanceHandToClavicle = 28.00f;
    this->GrappleAttackMaxDistanceHandToClavicle = 50.00f;
    this->TWDWalker = NULL;
    this->TWDWalkerMovementComp = NULL;
    this->SpeedHorizontal = 0.00f;
    this->Gender = EGender::Male;
    this->bIsEating = false;
    this->bWasBreakingObsticle = false;
    this->bIsPlayingStumbleMontage = false;
    this->bIsMoving = false;
    this->bIsMovingAndAggro = false;
    this->locomotionPlayRate = 0.00f;
    this->locomotionAggroPlayRate = 0.00f;
    this->Direction = 0.00f;
    this->bTurnInPlace = false;
    this->bTurnInPlaceTrigger = false;
    this->bStopTurnInPlace = false;
    this->bStopTurnInPlaceTrigger = false;
    this->bIsAggro = false;
    this->bWasAggroLastFrame = false;
    this->bIsFrustrated = false;
    this->bIsBreakingObstacle = false;
    this->bIsObstacleBroken = false;
    this->bIsHeadTracking = false;
    this->bIsEyeTrackingOnly = false;
    this->AICTWDWalker = NULL;
    this->bNearTarget = false;
    this->bAboutToLunge = false;
    this->bIsLunging = false;
    this->bIsFailedLunge = false;
    this->GrappleLungeHandIKAlpha = 0.00f;
    this->GrappleArmDistanceAlpha = 0.00f;
    this->GrappleAttackClavicleRotationAlphaLeft = 0.00f;
    this->GrappleAttackClavicleRotationAlphaRight = 0.00f;
    this->GrappleArm = ETWDCharacterGrappleLocation::Unknown;
    this->bIsPlayerDead = false;
    this->CurrentFidgetAnimation = NULL;
    this->AdditiveFidgetAlpha = 0.00f;
    this->bIsInAnyCombatRing = false;
    this->bSurpriseDoorBreaking = false;
    this->bIsDead = false;
    this->bIsGrapplePushBackTrigger = false;
    this->bIsGrapplePushBack = false;
    this->TimeSinceLastFidget = 0.00f;
    this->bIsFidgeting = false;
    this->GrappleMontageBodyAlpha = 0.00f;
    this->TimeInGrappleAttackState = 0.00f;
}

