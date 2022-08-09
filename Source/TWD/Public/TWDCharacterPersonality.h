#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EPlayerAggravationEvent.h"
#include "EPlayerAggravationCondition.h"
#include "OnSetPersonalAlertDelegate.h"
#include "EFactionReaction.h"
#include "OnSetPanicDelegate.h"
#include "CostPerFactionReaction.h"
#include "TWDPersonalityFlag.h"
#include "ECharacterEmotion.h"
#include "ETWDPersonalityTargetInfo.h"
#include "ActorStimData.h"
#include "ECharacterReaction.h"
#include "EFaction.h"
#include "TWDCharacterPersonality.generated.h"

class ATWDAIController;
class UTWDDamageType;
class ATWDPlayerCharacter;
class UTWDCharacterArchetype;
class ATWDCharacter;
class AActor;
class ATWDAICharacter;

UCLASS(Blueprintable)
class TWD_API UTWDCharacterPersonality : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFactionReaction> IgnoreTargetSelectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTargetSeenAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetSeenAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTargetSeenStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPersonalAlertAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PersonalityUpdateEnabledFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseShouldCowerCommon: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugShowPlayerAggravationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugShowBarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTWDDamageType>> PlayerAggravationWoundedAllowedDamageTypes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetPanic OnSetPanic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetPersonalAlert OnSetPersonalAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugShowAlertPanicReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DebugAlertPanicReason;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerAggravationCondition, FCostPerFactionReaction> PlayerAggravationConditionCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPlayerAggravationEvent, FCostPerFactionReaction> PlayerAggravationEventCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAggravationCooloffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAggravationWeaponConditionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDeepInCombatVolumeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayerAggravationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPlayerAggravationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPlayerAggravationEvent> PlayerAggravationEventEventQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterEmotion BaseEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDCharacterArchetype* Archetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDCharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ATWDCharacter*, EFactionReaction> PersonalReactionOverrirdes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPlayerVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDropGivenInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostAssistAcknowledgeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPotentialCombatant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAlwaysPotentialCombatant: 1;
    
public:
    UTWDCharacterPersonality();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasTargetFlagSeenSet(ETWDPersonalityTargetInfo Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasFlagSeenSet(const FTWDPersonalityFlag& FlagStruct) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasFirearmFired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerVoiceComponents();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHearingStimData(TArray<FActorStimData> NewStimData);
    
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UnlockBaseEmotion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TookDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldWarn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldStandGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldShakedown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldRankPlayersAsHostiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldMoveToInvestigate(AActor* Stim) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldHelp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldFlee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCowerCommon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldCower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldCommunicate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldBeg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldAssignedMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldAggravate() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(ATWDCharacter* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerAggravationCondition(ATWDPlayerCharacter* PlayerInstigator, EPlayerAggravationCondition Condition, bool bIsSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonalReactionOverride(ATWDCharacter* OtherCharacter, EFactionReaction React);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonalAlert(bool Alerted, const FString& DebugReason);
    
    UFUNCTION(BlueprintCallable)
    void SetPanic(const FString& DebugReason);
    
    UFUNCTION(BlueprintCallable)
    void SetFactionAlert(ATWDCharacter* Offender, bool bAlert);
    
    UFUNCTION(BlueprintCallable)
    void SetAttemptingShakedown(bool bIsShakingDown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReceivedRequiredInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void ProcessPlayerAggravation(ATWDPlayerCharacter* Player, bool bPlayerTargeted, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedRequiredInventory();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReactionChanged(ECharacterReaction NewCharacterReaction, ECharacterReaction PreviousCharacterReaction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldWarn(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldStandGround(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldShakedown(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldHelp(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldFlee(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldCower(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldCommunicate(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldCombat(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldBeg(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldAssignedMove(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NativeShouldAggravate(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable)
    void LockBaseEmotionTo(ECharacterEmotion InEmotion);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_ShouldRunInFleeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetWalker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetingMe(ATWDAICharacter* OtherCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPotentialCombatant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPolite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPanicked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInIgnoreTargetSelectionList(EFactionReaction Reaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterArmed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterAdversary(ATWDAICharacter* OtherCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttackingMe(ATWDAICharacter* OtherCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlertedToTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlertedTo(const ATWDCharacter* OtherCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPersonalAlert() const;
    
    UFUNCTION(BlueprintCallable)
    float HandlePlayerAggravationEvent(EPlayerAggravationEvent Event);
    
    UFUNCTION(BlueprintCallable)
    float HandlePlayerAggravationCondition(EPlayerAggravationCondition Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFactionReaction GetTargetPersonalReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetFactionReputation(EFaction Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFactionReaction GetTargetFactionReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRefireTime() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPotentialAddedAggravation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFactionReaction GetPlayerPersonalReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerAggravationLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerAggravationCooloffTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerAggravationCondition(ATWDPlayerCharacter* PlayerInstigator, EPlayerAggravationCondition Condition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFactionReaction GetPersonalReaction(const ATWDCharacter* OtherCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    float GetLastPlayerVoiceTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastPlayerAggravationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastPersonalAlert() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastPanicTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToTarget() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FString GetDebugAlertPanicReason();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDAIController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterReaction GetCharacterReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    ECharacterEmotion GetBaseEmotion();
    
    UFUNCTION(BlueprintCallable)
    void EnqueuePlayerAggravationEvent(ATWDPlayerCharacter* PlayerInstigator, EPlayerAggravationEvent Event);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugShowPlayerAggravationLevelChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearPersonalReactionOverride(ATWDCharacter* OtherCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAggravate() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToIgnoreTargetSelectionList(EFactionReaction Reaction);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerAggravationLevel(float AddedAggravation);
    
};

