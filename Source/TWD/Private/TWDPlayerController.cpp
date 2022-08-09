#include "TWDPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UTWDTask;
class UCurveFloat;
class ATWDCharacter;
class ATWDPlayerCharacter;
class ATWDWeaponActor;
class AActor;
class UTWDSubtask;
class UObject;
class UTWDDialogue;
class UAkAudioEvent;
class ATWDMovementTargetActor;
class UPrimitiveComponent;
class ASDIHeldActor;
class ASDIPlayerHand;
class ATWDDismemberDroppedLimb;
class ATWDWeaponGun;
class ATWDPlayerHand;
class ATWDHMDCameraActor;
class UCameraComponent;
class ASDIInventoryActor;

void ATWDPlayerController::ViveRightTurnReleased() {
}

void ATWDPlayerController::ViveRightTurnPressed() {
}

void ATWDPlayerController::ViveLeftTurnReleased() {
}

void ATWDPlayerController::ViveLeftTurnPressed() {
}

bool ATWDPlayerController::UseNonVRMeleeButtonCharge() const {
    return false;
}

void ATWDPlayerController::UpdateTask(TSubclassOf<UTWDTask> Task) {
}

void ATWDPlayerController::UpdateDynamicMusic() {
}

void ATWDPlayerController::UpdateCombatMode() {
}

void ATWDPlayerController::UnFreezeHMDCamera(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade) {
}

void ATWDPlayerController::ToggleSuspicionInfoPanel_Implementation() {
}

void ATWDPlayerController::ToggleInvertAngleOfStrike() {
}

void ATWDPlayerController::ToggleControlMirroring() {
}

void ATWDPlayerController::ToggleControlMapping() {
}

void ATWDPlayerController::StabStarted_Implementation(ATWDPlayerCharacter* Char, ATWDWeaponActor* Weapon) {
}

void ATWDPlayerController::StabEnding_Implementation(ATWDPlayerCharacter* Char, ATWDWeaponActor* Weapon, bool bRemoveWeapon) {
}

void ATWDPlayerController::SimulatePlayerInputResetHMD() {
}

void ATWDPlayerController::SetUIAkRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs) {
}

int32 ATWDPlayerController::SetTimeDilationStruct(FTWDPlayerControllerTimeDilation TimeDilation) {
    return 0;
}

int32 ATWDPlayerController::SetTimeDilation(float TimeDilation, float Duration, UCurveFloat* TimeDilationOverrideCurve, EAlphaBlendOption BlendIn, UCurveFloat* BlendInCurve, float BlendInDuration, EAlphaBlendOption BlendOut, UCurveFloat* BlendOutCurve, float BlendOutDuration, float Delay) {
    return 0;
}

void ATWDPlayerController::SetQuickTurnIncrementDeg(float IncrementDeg) {
}

void ATWDPlayerController::SetPSVRBackwardsMovementMode(int32 Mode) {
}

void ATWDPlayerController::SetLinearTurnSpeedMultiplier(float Speed) {
}

void ATWDPlayerController::SetLinearMovementSpeedMultiplier(float Speed) {
}

void ATWDPlayerController::SetFactionAlerted(EFaction Faction, bool Alert, bool WasHeadshot) {
}

void ATWDPlayerController::SetAutoUpdateCachedUserHeight(bool bUpdate) {
}

void ATWDPlayerController::ServerCheatTogglePauseAI_Implementation() {
}
bool ATWDPlayerController::ServerCheatTogglePauseAI_Validate() {
    return true;
}

void ATWDPlayerController::ServerCheatSetInvisibleToAI_Implementation(bool bInvisibleToAI) {
}
bool ATWDPlayerController::ServerCheatSetInvisibleToAI_Validate(bool bInvisibleToAI) {
    return true;
}

void ATWDPlayerController::ServerCheatSetHealth_Implementation(float Health) {
}
bool ATWDPlayerController::ServerCheatSetHealth_Validate(float Health) {
    return true;
}

