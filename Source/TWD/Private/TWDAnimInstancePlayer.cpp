#include "TWDAnimInstancePlayer.h"
#include "Templates/SubclassOf.h"

class ASDIHeldActor;

void UTWDAnimInstancePlayer::SetSpineDragSpringConstants(float SpringStiffness, float DampeningRatio) {
}

void UTWDAnimInstancePlayer::SetAngleOfStrikeSpringConstants(float SpringStiffness, float DampeningRatio) {
}

void UTWDAnimInstancePlayer::SetAimRotationLagYawSpringConstants(float SpringStiffness, float DampeningRatio) {
}

void UTWDAnimInstancePlayer::SetAimRotationLagPitchSpringConstants(float SpringStiffness, float DampeningRatio) {
}

void UTWDAnimInstancePlayer::OnMovementModeChanged_Implementation() {
}

void UTWDAnimInstancePlayer::OnCrouchChanged_Implementation() {
}

void UTWDAnimInstancePlayer::LinkHeldActorAnimInstance(TSubclassOf<ASDIHeldActor> HeldActorClass) {
}

bool UTWDAnimInstancePlayer::IsHeldOrHasEquipmentActionArr(EControllerHand hand, const TArray<TSubclassOf<ASDIHeldActor>>& Classes, TSubclassOf<ASDIHeldActor>& OutClass) const {
    return false;
}

bool UTWDAnimInstancePlayer::IsHeldOrHasEquipmentAction(EControllerHand hand, TSubclassOf<ASDIHeldActor> Class) const {
    return false;
}

bool UTWDAnimInstancePlayer::IsHeldArr(EControllerHand hand, const TArray<TSubclassOf<ASDIHeldActor>>& Classes, TSubclassOf<ASDIHeldActor>& OutClass) const {
    return false;
}

bool UTWDAnimInstancePlayer::IsHeld(EControllerHand hand, TSubclassOf<ASDIHeldActor> Class) const {
    return false;
}

bool UTWDAnimInstancePlayer::GetInterruptEquipmentActionArr(EControllerHand hand, const TArray<TSubclassOf<ASDIHeldActor>>& Classes, TSubclassOf<ASDIHeldActor>& OutClass, ETWDNonVREquipmentActionType& OutActionType) const {
    return false;
}

bool UTWDAnimInstancePlayer::GetInterruptEquipmentAction(EControllerHand hand, TSubclassOf<ASDIHeldActor> Class, TSubclassOf<ASDIHeldActor>& OutClass, ETWDNonVREquipmentActionType& OutActionType) const {
    return false;
}

bool UTWDAnimInstancePlayer::GetEquipmentActionArr(EControllerHand hand, const TArray<TSubclassOf<ASDIHeldActor>>& Classes, TSubclassOf<ASDIHeldActor>& OutClass, ETWDNonVREquipmentActionType& OutActionType) const {
    return false;
}

bool UTWDAnimInstancePlayer::GetEquipmentAction(EControllerHand hand, TSubclassOf<ASDIHeldActor> Class, ETWDNonVREquipmentActionType& OutActionType) const {
    return false;
}

UTWDAnimInstancePlayer::UTWDAnimInstancePlayer() {
    this->AimRotationLagMoveForwardPitchVel = 120.00f;
    this->AimRotationLagMoveRightYawVel = 120.00f;
    this->SpineDragLimit = 40.00f;
    this->PrevMovementMode = MOVE_None;
    this->MovementMode = MOVE_None;
    this->bWasMoving = false;
    this->bIsMoving = false;
    this->PrevVelocityDirection = 0.00f;
    this->VelocityDirection = 0.00f;
    this->PrevLateralSpeed = 0.00f;
    this->LateralSpeed = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->ForwardSpeed = 0.00f;
    this->RightSpeed = 0.00f;
    this->LateralSpeedPercent = 0.00f;
    this->ForwardSpeedPercent = 0.00f;
    this->RightSpeedPercent = 0.00f;
    this->bWasCrouched = false;
    this->bIsCrouched = false;
    this->bWasFalling = false;
    this->bIsFalling = false;
    this->bWantsToSprint = false;
    this->bWasSprinting = false;
    this->bIsSprinting = false;
    this->MaxSpeed = 0.00f;
    this->MaxWalkSpeed = 0.00f;
    this->MaxSpeedWithoutSprinting = 0.00f;
    this->MaxSprintSpeed = 0.00f;
    this->PrevStaminaPct = 0.00f;
    this->StaminaPct = 0.00f;
    this->bWasWinded = false;
    this->bIsWinded = false;
    this->PrevSpineDrag = 0.00f;
    this->SpineDrag = 0.00f;
    this->PrevSpineDragVel = 0.00f;
    this->SpineDragVel = 0.00f;
    this->PrevSpineDragAccel = 0.00f;
    this->SpineDragAccel = 0.00f;
    this->bWasADS = false;
    this->bIsADS = false;
    this->bWasADSDesired = false;
    this->bIsADSDesired = false;
    this->bWasHipFiring = false;
    this->bIsHipFiring = false;
    this->PrevAngleOfStrike = 0.00f;
    this->AngleOfStrike = 0.00f;
    this->PrevAngleOfStrikeCharge = 0.00f;
    this->AngleOfStrikeCharge = 0.00f;
    this->bWasSpecialMeleeActive = false;
    this->bIsSpecialMeleeActive = false;
    this->LastSpecialMelee = ETWDNonVRMeleeAttackType::None;
    this->SpecialMelee = ETWDNonVRMeleeAttackType::None;
    this->LastSpecialMeleeDesired = ETWDNonVRMeleeAttackType::None;
    this->SpecialMeleeDesired = ETWDNonVRMeleeAttackType::None;
    this->bWasSpecialMeleeDesired = false;
    this->bIsSpecialMeleeDesired = false;
    this->bIsWeaponStuckOrStabbed = false;
    this->bWasWeaponStuckOrStabbed = false;
    this->bWeaponStickCharged = false;
    this->bWeaponStickWeakpoint = false;
    this->bWeaponStickWeakpointIsDiseased = false;
    this->bWeaponStickRemoved = false;
    this->bWeaponStickRemovedSuccess = false;
    this->WeaponStickProgress = 0.00f;
    this->PrevWeaponStickProgress = 0.00f;
    this->WeaponStickAngle = 0.00f;
    this->PrevWeaponStickAngle = 0.00f;
    this->WeaponStickRemoval = 0.00f;
    this->PrevWeaponStickRemoval = 0.00f;
    this->bWasPreparingMeleeAttack = false;
    this->bIsPreparingMeleeAttack = false;
    this->bIsPlayingMeleeAttackAnim = false;
    this->bWasPlayingMeleeAttackAnim = false;
    this->bIsPlayingGunActionAnim = false;
    this->bWasPlayingGunActionAnim = false;
    this->bIsPlayingEquipmentActionAnim = false;
    this->bWasPlayingEquipmentActionAnim = false;
    this->bIsNonVRObjectInteracting = false;
    this->bWasNonVRObjectInteracting = false;
    this->HeldActorClassWithActiveLinkedGraph = NULL;
    this->NonVRGrappleAnimState = ETWDNonVRGrappleAnimState::None;
    this->PrevNonVRGrappleAnimState = ETWDNonVRGrappleAnimState::None;
}

