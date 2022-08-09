#include "SDIPlayerCameraManager.h"

void ASDIPlayerCameraManager::SetVignetteSettings(float StrengthMultiplier, float OpacityMultiplier, float Comfort) {
}

void ASDIPlayerCameraManager::ResetVR(bool bRotation, bool bPosition, bool bHeight) {
}

void ASDIPlayerCameraManager::ResetHMDTrackingOrigin() {
}

void ASDIPlayerCameraManager::GetVignetteSettings(float& StrengthMultiplier, float& OpacityMultiplier, float& Comfort) const {
}

FTransform ASDIPlayerCameraManager::GetCameraParentTransform() const {
    return FTransform{};
}

ASDIPlayerCameraManager::ASDIPlayerCameraManager() {
    this->TurnVignetteCurve = NULL;
    this->MoveVignetteCurve = NULL;
    this->VignetteParameterCollection = NULL;
    this->VignetteAttackSpeed = 10.00f;
    this->VignetteAttackExp = 0.00f;
    this->VignetteDecaySpeed = 1.00f;
    this->VignetteDecayExp = 0.00f;
    this->VignetteHoldTime = 0.25f;
    this->VignetteStrengthMultiplier = 1.00f;
    this->VignetteOpacityMultiplier = 1.00f;
    this->VignetteComfort = 0.50f;
    this->VignetteStrength = 0.00f;
    this->VignetteHoldTimer = 0.00f;
    this->bLastCameraParentTransformValid = false;
    this->bInitialHMDReset = false;
}

