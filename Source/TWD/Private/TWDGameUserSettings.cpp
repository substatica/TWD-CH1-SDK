#include "TWDGameUserSettings.h"

class UTWDGameUserSettings;

void UTWDGameUserSettings::SetVoiceVolume(float ZeroToOneScaleVolume) {
}

void UTWDGameUserSettings::SetVoiceImmersionThresholdScale(float Scale) {
}

void UTWDGameUserSettings::SetVoiceImmersion(bool bSet) {
}

void UTWDGameUserSettings::SetViveMovementMode(ETWDViveMovementMode Mode) {
}

void UTWDGameUserSettings::SetVignetteStrength(float ZeroToOneStrength) {
}

void UTWDGameUserSettings::SetVignetteDisabled(bool bDisabled) {
}

void UTWDGameUserSettings::SetUsingPSVRAltControlMapping(bool bUseAlt) {
}

void UTWDGameUserSettings::SetUsingDelayForGamePause(bool bNewSetting) {
}

void UTWDGameUserSettings::SetUserPlayMode(ETWDUserPlayMode NewSetting) {
}

void UTWDGameUserSettings::SetUserPixelDensityScale(float NewUserPixelDensityScale) {
}

void UTWDGameUserSettings::SetUnCrouchThreshold(float NewThreshold) {
}

void UTWDGameUserSettings::SetUIDisableWalkerGrappleIndicator(bool bSet) {
}

void UTWDGameUserSettings::SetUIDisableTrespassingWarningIndicator(bool bSet) {
}

void UTWDGameUserSettings::SetUIDisableNPCThreatIndicators(bool bSet) {
}

void UTWDGameUserSettings::SetUIDisableGrabbableItemDots(bool bSet) {
}

void UTWDGameUserSettings::SetUIDisableCombatPopups(bool bSet) {
}

void UTWDGameUserSettings::SetTurnSpeedMultiplier(float NewMultiplier) {
}

void UTWDGameUserSettings::SetToDefaultsVideo(bool bRunBenchmark) {
}

void UTWDGameUserSettings::SetToDefaultsUI() {
}

void UTWDGameUserSettings::SetToDefaultsGameplay() {
}

void UTWDGameUserSettings::SetToDefaultsControls() {
}

void UTWDGameUserSettings::SetToDefaultsAudio() {
}

void UTWDGameUserSettings::SetSubtitlesEnabled(bool bNewSetting) {
}

void UTWDGameUserSettings::SetSubtitleAutoDepth(bool bSet) {
}

void UTWDGameUserSettings::SetSmoothTurningEnabled(bool bNewSetting) {
}

void UTWDGameUserSettings::SetQuickTurnIncrementDeg(float NewIncrementDeg) {
}

void UTWDGameUserSettings::SetPSVRMovementMode(ETWDPSVRMovementMode Mode) {
}

void UTWDGameUserSettings::SetPSVRBackwardsMovementMode(ETWDPSVRBackwardsMovementMode Mode) {
}

void UTWDGameUserSettings::SetPrimaryGripPitchOffset(float PitchOffset) {
}

void UTWDGameUserSettings::SetPhysicalCrouchEnabled(bool bNewSetting) {
}

void UTWDGameUserSettings::SetMusicVolume(float ZeroToOneScaleVolume) {
}

void UTWDGameUserSettings::SetInvertAngleOfStrike(bool bSet) {
}

void UTWDGameUserSettings::SetInventoryHandFlipEnabled(bool bNewSetting) {
}

void UTWDGameUserSettings::SetHUDEnabled(bool bSet) {
}

void UTWDGameUserSettings::SetHeadFacingMovementEnabled(bool bNewSetting) {
}

void UTWDGameUserSettings::SetHapticsDisabled(bool bNewDisabled) {
}

void UTWDGameUserSettings::SetGripInputMode(ESDIPlayerHandGripInputMode Mode) {
}

void UTWDGameUserSettings::SetEnableOculusSteamVR(bool bSet) {
}

void UTWDGameUserSettings::SetEnableGhostHands(bool bSet) {
}

