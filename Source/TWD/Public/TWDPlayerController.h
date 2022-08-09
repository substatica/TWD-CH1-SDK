#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDPlayerController_OnGameUserSettingsAppliedDelegate.h"
#include "SDIPlayerControllerAdvanced.h"
#include "RRotatorExp.h"
#include "RFloat.h"
#include "SDICurvedWedgeGeometry.h"
#include "DialogueLine.h"
#include "TWDHeadSetRecenteredDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SDIBlendOption.h"
#include "UObject/NoExportTypes.h"
#include "TWDPlayerController_OnNonVRGrappleMinigameStateChangedDelegate.h"
#include "RRotator.h"
#include "SDICameraShakeSettingsInst.h"
#include "SDICameraSettings.h"
#include "TWDTopic.h"
#include "ETWDLockonType.h"
#include "ETWDNonVRGrappleMinigameState.h"
#include "UObject/NoExportTypes.h"
#include "TWDPutHeadSetOnHeadDelegate.h"
#include "InputCoreTypes.h"
#include "Engine/EngineTypes.h"
#include "TWDPlayerControllerTimeDilation.h"
#include "SubtitleSplit.h"
#include "SDITransformCollisionShape.h"
#include "SDITargetSearchEntry.h"
#include "TWDNonVRMeleeAttackDetails.h"
#include "Engine/EngineTypes.h"
#include "TWDPlayerController_OnHeldActorPlacedDelegate.h"
#include "TWDPlayerController_OnPreEnterCrouchDelegate.h"
#include "TWDPlayerController_OnTaskModifiedDelegate.h"
#include "TWDPlayerController_OnFactionAlertedDelegate.h"
#include "SuspiciousNPC.h"
#include "EFaction.h"
#include "TWDWeaponDismemberSettings.h"
#include "ETWDCharacterHitRegion.h"
#include "SingleCombatVolumeEntry.h"
#include "ETWDNonVRMeleeAttackType.h"
#include "AlphaBlend.h"
#include "EFactionReaction.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterType.h"
#include "EAlertEventSeverity.h"
#include "EGender.h"
#include "TWDPlayerController.generated.h"

class UTWDDialogue;
class UTWDSubtask;
class UAkAudioEvent;
class AActor;
class ASDIInventoryActor;
class UCurveFloat;
class UObject;
class UPrimitiveComponent;
class ASDIInventoryHolderActor;
class ATWDWeaponGun;
class ATWDCharacter;
class ATWDPlayerCharacter;
class ASDIHeldActor;
class AVolume;
class UTWDTask;
class ATWDWeaponActor;
class ATWDMovementTargetActor;
class ASDIPlayerHand;
class ATWDDismemberDroppedLimb;
class ATWDPlayerHand;
class ATWDHMDCameraActor;
class UCameraComponent;

UCLASS()
class ATWDPlayerController : public ASDIPlayerControllerAdvanced {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float LinearMovementSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float LinearTurnSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    float NonVRLookUpRate;
    
    UPROPERTY(EditDefaultsOnly)
    float NonVRLookRightRate;
    
    UPROPERTY(EditDefaultsOnly)
    float HoldTimeForPauseButton;
    
    UPROPERTY(Transient)
    bool bEnableSuspicionUpdate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> GamePausedUIClass;
    
    UPROPERTY(EditDefaultsOnly)
    float GamePausedUIFailsafeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* GamePausedAudioStartEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* GamePausedAudioStopEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float GoofyModeLowGravityZ;
    
    UPROPERTY(EditDefaultsOnly)
    float GoofyModeTurboArmScale;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASDIInventoryActor> GoofyModeTurboKarateChopWeaponClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASDIInventoryActor> GoofyModeTurboFingerPokeWeaponClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASDIInventoryActor> GoofyModeTurboClosedFistWeaponClass;
    
    UPROPERTY(EditDefaultsOnly)
    FSDICurvedWedgeGeometry LockonSearchGeoAOS;
    
