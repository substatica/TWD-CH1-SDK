#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Curves/CurveFloat.h"
#include "SDIAIController.h"
#include "QueuedSharedStimEvent.h"
#include "SDIAIControllerInventoryInterface.h"
#include "ESDIInteractiveInteractType.h"
#include "ActorStimData.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "OnReceivedSharedStimDelegate.h"
#include "ETWDCharacterType.h"
#include "EAIBaseGroundMovementSpeedType.h"
#include "EAssignmentCategory.h"
#include "ETWDSurvivorTargetRankings.h"
#include "RFloat.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESurvivorTargetTypeNative.h"
#include "ETWDAITieBreaker.h"
#include "ETWDSuspiciousStates.h"
#include "ETWDAICommand.h"
#include "UObject/NoExportTypes.h"
#include "EAkCallbackType.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCombatStates.h"
#include "InputCoreTypes.h"
#include "TWDAIController.generated.h"

class ATWDCharacter;
class ATargetPoint;
class AController;
class UObject;
class UTWDAIAssignment;
class UAkCallbackInfo;
class AActor;
class UBehaviorTree;
class ATWDPlayerController;
class ATWDAIController;
class UTWDCharacterPersonality;
class UAISense;
class ASDIInventoryActor;
class ASDIHeldActor;
class ASDIWeaponFirearm;