void ATWDPlayerController::ServerCheatRushBells_Implementation(float NewDelay) {
}
bool ATWDPlayerController::ServerCheatRushBells_Validate(float NewDelay) {
    return true;
}

void ATWDPlayerController::Server_TWDDurabilityInterface_AlterDurability_Implementation(AActor* Actor, float DurabilityDelta, bool bCanBreak, bool bCanFix) {
}
bool ATWDPlayerController::Server_TWDDurabilityInterface_AlterDurability_Validate(AActor* Actor, float DurabilityDelta, bool bCanBreak, bool bCanFix) {
    return true;
}

void ATWDPlayerController::ResetSubtask(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask) {
}

void ATWDPlayerController::ResetFactionAlertness(EFaction Faction) {
}

void ATWDPlayerController::ResetAllFactionAlertness() {
}

void ATWDPlayerController::ResetAllAlertness() {
}

void ATWDPlayerController::RemoveTopic(FTWDTopic Topic) {
}

void ATWDPlayerController::RemoveTask(TSubclassOf<UTWDTask> Task) {
}

void ATWDPlayerController::RemoveSubtitle(int32 Key) const {
}

void ATWDPlayerController::RemoveDialogueBookmark(TSubclassOf<UTWDDialogue> Dialogue) const {
}

void ATWDPlayerController::RegisterCombatVolumes(ATWDCharacter* OwningCharacter) {
}

void ATWDPlayerController::PostUIAkEvent(UAkAudioEvent* AKEvent) {
}

int32 ATWDPlayerController::PostEventToCharacterAkAudioComponent(UAkAudioEvent* Event, const FString& EventName) {
    return 0;
}

void ATWDPlayerController::OnUnFreezeHMDStart_Implementation(float FadeOutTime, float FadeInTime, bool bApplyRotation, float Yaw, bool bLerpInsteadOfFade) {
}

void ATWDPlayerController::OnUnFreezeHMDEnd_Implementation() {
}




void ATWDPlayerController::OnSuspicionUpdate_Implementation() {
}

void ATWDPlayerController::OnMovementTargetHighlightChanged_Implementation(ATWDMovementTargetActor* Target, UPrimitiveComponent* Component, ATWDMovementTargetActor* PrevTarget, UPrimitiveComponent* PrevComponent) {
}


void ATWDPlayerController::OnHandHeldActorChange(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* HandPtr) {
}

void ATWDPlayerController::OnFreezeHMDCamera_Implementation() {
}

void ATWDPlayerController::OnDismemberedLimb_Implementation(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& DismemberAxis, const FVector& DismemberFlatAxis, const FVector& ImpactVelocity, bool bKillingBlow, bool bWeakpoint, ATWDCharacter* Target, ETWDCharacterHitRegion Region, ATWDDismemberDroppedLimb* DroppedLimb) {
}


void ATWDPlayerController::OnApplyCheatModes_Implementation() {
}

void ATWDPlayerController::NotifySuspicionUpdate(ATWDCharacter* NPC, float SuspicionLevel) {
}

void ATWDPlayerController::NonVRGrappleMinigameStateChanged_Implementation(ATWDPlayerCharacter* Char, ETWDNonVRGrappleMinigameState PrevState, ETWDNonVRGrappleMinigameState NewState, float Duration, float NextDuration) {
}

void ATWDPlayerController::MeleeTargetLocation(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bUseClosestLocation, FVector& RetVal) {
}

void ATWDPlayerController::MeleeTargetIsBetterThan(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal) {
}

void ATWDPlayerController::MeleeTargetFilter(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal) {
}

void ATWDPlayerController::K2_GetPlayerViewPoint(FVector& out_Location, FRotator& out_Rotation) const {
}

bool ATWDPlayerController::IsWeaponStuckOrStabbed(ATWDWeaponActor*& OutWeapon, FHitResult& OutHitInfo, float& OutProgress, float& OutAngle, float& OutRemoval, float& OutInputAngle, float& OutDelay, bool& bOutCharged, bool& bOutWeakpoint, bool& bOutWeakpointIsDiseased, bool& bOutPlayerExtraction) const {
    return false;
}