void UTWDGameUserSettings::SetEffectsVolume(float ZeroToOneScaleVolume) {
}

void UTWDGameUserSettings::SetDisableThrowingAimAssist(bool bSet) {
}

void UTWDGameUserSettings::SetDisableShootingAimAssist(bool bSet) {
}

void UTWDGameUserSettings::SetCrouchDistance(float NewDistance) {
}

void UTWDGameUserSettings::SetControlsMirrored(bool bNewMirrored) {
}

void UTWDGameUserSettings::SetCachedUserHeight(float Height) {
}

void UTWDGameUserSettings::SetBrightnessBias(float Bias) {
}

void UTWDGameUserSettings::SetAntiAliasingSamples(int32 NewAntiAliasingSamples) {
}

void UTWDGameUserSettings::ResetWindowPositionAndSize() {
}

bool UTWDGameUserSettings::IsUsingTouchToMove() const {
    return false;
}

bool UTWDGameUserSettings::IsUsingPSVRAltControlMapping() const {
    return false;
}

bool UTWDGameUserSettings::IsUsingDoubletapForSprint() const {
    return false;
}

bool UTWDGameUserSettings::IsUsingDelayForGamePause() const {
    return false;
}

bool UTWDGameUserSettings::IsSubtitlesEnabled() const {
    return false;
}

bool UTWDGameUserSettings::IsSmoothTurningEnabled() const {
    return false;
}

bool UTWDGameUserSettings::IsPhysicalCrouchEnabled() const {
    return false;
}

bool UTWDGameUserSettings::IsInventoryHandFlipEnabled() const {
    return false;
}

bool UTWDGameUserSettings::IsHeadFacingMovementEnabled() const {
    return false;
}

bool UTWDGameUserSettings::IsHapticsDisabled() const {
    return false;
}

float UTWDGameUserSettings::GetVoiceVolume() const {
    return 0.0f;
}

float UTWDGameUserSettings::GetVoiceImmersionThresholdScale() const {
    return 0.0f;
}

bool UTWDGameUserSettings::GetVoiceImmersion() const {
    return false;
}

ETWDViveMovementMode UTWDGameUserSettings::GetViveMovementMode() const {
    return ETWDViveMovementMode::Click;
}

float UTWDGameUserSettings::GetVignetteStrength() const {
    return 0.0f;
}

bool UTWDGameUserSettings::GetVignetteDisabled() const {
    return false;
}

ETWDUserPlayMode UTWDGameUserSettings::GetUserPlayMode() const {
    return ETWDUserPlayMode::Seated;
}

float UTWDGameUserSettings::GetUserPixelDensityScale() const {
    return 0.0f;
}

float UTWDGameUserSettings::GetUnCrouchThreshold() const {
    return 0.0f;
}

bool UTWDGameUserSettings::GetUIDisableWalkerGrappleIndicator() const {
    return false;
}

bool UTWDGameUserSettings::GetUIDisableTrespassingWarningIndicator() const {
    return false;
}

bool UTWDGameUserSettings::GetUIDisableNPCThreatIndicators() const {
    return false;
}

bool UTWDGameUserSettings::GetUIDisableGrabbableItemDots() const {
    return false;
}

bool UTWDGameUserSettings::GetUIDisableCombatPopups() const {
    return false;
}

UTWDGameUserSettings* UTWDGameUserSettings::GetTWDGameUserSettings() {
    return NULL;
}

float UTWDGameUserSettings::GetTurnSpeedMultiplier() const {
    return 0.0f;
}

bool UTWDGameUserSettings::GetSubtitleAutoDepth() const {
    return false;
}

bool UTWDGameUserSettings::GetSinner() const {
    return false;
}

float UTWDGameUserSettings::GetQuickTurnIncrementDeg() const {
    return 0.0f;
}

ETWDPSVRMovementMode UTWDGameUserSettings::GetPSVRMovementMode() const {
    return ETWDPSVRMovementMode::Fixed;
}

