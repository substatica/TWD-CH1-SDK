#include "TWDAIController.h"
#include "Templates/SubclassOf.h"

class ATWDCharacter;
class AController;
class AActor;
class UTWDAIAssignment;
class ATWDPlayerController;
class ATWDAIController;
class UTWDCharacterPersonality;
class UObject;
class UAISense;

void ATWDAIController::UpdateNearbyCombatAllyAndEnemyLists(TArray<TWeakObjectPtr<ATWDCharacter>> Allies, TArray<TWeakObjectPtr<ATWDCharacter>> Enemies) {
}

void ATWDAIController::StopLogic_Implementation(const FString& reason) {
}

void ATWDAIController::SetSuspicionState_Implementation(ETWDSuspiciousStates State) {
}

void ATWDAIController::SetInCombatWithPlayer(bool bInCombat) {
}

void ATWDAIController::SetFocusLogged(AActor* NewFocus, int32 InPriority, const FString& CallerLogMsg) {
}

void ATWDAIController::SetFocalPointLogged(FVector NewFocus, int32 InPriority, const FString& CallerLogMsg) {
}

void ATWDAIController::SetAssignment(AActor* Assigner, UTWDAIAssignment* NewAssignment) {
}

AActor* ATWDAIController::SelectTarget_Optimized(const TArray<FActorStimData>& PerceptionList, const FActorStimData& MaxHostileSight, const FActorStimData& MaxHostileSound, bool& bFoundTarget) {
    return NULL;
}

void ATWDAIController::ResumeLogic_Implementation(const FString& reason) {
}

void ATWDAIController::RestartLogic_Implementation() {
}

bool ATWDAIController::ReceiveAICommand_Implementation(AController* Sender, ETWDAICommand Command, const FTransform& Transform, AActor* Target) {
    return false;
}

void ATWDAIController::PerformRequestedSuspicionState() {
}

void ATWDAIController::PawnReturnedToPool_Implementation() {
}

void ATWDAIController::PawnAcquiredFromPool_Implementation() {
}

void ATWDAIController::PauseLogic_Implementation(const FString& reason) {
}

void ATWDAIController::OnPawnKilledByPlayer(ATWDPlayerController* PlayerController) {
}

void ATWDAIController::OnPawnKilledByAI(ATWDAIController* AIController) {
}



bool ATWDAIController::K2_IsFollowingAPath() {
    return false;
}


bool ATWDAIController::IsTargetTypeLimited(const FActorStimData& StimData, float& Stimulus, float& StimulusOut) const {
    return false;
}

bool ATWDAIController::IsTargetTypeIgnored(const FActorStimData& StimData) const {
    return false;
}

bool ATWDAIController::IsTargetRankES(ETWDSurvivorTargetRankings TargetType, AActor* TargetActor, UTWDCharacterPersonality* PersonalityIn, const FActorStimData& StimData, ETWDAITieBreaker& TieBreaker) {
    return false;
}

bool ATWDAIController::IsTargetInSight(FBox TargetBox) const {
    return false;
}

bool ATWDAIController::IsRunningLogic() {
    return false;
}

bool ATWDAIController::IsReadyToFire() const {
    return false;
}

bool ATWDAIController::IsFacingTarget(FVector TargetLocation, float AngleTolerance) const {
    return false;
}

void ATWDAIController::IsCurrentTargetAging(bool& bIsTargetAging, bool& bIsTargetValid, bool& bIsTargeHostile, float MinAge) {
}

bool ATWDAIController::IsAssignedTargetConsideredHostile() const {
    return false;
}

bool ATWDAIController::IsAICommandPossessed() const {
    return false;
}

bool ATWDAIController::InCombatWithPlayer() const {
    return false;
}

float ATWDAIController::GetTurnThreshold() const {
    return 0.0f;
}

int32 ATWDAIController::GetTargetRankES(AActor* TargetActor, int32 CurrentRank, UTWDCharacterPersonality* Personality, const FActorStimData& StimData, ETWDAITieBreaker& TieBreaker) {
    return 0;
}

float ATWDAIController::GetSightStim(AActor* SightTarget) {
    return 0.0f;
}

TSubclassOf<UAISense> ATWDAIController::GetSenseClassForStimulus(UObject* WorldContextObject, const FActorStimData& Stimulus) {
    return NULL;
}

TArray<TWeakObjectPtr<ATWDCharacter>> ATWDAIController::GetNearbyCombatAllyList() {
    return TArray<TWeakObjectPtr<ATWDCharacter>>();
}

float ATWDAIController::GetLastEnterCombatWithPlayerTime() const {
    return 0.0f;
}

AActor* ATWDAIController::GetLastAttackerES_Implementation() const {
    return NULL;
}

void ATWDAIController::GetIsNearOuterRing(bool& bNearOuterRing) const {
}

