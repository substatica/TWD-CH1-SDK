#include "SDIPointGripComponent.h"

USDIPointGripComponent::USDIPointGripComponent() {
    this->hand = EControllerHand::AnyHand;
    this->HandPose = ESDIHandPose::HP_Fist;
    this->GripType = ESDIGripType::Any;
    this->RotationGripMovement = ESDIGripMovement::Locked;
    this->RotationGripMovementTarget = ESDIGripMovementTarget::Tracked;
    this->bUseTrackedHandForConstraintAdjustments = false;
    this->bApplyRotationConstraintsOnGrab = true;
    this->bPreferredForGrabFromInventory = false;
    this->bPreferredForNonVR = false;
    this->bMaintainAttachment = false;
    this->LinearDistanceUpdateThreshold = 1.00f;
    this->AngularDistanceUpdateThresholdDegrees = 5.00f;
    this->bOverrideSinglePhysicsHandLocationPID = false;
    this->bOverrideSinglePhysicsHandRotationPID = false;
    this->bOverrideDualPhysicsHandLocationPID = false;
    this->bOverrideDualPhysicsHandRotationPID = false;
}

