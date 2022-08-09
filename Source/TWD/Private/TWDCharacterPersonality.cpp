#include "TWDCharacterPersonality.h"

class ATWDPlayerCharacter;
class ATWDCharacter;
class AActor;
class ATWDAICharacter;
class ATWDAIController;

bool UTWDCharacterPersonality::WasTargetFlagSeenSet(ETWDPersonalityTargetInfo Info) const {
    return false;
}

bool UTWDCharacterPersonality::WasFlagSeenSet(const FTWDPersonalityFlag& FlagStruct) const {
    return false;
}

bool UTWDCharacterPersonality::WasFirearmFired() const {
    return false;
}


void UTWDCharacterPersonality::UpdateHearingStimData(TArray<FActorStimData> NewStimData) {
}

void UTWDCharacterPersonality::Update(float DeltaSeconds) {
}

void UTWDCharacterPersonality::UnlockBaseEmotion() {
}

bool UTWDCharacterPersonality::TookDamage() const {
    return false;
}





bool UTWDCharacterPersonality::ShouldRankPlayersAsHostiles_Implementation() const {
    return false;
}

bool UTWDCharacterPersonality::ShouldMoveToInvestigate_Implementation(AActor* Stim) const {
    return false;
}



bool UTWDCharacterPersonality::ShouldCowerCommon() const {
    return false;
}







void UTWDCharacterPersonality::SetTarget(ATWDCharacter* NewTarget) {
}

void UTWDCharacterPersonality::SetPlayerAggravationCondition(ATWDPlayerCharacter* PlayerInstigator, EPlayerAggravationCondition Condition, bool bIsSet) {
}

void UTWDCharacterPersonality::SetPersonalReactionOverride(ATWDCharacter* OtherCharacter, EFactionReaction React) {
}

void UTWDCharacterPersonality::SetPersonalAlert(bool Alerted, const FString& DebugReason) {
}

void UTWDCharacterPersonality::SetPanic(const FString& DebugReason) {
}

void UTWDCharacterPersonality::SetFactionAlert(ATWDCharacter* Offender, bool bAlert) {
}

void UTWDCharacterPersonality::SetAttemptingShakedown(bool bIsShakingDown) {
}

bool UTWDCharacterPersonality::ReceivedRequiredInventory() const {
    return false;
}

void UTWDCharacterPersonality::ProcessPlayerAggravation(ATWDPlayerCharacter* Player, bool bPlayerTargeted, float DeltaSeconds) {
}