bool ATWDPlayerController::IsUnfreezingHMDCamera() const {
    return false;
}

bool ATWDPlayerController::IsUnfreezeLerpingHMDCamera() const {
    return false;
}

bool ATWDPlayerController::IsSpecialMeleeActiveDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const {
    return false;
}

bool ATWDPlayerController::IsSpecialMeleeActive(ETWDNonVRMeleeAttackType& OutType) const {
    return false;
}

bool ATWDPlayerController::IsPreparingMeleeAttackDetailed(FTWDNonVRMeleeAttackDetails& OutDetails, bool bFindTarget) const {
    return false;
}

bool ATWDPlayerController::IsPreparingMeleeAttack() const {
    return false;
}

bool ATWDPlayerController::IsPlayingMeleeAttackAnimDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const {
    return false;
}

bool ATWDPlayerController::IsPlayingMeleeAttackAnim() const {
    return false;
}

bool ATWDPlayerController::IsPauseAllowed() {
    return false;
}

bool ATWDPlayerController::IsInActiveCombatVolume() {
    return false;
}

bool ATWDPlayerController::IsHMDCameraFrozen() const {
    return false;
}

bool ATWDPlayerController::IsHipFiring(ATWDWeaponGun*& OutGun) const {
    return false;
}

void ATWDPlayerController::InputStatsTogglePressed() {
}

void ATWDPlayerController::InputStartButtonResetHMD() {
}

void ATWDPlayerController::InputStartButtonReleased() {
}

void ATWDPlayerController::InputStartButtonPressed() {
}

void ATWDPlayerController::InputSloMoTogglePressed() {
}

void ATWDPlayerController::InputPauseReleased() {
}

void ATWDPlayerController::InputPausePressed() {
}

void ATWDPlayerController::InputConfigurableTurnAxis(float Value) {
}

void ATWDPlayerController::IncrementSubtaskValue(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask, int32 Value) {
}

bool ATWDPlayerController::InCombatMode() {
    return false;
}

void ATWDPlayerController::HeldActorPlacedTimerCallback() {
}

bool ATWDPlayerController::HasAlertedFaction(EFaction Faction) const {
    return false;
}

void ATWDPlayerController::HandlePauseNoMenu() {
}

void ATWDPlayerController::HandlePause() {
}

void ATWDPlayerController::HandleCrouch() {
}

bool ATWDPlayerController::GetUnfreezeLerpingHMDCameraTransforms(FTransform& Start, FTransform& End, float& Lerp) const {
    return false;
}

ATWDPlayerHand* ATWDPlayerController::GetTWDPlayerHand(EControllerHand hand) const {
    return NULL;
}

TArray<FTWDTopic> ATWDPlayerController::GetTopics() {
    return TArray<FTWDTopic>();
}

float ATWDPlayerController::GetTimeSinceLastWeaponFired() const {
    return 0.0f;
}

void ATWDPlayerController::GetSeamlessTravelActorListBP_Implementation(bool bToEntry, TArray<AActor*>& ActorList) {
}

ATWDPlayerHand* ATWDPlayerController::GetOtherTWDPlayerHand(EControllerHand hand) const {
    return NULL;
}

ETWDNonVRGrappleMinigameState ATWDPlayerController::GetNonVRGrappleMinigameState(float& OutTimeRemaining, float& OutDuration, float& OutNextDuration) const {
    return ETWDNonVRGrappleMinigameState::None;
}

float ATWDPlayerController::GetMaxSuspicion(ETWDCharacterType& CharacterType, float& StimAge) {
    return 0.0f;
}

float ATWDPlayerController::GetLinearTurnSpeedMultiplier() const {
    return 0.0f;
}

float ATWDPlayerController::GetLinearMovementSpeedMultiplier() const {
    return 0.0f;
}

