#include "SDISplineGripComponent.h"

USDISplineGripComponent::USDISplineGripComponent() {
    this->hand = EControllerHand::AnyHand;
    this->HandPose = ESDIHandPose::HP_Fist;
    this->GripType = ESDIGripType::Any;
    this->LocationGripMovement = ESDIGripMovement::Locked;
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
    this->DesiredGripPercent = -1.00f;
    this->NonVRGripPercent = -1.00f;
}