bool UTWDCharacterPersonality::NativeShouldWarn(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldStandGround(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldShakedown(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldHelp(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldFlee(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldCower(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldCommunicate(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldCombat(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldBeg(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldAssignedMove(bool bCallFromBlueprint) const {
    return false;
}

bool UTWDCharacterPersonality::NativeShouldAggravate(bool bCallFromBlueprint) const {
    return false;
}

void UTWDCharacterPersonality::LockBaseEmotionTo(ECharacterEmotion InEmotion) {
}


bool UTWDCharacterPersonality::IsTargetWalker() const {
    return false;
}

bool UTWDCharacterPersonality::IsTargetPlayer() const {
    return false;
}

bool UTWDCharacterPersonality::IsTargetingMe_Implementation(ATWDAICharacter* OtherCharacter) {
    return false;
}

bool UTWDCharacterPersonality::IsPotentialCombatant() const {
    return false;
}

bool UTWDCharacterPersonality::IsPolite_Implementation() const {
    return false;
}

bool UTWDCharacterPersonality::IsPanicked() const {
    return false;
}

bool UTWDCharacterPersonality::IsInIgnoreTargetSelectionList(EFactionReaction Reaction) const {
    return false;
}

bool UTWDCharacterPersonality::IsCharacterArmed() const {
    return false;
}

bool UTWDCharacterPersonality::IsCharacterAdversary_Implementation(ATWDAICharacter* OtherCharacter) {
    return false;
}

bool UTWDCharacterPersonality::IsAttackingMe_Implementation(ATWDAICharacter* OtherCharacter) {
    return false;
}

bool UTWDCharacterPersonality::IsAlertedToTarget() const {
    return false;
}

bool UTWDCharacterPersonality::IsAlertedTo(const ATWDCharacter* OtherCharacter) const {
    return false;
}

bool UTWDCharacterPersonality::HasTarget() const {
    return false;
}

bool UTWDCharacterPersonality::HasPersonalAlert() const {
    return false;
}

float UTWDCharacterPersonality::HandlePlayerAggravationEvent(EPlayerAggravationEvent Event) {
    return 0.0f;
}

float UTWDCharacterPersonality::HandlePlayerAggravationCondition(EPlayerAggravationCondition Condition) {
    return 0.0f;
}

EFactionReaction UTWDCharacterPersonality::GetTargetPersonalReaction() const {
    return EFactionReaction::Hated;
}

float UTWDCharacterPersonality::GetTargetFactionReputation(EFaction Faction) const {
    return 0.0f;
}

EFactionReaction UTWDCharacterPersonality::GetTargetFactionReaction() const {
    return EFactionReaction::Hated;
}

ATWDCharacter* UTWDCharacterPersonality::GetTarget() const {
    return NULL;
}

float UTWDCharacterPersonality::GetRefireTime() const {
    return 0.0f;
}

float UTWDCharacterPersonality::GetPotentialAddedAggravation() {
    return 0.0f;
}

EFactionReaction UTWDCharacterPersonality::GetPlayerPersonalReaction() const {
    return EFactionReaction::Hated;
}

float UTWDCharacterPersonality::GetPlayerAggravationLevel() const {
    return 0.0f;
}

float UTWDCharacterPersonality::GetPlayerAggravationCooloffTime() const {
    return 0.0f;
}

bool UTWDCharacterPersonality::GetPlayerAggravationCondition(ATWDPlayerCharacter* PlayerInstigator, EPlayerAggravationCondition Condition) const {
    return false;
}

EFactionReaction UTWDCharacterPersonality::GetPersonalReaction(const ATWDCharacter* OtherCharacter) const {
    return EFactionReaction::Hated;
}

float UTWDCharacterPersonality::GetLastPlayerVoiceTime() {
    return 0.0f;
}

float UTWDCharacterPersonality::GetLastPlayerAggravationTime() const {
    return 0.0f;
}

float UTWDCharacterPersonality::GetLastPersonalAlert() const {
    return 0.0f;
}

float UTWDCharacterPersonality::GetLastPanicTime() const {
    return 0.0f;
}

float UTWDCharacterPersonality::GetDistanceToTarget() const {
    return 0.0f;
}

FString UTWDCharacterPersonality::GetDebugAlertPanicReason() {
    return TEXT("");
}

ATWDAIController* UTWDCharacterPersonality::GetController() const {
    return NULL;
}

ECharacterReaction UTWDCharacterPersonality::GetCharacterReaction() const {
    return ECharacterReaction::Flee;
}

ATWDCharacter* UTWDCharacterPersonality::GetCharacter() const {
    return NULL;
}

ECharacterEmotion UTWDCharacterPersonality::GetBaseEmotion() {
    return ECharacterEmotion::Neutral;
}

void UTWDCharacterPersonality::EnqueuePlayerAggravationEvent(ATWDPlayerCharacter* PlayerInstigator, EPlayerAggravationEvent Event) {
}


void UTWDCharacterPersonality::ClearPersonalReactionOverride(ATWDCharacter* OtherCharacter) {
}

bool UTWDCharacterPersonality::CanAggravate_Implementation() const {
    return false;
}

void UTWDCharacterPersonality::AddToIgnoreTargetSelectionList(EFactionReaction Reaction) {
}

void UTWDCharacterPersonality::AddPlayerAggravationLevel(float AddedAggravation) {
}

UTWDCharacterPersonality::UTWDCharacterPersonality() {
    this->MinTargetSeenAge = 0.00f;
    this->MaxTargetSeenAge = 10.00f;
    this->MinTargetSeenStimulus = 0.80f;
    this->MaxPersonalAlertAge = 999999.00f;
    this->PersonalityUpdateEnabledFlags = -1;
    this->bUseShouldCowerCommon = false;
    this->bDebugShowPlayerAggravationLevel = false;
    this->bDebugShowBarks = false;
    this->bDebugShowAlertPanicReason = false;
    this->PlayerAggravationCooloffTime = 5.00f;
    this->PlayerAggravationWeaponConditionRange = 500.00f;
    this->PlayerDeepInCombatVolumeTime = 10.00f;
    this->PlayerAggravationLevel = 0.00f;
    this->LastPlayerAggravationTime = -169999997607218212453866206899682148352.00f;
    this->BaseEmotion = ECharacterEmotion::Neutral;
    this->Archetype = NULL;
    this->Target = NULL;
    this->Character = NULL;
    this->LastPlayerVoice = -169999997607218212453866206899682148352.00f;
    this->bShouldDropGivenInventory = false;
    this->PostAssistAcknowledgeDistance = 200.00f;
    this->bIsPotentialCombatant = true;
    this->bIsAlwaysPotentialCombatant = false;
}