ATWDHMDCameraActor* ATWDPlayerController::GetHMDCamera(bool bCreate) const {
    return NULL;
}

float ATWDPlayerController::GetFactionReputation(EFaction Faction) const {
    return 0.0f;
}

EFactionReaction ATWDPlayerController::GetFactionReaction(EFaction Faction) const {
    return EFactionReaction::Hated;
}

UCameraComponent* ATWDPlayerController::GetCameraComponent() const {
    return NULL;
}

bool ATWDPlayerController::GetAngleOfStrikeWeakpoint(bool& bOutInRange, FVector& OutLocation, FVector& OutNormal, float& OutAngle, FSDITransformCollisionShape& OutShape, bool& bOutIsDiseased) const {
    return false;
}

void ATWDPlayerController::FreezeHMDCamera(bool bHideHands) {
}

FTransform ATWDPlayerController::FindPausedUILocation() const {
    return FTransform{};
}

void ATWDPlayerController::FailSubtask(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask) {
}

void ATWDPlayerController::EnableSuspicionUpdate(bool bEnable) {
}

void ATWDPlayerController::EnableSpectatorScreenHUD(bool bEnable) const {
}

void ATWDPlayerController::DeRegisterCombatVolumes(ATWDCharacter* OwningCharacter) {
}

int32 ATWDPlayerController::CountTotalInventory(TSubclassOf<ASDIInventoryActor> ClassToCount, bool bIncludeHands, bool bIncludeInventory) const {
    return 0;
}

void ATWDPlayerController::CompleteSubtask(TSubclassOf<UTWDTask> Task, TSubclassOf<UTWDSubtask> Subtask) {
}

bool ATWDPlayerController::CheatIsDemiGod() const {
    return false;
}

bool ATWDPlayerController::CheatInvisibleToAI() const {
    return false;
}

bool ATWDPlayerController::CheatInfiniteStamina() const {
    return false;
}

void ATWDPlayerController::BeginSeamlessTravel(const FString& URL) {
}

void ATWDPlayerController::AOSLockonTargetLocation(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bUseClosestLocation, FVector& RetVal) {
}

void ATWDPlayerController::AOSLockonTargetIsBetterThan(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal) {
}

void ATWDPlayerController::AOSLockonTargetFilter(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool& bRetVal) {
}

void ATWDPlayerController::AlertCharacter(ATWDCharacter* OtherCharacter, EAlertEventSeverity Severity, const FString& DebugCause) {
}

void ATWDPlayerController::AddTopic(FTWDTopic Topic) {
}

UTWDTask* ATWDPlayerController::AddTask(TSubclassOf<UTWDTask> Task, bool bNotifyPlayer) {
    return NULL;
}

int32 ATWDPlayerController::AddSubtitle(const FText& Name, const FText& Subtitle, TArray<FSubtitleSplit> SubtitleSplits, float Duration) const {
    return 0;
}

int32 ATWDPlayerController::AddLineSubtitle(const FText& Name, FDialogueLine DialogueLine, EGender Gender, const FString& VoiceId) const {
    return 0;
}

void ATWDPlayerController::AddFactionReputation(EFaction Faction, float Reputation) {
}

void ATWDPlayerController::AddContext_String(const FString& Key, const FString& Value) {
}

void ATWDPlayerController::AddContext_Int(const FString& Key, int32 Value) {
}

void ATWDPlayerController::AddContext_Float(const FString& Key, float Value) {
}

void ATWDPlayerController::AddContext_Bool(const FString& Key, bool bValue) {
}

void ATWDPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDPlayerController, SuspiciousNPCs);
}

