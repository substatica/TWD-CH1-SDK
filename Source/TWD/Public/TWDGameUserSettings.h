#pragma once
#include "CoreMinimal.h"
#include "ETWDPSVRBackwardsMovementMode.h"
#include "ESDIPlayerHandGripInputMode.h"
#include "SDIVRGameUserSettings.h"
#include "UObject/NoExportTypes.h"
#include "ETWDViveMovementMode.h"
#include "ETWDUserPlayMode.h"
#include "ETWDPSVRMovementMode.h"
#include "TWDGameUserSettings.generated.h"

class UTWDGameUserSettings;

UCLASS(Blueprintable)
class TWD_API UTWDGameUserSettings : public USDIVRGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    uint32 TWDVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TWDUserId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrightnessBias;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AntiAliasingSamples;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UserPixelDensityScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableHaptics;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothTurning;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurnIncrementDeg;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPhysicalCrouchDisabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnCrouchThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIPlayerHandGripInputMode GripInputMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDViveMovementMode ViveMovementMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDPSVRMovementMode PSVRMovementMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPSVRAltControlMapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDPSVRBackwardsMovementMode PSVRBackwardsMovementMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryGripPitchOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitlesEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDUserPlayMode UserPlayMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeadFacingMovement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInventoryHandFlip;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMirrorControls;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDelayForGamePause;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VignetteStrength;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVignetteDisabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableThrowingAimAssist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableShootingAimAssist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoiceImmersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceImmersionThresholdScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectsVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGhostHands;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIDisableCombatPopups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIDisableWalkerGrappleIndicator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIDisableGrabbableItemDots;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIDisableNPCThreatIndicators;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIDisableTrespassingWarningIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedUserHeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleAutoDepth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOculusSteamVR;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertAngleOfStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CachedHMDDeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CachedHMDVersionString;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTelemetryOptOut;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingTouchToMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPSVRAltControlMapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingDoubletapForSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingDelayForGamePause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubtitlesEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmoothTurningEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhysicalCrouchEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryHandFlipEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadFacingMovementEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHapticsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoiceImmersionThresholdScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceImmersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDViveMovementMode GetViveMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVignetteStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVignetteDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDUserPlayMode GetUserPlayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUserPixelDensityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnCrouchThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUIDisableWalkerGrappleIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUIDisableTrespassingWarningIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUIDisableNPCThreatIndicators() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUIDisableGrabbableItemDots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUIDisableCombatPopups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTWDGameUserSettings* GetTWDGameUserSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubtitleAutoDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSinner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetQuickTurnIncrementDeg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDPSVRMovementMode GetPSVRMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDPSVRBackwardsMovementMode GetPSVRBackwardsMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPrimaryGripPitchOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertAngleOfStrike() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHUDEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIPlayerHandGripInputMode GetGripInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableGhostHands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectsVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisableThrowingAimAssist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisableShootingAimAssist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCrouchDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCachedUserHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrightnessBias() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAntiAliasingSamples() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AsyncSaveSettingsTimerCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreControlsMirrored() const;
    
};

