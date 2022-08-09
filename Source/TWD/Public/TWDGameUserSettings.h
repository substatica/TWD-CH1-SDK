#pragma once
#include "CoreMinimal.h"
#include "SDIVRGameUserSettings.h"
#include "UObject/NoExportTypes.h"
#include "ETWDPSVRBackwardsMovementMode.h"
#include "ETWDPSVRMovementMode.h"
#include "ESDIPlayerHandGripInputMode.h"
#include "ETWDUserPlayMode.h"
#include "ETWDViveMovementMode.h"
#include "TWDGameUserSettings.generated.h"

class UTWDGameUserSettings;

UCLASS()
class TWD_API UTWDGameUserSettings : public USDIVRGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    uint32 TWDVersion;
    
    UPROPERTY(Config)
    FGuid TWDUserId;
    
    UPROPERTY(Config)
    float BrightnessBias;
    
    UPROPERTY(Config)
    int32 AntiAliasingSamples;
    
    UPROPERTY(Config)
    float UserPixelDensityScale;
    
    UPROPERTY(Config)
    bool bDisableHaptics;
    
    UPROPERTY(Config)
    bool bSmoothTurning;
    
    UPROPERTY(Config)
    float TurnSpeedMultiplier;
    
    UPROPERTY(Config)
    float QuickTurnIncrementDeg;
    
    UPROPERTY(Config)
    bool bPhysicalCrouchDisabled;
    
    UPROPERTY(Config)
    float CrouchDistance;
    
    UPROPERTY(Config)
    float UnCrouchThreshold;
    
    UPROPERTY(Config)
    ESDIPlayerHandGripInputMode GripInputMode;
    
    UPROPERTY(Config)
    ETWDViveMovementMode ViveMovementMode;
    
    UPROPERTY(Config)
    ETWDPSVRMovementMode PSVRMovementMode;
    
    UPROPERTY(Config)
    bool bPSVRAltControlMapping;
    
    UPROPERTY(Config)
    ETWDPSVRBackwardsMovementMode PSVRBackwardsMovementMode;
    
    UPROPERTY(Config)
    float PrimaryGripPitchOffset;
    
    UPROPERTY(Config)
    bool bSubtitlesEnabled;
    
    UPROPERTY(Config)
    ETWDUserPlayMode UserPlayMode;
    
    UPROPERTY(Config)
    bool bHeadFacingMovement;
    
    UPROPERTY(Config)
    bool bInventoryHandFlip;
    
    UPROPERTY(Config)
    bool bMirrorControls;
    
    UPROPERTY(Config)
    bool bUseDelayForGamePause;
    
    UPROPERTY(Config)
    float VignetteStrength;
    
    UPROPERTY(Config)
    bool bVignetteDisabled;
    
    UPROPERTY(Config)
    bool bDisableThrowingAimAssist;
    
    UPROPERTY(Config)
    bool bDisableShootingAimAssist;
    
    UPROPERTY(Config)
    bool bVoiceImmersion;
    
    UPROPERTY(Config)
    float VoiceImmersionThresholdScale;
    
    UPROPERTY(Config)
    float MusicVolume;
    
    UPROPERTY(Config)
    float EffectsVolume;
    
    UPROPERTY(Config)
    float VoiceVolume;
    
    UPROPERTY(Config)
    bool bEnableGhostHands;
    
    UPROPERTY(Config)
    bool bHUDEnabled;
    
    UPROPERTY(Config)
    bool bUIDisableCombatPopups;
    
    UPROPERTY(Config)
    bool bUIDisableWalkerGrappleIndicator;
    
    UPROPERTY(Config)
    bool bUIDisableGrabbableItemDots;
    
    UPROPERTY(Config)
    bool bUIDisableNPCThreatIndicators;
    
    UPROPERTY(Config)
    bool bUIDisableTrespassingWarningIndicator;
    
    UPROPERTY(Transient)
    float CachedUserHeight;
    
    UPROPERTY(Config)
    bool bSubtitleAutoDepth;
    
    UPROPERTY(Config)
    bool bEnableOculusSteamVR;
    
    UPROPERTY(Config)
    bool bInvertAngleOfStrike;
    
    UPROPERTY(Transient)
    FString CachedHMDDeviceName;
    
    UPROPERTY(Transient)
    FString CachedHMDVersionString;
    
    UPROPERTY(Config)
    bool bTelemetryOptOut;
    
    UPROPERTY(Config)
    bool bSinner;
    
