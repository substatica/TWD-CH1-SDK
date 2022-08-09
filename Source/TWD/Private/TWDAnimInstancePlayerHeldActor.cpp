#include "TWDAnimInstancePlayerHeldActor.h"
#include "Templates/SubclassOf.h"

class ASDIHeldActor;

void UTWDAnimInstancePlayerHeldActor::SetDragYawSpringConstants(float SpringStiffness, float DampeningRatio) {
}

void UTWDAnimInstancePlayerHeldActor::SetDragPitchSpringConstants(float SpringStiffness, float DampeningRatio) {
}

void UTWDAnimInstancePlayerHeldActor::Initialize_Implementation(TSubclassOf<ASDIHeldActor> ThisClass) {
}

UTWDAnimInstancePlayerHeldActor::UTWDAnimInstancePlayerHeldActor() {
    this->HeldActorClass = NULL;
    this->WindedCurveName = TEXT("Pose_Winded");
    this->CrouchedCurveName = TEXT("BasePose_CLF");
    this->bEnableDrag = false;
    this->bEnableArmDrag = false;
    this->ArmDrag = 0.00f;
    this->PrevArmDrag = 0.00f;
    this->bEnableLean = false;
    this->LeanInterpSpeed = 0.00f;
    this->LeanRotationVelFactor = 1.00f;
    this->bEnableAimRotationInterp = false;
    this->AimRotationInterpSpeed = 0.00f;
    this->PrevLateralSpeed = 0.00f;
    this->LateralSpeed = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->ForwardSpeed = 0.00f;
    this->RightSpeed = 0.00f;
    this->LateralSpeedPercent = 0.00f;
    this->ForwardSpeedPercent = 0.00f;
    this->RightSpeedPercent = 0.00f;
}

