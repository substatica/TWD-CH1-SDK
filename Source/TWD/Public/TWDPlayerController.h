#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RRotatorExp.h"
#include "SDIPlayerControllerAdvanced.h"
#include "AlphaBlend.h"
#include "RFloat.h"
#include "SDICurvedWedgeGeometry.h"
#include "DialogueLine.h"
#include "UObject/NoExportTypes.h"
#include "SDIBlendOption.h"
#include "RRotator.h"
#include "TWDPlayerController_OnTaskModifiedDelegate.h"
#include "SDICameraSettings.h"
#include "ETWDLockonType.h"
#include "SDICameraShakeSettingsInst.h"
#include "UObject/NoExportTypes.h"
#include "ETWDNonVRMeleeAttackType.h"
#include "TWDPutHeadSetOnHeadDelegate.h"
#include "TWDHeadSetRecenteredDelegate.h"
#include "TWDPlayerController_OnGameUserSettingsAppliedDelegate.h"
#include "TWDPlayerController_OnNonVRGrappleMinigameStateChangedDelegate.h"
#include "Engine/EngineTypes.h"
#include "EAlertEventSeverity.h"
#include "TWDPlayerControllerTimeDilation.h"
#include "TWDPlayerController_OnFactionAlertedDelegate.h"
#include "Engine/EngineTypes.h"
#include "TWDPlayerController_OnHeldActorPlacedDelegate.h"
#include "TWDPlayerController_OnPreEnterCrouchDelegate.h"
#include "EFaction.h"
#include "TWDWeaponDismemberSettings.h"
#include "SuspiciousNPC.h"
#include "SingleCombatVolumeEntry.h"
#include "SDITransformCollisionShape.h"
#include "SDITargetSearchEntry.h"
#include "TWDTopic.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterHitRegion.h"
#include "ETWDCharacterType.h"
#include "ETWDNonVRGrappleMinigameState.h"
#include "TWDNonVRMeleeAttackDetails.h"
#include "EFactionReaction.h"
#include "SubtitleSplit.h"
#include "EGender.h"
#include "TWDPlayerController.generated.h"

class UTWDSubtask;
class ATWDMovementTargetActor;
class AActor;
class UAkAudioEvent;
class ASDIInventoryActor;
class ATWDPlayerCharacter;
class UCurveFloat;
class AVolume;
class ASDIInventoryHolderActor;
class ATWDWeaponGun;
class ATWDCharacter;
class ASDIPlayerHand;
class ASDIHeldActor;
class UTWDTask;
class ATWDWeaponActor;
class UTWDDialogue;
class UPrimitiveComponent;
class ATWDDismemberDroppedLimb;
class UObject;
class ATWDPlayerHand;
class ATWDHMDCameraActor;
class UCameraComponent;

