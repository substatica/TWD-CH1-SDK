#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EFactionReaction.h"
#include "CostPerFactionReaction.h"
#include "EPlayerAggravationCondition.h"
#include "OnSetPanicDelegate.h"
#include "OnSetPersonalAlertDelegate.h"
#include "EPlayerAggravationEvent.h"
#include "ECharacterEmotion.h"
#include "ETWDPersonalityTargetInfo.h"
#include "TWDPersonalityFlag.h"
#include "ActorStimData.h"
#include "ECharacterReaction.h"
#include "EFaction.h"
#include "TWDCharacterPersonality.generated.h"

class UTWDCharacterArchetype;
class UTWDDamageType;
class ATWDPlayerCharacter;
class ATWDCharacter;
class ATWDAICharacter;
class AActor;
class ATWDAIController;

UCLASS(Blueprintable)
class TWD_API UTWDCharacterPersonality : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EFactionReaction> IgnoreTargetSelectionList;
    
    UPROPERTY()
    float MinTargetSeenAge;
    
    UPROPERTY()
    float MaxTargetSeenAge;
    
    UPROPERTY()
    float MinTargetSeenStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPersonalAlertAge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PersonalityUpdateEnabledFlags;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseShouldCowerCommon: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDebugShowPlayerAggravationLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDebugShowBarks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UTWDDamageType>> PlayerAggravationWoundedAllowedDamageTypes;
    
    UPROPERTY(BlueprintAssignable)
    FOnSetPanic OnSetPanic;
    
    UPROPERTY(BlueprintAssignable)
    FOnSetPersonalAlert OnSetPersonalAlert;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDebugShowAlertPanicReason;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString DebugAlertPanicReason;
    
private:
    UPROPERTY(EditAnywhere)
    TMap<EPlayerAggravationCondition, FCostPerFactionReaction> PlayerAggravationConditionCost;
    
    UPROPERTY(EditAnywhere)
    TMap<EPlayerAggravationEvent, FCostPerFactionReaction> PlayerAggravationEventCost;
    
    UPROPERTY(EditAnywhere)
    float PlayerAggravationCooloffTime;
    
    UPROPERTY(EditAnywhere)
    float PlayerAggravationWeaponConditionRange;
    
    UPROPERTY(EditAnywhere)
    float PlayerDeepInCombatVolumeTime;
    
    UPROPERTY(Transient)
    float PlayerAggravationLevel;
    
    UPROPERTY(Transient)
    float LastPlayerAggravationTime;
    
    UPROPERTY(Transient)
    TArray<EPlayerAggravationEvent> PlayerAggravationEventEventQueue;
    
    UPROPERTY(Transient)
    ECharacterEmotion BaseEmotion;
    
    UPROPERTY(EditDefaultsOnly)
    FString ID;
    
    UPROPERTY(Transient)
    UTWDCharacterArchetype* Archetype;
    
    UPROPERTY(Transient)
    ATWDCharacter* Target;
    
    UPROPERTY(Transient)
    ATWDCharacter* Character;
    
    UPROPERTY(Transient)
    TMap<ATWDCharacter*, EFactionReaction> PersonalReactionOverrirdes;
    
    UPROPERTY(Transient)
    float LastPlayerVoice;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShouldDropGivenInventory;
    
    UPROPERTY(EditAnywhere)
    float PostAssistAcknowledgeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsPotentialCombatant: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsAlwaysPotentialCombatant: 1;
    
