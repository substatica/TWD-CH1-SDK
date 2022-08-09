#include "TWDAnimInstanceCharacter.h"

class USceneComponent;

void UTWDAnimInstanceCharacter::StopAnimationAction_Implementation() {
}


void UTWDAnimInstanceCharacter::SetLocomotionSpeed(float newSpeed) {
}

void UTWDAnimInstanceCharacter::SetInAir(bool inAir) {
}

void UTWDAnimInstanceCharacter::SetHeadLookAtTargetComponent(USceneComponent* TargetComponent) {
}

void UTWDAnimInstanceCharacter::SetHeadLookAtLocation(FVector Location) {
}

void UTWDAnimInstanceCharacter::SetHeadLookAtAlpha(float Alpha) {
}

void UTWDAnimInstanceCharacter::SetGrappleAttackBreakDirection(FVector Direction) {
}

void UTWDAnimInstanceCharacter::SetForwardMeleeAttack(bool IsAttacking) {
}

void UTWDAnimInstanceCharacter::SetBlendOutWeight(float BlendWeight, float InterpolationSpeed) {
}

void UTWDAnimInstanceCharacter::SetBlendInWeight(float BlendWeight, float InterpolationSpeed) {
}

void UTWDAnimInstanceCharacter::PlayAnimationAction_Implementation(FSDIEnumTypeHandle EnumTypeHandle, const FPlayAnimationResultCallback& PlayAnimationResultCallback, bool& RequestResult, float& AnimLength) {
}


void UTWDAnimInstanceCharacter::OnPersonalSpacePushback() {
}

void UTWDAnimInstanceCharacter::OnKnockBack() {
}







bool UTWDAnimInstanceCharacter::IsInCombat() const {
    return false;
}

TArray<float> UTWDAnimInstanceCharacter::GetVisemeWeights() const {
    return TArray<float>();
}

FRotator UTWDAnimInstanceCharacter::GetIkHandGunTargetRotation() const {
    return FRotator{};
}

ECharacterPose UTWDAnimInstanceCharacter::GetCharacterPose() const {
    return ECharacterPose::Neutral;
}

ECharacterGesture UTWDAnimInstanceCharacter::GetCharacterGesture() const {
    return ECharacterGesture::None;
}

ECharacterEmotion UTWDAnimInstanceCharacter::GetCharacterEmotion() const {
    return ECharacterEmotion::Neutral;
}


UTWDAnimInstanceCharacter::UTWDAnimInstanceCharacter() {
    this->Speed = 0.00f;
    this->bIsInAir = false;
    this->bIsCrawlingState = false;
    this->LookAtAlpha = 0.00f;
    this->LookAtTargetComponent = NULL;
    this->bForwardMeleeAttack = false;
    this->GrappleBlendSpaceSphericalWeight = 0.50f;
    this->bDebugRenderGrappleBounds = false;
    this->GrappleAttackBlendSpaceSphericalWeight = 0.00f;
    this->bGrappleAttackHandHMDIKOffsetInCharacterSpace = true;
    this->LeftHandGrappleSocket = TEXT("LeftHandGrappleSocket");
    this->RightHandGrappleSocket = TEXT("RightHandGrappleSocket");
    this->bDebugRenderGrappleAttackBounds = false;
    this->NonVRGrappleAttackAnimState = ETWDNonVRGrappleAnimState::None;
    this->StabOffsetRotVelocityDeg = 90.00f;
    this->BrainedBlendSpaceSphericalWeight = 0.00f;
    this->BrainedPullDirectionTargetDecel = 75.00f;
    this->BrainedPullDirectionVelocityDecel = 75.00f;
    this->bDebugRenderBrainedBounds = false;
    this->bAllowHeadHeldStateWhenStabbed = false;
    this->bIsInGrappleState = false;
    this->GrappleHandMultiplier = 1.00f;
    this->GrapplePercent = 0.00f;
    this->bGrappleAttacking = false;
    this->bGrappleIsHoldingArm = false;
    this->bGrappleAttackLeftHandIKRotationValid = false;
    this->bGrappleAttackRightHandIKRotationValid = false;
    this->bIsInGrappleAttackState = false;
    this->bIsInGrappleAttackPushBackState = false;
    this->bIsInBrainedState = false;
    this->bIsInHeadHeldState = false;
    this->bHasHeldStabWeapon = false;
    this->CachedSnapshot = TEXT("CachedSnapshot");
    this->CachedDeadSnapshot = TEXT("CachedDeadSnapshot");
    this->TimeWhenPhysicsOffBlendStops = -1.00f;
    this->PhysicsOffBlendTime = 0.30f;
    this->CachedAlpha = 1.00f;
    this->CachedDeadAlpha = 1.00f;
    this->bIsInStabState = false;
    this->bRequestDeath = false;
    this->bCanSeeTarget = false;
    this->bRecoil = false;
    this->bReadyToFire = false;
    this->IkHandGunTolerance = 2.00f;
    this->AngularVelocity = 0.00f;
    this->AngularVelocityScale = 0.25f;
    this->AimOffsetInterpSpeed = 5.00f;
    this->AimOffsetPivotName = TEXT("AimOffsetPivot");
    this->CharacterBehavior = ECharacterBehavior::Neutral;
    this->bIsAggravate = false;
    this->bIsFlee = false;
    this->bIsThreaten = false;
    this->BlendInWeight = 0.00f;
    this->BlendInTarget = 0.00f;
    this->BlendInSpeed = 5.00f;
    this->BlendOutWeight = 0.00f;
    this->BlendOutTarget = 0.00f;
    this->BlendOutSpeed = 5.00f;
    this->BlendInOutWeightMax = 0.00f;
    this->StateMachineName[0] = TEXT("Ripple Based on Animation");
    this->StateMachineName[1] = TEXT("Ripple Based on Animation");
    this->StateElaspedTime = 2.00f;
    this->StateMachineIndex[0] = 0;
    this->StateMachineIndex[1] = 0;
}