    UPROPERTY(EditDefaultsOnly)
    float LockonDisengageExtraDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FRFloat LockonWeakpointDistanceAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FName LockonCameraBoneNameAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator LockonCameraInputScaleAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotatorExp LockonCameraRotationRateAccelerationAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator LockonCameraRotationRateDecelerationAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIBlendOption LockonCameraInputSpringStrengthBlendAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotator LockonCameraLimitsAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotator LockonCameraLimitsFarAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIBlendOption LockonCameraLimitsBlendAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FName LockonCameraBoneNameAOSCrouched;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotator LockonCameraLimitsAOSCrouched;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotator LockonCameraLimitsFarAOSCrouched;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIBlendOption LockonCameraLimitsBlendAOSCrouched;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* LockonCameraLimitVelocityScaleCurveAOS;
    
    UPROPERTY(EditDefaultsOnly)
    float LockonCameraLimitChargeAngleAOS;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* LockonCameraLimitReturnSpeedCurveAOS;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* LockonCameraLimitNoTargetInputCurveAOS;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraSettings LockonCameraSettingsAOS;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraSettings LockonCameraSettingsNoTargetAOS;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraShakeSettingsInst LockonCameraShakeAOS;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator LockonCameraInputScalePrecisionStab;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotatorExp LockonCameraRotationRateAccelerationPrecisionStab;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator LockonCameraRotationRateDecelerationPrecisionStab;
    
    UPROPERTY(EditDefaultsOnly)
    FRRotator LockonCameraLimitsWeaponStick;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* LockonCameraLimitVelocityScaleCurveWeaponStick;
    
    UPROPERTY(EditDefaultsOnly)
    float LockonCameraLimitPullAngleWeaponStick;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* LockonCameraLimitReturnSpeedCurveWeaponStick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraSettings LockonCameraSettingsWeaponStick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraShakeSettingsInst LockonCameraShakeWeaponStick;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LockonCameraOffsetReturnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDLockonType, FRotator> LockonCameraMaxOffsetOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDLockonType, FRotator> MaxLockonVelocityOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDLockonType, FFloatRK4SpringInterpolator> LockonYawSpringOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDLockonType, FFloatRK4SpringInterpolator> LockonPitchSpringOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LockonCameraDismemberDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LockonCameraDismemberEaseOutDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIBlendOption LockonCameraDismemberEaseOutBlend;
    
    UPROPERTY(EditDefaultsOnly)
    FSDICurvedWedgeGeometry MeleeTargetSearchGeo;
    
    UPROPERTY(EditDefaultsOnly)
    float MeleeTargetSearchGeoZOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FName MeleeTargetBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICameraSettings ADSCameraSettings;
    
    UPROPERTY(Transient)
    int32 FarFromPauseUICounter;
    
    UPROPERTY(Transient)
    bool bFreezeHMDCameraHideHands;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* GamePausedUIActor;
    
    UPROPERTY(Transient)
    AActor* GamePausedViewTarget;
    
    UPROPERTY(BlueprintAssignable)
    FTWDPutHeadSetOnHead OnVRHeadSetPutOnHead;
    
    UPROPERTY(BlueprintAssignable)
    FTWDHeadSetRecentered OnHMDRecentered;
    
    UPROPERTY(BlueprintAssignable)
    FTWDPlayerController_OnGameUserSettingsApplied OnGameUserSettingsApplied;
    
    UPROPERTY(BlueprintAssignable)
    FTWDPlayerController_OnNonVRGrappleMinigameStateChanged OnNonVRGrappleMinigameStateChanged;
    
    UPROPERTY(Transient)
    FTimerHandle TimeDilationTimerHandle;
    
    UPROPERTY(Transient)
    float TimeDilationTimer;
    
    UPROPERTY(Transient)
    float TimeDilationStart;
    
    UPROPERTY(Transient)
    FTWDPlayerControllerTimeDilation ActiveTimeDilation;
    