ATWDPlayerController::ATWDPlayerController() {
    this->LinearMovementSpeedMultiplier = 1.00f;
    this->LinearTurnSpeedMultiplier = 1.00f;
    this->NonVRLookUpRate = 90.00f;
    this->NonVRLookRightRate = 90.00f;
    this->HoldTimeForPauseButton = 0.30f;
    this->bEnableSuspicionUpdate = true;
    this->GamePausedUIClass = NULL;
    this->GamePausedUIFailsafeDistance = 100.00f;
    this->GamePausedAudioStartEvent = NULL;
    this->GamePausedAudioStopEvent = NULL;
    this->GoofyModeLowGravityZ = -300.00f;
    this->GoofyModeTurboArmScale = 1.20f;
    this->GoofyModeTurboKarateChopWeaponClass = NULL;
    this->GoofyModeTurboFingerPokeWeaponClass = NULL;
    this->GoofyModeTurboClosedFistWeaponClass = NULL;
    this->LockonDisengageExtraDistance = 384.00f;
    this->LockonCameraBoneNameAOS = TEXT("neck_01");
    this->LockonCameraBoneNameAOSCrouched = TEXT("spine_01");
    this->LockonCameraLimitVelocityScaleCurveAOS = NULL;
    this->LockonCameraLimitChargeAngleAOS = 10.00f;
    this->LockonCameraLimitReturnSpeedCurveAOS = NULL;
    this->LockonCameraLimitNoTargetInputCurveAOS = NULL;
    this->LockonCameraLimitVelocityScaleCurveWeaponStick = NULL;
    this->LockonCameraLimitPullAngleWeaponStick = 10.00f;
    this->LockonCameraLimitReturnSpeedCurveWeaponStick = NULL;
    this->LockonCameraOffsetReturnSpeed = 90.00f;
    this->LockonCameraDismemberDuration = 1.00f;
    this->LockonCameraDismemberEaseOutDuration = 0.50f;
    this->MeleeTargetSearchGeoZOffset = -16.00f;
    this->MeleeTargetBoneName = TEXT("head");
    this->FarFromPauseUICounter = 0;
    this->bFreezeHMDCameraHideHands = false;
    this->GamePausedUIActor = NULL;
    this->GamePausedViewTarget = NULL;
    this->TimeDilationTimer = -1.00f;
    this->TimeDilationStart = 1.00f;
    this->ViveControllerFullMovementSpeed = 1.12f;
    this->bControlsMirrored = false;
    this->bAltControlMapping = false;
    this->bLostVRFocus = false;
    this->LookatAccumulatedDeltaSeconds = 0.00f;
    this->LastWeaponFiredTimestamp = 0.00f;
    this->NonVRWindedGunAimSwayID = 0;
    this->bLockonWeakpointInRange = false;
    this->bDebugRenderingAOSLockon = false;
    this->bUseSmoothTurning = false;
    this->bGameAudioIsPaused = false;
    this->AlertedFactionList.AddDefaulted(4);
    this->MaxTimeBetweenDamageInstancesForAlert = 3.00f;
    this->TrespassingAudioStingEvent = NULL;
    this->TrespassingAudioPlayLoopEvent = NULL;
    this->TrespassingAudioStopLoopEvent = NULL;
    this->bTrespassingMusicPlaying = false;
    this->NPCCombatModeHostilityRange = 1000.00f;
    this->NPCCombatModeMinSuspicion = 0.50f;
    this->NPCCombatAudioStartEvent = NULL;
    this->NPCCombatAudioStopEvent = NULL;
    this->NPCCombatAudioStopDelay = 2.00f;
    this->bNPCCombatAudioStarted = false;
    this->bNPCCombatAudioEnabled = true;
    this->NPCCombatAudioStartTimestamp = 0.00f;
    this->LowReputationThreshold = 50.00f;
    this->HighReputationThreshold = 75.00f;
    this->StingCooldown = 0.00f;
    this->ObliviousToForgivenessStingThreshold = 0.00f;
    this->ObliviousToForgivenessSting = NULL;
    this->SuspiciousToFoundTargetStingThreshold = 0.00f;
    this->SuspiciousToFoundTargetSting = NULL;
    this->FoundTargetMusicLoop = NULL;
    this->EndFoundTargetAKEvent = NULL;
    this->MaxAgeForUnagedStim = 2.00f;
}