void ATWDAIController::GetIsNearFeedingRing(bool& NearFeedingRing) const {
}

TArray<FActorStimData> ATWDAIController::GetHostileActorStimulusList() {
    return TArray<FActorStimData>();
}

TArray<FActorStimData> ATWDAIController::GetHostileActorSightStimulusList() {
    return TArray<FActorStimData>();
}

TArray<FActorStimData> ATWDAIController::GetHostileActorHearingStimulusList() {
    return TArray<FActorStimData>();
}

float ATWDAIController::GetHearingRadiusModifier() const {
    return 0.0f;
}

float ATWDAIController::GetHearingRadiusFromPlayer() const {
    return 0.0f;
}

AActor* ATWDAIController::GetGameplayFocusActor() const {
    return NULL;
}

FVector ATWDAIController::GetGameplayFocalPoint(bool& IsValid) const {
    return FVector{};
}

float ATWDAIController::GetFacingThreshold() const {
    return 0.0f;
}

ETWDCombatStates ATWDAIController::GetCombatStateES_Implementation() const {
    return ETWDCombatStates::None;
}

FVector ATWDAIController::GetBlackboardLocation(const FBlackboardKeySelector& Key, bool& bIsValid) {
    return FVector{};
}

ATWDCharacter* ATWDAIController::GetAssignedTarget() const {
    return NULL;
}

AActor* ATWDAIController::GetAssignedMoveTarget() const {
    return NULL;
}

EAIBaseGroundMovementSpeedType ATWDAIController::GetAssignedMoveSpeedType() const {
    return EAIBaseGroundMovementSpeedType::Walk;
}

AController* ATWDAIController::GetAICommandPossessor() const {
    return NULL;
}

float ATWDAIController::GetAgeOfSightStim(const AActor* SightTarget) {
    return 0.0f;
}

TArray<FActorStimData> ATWDAIController::GetActorStimulusListWithMax(bool bHostileList, FActorStimData& SightMax, FActorStimData& HostileSightMax, FActorStimData& HearingMax, FActorStimData& HostileHearingMax, ETWDCharacterType CharacterTypeFilter) {
    return TArray<FActorStimData>();
}

TArray<FActorStimData> ATWDAIController::GetActorStimulusList() {
    return TArray<FActorStimData>();
}

TArray<FActorStimData> ATWDAIController::GetActorSightStimulusList() {
    return TArray<FActorStimData>();
}

TArray<FActorStimData> ATWDAIController::GetActorHearingStimulusList() {
    return TArray<FActorStimData>();
}

TArray<FActorStimData> ATWDAIController::GetActorCurrentSightStimulusList() {
    return TArray<FActorStimData>();
}

void ATWDAIController::ForgetCurrentTarget_Implementation() {
}

TArray<ATWDCharacter*> ATWDAIController::FindNearbyCombatEnemies() const {
    return TArray<ATWDCharacter*>();
}

TArray<ATWDCharacter*> ATWDAIController::FindNearbyCombatAllies() const {
    return TArray<ATWDCharacter*>();
}

float ATWDAIController::FindCurrentPathLengthToDest() {
    return 0.0f;
}

FActorStimData ATWDAIController::FindAnyStimulusData(bool& bFound, const AActor* StimTarget, ETWDCharacterType CharacterTypeFilter, bool bHostileStimOnly) const {
    return FActorStimData{};
}

void ATWDAIController::ClearTargetFromStimList(AActor* StimActor) {
}

void ATWDAIController::ClearFocusLogged(int32 InPriority, const FString& CallerLogMsg) {
}

void ATWDAIController::ClearCurrentTarget_Implementation() {
}

void ATWDAIController::ClearAllowedTargetTypesNative() {
}

bool ATWDAIController::ChooseTargetsFromPerceptionListES(const TArray<FActorStimData>& PerceptionList, int32 MinimumTargetRank, int32& BestHasTargetIndex, FActorStimData& PickedStim) {
    return false;
}

bool ATWDAIController::CanSeeTargetThroughStealth(ATWDCharacter* Target) {
    return false;
}

bool ATWDAIController::CanProcessAICommand(AController* Sender) const {
    return false;
}

void ATWDAIController::BuildTargetTypesQuickLookupTable() {
}

bool ATWDAIController::AICommandUnpossess_Implementation(AController* Ctrl) {
    return false;
}

bool ATWDAIController::AICommandPossess_Implementation(AController* Ctrl) {
    return false;
}

void ATWDAIController::AddExternalSightStimulusEventEx(FActorStimData Stim) {
}

void ATWDAIController::AddExternalSightStimulusEventActor(AActor* StimTarget, bool bShareWithAllies) {
}

void ATWDAIController::AddExternalSightStimulusEvent(FActorStimData Stim, bool bShareWithAllies) {
}

