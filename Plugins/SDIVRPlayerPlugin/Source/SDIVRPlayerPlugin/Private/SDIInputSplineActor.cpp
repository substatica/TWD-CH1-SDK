#include "SDIInputSplineActor.h"

class APawn;
class ASDIPlayerHand;
class AActor;

bool ASDIInputSplineActor::UpdateTransform_Implementation() {
    return false;
}

bool ASDIInputSplineActor::SetControlEngaged_Implementation(bool bEngaged, APawn* inOverridePawn) {
    return false;
}

void ASDIInputSplineActor::SetArcUseHMD(bool bUseHMD) {
}

FHitResult ASDIInputSplineActor::K2GetHitResult() const {
    return FHitResult{};
}

void ASDIInputSplineActor::InputReleased() {
}

void ASDIInputSplineActor::InputPressed() {
}

void ASDIInputSplineActor::InputFacingLR(float Value) {
}

void ASDIInputSplineActor::InputFacingFB(float Value) {
}

void ASDIInputSplineActor::InputAxis(float Value) {
}

bool ASDIInputSplineActor::HasValidArc() const {
    return false;
}

// TEnumAsByte<ECollisionChannel> ASDIInputSplineActor::GetTraceChannel_Implementation() {
//   return ECC_WorldStatic;
// }

TArray<AActor*> ASDIInputSplineActor::GetIgnoredActors_Implementation() const {
    return TArray<AActor*>();
}

ASDIPlayerHand* ASDIInputSplineActor::GetHand() const {
    return NULL;
}

FVector ASDIInputSplineActor::GetFacingInput() const {
    return FVector{};
}

FVector ASDIInputSplineActor::GetArcVelocity() const {
    return FVector{};
}

float ASDIInputSplineActor::GetArcSpeed_Implementation() const {
    return 0.0f;
}

FVector ASDIInputSplineActor::ComputeArcVelocity_Implementation() const {
    return FVector{};
}

bool ASDIInputSplineActor::ArcUsesHMD() const {
    return false;
}

ASDIInputSplineActor::ASDIInputSplineActor() {
    this->DestinationBlueprint = NULL;
    this->ArcTraceChannel = ECC_Pawn;
    this->bArcUseHMD = false;
    this->bArcUseHMDLookAtTarget = false;
    this->ArcHMDLookAtTargetDistance = 1024.00f;
    this->ArcRadius = 1.00f;
    this->ArcSpeed = 1024.00f;
    this->ArcTime = 2.50f;
    this->ArcDirectionZBoost = 0.00f;
    this->MaxForwardAngleDeg = 30.00f;
    this->MinDistance = 0.00f;
    this->ArcDisengageMaintainTime = 0.10f;
    this->bControlEngaged = false;
    this->bTransformValid = false;
    this->Destination = NULL;
    this->ArcDisengageMaintainTimer = -1.00f;
    this->bArcResultValid = false;
}

