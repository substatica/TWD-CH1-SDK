#include "SDIVRGameUserSettings.h"

class USDIVRGameUserSettings;

void USDIVRGameUserSettings::SetMicPermissionRequestedEver(bool bSet) {
}

void USDIVRGameUserSettings::SetMicPermission(bool bSet) {
}

void USDIVRGameUserSettings::SetMicEnabled(bool bSet) {
}

void USDIVRGameUserSettings::RequestDeferredSaveSettings() {
}

bool USDIVRGameUserSettings::IsEnableOculusSteamVR() const {
    return false;
}

USDIVRGameUserSettings* USDIVRGameUserSettings::GetSDIVRGameUserSettings() {
    return NULL;
}

bool USDIVRGameUserSettings::GetMicPermissionRequestedEver() const {
    return false;
}

bool USDIVRGameUserSettings::GetMicPermission() const {
    return false;
}

bool USDIVRGameUserSettings::GetMicEnabled() const {
    return false;
}

USDIVRGameUserSettings::USDIVRGameUserSettings() {
    this->bDeferredSaveSettingsRequested = false;
    this->bMicEnabled = false;
    this->bMicPermissionRequestedEver = false;
    this->bMicPermission = false;
}

