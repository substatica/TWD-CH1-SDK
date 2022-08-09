#include "SDICorePlayerCameraManager.h"

class UMatineeCameraShake;
class UObject;

bool ASDICorePlayerCameraManager::UpdateCameraPostProcessSettings(int32 ID, const FPostProcessSettings& Settings) {
    return false;
}

bool ASDICorePlayerCameraManager::SetCameraSettingsWeight(int32 ID, float Weight) {
    return false;
}

bool ASDICorePlayerCameraManager::SetCameraSettingsInterpolatedAlphaByDistance(int32 ID, float Distance, bool bIgnoreInterpolatedBlend) {
    return false;
}

bool ASDICorePlayerCameraManager::SetCameraSettingsInterpolatedAlpha(int32 ID, float NewAlpha, bool bIgnoreInterpolatedBlend) {
    return false;
}

bool ASDICorePlayerCameraManager::SetCameraSettingsFieldOfView(int32 ID, float FieldOfView) {
    return false;
}

bool ASDICorePlayerCameraManager::SetCameraPostProcessSettings(int32 ID, const FPostProcessSettings& Settings) {
    return false;
}

void ASDICorePlayerCameraManager::RemoveOwnedCameraSettingsOverrideBlendOut(UObject* InOwner, float OverrideBlendOutTime) {
}

void ASDICorePlayerCameraManager::RemoveOwnedCameraSettings(UObject* InOwner) {
}

bool ASDICorePlayerCameraManager::RemoveCameraSettingsOverrideBlendOut(int32 ID, float OverrideBlendOutTime) {
    return false;
}

bool ASDICorePlayerCameraManager::RemoveCameraSettings(int32 ID) {
    return false;
}

bool ASDICorePlayerCameraManager::ReactivateCameraSettingsOverrideWeight(int32 ID, float Weight, UObject* InOwner) {
    return false;
}

bool ASDICorePlayerCameraManager::ReactivateCameraSettingsOverrideBlendIn(int32 ID, float BlendInTime, UObject* InOwner) {
    return false;
}

bool ASDICorePlayerCameraManager::ReactivateCameraSettings(int32 ID, UObject* InOwner) {
    return false;
}

bool ASDICorePlayerCameraManager::IsCameraShakeActive(UMatineeCameraShake* ShakeInst) const {
    return false;
}

bool ASDICorePlayerCameraManager::GetCameraSettingsWeight(int32 ID, float& OutWeight) const {
    return false;
}

bool ASDICorePlayerCameraManager::GetCameraSettingsInterpolatedAlpha(int32 ID, float& OutAlpha, bool bFinalAlpha) const {
    return false;
}

bool ASDICorePlayerCameraManager::GetCameraSettingsFieldOfView(int32 ID, float& OutFieldOfView) const {
    return false;
}

bool ASDICorePlayerCameraManager::GetCameraPostProcessSettings(int32 ID, FPostProcessSettings& OutPostProcessSettings) const {
    return false;
}

bool ASDICorePlayerCameraManager::CameraSettingsActive(int32 ID, bool bAllowBlendingOut) const {
    return false;
}

int32 ASDICorePlayerCameraManager::AddCameraSettingsOverrideWeight(const FSDICameraSettings& Settings, float Weight, UObject* InOwner) {
    return 0;
}

int32 ASDICorePlayerCameraManager::AddCameraSettingsOverrideBlendIn(const FSDICameraSettings& Settings, float BlendInTime, UObject* InOwner) {
    return 0;
}

int32 ASDICorePlayerCameraManager::AddCameraSettings(const FSDICameraSettings& Settings, UObject* InOwner) {
    return 0;
}

ASDICorePlayerCameraManager::ASDICorePlayerCameraManager() {
}