    UPROPERTY(Transient)
    TMap<int32, FTWDPlayerControllerTimeDilation> PendingTimeDilations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ViveControllerFullMovementSpeed;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIInventoryHolderActor> GoofyModeInventoryHolder;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIInventoryActor> GoofyModeTurboKarateChopWeapon[2];
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIInventoryActor> GoofyModeTurboFingerPokeWeapon[2];
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIInventoryActor> GoofyModeTurboClosedFistWeapon[2];
    
    UPROPERTY(Transient)
    bool bControlsMirrored;
    
    UPROPERTY(Transient)
    bool bAltControlMapping;
    
    UPROPERTY(Transient)
    bool bLostVRFocus;
    
    UPROPERTY(Transient)
    float LookatAccumulatedDeltaSeconds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LastWeaponFiredTimestamp;
    
    UPROPERTY(Transient)
    int32 NonVRWindedGunAimSwayID;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATWDWeaponGun> NonVRWindedGun;
    
    UPROPERTY(Transient)
    bool bLockonWeakpointInRange;
    
    UPROPERTY(Transient)
    bool bDebugRenderingAOSLockon;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<AActor>, FHitResult> DismemberedActors;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTWDPlayerController_OnHeldActorPlaced HeldActorPlacedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTWDPlayerController_OnPreEnterCrouch PreEnterCrouch;
    
    UPROPERTY(BlueprintAssignable)
    FTWDPlayerController_OnTaskModified OnTaskAdded;
    
    UPROPERTY(BlueprintAssignable)
    FTWDPlayerController_OnTaskModified OnTaskRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FTWDPlayerController_OnFactionAlerted OnFactionAlerted;
    
protected:
    UPROPERTY(Transient)
    TArray<ASDIHeldActor*> HeldActorsPlacedThisFrame;
    
public:
    UPROPERTY()
    bool bUseSmoothTurning;
    
    UPROPERTY(Transient)
    bool bGameAudioIsPaused;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    TArray<FSuspiciousNPC> SuspiciousNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<bool> AlertedFactionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTimeBetweenDamageInstancesForAlert;
    
    UPROPERTY(EditAnywhere)
    TMap<EFaction, UAkAudioEvent*> FactionAlertedAkEvents;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* TrespassingAudioStingEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* TrespassingAudioPlayLoopEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* TrespassingAudioStopLoopEvent;
    
    UPROPERTY(Transient)
    bool bTrespassingMusicPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float NPCCombatModeHostilityRange;
    
    UPROPERTY(EditDefaultsOnly)
    float NPCCombatModeMinSuspicion;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* NPCCombatAudioStartEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* NPCCombatAudioStopEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float NPCCombatAudioStopDelay;
    
    UPROPERTY(Transient)
    bool bNPCCombatAudioStarted;
    
    UPROPERTY(Transient)
    bool bNPCCombatAudioEnabled;
    
    UPROPERTY(Transient)
    float NPCCombatAudioStartTimestamp;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float LowReputationThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float HighReputationThreshold;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StingCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObliviousToForgivenessStingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ObliviousToForgivenessSting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SuspiciousToFoundTargetStingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* SuspiciousToFoundTargetSting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* FoundTargetMusicLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* EndFoundTargetAKEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAgeForUnagedStim;
    
    UPROPERTY()
    TMap<AVolume*, FSingleCombatVolumeEntry> CombatVolumeRegistry;
    
    ATWDPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void ViveRightTurnReleased();
    
    UFUNCTION()
    void ViveRightTurnPressed();
    
    UFUNCTION()
    void ViveLeftTurnReleased();
    
    UFUNCTION()
    void ViveLeftTurnPressed();
    
    UFUNCTION(BlueprintPure)
    bool UseNonVRMeleeButtonCharge() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTask(TSubclassOf<UTWDTask> Task);
    
    UFUNCTION()
    void UpdateDynamicMusic();
    
    UFUNCTION()
    void UpdateCombatMode();
    
    UFUNCTION(BlueprintCallable)
    void UnFreezeHMDCamera(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade);
    