public:
    UTWDGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float ZeroToOneScaleVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceImmersionThresholdScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceImmersion(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetViveMovementMode(ETWDViveMovementMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetVignetteStrength(float ZeroToOneStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetVignetteDisabled(bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingPSVRAltControlMapping(bool bUseAlt);
    
    UFUNCTION(BlueprintCallable)
    void SetUsingDelayForGamePause(bool bNewSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetUserPlayMode(ETWDUserPlayMode NewSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetUserPixelDensityScale(float NewUserPixelDensityScale);
    
    UFUNCTION(BlueprintCallable)
    void SetUnCrouchThreshold(float NewThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetUIDisableWalkerGrappleIndicator(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetUIDisableTrespassingWarningIndicator(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetUIDisableNPCThreatIndicators(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetUIDisableGrabbableItemDots(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetUIDisableCombatPopups(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetTurnSpeedMultiplier(float NewMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetToDefaultsVideo(bool bRunBenchmark);
    
    UFUNCTION(BlueprintCallable)
    void SetToDefaultsUI();
    
    UFUNCTION(BlueprintCallable)
    void SetToDefaultsGameplay();
    
    UFUNCTION(BlueprintCallable)
    void SetToDefaultsControls();
    
    UFUNCTION(BlueprintCallable)
    void SetToDefaultsAudio();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesEnabled(bool bNewSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleAutoDepth(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetSmoothTurningEnabled(bool bNewSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetQuickTurnIncrementDeg(float NewIncrementDeg);
    
    UFUNCTION(BlueprintCallable)
    void SetPSVRMovementMode(ETWDPSVRMovementMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetPSVRBackwardsMovementMode(ETWDPSVRBackwardsMovementMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryGripPitchOffset(float PitchOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalCrouchEnabled(bool bNewSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float ZeroToOneScaleVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertAngleOfStrike(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryHandFlipEnabled(bool bNewSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDEnabled(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadFacingMovementEnabled(bool bNewSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetHapticsDisabled(bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetGripInputMode(ESDIPlayerHandGripInputMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableOculusSteamVR(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGhostHands(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectsVolume(float ZeroToOneScaleVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableThrowingAimAssist(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableShootingAimAssist(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCrouchDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetControlsMirrored(bool bNewMirrored);
    
    UFUNCTION(BlueprintCallable)
    void SetCachedUserHeight(float Height);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightnessBias(float Bias);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingSamples(int32 NewAntiAliasingSamples);
    
    UFUNCTION(BlueprintCallable)
    void ResetWindowPositionAndSize();
    
    UFUNCTION(BlueprintPure)
    bool IsUsingTouchToMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingPSVRAltControlMapping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingDoubletapForSprint() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingDelayForGamePause() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSubtitlesEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSmoothTurningEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPhysicalCrouchEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryHandFlipEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeadFacingMovementEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHapticsDisabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetVoiceVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetVoiceImmersionThresholdScale() const;
    
    UFUNCTION(BlueprintPure)
    bool GetVoiceImmersion() const;
    
    UFUNCTION(BlueprintPure)
    ETWDViveMovementMode GetViveMovementMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetVignetteStrength() const;
    
    UFUNCTION(BlueprintPure)
    bool GetVignetteDisabled() const;
    
    UFUNCTION(BlueprintPure)
    ETWDUserPlayMode GetUserPlayMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetUserPixelDensityScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetUnCrouchThreshold() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUIDisableWalkerGrappleIndicator() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUIDisableTrespassingWarningIndicator() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUIDisableNPCThreatIndicators() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUIDisableGrabbableItemDots() const;
    
    UFUNCTION(BlueprintPure)
    bool GetUIDisableCombatPopups() const;
    
    UFUNCTION(BlueprintPure)
    static UTWDGameUserSettings* GetTWDGameUserSettings();
    
    UFUNCTION(BlueprintPure)
    float GetTurnSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSubtitleAutoDepth() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSinner() const;
    
    UFUNCTION(BlueprintPure)
    float GetQuickTurnIncrementDeg() const;
    
    UFUNCTION(BlueprintPure)
    ETWDPSVRMovementMode GetPSVRMovementMode() const;
    
    UFUNCTION(BlueprintPure)
    ETWDPSVRBackwardsMovementMode GetPSVRBackwardsMovementMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetPrimaryGripPitchOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInvertAngleOfStrike() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHUDEnabled() const;
    
    UFUNCTION(BlueprintPure)
    ESDIPlayerHandGripInputMode GetGripInputMode() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnableGhostHands() const;
    
    UFUNCTION(BlueprintPure)
    float GetEffectsVolume() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisableThrowingAimAssist() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDisableShootingAimAssist() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrouchDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetCachedUserHeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetBrightnessBias() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAntiAliasingSamples() const;
    
protected:
    UFUNCTION()
    void AsyncSaveSettingsTimerCallback();
    
public:
    UFUNCTION(BlueprintPure)
    bool AreControlsMirrored() const;
    
};

