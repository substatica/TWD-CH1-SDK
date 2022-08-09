#include "TWDPlayerCameraManager.h"

class UCameraComponent;
class ATWDHMDCameraActor;
class ATWDPlayerCage;

void ATWDPlayerCameraManager::UnFreezeHMDCamera(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade) {
}

void ATWDPlayerCameraManager::SetManualHMDCameraResetPosition(bool bSet, bool bOverrideHeight, const FVector& Location, const FRotator& Rotation) {
}

void ATWDPlayerCameraManager::ResetHMDCamera(bool bResetLocation, bool bResetRotation) {
}

void ATWDPlayerCameraManager::OnApplyGameUserSettings_Implementation() {
}

bool ATWDPlayerCameraManager::IsUnfreezingHMDCamera() const {
    return false;
}

bool ATWDPlayerCameraManager::IsUnfreezeLerpingHMDCamera() const {
    return false;
}

bool ATWDPlayerCameraManager::IsHMDCameraFrozen() const {
    return false;
}

bool ATWDPlayerCameraManager::GetUnfreezeLerpingHMDCameraTransforms(FTransform& Start, FTransform& End, float& Lerp) const {
    return false;
}

ATWDPlayerCage* ATWDPlayerCameraManager::GetPlayerCage() const {
    return NULL;
}

ATWDHMDCameraActor* ATWDPlayerCameraManager::GetHMDCamera(bool bCreate) const {
    return NULL;
}

FColor ATWDPlayerCameraManager::GetFadeColor() {
    return FColor{};
}

FTransform ATWDPlayerCameraManager::GetCameraTransform() const {
    return FTransform{};
}

UCameraComponent* ATWDPlayerCameraManager::GetCameraComponent() const {
    return NULL;
}

void ATWDPlayerCameraManager::FreezeHMDCamera() {
}

ATWDPlayerCameraManager::ATWDPlayerCameraManager() {
    this->CageMesh = NULL;
    this->CageMeshMaterial = NULL;
    this->PlayerCageBlueprint = NULL;
    this->bAttachPlayerCageToCamera = true;
    this->bAutoUpdateCachedUserHeight = false;
    this->HMDCamera = NULL;
    this->PlayerCage = NULL;
    this->bHMDCameraFrozen = false;
    this->HMDCameraFrozenFadeOutTime = -1.00f;
    this->HMDCameraFrozenFadeInTime = -1.00f;
    this->bHMDCameraFrozenApplyRotation = false;
    this->HMDCameraFrozenYaw = 0.00f;
    this->bHMDCameraFrozenLerping = false;
    this->bVRWasReset = false;
    this->bManualCameraResetLocationSet = false;
    this->bManualCameraResetLocationOverrideHMDHeight = false;
    this->HMDCameraOffsetWasResetCounter = 0;
    this->HMDCameraHeightAboveFloor = 0.00f;
    this->CachedHeightAdjustTimer = 0.00f;
}