    UFUNCTION(BlueprintNativeEvent)
    void ToggleSuspicionInfoPanel();
    
    UFUNCTION(Exec)
    void ToggleInvertAngleOfStrike();
    
    UFUNCTION(Exec)
    void ToggleControlMirroring();
    
    UFUNCTION(Exec)
    void ToggleControlMapping();
    
    UFUNCTION(BlueprintNativeEvent)
    void StabStarted(ATWDPlayerCharacter* Char, ATWDWeaponActor* Weapon);
    
    UFUNCTION(BlueprintNativeEvent)
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
    
    UFUNCTION(Exec)
    void SetQuickTurnIncrementDeg(float IncrementDeg);
    
    UFUNCTION(Exec)
    void SetPSVRBackwardsMovementMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearTurnSpeedMultiplier(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearMovementSpeedMultiplier(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetFactionAlerted(EFaction Faction, bool Alert, bool WasHeadshot);
    
    UFUNCTION(Exec)
    void SetAutoUpdateCachedUserHeight(bool bUpdate);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCheatTogglePauseAI();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCheatSetInvisibleToAI(bool bInvisibleToAI);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCheatSetHealth(float Health);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCheatRushBells(float NewDelay);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
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
    
    UFUNCTION()
    void RegisterCombatVolumes(ATWDCharacter* OwningCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PostUIAkEvent(UAkAudioEvent* AKEvent);
    
    UFUNCTION(BlueprintCallable)
    int32 PostEventToCharacterAkAudioComponent(UAkAudioEvent* Event, const FString& EventName);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnUnFreezeHMDStart(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnUnFreezeHMDEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnCrouch();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTrespassExit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTrespassEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSuspicionUpdate();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMovementTargetHighlightChanged(ATWDMovementTargetActor* Target, UPrimitiveComponent* Component, ATWDMovementTargetActor* PrevTarget, UPrimitiveComponent* PrevComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnKilledCharacter(ATWDCharacter* Killed);
    
protected:
    UFUNCTION()
    void OnHandHeldActorChange(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* HandPtr);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnFreezeHMDCamera();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDismemberedLimb(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& DismemberAxis, const FVector& DismemberFlatAxis, const FVector& ImpactVelocity, bool bKillingBlow, bool bWeakpoint, ATWDCharacter* Target, ETWDCharacterHitRegion Region, ATWDDismemberDroppedLimb* DroppedLimb);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCrouch();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnApplyCheatModes();
    
    UFUNCTION(BlueprintCallable)
    void NotifySuspicionUpdate(ATWDCharacter* NPC, float SuspicionLevel);
    
    UFUNCTION(BlueprintNativeEvent)
    void NonVRGrappleMinigameStateChanged(ATWDPlayerCharacter* Char, ETWDNonVRGrappleMinigameState PrevState, ETWDNonVRGrappleMinigameState NewState, float Duration, float NextDuration);
    
protected:
    UFUNCTION()
    void MeleeTargetLocation(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bUseClosestLocation, FVector& RetVal);
    
    UFUNCTION()
    void MeleeTargetIsBetterThan(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal);
    
    UFUNCTION()
    void MeleeTargetFilter(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal);
    
public:
    UFUNCTION(BlueprintPure)
    void K2_GetPlayerViewPoint(FVector& out_Location, FRotator& out_Rotation) const;
    
    UFUNCTION(BlueprintPure)
    bool IsWeaponStuckOrStabbed(ATWDWeaponActor*& OutWeapon, FHitResult& OutHitInfo, float& OutProgress, float& OutAngle, float& OutRemoval, float& OutInputAngle, float& OutDelay, bool& bOutCharged, bool& bOutWeakpoint, bool& bOutWeakpointIsDiseased, bool& bOutPlayerExtraction) const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnfreezingHMDCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnfreezeLerpingHMDCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpecialMeleeActiveDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpecialMeleeActive(ETWDNonVRMeleeAttackType& OutType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreparingMeleeAttackDetailed(FTWDNonVRMeleeAttackDetails& OutDetails, bool bFindTarget) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreparingMeleeAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingMeleeAttackAnimDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingMeleeAttackAnim() const;
    
    UFUNCTION()
    bool IsPauseAllowed();
    
    UFUNCTION()
    bool IsInActiveCombatVolume();
    
    UFUNCTION(BlueprintPure)
    bool IsHMDCameraFrozen() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHipFiring(ATWDWeaponGun*& OutGun) const;
    
    UFUNCTION()
    void InputStatsTogglePressed();
    
    UFUNCTION()
    void InputStartButtonResetHMD();
    
    UFUNCTION()
    void InputStartButtonReleased();
    
    UFUNCTION()
    void InputStartButtonPressed();
    
    UFUNCTION()
    void InputSloMoTogglePressed();
    
    UFUNCTION()
    void InputPauseReleased();
    
    UFUNCTION()
    void InputPausePressed();
    
    UFUNCTION()
    void InputConfigurableTurnAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void IncrementSubtaskValue(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool InCombatMode();
    
protected:
    UFUNCTION()
    void HeldActorPlacedTimerCallback();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasAlertedFaction(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable)
    void HandlePauseNoMenu();
    
    UFUNCTION(BlueprintCallable)
    void HandlePause();
    
    UFUNCTION()
    void HandleCrouch();
    
    UFUNCTION(BlueprintPure)
    bool GetUnfreezeLerpingHMDCameraTransforms(FTransform& Start, FTransform& End, float& Lerp) const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerHand* GetTWDPlayerHand(EControllerHand hand) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FTWDTopic> GetTopics();
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceLastWeaponFired() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void GetSeamlessTravelActorListBP(bool bToEntry, TArray<AActor*>& ActorList);
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerHand* GetOtherTWDPlayerHand(EControllerHand hand) const;
    
    UFUNCTION(BlueprintPure)
    ETWDNonVRGrappleMinigameState GetNonVRGrappleMinigameState(float& OutTimeRemaining, float& OutDuration, float& OutNextDuration) const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxSuspicion(ETWDCharacterType& CharacterType, float& StimAge);
    
    UFUNCTION(BlueprintPure)
    float GetLinearTurnSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetLinearMovementSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    ATWDHMDCameraActor* GetHMDCamera(bool bCreate) const;
    
    UFUNCTION(BlueprintPure)
    float GetFactionReputation(EFaction Faction) const;
    
    UFUNCTION(BlueprintPure)
    EFactionReaction GetFactionReaction(EFaction Faction) const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAngleOfStrikeWeakpoint(bool& bOutInRange, FVector& OutLocation, FVector& OutNormal, float& OutAngle, FSDITransformCollisionShape& OutShape, bool& bOutIsDiseased) const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeHMDCamera(bool bHideHands);
    
protected:
    UFUNCTION(BlueprintPure)
    FTransform FindPausedUILocation() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FailSubtask(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask);
    
    UFUNCTION(BlueprintCallable)
    void EnableSuspicionUpdate(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableSpectatorScreenHUD(bool bEnable) const;
    
    UFUNCTION()
    void DeRegisterCombatVolumes(ATWDCharacter* OwningCharacter);
    
    UFUNCTION(BlueprintPure)
    int32 CountTotalInventory(TSubclassOf<ASDIInventoryActor> ClassToCount, bool bIncludeHands, bool bIncludeInventory) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteSubtask(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask);
    
    UFUNCTION(BlueprintPure)
    bool CheatIsDemiGod() const;
    
    UFUNCTION(BlueprintPure)
    bool CheatInvisibleToAI() const;
    
    UFUNCTION(BlueprintPure)
    bool CheatInfiniteStamina() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginSeamlessTravel(const FString& URL);
    
protected:
    UFUNCTION()
    void AOSLockonTargetLocation(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bUseClosestLocation, FVector& RetVal);
    
    UFUNCTION()
    void AOSLockonTargetIsBetterThan(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal);
    
    UFUNCTION()
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

