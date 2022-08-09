#include "SDICharacterAdvanced.h"
#include "Net/UnrealNetwork.h"

void ASDICharacterAdvanced::UnCrawl(bool bClientSimulation) {
}

void ASDICharacterAdvanced::SetDesiredEyeHeightOffsetFromFloor(float Offset) {
}

void ASDICharacterAdvanced::SetDesiredEyeHeightOffset(float Offset, bool bReset) {
}

void ASDICharacterAdvanced::OnStartCrawl_Implementation(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
}

void ASDICharacterAdvanced::OnRep_bRepIsCrawling() {
}

void ASDICharacterAdvanced::OnEndCrawl_Implementation(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
}

FHitResult ASDICharacterAdvanced::MoveWithCollision(const FVector& MovementDelta, bool bTeleport) {
    return FHitResult{};
}

FHitResult ASDICharacterAdvanced::MoveToWithCollision(const FVector& MovementTarget, bool bTeleport) {
    return FHitResult{};
}

bool ASDICharacterAdvanced::IsCrawling() const {
    return false;
}

void ASDICharacterAdvanced::InputTurnAtRateRight(float Value) {
}

void ASDICharacterAdvanced::InputTurnAtRateLeft(float Value) {
}

void ASDICharacterAdvanced::InputTurnAtRateAxis(float Value) {
}

float ASDICharacterAdvanced::GetEyeHeightSpringPosition() const {
    return 0.0f;
}

float ASDICharacterAdvanced::GetDesiredEyeHeightOffsetFromFloor() const {
    return 0.0f;
}

float ASDICharacterAdvanced::GetDesiredEyeHeightOffset() const {
    return 0.0f;
}

float ASDICharacterAdvanced::GetDefaultEyeHeightFromFloor(bool bIgnoreCrouch, bool bIgnoreCrawl) const {
    return 0.0f;
}

float ASDICharacterAdvanced::GetCurrentEyeHeightOffset() const {
    return 0.0f;
}

void ASDICharacterAdvanced::Crawl(bool bClientSimulation) {
}

void ASDICharacterAdvanced::ClientMimicTeleportTo_Implementation(const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck) {
}

bool ASDICharacterAdvanced::CanCrawl() {
    return false;
}

void ASDICharacterAdvanced::AdjustCurrentEyeHeightOffsetFromFloor(float OffsetDelta, bool bAffectSpring) {
}

void ASDICharacterAdvanced::AdjustCurrentEyeHeightOffset(float Offset, bool bReset) {
}

void ASDICharacterAdvanced::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDICharacterAdvanced, bRepIsCrawling);
}

ASDICharacterAdvanced::ASDICharacterAdvanced() {
    this->bUseVRFacingForMovement = true;
    this->BaseTurnRate = 45.00f;
    this->CrouchToCrawlHoldTime = 1.00f;
    this->SprintCancelMaxAngleOffsetDeg = 45.00f;
    this->SprintMaxAngleOffsetDeg = 90.00f;
    this->CrawlEyeHeight = 13.55f;
    this->bAlwaysSprint = false;
    this->bNeverCrouch = false;
    this->bCtrlCrawl = false;
    this->CtrlCrouchTimer = -1.00f;
    this->DesiredEyeHeightOffset = 0.00f;
    this->DesiredEyeHeightOffsetFromFloor = 0.00f;
    this->bRepIsCrawling = false;
}