ETWDPSVRBackwardsMovementMode UTWDGameUserSettings::GetPSVRBackwardsMovementMode() const {
    return ETWDPSVRBackwardsMovementMode::Fixed;
}

float UTWDGameUserSettings::GetPrimaryGripPitchOffset() const {
    return 0.0f;
}

float UTWDGameUserSettings::GetMusicVolume() const {
    return 0.0f;
}

bool UTWDGameUserSettings::GetInvertAngleOfStrike() const {
    return false;
}

bool UTWDGameUserSettings::GetHUDEnabled() const {
    return false;
}

ESDIPlayerHandGripInputMode UTWDGameUserSettings::GetGripInputMode() const {
    return ESDIPlayerHandGripInputMode::Normal;
}

bool UTWDGameUserSettings::GetEnableGhostHands() const {
    return false;
}

float UTWDGameUserSettings::GetEffectsVolume() const {
    return 0.0f;
}

bool UTWDGameUserSettings::GetDisableThrowingAimAssist() const {
    return false;
}

bool UTWDGameUserSettings::GetDisableShootingAimAssist() const {
    return false;
}

float UTWDGameUserSettings::GetCrouchDistance() const {
    return 0.0f;
}

float UTWDGameUserSettings::GetCachedUserHeight() const {
    return 0.0f;
}

float UTWDGameUserSettings::GetBrightnessBias() const {
    return 0.0f;
}

int32 UTWDGameUserSettings::GetAntiAliasingSamples() const {
    return 0;
}

void UTWDGameUserSettings::AsyncSaveSettingsTimerCallback() {
}

bool UTWDGameUserSettings::AreControlsMirrored() const {
    return false;
}

UTWDGameUserSettings::UTWDGameUserSettings() {
    this->TWDVersion = 1;
    this->BrightnessBias = 0.55f;
    this->AntiAliasingSamples = 0;
    this->UserPixelDensityScale = 1.00f;
    this->bDisableHaptics = false;
    this->bSmoothTurning = true;
    this->TurnSpeedMultiplier = 1.75f;
    this->QuickTurnIncrementDeg = 45.00f;
    this->bPhysicalCrouchDisabled = false;
    this->CrouchDistance = 32.00f;
    this->UnCrouchThreshold = 0.35f;
    this->GripInputMode = ESDIPlayerHandGripInputMode::Normal;
    this->ViveMovementMode = ETWDViveMovementMode::Touch;
    this->PSVRMovementMode = ETWDPSVRMovementMode::Hybrid;
    this->bPSVRAltControlMapping = false;
    this->PSVRBackwardsMovementMode = ETWDPSVRBackwardsMovementMode::Controller;
    this->PrimaryGripPitchOffset = 0.00f;
    this->bSubtitlesEnabled = false;
    this->UserPlayMode = ETWDUserPlayMode::Standing_FixedHeight;
    this->bHeadFacingMovement = true;
    this->bInventoryHandFlip = false;
    this->bMirrorControls = false;
    this->bUseDelayForGamePause = true;
    this->VignetteStrength = 0.00f;
    this->bVignetteDisabled = false;
    this->bDisableThrowingAimAssist = false;
    this->bDisableShootingAimAssist = false;
    this->bVoiceImmersion = false;
    this->VoiceImmersionThresholdScale = 1.00f;
    this->MusicVolume = 1.00f;
    this->EffectsVolume = 1.00f;
    this->VoiceVolume = 1.00f;
    this->bEnableGhostHands = false;
    this->bHUDEnabled = false;
    this->bUIDisableCombatPopups = false;
    this->bUIDisableWalkerGrappleIndicator = true;
    this->bUIDisableGrabbableItemDots = true;
    this->bUIDisableNPCThreatIndicators = false;
    this->bUIDisableTrespassingWarningIndicator = false;
    this->CachedUserHeight = 0.00f;
    this->bSubtitleAutoDepth = false;
    this->bEnableOculusSteamVR = false;
    this->bInvertAngleOfStrike = false;
    this->bTelemetryOptOut = false;
    this->bSinner = false;
}