UCLASS(Blueprintable)
class ATWDPlayerController : public ASDIPlayerControllerAdvanced {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearMovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearTurnSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRLookRightRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeForPauseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableSuspicionUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> GamePausedUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamePausedUIFailsafeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GamePausedAudioStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GamePausedAudioStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoofyModeLowGravityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoofyModeTurboArmScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> GoofyModeTurboKarateChopWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> GoofyModeTurboFingerPokeWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> GoofyModeTurboClosedFistWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICurvedWedgeGeometry LockonSearchGeoAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonDisengageExtraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat LockonWeakpointDistanceAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LockonCameraBoneNameAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LockonCameraInputScaleAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotatorExp LockonCameraRotationRateAccelerationAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LockonCameraRotationRateDecelerationAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption LockonCameraInputSpringStrengthBlendAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotator LockonCameraLimitsAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotator LockonCameraLimitsFarAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption LockonCameraLimitsBlendAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LockonCameraBoneNameAOSCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotator LockonCameraLimitsAOSCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotator LockonCameraLimitsFarAOSCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption LockonCameraLimitsBlendAOSCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LockonCameraLimitVelocityScaleCurveAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonCameraLimitChargeAngleAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LockonCameraLimitReturnSpeedCurveAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LockonCameraLimitNoTargetInputCurveAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraSettings LockonCameraSettingsAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraSettings LockonCameraSettingsNoTargetAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraShakeSettingsInst LockonCameraShakeAOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LockonCameraInputScalePrecisionStab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotatorExp LockonCameraRotationRateAccelerationPrecisionStab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator LockonCameraRotationRateDecelerationPrecisionStab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRRotator LockonCameraLimitsWeaponStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LockonCameraLimitVelocityScaleCurveWeaponStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonCameraLimitPullAngleWeaponStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LockonCameraLimitReturnSpeedCurveWeaponStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraSettings LockonCameraSettingsWeaponStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraShakeSettingsInst LockonCameraShakeWeaponStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonCameraOffsetReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDLockonType, FRotator> LockonCameraMaxOffsetOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDLockonType, FRotator> MaxLockonVelocityOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDLockonType, FFloatRK4SpringInterpolator> LockonYawSpringOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDLockonType, FFloatRK4SpringInterpolator> LockonPitchSpringOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonCameraDismemberDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockonCameraDismemberEaseOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIBlendOption LockonCameraDismemberEaseOutBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICurvedWedgeGeometry MeleeTargetSearchGeo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeTargetSearchGeoZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeleeTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraSettings ADSCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 FarFromPauseUICounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFreezeHMDCameraHideHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GamePausedUIActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GamePausedViewTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPutHeadSetOnHead OnVRHeadSetPutOnHead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDHeadSetRecentered OnHMDRecentered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerController_OnGameUserSettingsApplied OnGameUserSettingsApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerController_OnNonVRGrappleMinigameStateChanged OnNonVRGrappleMinigameStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimeDilationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeDilationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeDilationStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTWDPlayerControllerTimeDilation ActiveTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FTWDPlayerControllerTimeDilation> PendingTimeDilations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViveControllerFullMovementSpeed;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventoryHolderActor> GoofyModeInventoryHolder;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventoryActor> GoofyModeTurboKarateChopWeapon[2];
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventoryActor> GoofyModeTurboFingerPokeWeapon[2];
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventoryActor> GoofyModeTurboClosedFistWeapon[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bControlsMirrored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAltControlMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLostVRFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LookatAccumulatedDeltaSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastWeaponFiredTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NonVRWindedGunAimSwayID;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDWeaponGun> NonVRWindedGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLockonWeakpointInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugRenderingAOSLockon;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<AActor>, FHitResult> DismemberedActors;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerController_OnHeldActorPlaced HeldActorPlacedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerController_OnPreEnterCrouch PreEnterCrouch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerController_OnTaskModified OnTaskAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerController_OnTaskModified OnTaskRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDPlayerController_OnFactionAlerted OnFactionAlerted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASDIHeldActor*> HeldActorsPlacedThisFrame;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSmoothTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGameAudioIsPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSuspiciousNPC> SuspiciousNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> AlertedFactionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeBetweenDamageInstancesForAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaction, UAkAudioEvent*> FactionAlertedAkEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TrespassingAudioStingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TrespassingAudioPlayLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TrespassingAudioStopLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTrespassingMusicPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCCombatModeHostilityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCCombatModeMinSuspicion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NPCCombatAudioStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NPCCombatAudioStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NPCCombatAudioStopDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNPCCombatAudioStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNPCCombatAudioEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NPCCombatAudioStartTimestamp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowReputationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighReputationThreshold;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StingCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObliviousToForgivenessStingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ObliviousToForgivenessSting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspiciousToFoundTargetStingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuspiciousToFoundTargetSting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FoundTargetMusicLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndFoundTargetAKEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAgeForUnagedStim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AVolume*, FSingleCombatVolumeEntry> CombatVolumeRegistry;
    
    ATWDPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ViveRightTurnReleased();
    
    UFUNCTION(BlueprintCallable)
    void ViveRightTurnPressed();
    
    UFUNCTION(BlueprintCallable)
    void ViveLeftTurnReleased();
    
    UFUNCTION(BlueprintCallable)
    void ViveLeftTurnPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseNonVRMeleeButtonCharge() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTask(TSubclassOf<UTWDTask> Task);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicMusic();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCombatMode();
    
    UFUNCTION(BlueprintCallable)
    void UnFreezeHMDCamera(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleSuspicionInfoPanel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInvertAngleOfStrike();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleControlMirroring();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleControlMapping();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StabStarted(ATWDPlayerCharacter* Char, ATWDWeaponActor* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StabEnding(ATWDPlayerCharacter* Char, ATWDWeaponActor* Weapon, bool bRemoveWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SimulatePlayerInputResetHMD();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUIAkRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 SetTimeDilationStruct(FTWDPlayerControllerTimeDilation TimeDilation);
    
    UFUNCTION(BlueprintCallable)
    int32 SetTimeDilation(float TimeDilation, float Duration, UCurveFloat* TimeDilationOverrideCurve, EAlphaBlendOption BlendIn, UCurveFloat* BlendInCurve, float BlendInDuration, EAlphaBlendOption BlendOut, UCurveFloat* BlendOutCurve, float BlendOutDuration, float Delay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetQuickTurnIncrementDeg(float IncrementDeg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPSVRBackwardsMovementMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearTurnSpeedMultiplier(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearMovementSpeedMultiplier(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetFactionAlerted(EFaction Faction, bool Alert, bool WasHeadshot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAutoUpdateCachedUserHeight(bool bUpdate);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatTogglePauseAI();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatSetInvisibleToAI(bool bInvisibleToAI);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatSetHealth(float Health);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheatRushBells(float NewDelay);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TWDDurabilityInterface_AlterDurability(AActor* Actor, float DurabilityDelta, bool bCanBreak, bool bCanFix);
    
    UFUNCTION(BlueprintCallable)
    void ResetSubtask(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask);
    
    UFUNCTION(BlueprintCallable)
    void ResetFactionAlertness(EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllFactionAlertness();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllAlertness();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTopic(FTWDTopic Topic);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTask(TSubclassOf<UTWDTask> Task);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveSubtitle(int32 Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveDialogueBookmark(TSubclassOf<UTWDDialogue> Dialogue) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterCombatVolumes(ATWDCharacter* OwningCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PostUIAkEvent(UAkAudioEvent* AKEvent);
    
    UFUNCTION(BlueprintCallable)
    int32 PostEventToCharacterAkAudioComponent(UAkAudioEvent* Event, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnFreezeHMDStart(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnFreezeHMDEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnCrouch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrespassExit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrespassEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSuspicionUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovementTargetHighlightChanged(ATWDMovementTargetActor* Target, UPrimitiveComponent* Component, ATWDMovementTargetActor* PrevTarget, UPrimitiveComponent* PrevComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKilledCharacter(ATWDCharacter* Killed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHandHeldActorChange(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* HandPtr);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFreezeHMDCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDismemberedLimb(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& DismemberAxis, const FVector& DismemberFlatAxis, const FVector& ImpactVelocity, bool bKillingBlow, bool bWeakpoint, ATWDCharacter* Target, ETWDCharacterHitRegion Region, ATWDDismemberDroppedLimb* DroppedLimb);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrouch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyCheatModes();
    
    UFUNCTION(BlueprintCallable)
    void NotifySuspicionUpdate(ATWDCharacter* NPC, float SuspicionLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NonVRGrappleMinigameStateChanged(ATWDPlayerCharacter* Char, ETWDNonVRGrappleMinigameState PrevState, ETWDNonVRGrappleMinigameState NewState, float Duration, float NextDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MeleeTargetLocation(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bUseClosestLocation, FVector& RetVal);
    
    UFUNCTION(BlueprintCallable)
    void MeleeTargetIsBetterThan(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal);
    
    UFUNCTION(BlueprintCallable)
    void MeleeTargetFilter(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void K2_GetPlayerViewPoint(FVector& out_Location, FRotator& out_Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponStuckOrStabbed(ATWDWeaponActor*& OutWeapon, FHitResult& OutHitInfo, float& OutProgress, float& OutAngle, float& OutRemoval, float& OutInputAngle, float& OutDelay, bool& bOutCharged, bool& bOutWeakpoint, bool& bOutWeakpointIsDiseased, bool& bOutPlayerExtraction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnfreezingHMDCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnfreezeLerpingHMDCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialMeleeActiveDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialMeleeActive(ETWDNonVRMeleeAttackType& OutType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparingMeleeAttackDetailed(FTWDNonVRMeleeAttackDetails& OutDetails, bool bFindTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparingMeleeAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMeleeAttackAnimDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMeleeAttackAnim() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPauseAllowed();
    
    UFUNCTION(BlueprintCallable)
    bool IsInActiveCombatVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHMDCameraFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHipFiring(ATWDWeaponGun*& OutGun) const;
    
    UFUNCTION(BlueprintCallable)
    void InputStatsTogglePressed();
    
    UFUNCTION(BlueprintCallable)
    void InputStartButtonResetHMD();
    
    UFUNCTION(BlueprintCallable)
    void InputStartButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputStartButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputSloMoTogglePressed();
    
    UFUNCTION(BlueprintCallable)
    void InputPauseReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputPausePressed();
    
    UFUNCTION(BlueprintCallable)
    void InputConfigurableTurnAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void IncrementSubtaskValue(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool InCombatMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HeldActorPlacedTimerCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAlertedFaction(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable)
    void HandlePauseNoMenu();
    
    UFUNCTION(BlueprintCallable)
    void HandlePause();
    
    UFUNCTION(BlueprintCallable)
    void HandleCrouch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnfreezeLerpingHMDCameraTransforms(FTransform& Start, FTransform& End, float& Lerp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerHand* GetTWDPlayerHand(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FTWDTopic> GetTopics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastWeaponFired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSeamlessTravelActorListBP(bool bToEntry, TArray<AActor*>& ActorList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerHand* GetOtherTWDPlayerHand(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDNonVRGrappleMinigameState GetNonVRGrappleMinigameState(float& OutTimeRemaining, float& OutDuration, float& OutNextDuration) const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxSuspicion(ETWDCharacterType& CharacterType, float& StimAge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLinearTurnSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLinearMovementSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDHMDCameraActor* GetHMDCamera(bool bCreate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFactionReputation(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFactionReaction GetFactionReaction(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAngleOfStrikeWeakpoint(bool& bOutInRange, FVector& OutLocation, FVector& OutNormal, float& OutAngle, FSDITransformCollisionShape& OutShape, bool& bOutIsDiseased) const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeHMDCamera(bool bHideHands);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform FindPausedUILocation() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FailSubtask(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask);
    
    UFUNCTION(BlueprintCallable)
    void EnableSuspicionUpdate(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableSpectatorScreenHUD(bool bEnable) const;
    
    UFUNCTION(BlueprintCallable)
    void DeRegisterCombatVolumes(ATWDCharacter* OwningCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountTotalInventory(TSubclassOf<ASDIInventoryActor> ClassToCount, bool bIncludeHands, bool bIncludeInventory) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteSubtask(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheatIsDemiGod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheatInvisibleToAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheatInfiniteStamina() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginSeamlessTravel(const FString& URL);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AOSLockonTargetLocation(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bUseClosestLocation, FVector& RetVal);
    
    UFUNCTION(BlueprintCallable)
    void AOSLockonTargetIsBetterThan(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal);
    
    UFUNCTION(BlueprintCallable)
    void AOSLockonTargetFilter(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal);
    
public:
    UFUNCTION(BlueprintCallable)
    void AlertCharacter(ATWDCharacter* OtherCharacter, EAlertEventSeverity Severity, const FString& DebugCause);
    
    UFUNCTION(BlueprintCallable)
    void AddTopic(FTWDTopic Topic);
    
    UFUNCTION(BlueprintCallable)
    UTWDTask* AddTask(TSubclassOf<UTWDTask> Task, bool bNotifyPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 AddSubtitle(const FText& Name, const FText& Subtitle, TArray<FSubtitleSplit> SubtitleSplits, float Duration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 AddLineSubtitle(const FText& Name, FDialogueLine DialogueLine, EGender Gender, const FString& VoiceId) const;
    
    UFUNCTION(BlueprintCallable)
    void AddFactionReputation(EFaction Faction, float Reputation);
    
    UFUNCTION(BlueprintCallable)
    void AddContext_String(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddContext_Int(const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddContext_Float(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddContext_Bool(const FString& Key, bool bValue);
    
};