public:
    UTWDCharacterPersonality();
    UFUNCTION(BlueprintPure)
    bool WasTargetFlagSeenSet(ETWDPersonalityTargetInfo Info) const;
    
    UFUNCTION(BlueprintPure)
    bool WasFlagSeenSet(const FTWDPersonalityFlag& FlagStruct) const;
    
    UFUNCTION(BlueprintPure)
    bool WasFirearmFired() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePlayerVoiceComponents();
    
    UFUNCTION(BlueprintCallable)
    void UpdateHearingStimData(TArray<FActorStimData> NewStimData);
    
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UnlockBaseEmotion();
    
    UFUNCTION(BlueprintPure)
    bool TookDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldWarn() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldStandGround() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldShakedown() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldRankPlayersAsHostiles() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldMoveToInvestigate(AActor* Stim) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldHelp() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldFlee() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldCowerCommon() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldCower() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldCommunicate() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldCombat() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldBeg() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldAssignedMove() const;
    
    UFUNCTION(BlueprintImplementableEvent)
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
    
    UFUNCTION(BlueprintPure)
    bool ReceivedRequiredInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void ProcessPlayerAggravation(ATWDPlayerCharacter* Player, bool bPlayerTargeted, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReceivedRequiredInventory();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReactionChanged(ECharacterReaction NewCharacterReaction, ECharacterReaction PreviousCharacterReaction);
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldWarn(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldStandGround(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldShakedown(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldHelp(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldFlee(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldCower(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldCommunicate(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldCombat(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldBeg(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldAssignedMove(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintPure)
    bool NativeShouldAggravate(bool bCallFromBlueprint) const;
    
    UFUNCTION(BlueprintCallable)
    void LockBaseEmotionTo(ECharacterEmotion InEmotion);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool K2_ShouldRunInFleeMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetWalker() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetingMe(ATWDAICharacter* OtherCharacter);
    
    UFUNCTION(BlueprintPure)
    bool IsPotentialCombatant() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsPolite() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPanicked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInIgnoreTargetSelectionList(EFactionReaction Reaction) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterArmed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterAdversary(ATWDAICharacter* OtherCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAttackingMe(ATWDAICharacter* OtherCharacter);
    
    UFUNCTION(BlueprintPure)
    bool IsAlertedToTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlertedTo(const ATWDCharacter* OtherCharacter) const;
    
    UFUNCTION(BlueprintPure)
    bool HasTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool HasPersonalAlert() const;
    
    UFUNCTION(BlueprintCallable)
    float HandlePlayerAggravationEvent(EPlayerAggravationEvent Event);
    
    UFUNCTION(BlueprintCallable)
    float HandlePlayerAggravationCondition(EPlayerAggravationCondition Condition);
    
    UFUNCTION(BlueprintPure)
    EFactionReaction GetTargetPersonalReaction() const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetFactionReputation(EFaction Faction) const;
    
    UFUNCTION(BlueprintPure)
    EFactionReaction GetTargetFactionReaction() const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetTarget() const;
    
    UFUNCTION(BlueprintPure)
    float GetRefireTime() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPotentialAddedAggravation();
    
    UFUNCTION(BlueprintPure)
    EFactionReaction GetPlayerPersonalReaction() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerAggravationLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerAggravationCooloffTime() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlayerAggravationCondition(ATWDPlayerCharacter* PlayerInstigator, EPlayerAggravationCondition Condition) const;
    
    UFUNCTION(BlueprintPure)
    EFactionReaction GetPersonalReaction(const ATWDCharacter* OtherCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    float GetLastPlayerVoiceTime();
    
    UFUNCTION(BlueprintPure)
    float GetLastPlayerAggravationTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastPersonalAlert() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastPanicTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceToTarget() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FString GetDebugAlertPanicReason();
    
public:
    UFUNCTION(BlueprintPure)
    ATWDAIController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    ECharacterReaction GetCharacterReaction() const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    ECharacterEmotion GetBaseEmotion();
    
    UFUNCTION(BlueprintCallable)
    void EnqueuePlayerAggravationEvent(ATWDPlayerCharacter* PlayerInstigator, EPlayerAggravationEvent Event);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DebugShowPlayerAggravationLevelChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearPersonalReactionOverride(ATWDCharacter* OtherCharacter);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanAggravate() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToIgnoreTargetSelectionList(EFactionReaction Reaction);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerAggravationLevel(float AddedAggravation);
    
};