UCLASS()
class TWD_API ATWDAIController : public ASDIAIController, public ISDIAIControllerInventoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    FActorStimData CurrentTargetStimData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TeamNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ATargetPoint* ExitPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrowdFollowRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrowdFollowExitRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrowdFollowExitRangeForCombatCircle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrowdFollowEnterRangeForCombatCircle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrowdFollowRangeCheckTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrowdFollowRangeCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCorpseSuspicion;
    
    UPROPERTY(EditAnywhere)
    float UnperceivedSoundMaxAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoSenseCrouchingPlayerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoSenseCrouchingFrontPlayerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoSenseSprintingPlayerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoSenseRadiusAgainstWalkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoSenseRadiusAgainstHumans;
    
    UPROPERTY(EditAnywhere)
    bool bDebugShowShotTransforms;
    
    UPROPERTY(EditAnywhere)
    bool bDebugShowFocus;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDisableAimOffset;
    
    UPROPERTY(EditAnywhere)
    bool bDebugShotFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxConeHalfAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanBeTrickedByStealth;
    
    UPROPERTY(EditAnywhere)
    float NearbyCombatAlliesRangeInner;
    
    UPROPERTY(EditAnywhere)
    float NearbyCombatAlliesRangeOuter;
    
    UPROPERTY(EditAnywhere)
    float NearbyCombatEnemiesRange;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<ATWDCharacter*> StealthExceptionList;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<ATWDCharacter*, float> PersonalReputationMap;
    
    UPROPERTY(Transient)
    ATWDCharacter* PossessedCharacter;
    
    UPROPERTY(Transient)
    TMap<ATWDCharacter*, float> PersonalDebtMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector2D AimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bUpdateAimOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bForceMiss;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinAgeAimOffset;
    
    UPROPERTY(EditAnywhere)
    float SharedStimulusLocalAddedAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetRankCloseRange;
    
    UPROPERTY(Transient)
    int32 AliveAlliesCount;
    
    UPROPERTY(Transient)
    int32 AliveEnemiesCount;
    
    UPROPERTY(Transient)
    int32 DeadAlliesCount;
    
    UPROPERTY(Transient)
    int32 DeadEnemiesCount;
    
    UPROPERTY(Transient)
    float NearbyCombatAlliesRangeOuterSq;
    
    UPROPERTY(Transient)
    float NearbyCombatEnemiesRangeSq;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 CombatRingID;
    
    UPROPERTY(BlueprintAssignable)
    FOnReceivedSharedStim OnReceivedSharedStim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonSignificanceClearStimulusTime;
    
    UPROPERTY(Transient)
    float NonSignficanceTimeStamp;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bIncludeCombatVolumesInNearbyAllies;
    
    UPROPERTY(EditAnywhere)
    bool bIncludeStimListsInNearbyAllies;
    
    UPROPERTY(Transient)
    TArray<FQueuedSharedStimEvent> QueuedSharedStimEvents;
    
    UPROPERTY(EditAnywhere)
    bool bSharedStimulusReceptionEnabled;
    
    UPROPERTY(EditAnywhere)
    float SharedStimulusIncomingMaxAge;
    
    UPROPERTY(EditAnywhere)
    float SharedStimulusIncomingStrengthScaleInner;
    
    UPROPERTY(EditAnywhere)
    float SharedStimulusIncomingStrengthScaleOuter;
    
    UPROPERTY(EditAnywhere)
    float SharedStimulusIncomingMaxStrengthInner;
    
    UPROPERTY(EditAnywhere)
    float SharedStimulusIncomingMaxStrengthOuter;
    
    UPROPERTY(EditAnywhere)
    float ShareDeathByPlayerMinAge;
    
    UPROPERTY(EditAnywhere)
    float ShareDeathByPlayerMaxAge;
    
    UPROPERTY(EditAnywhere)
    float ShareDeathByPlayerKillerStrength;
    
    UPROPERTY(EditAnywhere)
    float ShareDeathByPlayerKillerAge;
    
    UPROPERTY(EditAnywhere)
    bool ShareDeathByPlayerUseBodyLocation;
    
    UPROPERTY(EditAnywhere)
    float ShareDeathByAIMinAge;
    
    UPROPERTY(EditAnywhere)
    float ShareDeathByAIMaxAge;
    
    UPROPERTY(EditAnywhere)
    float ShareDeathByAIKillerStrength;
    
    UPROPERTY(EditAnywhere)
    float ShareDeathByAIKillerAge;
    
    UPROPERTY(EditAnywhere)
    bool ShareDeathByAIUseBodyLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AController* AICommandPossessor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<EAssignmentCategory, UTWDAIAssignment*> AssignmentMap;
    
    UPROPERTY(EditAnywhere)
    float UpdateStimulusListInterval;
    
    UPROPERTY(EditAnywhere)
    FRFloat SharedStimulusCheckInterval;
    
    UPROPERTY(Transient)
    float SharedStimulusNextCheckTimestamp;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bDisableHearingStim;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bDisableSightStim;
    
    UPROPERTY(EditAnywhere)
    bool bMustSeeAllyToSharePerception;
    
    UPROPERTY(EditAnywhere)
    float MaxAllyAgeStimForSharingPerception;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightAgingDecayStimuliScalar;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SightNonAgingDecayStimuliScalar;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve SoundDecayStimuliScalar;
    
    UPROPERTY(EditAnywhere)
    float SoundCumulativeStimulusCap;
    
    UPROPERTY(EditAnywhere)
    float NormalSightStrengthMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SightStrengthMultiplierAgainstAI;
    
    UPROPERTY(EditAnywhere)
    float SightStrengthMultiplierPlayerInCombatMode;
    
    UPROPERTY(EditAnywhere)
    float HearingRadiusFromPlayer;
    
    UPROPERTY(EditAnywhere)
    float HearingRadiusModifier;
    
    UPROPERTY(EditAnywhere)
    FRFloat StartingSharedPerceptionStrength;
    
    UPROPERTY(EditAnywhere)
    float TurnThreshold;
    
    UPROPERTY(EditAnywhere)
    float FacingThreshold;
    
    UPROPERTY(EditAnywhere)
    float ExplosiveDangerAggravationRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FActorStimData> CumulativeStimulusList;
    
    UPROPERTY(Transient)
    FVector CachedSoundStimLocation;
    
    UPROPERTY(Transient)
    AActor* CachedSoundTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CachedSuspicionThreshold;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TSet<ESurvivorTargetTypeNative> AllowedTargetTypesNative;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<ESurvivorTargetTypeNative, ETWDSuspiciousStates> AllowedTargetTypesSuspicion;
    
    UPROPERTY(EditAnywhere)
    bool bUseReactionSystem;
    
    UPROPERTY(Transient)
    ETWDSuspiciousStates RequestedSuspicionState;
    
    UPROPERTY(Transient)
    ETWDSuspiciousStates PreviousSuspicionState;
    
private:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> NearbyCombatAllyList;
    
public:
    ATWDAIController();
    UFUNCTION()
    void UpdateNearbyCombatAllyAndEnemyLists(TArray<TWeakObjectPtr<ATWDCharacter>> Allies, TArray<TWeakObjectPtr<ATWDCharacter>> Enemies);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopLogic(const FString& reason);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetSuspicionState(ETWDSuspiciousStates State);
    
    UFUNCTION()
    void SetInCombatWithPlayer(bool bInCombat);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusLogged(AActor* NewFocus, int32 InPriority, const FString& CallerLogMsg);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalPointLogged(FVector NewFocus, int32 InPriority, const FString& CallerLogMsg);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignment(AActor* Assigner, UTWDAIAssignment* NewAssignment);
    
    UFUNCTION(BlueprintCallable)
    AActor* SelectTarget_Optimized(const TArray<FActorStimData>& PerceptionList, const FActorStimData& MaxHostileSight, const FActorStimData& MaxHostileSound, bool& bFoundTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResumeLogic(const FString& reason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestartLogic();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceiveAICommand(AController* Sender, ETWDAICommand Command, const FTransform& Transform, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void PerformRequestedSuspicionState();
    
    UFUNCTION(BlueprintNativeEvent)
    void PawnReturnedToPool();
    
    UFUNCTION(BlueprintNativeEvent)
    void PawnAcquiredFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseLogic(const FString& reason);
    
    UFUNCTION()
    void OnPawnKilledByPlayer(ATWDPlayerController* PlayerController);
    
    UFUNCTION()
    void OnPawnKilledByAI(ATWDAIController* AIController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharacterSpeechAudioEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_SetCurrentTarget(const FActorStimData& StimData);
    
    UFUNCTION(BlueprintCallable)
    bool K2_IsFollowingAPath();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_ClearCurrentTarget();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsTargetTypeLimited(const FActorStimData& StimData, UPARAM(Ref) float& Stimulus, float& StimulusOut) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetTypeIgnored(const FActorStimData& StimData) const;
    
public:
    UFUNCTION()
    bool IsTargetRankES(ETWDSurvivorTargetRankings TargetType, AActor* TargetActor, UTWDCharacterPersonality* PersonalityIn, const FActorStimData& StimData, ETWDAITieBreaker& TieBreaker);
    
    UFUNCTION(BlueprintPure)
    bool IsTargetInSight(FBox TargetBox) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRunningLogic();
    
    UFUNCTION(BlueprintPure)
    bool IsReadyToFire() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFacingTarget(FVector TargetLocation, float AngleTolerance) const;
    
    UFUNCTION(BlueprintCallable)
    void IsCurrentTargetAging(bool& bIsTargetAging, bool& bIsTargetValid, bool& bIsTargeHostile, float MinAge);
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedTargetConsideredHostile() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAICommandPossessed() const;
    
    UFUNCTION()
    bool InCombatWithPlayer() const;
    
    UFUNCTION(BlueprintPure)
    float GetTurnThreshold() const;
    
    UFUNCTION()
    int32 GetTargetRankES(AActor* TargetActor, int32 CurrentRank, UTWDCharacterPersonality* Personality, const FActorStimData& StimData, ETWDAITieBreaker& TieBreaker);
    
    UFUNCTION(BlueprintCallable)
    float GetSightStim(AActor* SightTarget);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UAISense> GetSenseClassForStimulus(UObject* WorldContextObject, const FActorStimData& Stimulus);
    
    UFUNCTION()
    TArray<TWeakObjectPtr<ATWDCharacter>> GetNearbyCombatAllyList();
    
    UFUNCTION()
    float GetLastEnterCombatWithPlayerTime() const;
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* GetLastAttackerES() const;
    
    UFUNCTION(BlueprintPure)
    void GetIsNearOuterRing(bool& bNearOuterRing) const;
    
    UFUNCTION(BlueprintPure)
    void GetIsNearFeedingRing(bool& NearFeedingRing) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetHostileActorStimulusList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetHostileActorSightStimulusList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetHostileActorHearingStimulusList();
    
    UFUNCTION(BlueprintPure)
    float GetHearingRadiusModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetHearingRadiusFromPlayer() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetGameplayFocusActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGameplayFocalPoint(bool& IsValid) const;
    
    UFUNCTION(BlueprintPure)
    float GetFacingThreshold() const;
    
    UFUNCTION(BlueprintNativeEvent)
    ETWDCombatStates GetCombatStateES() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetBlackboardLocation(const FBlackboardKeySelector& Key, bool& bIsValid);
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetAssignedTarget() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAssignedMoveTarget() const;
    
    UFUNCTION(BlueprintPure)
    EAIBaseGroundMovementSpeedType GetAssignedMoveSpeedType() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetAICommandPossessor() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAgeOfSightStim(const AActor* SightTarget);
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetActorStimulusListWithMax(bool bHostileList, FActorStimData& SightMax, FActorStimData& HostileSightMax, FActorStimData& HearingMax, FActorStimData& HostileHearingMax, ETWDCharacterType CharacterTypeFilter);
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetActorStimulusList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetActorSightStimulusList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetActorHearingStimulusList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetActorCurrentSightStimulusList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForgetCurrentTarget();
    
protected:
    UFUNCTION()
    TArray<ATWDCharacter*> FindNearbyCombatEnemies() const;
    
    UFUNCTION()
    TArray<ATWDCharacter*> FindNearbyCombatAllies() const;
    
public:
    UFUNCTION(BlueprintCallable)
    float FindCurrentPathLengthToDest();
    
    UFUNCTION(BlueprintPure)
    FActorStimData FindAnyStimulusData(bool& bFound, const AActor* StimTarget, ETWDCharacterType CharacterTypeFilter, bool bHostileStimOnly) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTargetFromStimList(AActor* StimActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearFocusLogged(int32 InPriority, const FString& CallerLogMsg);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearCurrentTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearAllowedTargetTypesNative();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ChooseTargetsFromPerceptionListES(const TArray<FActorStimData>& PerceptionList, int32 MinimumTargetRank, int32& BestHasTargetIndex, FActorStimData& PickedStim);
    
    UFUNCTION(BlueprintCallable)
    bool CanSeeTargetThroughStealth(ATWDCharacter* Target);
    
    UFUNCTION(BlueprintPure)
    bool CanProcessAICommand(AController* Sender) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BuildTargetTypesQuickLookupTable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AICommandUnpossess(AController* Ctrl);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AICommandPossess(AController* Ctrl);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalSightStimulusEventEx(FActorStimData Stim);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalSightStimulusEventActor(AActor* StimTarget, bool bShareWithAllies);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalSightStimulusEvent(FActorStimData Stim, bool bShareWithAllies);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool WeaponStopFire(EControllerHand hand, ESDIInteractiveInteractType Firemode) override PURE_VIRTUAL(WeaponStopFire, return false;);
    
    UFUNCTION(BlueprintCallable)
    void WeaponStopAllFire(EControllerHand hand, bool bImmediately) override PURE_VIRTUAL(WeaponStopAllFire,);
    
    UFUNCTION(BlueprintCallable)
    bool WeaponStartFire(EControllerHand hand, ESDIInteractiveInteractType Firemode) override PURE_VIRTUAL(WeaponStartFire, return false;);
    
    UFUNCTION(BlueprintCallable)
    void WeaponReload(EControllerHand hand) override PURE_VIRTUAL(WeaponReload,);
    
    UFUNCTION(BlueprintCallable)
    bool WeaponNeedsReload(EControllerHand hand) override PURE_VIRTUAL(WeaponNeedsReload, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool WeaponIsReadyToFire(EControllerHand hand, ESDIInteractiveInteractType Firemode) override PURE_VIRTUAL(WeaponIsReadyToFire, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool WeaponIsFiring(EControllerHand hand, ESDIInteractiveInteractType Firemode) override PURE_VIRTUAL(WeaponIsFiring, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 WeaponGetClipSize(EControllerHand hand) const override PURE_VIRTUAL(WeaponGetClipSize, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 WeaponGetAmmoCount(EControllerHand hand) const override PURE_VIRTUAL(WeaponGetAmmoCount, return 0;);
    
    UFUNCTION(BlueprintCallable)
    bool WeaponFireSingleShot(EControllerHand hand, ESDIInteractiveInteractType Firemode) override PURE_VIRTUAL(WeaponFireSingleShot, return false;);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveInventoryItemsByGuid(const FGuid& InvGuid, TArray<ASDIInventoryActor*>& RemovedInventory, bool bExact, bool bDestroy) override PURE_VIRTUAL(RemoveInventoryItemsByGuid, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveInventoryItems(TSubclassOf<ASDIInventoryActor> InvClass, TArray<ASDIInventoryActor*>& RemovedInventory, bool bExact, bool bDestroy) override PURE_VIRTUAL(RemoveInventoryItems, return 0;);
    
    UFUNCTION(BlueprintCallable)
    bool GrabItemFromInventory(ASDIInventoryActor* InvActor, EControllerHand PrimaryHand, EControllerHand SecondaryHand) override PURE_VIRTUAL(GrabItemFromInventory, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GrabHeldActor(ASDIHeldActor* HeldActor, EControllerHand PrimaryHand, EControllerHand SecondaryHand, bool bAddToInventory) override PURE_VIRTUAL(GrabHeldActor, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GrabClassFromInventory(TSubclassOf<ASDIInventoryActor> InvClass, EControllerHand PrimaryHand, EControllerHand SecondaryHand, bool bExact) override PURE_VIRTUAL(GrabClassFromInventory, return false;);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetShotTransform(ASDIWeaponFirearm* Weapon, const FTransform& inShotTransform) override PURE_VIRTUAL(GetShotTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    ASDIInventoryActor* GetNextInventory(ASDIInventoryActor* Current, int32 Dir, TSubclassOf<ASDIInventoryActor> InvClass, bool bExact, bool bLoop) const override PURE_VIRTUAL(GetNextInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInventoryOfType(TSubclassOf<ASDIInventoryActor> InvClass, TArray<ASDIInventoryActor*>& OutInventory, bool bExact) const override PURE_VIRTUAL(GetInventoryOfType, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInventoryByGuid(const FGuid& InvGuid, TArray<ASDIInventoryActor*>& OutInventory, bool bExact) const override PURE_VIRTUAL(GetInventoryByGuid, return 0;);
    
    UFUNCTION(BlueprintCallable)
    ASDIHeldActor* GetHeldActor(EControllerHand hand) const override PURE_VIRTUAL(GetHeldActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool DropHeldActor(ASDIHeldActor* HeldActor, bool bReturnToInventory, bool bRemoveFromInventory) override PURE_VIRTUAL(DropHeldActor, return false;);
    
    UFUNCTION(BlueprintCallable)
    ASDIInventoryActor* AddInventoryItem(TSubclassOf<ASDIInventoryActor> InvClass, int32 Count) override PURE_VIRTUAL(AddInventoryItem, return NULL;);
    
};

