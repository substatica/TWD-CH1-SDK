#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETWDSuspiciousStates.h"
#include "SDIAIController.h"
#include "Curves/CurveFloat.h"
#include "SDIAIControllerInventoryInterface.h"
#include "QueuedSharedStimEvent.h"
#include "ActorStimData.h"
#include "AkGameplayTypes.h"
#include "OnReceivedSharedStimDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EAssignmentCategory.h"
#include "RFloat.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESurvivorTargetTypeNative.h"
#include "ETWDAICommand.h"
#include "ETWDSurvivorTargetRankings.h"
#include "ETWDAITieBreaker.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterType.h"
#include "ETWDCombatStates.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EAIBaseGroundMovementSpeedType.h"
#include "ESDIInteractiveInteractType.h"
#include "UObject/NoExportTypes.h"
#include "TWDAIController.generated.h"

class ATWDCharacter;
class ATargetPoint;
class ATWDAIController;
class UBehaviorTree;
class AController;
class UTWDAIAssignment;
class AActor;
class ATWDPlayerController;
class ASDIWeaponFirearm;
class UAkCallbackInfo;
class UTWDCharacterPersonality;
class ASDIHeldActor;
class UAISense;
class UObject;
class ASDIInventoryActor;

UCLASS(Blueprintable)
class TWD_API ATWDAIController : public ASDIAIController, public ISDIAIControllerInventoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorStimData CurrentTargetStimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* ExitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdFollowRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdFollowExitRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdFollowExitRangeForCombatCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdFollowEnterRangeForCombatCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdFollowRangeCheckTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdFollowRangeCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCorpseSuspicion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnperceivedSoundMaxAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSenseCrouchingPlayerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSenseCrouchingFrontPlayerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSenseSprintingPlayerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSenseRadiusAgainstWalkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoSenseRadiusAgainstHumans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugShowShotTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugShowFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDisableAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugShotFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeTrickedByStealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyCombatAlliesRangeInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyCombatAlliesRangeOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyCombatEnemiesRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATWDCharacter*> StealthExceptionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ATWDCharacter*, float> PersonalReputationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDCharacter* PossessedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ATWDCharacter*, float> PersonalDebtMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D AimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdateAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForceMiss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAgeAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharedStimulusLocalAddedAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRankCloseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AliveAlliesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AliveEnemiesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DeadAlliesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DeadEnemiesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NearbyCombatAlliesRangeOuterSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NearbyCombatEnemiesRangeSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CombatRingID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedSharedStim OnReceivedSharedStim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonSignificanceClearStimulusTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NonSignficanceTimeStamp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeCombatVolumesInNearbyAllies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeStimListsInNearbyAllies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FQueuedSharedStimEvent> QueuedSharedStimEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharedStimulusReceptionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharedStimulusIncomingMaxAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharedStimulusIncomingStrengthScaleInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharedStimulusIncomingStrengthScaleOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharedStimulusIncomingMaxStrengthInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SharedStimulusIncomingMaxStrengthOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareDeathByPlayerMinAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareDeathByPlayerMaxAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareDeathByPlayerKillerStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareDeathByPlayerKillerAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShareDeathByPlayerUseBodyLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareDeathByAIMinAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareDeathByAIMaxAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareDeathByAIKillerStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareDeathByAIKillerAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShareDeathByAIUseBodyLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* AICommandPossessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAssignmentCategory, UTWDAIAssignment*> AssignmentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateStimulusListInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat SharedStimulusCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SharedStimulusNextCheckTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableHearingStim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableSightStim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustSeeAllyToSharePerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllyAgeStimForSharingPerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightAgingDecayStimuliScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SightNonAgingDecayStimuliScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SoundDecayStimuliScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundCumulativeStimulusCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalSightStrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightStrengthMultiplierAgainstAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightStrengthMultiplierPlayerInCombatMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingRadiusFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingRadiusModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat StartingSharedPerceptionStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosiveDangerAggravationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActorStimData> CumulativeStimulusList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedSoundStimLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CachedSoundTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedSuspicionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ESurvivorTargetTypeNative> AllowedTargetTypesNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESurvivorTargetTypeNative, ETWDSuspiciousStates> AllowedTargetTypesSuspicion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReactionSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDSuspiciousStates RequestedSuspicionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETWDSuspiciousStates PreviousSuspicionState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATWDCharacter>> NearbyCombatAllyList;
    
public:
    ATWDAIController();
    UFUNCTION()
    void UpdateNearbyCombatAllyAndEnemyLists(TArray<TWeakObjectPtr<ATWDCharacter>> Allies, TArray<TWeakObjectPtr<ATWDCharacter>> Enemies);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopLogic(const FString& reason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSuspicionState(ETWDSuspiciousStates State);
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PawnReturnedToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PawnAcquiredFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseLogic(const FString& reason);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnKilledByPlayer(ATWDPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnKilledByAI(ATWDAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterSpeechAudioEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetCurrentTarget(const FActorStimData& StimData);
    
    UFUNCTION(BlueprintCallable)
    bool K2_IsFollowingAPath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClearCurrentTarget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetTypeLimited(const FActorStimData& StimData, UPARAM(Ref) float& Stimulus, float& StimulusOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetTypeIgnored(const FActorStimData& StimData) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsTargetRankES(ETWDSurvivorTargetRankings TargetType, AActor* TargetActor, UTWDCharacterPersonality* PersonalityIn, const FActorStimData& StimData, ETWDAITieBreaker& TieBreaker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetInSight(FBox TargetBox) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRunningLogic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFacingTarget(FVector TargetLocation, float AngleTolerance) const;
    
    UFUNCTION(BlueprintCallable)
    void IsCurrentTargetAging(bool& bIsTargetAging, bool& bIsTargetValid, bool& bIsTargeHostile, float MinAge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignedTargetConsideredHostile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAICommandPossessed() const;
    
    UFUNCTION(BlueprintCallable)
    bool InCombatWithPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnThreshold() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTargetRankES(AActor* TargetActor, int32 CurrentRank, UTWDCharacterPersonality* Personality, const FActorStimData& StimData, ETWDAITieBreaker& TieBreaker);
    
    UFUNCTION(BlueprintCallable)
    float GetSightStim(AActor* SightTarget);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UAISense> GetSenseClassForStimulus(UObject* WorldContextObject, const FActorStimData& Stimulus);
    
    UFUNCTION()
    TArray<TWeakObjectPtr<ATWDCharacter>> GetNearbyCombatAllyList();
    
    UFUNCTION(BlueprintCallable)
    float GetLastEnterCombatWithPlayerTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetLastAttackerES() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIsNearOuterRing(bool& bNearOuterRing) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIsNearFeedingRing(bool& NearFeedingRing) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetHostileActorStimulusList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetHostileActorSightStimulusList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FActorStimData> GetHostileActorHearingStimulusList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHearingRadiusModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHearingRadiusFromPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGameplayFocusActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGameplayFocalPoint(bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFacingThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETWDCombatStates GetCombatStateES() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetBlackboardLocation(const FBlackboardKeySelector& Key, bool& bIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetAssignedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAssignedMoveTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIBaseGroundMovementSpeedType GetAssignedMoveSpeedType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable)
    TArray<ATWDCharacter*> FindNearbyCombatEnemies() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ATWDCharacter*> FindNearbyCombatAllies() const;
    
public:
    UFUNCTION(BlueprintCallable)
    float FindCurrentPathLengthToDest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