ATWDAIController::ATWDAIController() {
    this->TeamNumber = 0;
    this->ExitPoint = NULL;
    this->CrowdFollowRange = 3000.00f;
    this->CrowdFollowExitRange = 4000.00f;
    this->CrowdFollowExitRangeForCombatCircle = 600.00f;
    this->CrowdFollowEnterRangeForCombatCircle = 500.00f;
    this->CrowdFollowRangeCheckTimer = 0.00f;
    this->CrowdFollowRangeCheckTime = 0.25f;
    this->MaxCorpseSuspicion = 0.40f;
    this->UnperceivedSoundMaxAge = 0.50f;
    this->AutoSenseCrouchingPlayerRadius = -1.00f;
    this->AutoSenseCrouchingFrontPlayerRadius = 300.00f;
    this->AutoSenseSprintingPlayerRadius = -1.00f;
    this->AutoSenseRadiusAgainstWalkers = -1.00f;
    this->AutoSenseRadiusAgainstHumans = -1.00f;
    this->bDebugShowShotTransforms = false;
    this->bDebugShowFocus = false;
    this->bDebugDisableAimOffset = false;
    this->bDebugShotFreeze = false;
    this->MaxConeHalfAngle = 45.00f;
    this->bCanBeTrickedByStealth = false;
    this->NearbyCombatAlliesRangeInner = 750.00f;
    this->NearbyCombatAlliesRangeOuter = 2100.00f;
    this->NearbyCombatEnemiesRange = 1000.00f;
    this->PossessedCharacter = NULL;
    this->bUpdateAimOffset = true;
    this->bForceMiss = false;
    this->MinAgeAimOffset = 0.10f;
    this->SharedStimulusLocalAddedAge = 0.50f;
    this->TargetRankCloseRange = 600.00f;
    this->AliveAlliesCount = 0;
    this->AliveEnemiesCount = 0;
    this->DeadAlliesCount = 0;
    this->DeadEnemiesCount = 0;
    this->NearbyCombatAlliesRangeOuterSq = 2250000.00f;
    this->NearbyCombatEnemiesRangeSq = 1000000.00f;
    this->CombatRingID = -1;
    this->NonSignificanceClearStimulusTime = 15.00f;
    this->NonSignficanceTimeStamp = 0.00f;
    this->bIncludeCombatVolumesInNearbyAllies = false;
    this->bIncludeStimListsInNearbyAllies = false;
    this->bSharedStimulusReceptionEnabled = true;
    this->SharedStimulusIncomingMaxAge = 0.49f;
    this->SharedStimulusIncomingStrengthScaleInner = 1.00f;
    this->SharedStimulusIncomingStrengthScaleOuter = 0.66f;
    this->SharedStimulusIncomingMaxStrengthInner = 1.00f;
    this->SharedStimulusIncomingMaxStrengthOuter = 0.66f;
    this->ShareDeathByPlayerMinAge = 0.00f;
    this->ShareDeathByPlayerMaxAge = 0.10f;
    this->ShareDeathByPlayerKillerStrength = 1.00f;
    this->ShareDeathByPlayerKillerAge = 0.00f;
    this->ShareDeathByPlayerUseBodyLocation = true;
    this->ShareDeathByAIMinAge = 0.00f;
    this->ShareDeathByAIMaxAge = 0.10f;
    this->ShareDeathByAIKillerStrength = 1.00f;
    this->ShareDeathByAIKillerAge = 0.00f;
    this->ShareDeathByAIUseBodyLocation = true;
    this->AICommandPossessor = NULL;
    this->UpdateStimulusListInterval = 0.20f;
    this->SharedStimulusNextCheckTimestamp = 0.00f;
    this->bDisableHearingStim = false;
    this->bDisableSightStim = false;
    this->bMustSeeAllyToSharePerception = true;
    this->MaxAllyAgeStimForSharingPerception = 0.50f;
    this->SoundCumulativeStimulusCap = 0.60f;
    this->NormalSightStrengthMultiplier = 1.00f;
    this->SightStrengthMultiplierAgainstAI = 2.00f;
    this->SightStrengthMultiplierPlayerInCombatMode = 5.00f;
    this->HearingRadiusFromPlayer = 0.00f;
    this->HearingRadiusModifier = 1.00f;
    this->TurnThreshold = 50.00f;
    this->FacingThreshold = 10.00f;
    this->ExplosiveDangerAggravationRadius = 250.00f;
    this->CachedSoundTarget = NULL;
    this->CachedSuspicionThreshold = 0.35f;
    this->bUseReactionSystem = false;
    this->RequestedSuspicionState = ETWDSuspiciousStates::None;
    this->PreviousSuspicionState = ETWDSuspiciousStates::Oblivious;
    this->BehaviorTree = NULL;
}

