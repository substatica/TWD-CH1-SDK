#include "TWDCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "GrappleTokenSystem.h"
#include "TWDWaypointPatrolComponent.h"
#include "TWDAutoTickAkComponent.h"
#include "TWDActiveRagdollComponent.h"
#include "TWDDialogueWidgetSnapTarget.h"
#include "TWDRigidBodySleeperComponent.h"
#include "Components/StaticMeshComponent.h"

class ATWDCharacter;
class UAnimSequenceBase;
class ATWDPlayerController;
class ASDIHeldActor;
class ATWDWeaponActor;
class UAnimMontage;
class UObject;
class UDamageType;
class AVolume;
class UTWDCharacterArchetype;
class ASDIInventoryActor;
class UTWDCharacterPersonality;
class ATWDWaypointPath;
class UAkCallbackInfo;
class ATWDDismemberLimbCap;
class USceneComponent;
class UTWDDialogue;
class ATWDPlayerCharacter;
class AController;
class ATWDGripPhysicsActor;
class ATWDGripPhysicsDoor;
class UTexture;
class UPrimitiveComponent;
class UAkAudioEvent;
class AActor;
class ASDIPlayerHand;
class ATWDDismemberDroppedLimb;
class ATWDPlayerInventorySlot;
class ASDIStimAndResponseActor;
class ATWDNotebook;
class ATWDHMDCameraActor;
class UPhysicalMaterial;
class ATWDFlashlight;
class UPhysicsAsset;
class ATWDBackpack;
class ATWDAmmoPouch;
class UTWDWeaponHitCapsuleComponent;
class USDIActiveRagdollComponent;

ETWDCharacterGrappleLocation ATWDCharacter::WhichSideAmIAproachingFrom() const {
    return ETWDCharacterGrappleLocation::Unknown;
}

void ATWDCharacter::WeaponShove_Implementation(ASDIHeldActor* Weapon, const FVector& ShoveDirection, ETWDCharacterHitRegion HitRegion, const FHitResult& HitInfo) {
}

void ATWDCharacter::WeaponEndStab_Implementation(ATWDCharacter* Attacker, ATWDWeaponActor* Weapon) {
}

bool ATWDCharacter::WasVisualHintRecentlyRendered() const {
    return false;
}

void ATWDCharacter::UpdateTrespassing(float DeltaSeconds) {
}

void ATWDCharacter::UpdateStandToCrawlTransition() {
}

void ATWDCharacter::UpdateSkinForDismemberedLimbs() {
}

void ATWDCharacter::UpdateRigidBodyCollisions() {
}

void ATWDCharacter::UpdateDraggedRagdollState() {
}

void ATWDCharacter::UpdateCurrentMaxStaminaValue() {
}

void ATWDCharacter::UpdateCurrentMaxHealthValue() {
}

void ATWDCharacter::UpdateCoughing(float DeltaSeconds) {
}

bool ATWDCharacter::UpdateAttackMoveTargetOffset(float Offset) {
    return false;
}

void ATWDCharacter::UnlockGrappleHandGrips() {
}

void ATWDCharacter::TEST_Splay(FName SplayBoneName, FVector ModelSplayLocationRelBone, FVector ModelSplayDirection, FVector ModelSplayNormal, FName DebugSplayShowMeshBoneName) {
}

bool ATWDCharacter::SupportsDeathPooling() const {
    return false;
}

void ATWDCharacter::StopSlotAnimation(FName SlotName, float BlendOutTime) const {
}

bool ATWDCharacter::StopRagdoll(const bool bAttachToMeshRoot) {
    return false;
}

void ATWDCharacter::StopListeningForResponse() {
}

void ATWDCharacter::StopExchangingItems() {
}

void ATWDCharacter::StopDialogueLine() {
}

void ATWDCharacter::StopAnimMove() {
}

void ATWDCharacter::StopAkAudioComponent() {
}

bool ATWDCharacter::StartRagdoll(const bool bStartImmediately, const bool bWasQueued) {
    return false;
}

void ATWDCharacter::StartDismember_Implementation(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& ImpactVelocity, ETWDCharacterHitRegion Region) {
}

void ATWDCharacter::StartAnimMove(FVector EndLoc, float moveDuration) {
}

void ATWDCharacter::SpawnSeverBouquetElement(FSpawnableBouquetElement& E) {
}

void ATWDCharacter::SpawnSeverBouquet(FVector SeverLocation, FVector SeverForward, FVector SeverUp, FName BoneName, ETWDCharacterHitRegion Region, bool bSpawnDeferred) {
}

void ATWDCharacter::SpawnQueuedDamageFXTimer() {
}

void ATWDCharacter::SpawnQueuedDamageFX(bool bSpawnNewestFirst, bool bSpawnAll) {
}

float ATWDCharacter::SignificanceFunction(UObject* QueryObj, const FTransform& ViewerTransform) {
    return 0.0f;
}

bool ATWDCharacter::ShouldRunFromExplosives() {
    return false;
}

bool ATWDCharacter::ShouldCapSignificance() {
    return false;
}

void ATWDCharacter::SetVoiceId(const FString& NewVoiceId) {
}

void ATWDCharacter::SetStatusIconState(EStatusIconState NewState) {
}

void ATWDCharacter::SetStandGroundVolumes(TArray<AVolume*> Volumes) {
}

bool ATWDCharacter::SetSkinSectionVariants(const TMap<ETWDCharacterSkinSection, FName>& Variants) {
    return false;
}

bool ATWDCharacter::SetSkinSectionVariant(ETWDCharacterSkinSection Section, FName Variant) {
    return false;
}

void ATWDCharacter::SetSignificanceFreeze(bool bFrozen) {
}

void ATWDCharacter::SetRewardInventoryClasses(TArray<TSubclassOf<ASDIInventoryActor>> NewRewardInventoryClasses) {
}

void ATWDCharacter::SetRequiredInventory(TArray<FTWDRequiredInventory> NewRequiredInventory) {
}

void ATWDCharacter::SetPooledDeathState_Implementation(bool bDeathState) {
}

void ATWDCharacter::SetPersonality(TSubclassOf<UTWDCharacterPersonality> NewPersonality) {
}

void ATWDCharacter::SetPatrolPath(ATWDWaypointPath* Path) {
}

void ATWDCharacter::SetInventoryHandFlip(bool bFlipEnabled) {
}

void ATWDCharacter::SetHeadPerturb(bool bEnable) {
}

void ATWDCharacter::SetHeadLookAtTargetComponent(USceneComponent* TargetComponent, FName SocketName) {
}

void ATWDCharacter::SetHeadLookAtLocation(FVector Location) {
}

void ATWDCharacter::SetHandSlotHand(EControllerHand hand) {
}

void ATWDCharacter::SetEnqueuedAssistAcknowledgeTarget(ATWDCharacter* Target) {
}

void ATWDCharacter::SetDialogueRange(float NewDialogueRange) {
}

void ATWDCharacter::SetDialogue(FName Key, TSubclassOf<UTWDDialogue> NewDialogue) {
}

void ATWDCharacter::SetDefaultBarksAllowed(bool bAllowed) {
}

void ATWDCharacter::SetCombatVolumes(TArray<AVolume*> Volumes) {
}

void ATWDCharacter::SetCharacterPose(ECharacterPose Pose) {
}

void ATWDCharacter::SetCharacterGesture(ECharacterGesture Gesture) {
}

void ATWDCharacter::SetCharacterEmotion(ECharacterEmotion Emotion) {
}

void ATWDCharacter::SetCharacterBehavior(ECharacterBehavior Behavior, int32 Flags) {
}

void ATWDCharacter::SetCapsuleShadows(FName BoneName, bool bShadowEnabled) {
}

void ATWDCharacter::SetBeingSeenPerceptionModifier(float Mod) {
}

void ATWDCharacter::SetBaseHealthMax(float NewMaxHealth, bool bRetainCurrentHealthPct, bool bWithHealthUpdatedCallback) {
}

void ATWDCharacter::SetArchetype(TSubclassOf<UTWDCharacterArchetype> NewArchetype) {
}

void ATWDCharacter::SetAngleOfStrikeWeakpointDiseased(bool bDiseased) {
}

void ATWDCharacter::SetAngleOfStrikeWeakpoint(FVector WoundSize, float AngleDeg, float OffsetAngleDeg) {
}

void ATWDCharacter::SetAkAudioComponentSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void ATWDCharacter::SetAkAudioComponentRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs) {
}

void ATWDCharacter::SetAdvancedDismemberDebugInfoScopeEnabled(bool bTrue) {
}

void ATWDCharacter::ServerUpdateGripPhysicsRotation_Implementation(ATWDGripPhysicsActor* GripActor, FRotator NewRotator) {
}
bool ATWDCharacter::ServerUpdateGripPhysicsRotation_Validate(ATWDGripPhysicsActor* GripActor, FRotator NewRotator) {
    return true;
}

void ATWDCharacter::ServerUpdateGripEnableDynamicObstacle_Implementation(ATWDGripPhysicsDoor* GripActor, bool enable) {
}
bool ATWDCharacter::ServerUpdateGripEnableDynamicObstacle_Validate(ATWDGripPhysicsDoor* GripActor, bool enable) {
    return true;
}

void ATWDCharacter::ServerReleaseGrappleTarget_Implementation(ATWDCharacter* GrappleTarget, FVector PushBackDirection) {
}
bool ATWDCharacter::ServerReleaseGrappleTarget_Validate(ATWDCharacter* GrappleTarget, FVector PushBackDirection) {
    return true;
}

void ATWDCharacter::ServerReleaseGrappleAttacker_Implementation(ATWDCharacter* GrappleAttacker, FVector PushBackDirection) {
}
bool ATWDCharacter::ServerReleaseGrappleAttacker_Validate(ATWDCharacter* GrappleAttacker, FVector PushBackDirection) {
    return true;
}

void ATWDCharacter::ServerReleaseGrapple_Implementation(bool bTargets, bool bAttackers) {
}
bool ATWDCharacter::ServerReleaseGrapple_Validate(bool bTargets, bool bAttackers) {
    return true;
}

void ATWDCharacter::ServerGrappleGrabWithHand_Implementation(ATWDCharacter* Other, const FSDITransform_NetQuantize& GrappleRelTransform, EControllerHand GrappleHandEnum, ETWDCharacterGrappleLocation GrappleLocation) {
}
bool ATWDCharacter::ServerGrappleGrabWithHand_Validate(ATWDCharacter* Other, const FSDITransform_NetQuantize& GrappleRelTransform, EControllerHand GrappleHandEnum, ETWDCharacterGrappleLocation GrappleLocation) {
    return true;
}

void ATWDCharacter::ServerAlterStaminaMax_Implementation(float Amount, bool bResetTimers) {
}
bool ATWDCharacter::ServerAlterStaminaMax_Validate(float Amount, bool bResetTimers) {
    return true;
}

void ATWDCharacter::ServerAlterStamina_Implementation(float Amount, bool bAllowExtended, bool bResetTimers) {
}
bool ATWDCharacter::ServerAlterStamina_Validate(float Amount, bool bAllowExtended, bool bResetTimers) {
    return true;
}

void ATWDCharacter::RestoreLimb(ETWDCharacterHitRegion Region) {
}

void ATWDCharacter::RestoreAllLimbs() {
}

void ATWDCharacter::ResetStaminaMax(bool bResetTimers, bool bReplicate) {
}

void ATWDCharacter::ResetAngleOfStrikeWeakpoint() {
}

void ATWDCharacter::RequestDeath() {
}

void ATWDCharacter::RemoveSelfFromAllAIStimLists() {
}

void ATWDCharacter::RemoveRagdollImpulses(bool bCancelVelocity, bool bQueuedDirect, bool bQueuedRadial) {
}

void ATWDCharacter::RemoveContext(const FString& Key) {
}

void ATWDCharacter::ReleaseHeldToken() {
}

void ATWDCharacter::ReleaseGrappleTarget(ATWDCharacter* GrappleTarget, FVector PushBackDirection) {
}

void ATWDCharacter::ReleaseGrappleAttacker(ATWDCharacter* GrappleAttacker, FVector PushBackDirection) {
}

void ATWDCharacter::ReleaseGrapple(bool bTargets, bool bAttackers) {
}

void ATWDCharacter::ReceiveInventory(TArray<FTWDRequiredInventory> InRequiredInventory, const FInventoryReceived& InInventoryReceived, const FInventoryExchanged& InInventoryExchanged) {
}

void ATWDCharacter::ReapplyAngleOfStrikeWeakpoint() {
}

void ATWDCharacter::PostSignificanceFunction_EX(const float oldSignificance, const float newSignificance, bool forceAssignment) {
}

void ATWDCharacter::PostSignificanceFunction(const float oldSignificance, const float newSignificance) {
}

int32 ATWDCharacter::PostEventToAkAudioComponent(UAkAudioEvent* Event, const FString& EventName) {
    return 0;
}

bool ATWDCharacter::PointInsideAngleOfStrikeWeakpointShape(const FVector& Point, bool bIncludeClosestOnCollision) const {
    return false;
}

UAnimMontage* ATWDCharacter::PlaySlotAnimation(UAnimSequenceBase* AnimSequence, FName SlotName, float PlayRate, int32 LoopCount, float InStartTime) const {
    return NULL;
}

void ATWDCharacter::PlayDialogueLineNonDiegetic(const FDialogueLine& DialogueLine, const FDialogueLineFinished& InDialogueLineFinished, bool bIsBark, EDialogueOverlapHandlingMethod OverlapHandlingMethod) {
}

void ATWDCharacter::PlayDialogueLine(const FDialogueLine& DialogueLine, const FDialogueLineFinished& InDialogueLineFinished, bool bIsBark, EDialogueOverlapHandlingMethod OverlapHandlingMethod) {
}

UTWDDialogue* ATWDCharacter::PlayDialogue(TSubclassOf<UTWDDialogue> Dialogue, ATWDPlayerController* DialogueInstigator, const FDialogueFinished& InDialogueFinished) {
    return NULL;
}

void ATWDCharacter::PlayBark(const FString& EventName, const FDialogueLineFinished& InBarkFinished, const FPlayBarkResultCallback& InPlayBarkResultCallback) {
}

void ATWDCharacter::PerformGrappleCooldownEx(ETWDCharacterGrappleLocation GrappleLocation) {
}

void ATWDCharacter::PerformGrappleCooldown(ETWDCharacterGrappleLocation GrappleLocation, bool bSingleArmOnly) {
}

void ATWDCharacter::OnWoundedDeathTimerFinished() {
}



void ATWDCharacter::OnStealthModeDeactivated_Implementation() {
}

void ATWDCharacter::OnStealthModeActivated_Implementation() {
}

void ATWDCharacter::OnStaminaActionFailed_Implementation() {
}

void ATWDCharacter::OnStaminaActionEnded_Implementation() {
}

void ATWDCharacter::OnStabStateChange_Implementation(bool bStabbed, ATWDCharacter* Stabber) {
}

void ATWDCharacter::OnSpeechAudioEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

void ATWDCharacter::OnRep_RepGrappleTargets(const TArray<FTWDCharacterGrappleEntry>& OldRepGrappleTargets) {
}

void ATWDCharacter::OnRep_RepGrappleState(ETWDCharacterGrappleState OldRepGrappleState) {
}

void ATWDCharacter::OnRep_RepGrapplePushBackDirection(const FVector& OldRepGrapplePushBackDirection) {
}

void ATWDCharacter::OnRep_RepGrappleAttackHoldTime(float OldRepGrappleAttackHoldTime) {
}

void ATWDCharacter::OnRep_RepGrappleAttackers(const TArray<FTWDCharacterGrappleEntry>& OldRepGrappleAttackers) {
}

void ATWDCharacter::OnRep_RepCurrentStaminaMax(float OldRepCurrentStaminaMax) {
}

void ATWDCharacter::OnRep_RepCurrentStamina(float OldRepCurrentStamina) {
}

void ATWDCharacter::OnRep_RepCurrentHealth(float OldRepCurrentHealth) {
}

void ATWDCharacter::OnRep_bRepWinded(bool OldbRepWinded) {
}

void ATWDCharacter::OnReceivedInventory() {
}

void ATWDCharacter::OnPersonalSpace_Implementation(AActor* OtherActor) {
}

void ATWDCharacter::OnMeshComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ATWDCharacter::OnKilledCharacter_Implementation(ATWDCharacter* Killed) {
}


void ATWDCharacter::OnHitReaction_Implementation(ETWDCharacterHitRegion Region, FVector DirectionVector, ETWDCharacterHitDirection Direction, AActor* HitReactionInstigator, TSubclassOf<UDamageType> DamageTypeClass, float WithSpeed, float WithMass, bool bHeadshot, bool bHeadshotPenetration) {
}


void ATWDCharacter::OnHitAnimationRegion_Implementation(ETWDCharacterHitRegion Region, FVector_NetQuantizeNormal ShotDirection) {
}

void ATWDCharacter::OnHit(ETWDCharacterHitRegion Region, const FSDIReplicatedDamageData& DamageTakenData) {
}

void ATWDCharacter::OnHealthUpdated_Implementation(float PrevHealth, float NewHealth) {
}

void ATWDCharacter::OnHandNearPocketInternal() {
}

void ATWDCharacter::OnHandNearPocket() {
}

void ATWDCharacter::OnHandExitedPersonalRange(ATWDPlayerCharacter* HandOwner) {
}

void ATWDCharacter::OnHandEnteredPersonalRange(ATWDPlayerCharacter* HandOwner) {
}

void ATWDCharacter::OnGrappleStateChanged_Implementation() {
}

void ATWDCharacter::OnGrappleReleasedTarget_Implementation(ATWDCharacter* GrappleTarget, ETWDCharacterGrappleLocation GrappleLocation) {
}

void ATWDCharacter::OnGrappleReleasedByAttacker_Implementation(ATWDCharacter* GrappleAttacker, ETWDCharacterGrappleLocation GrappleLocation) {
}

void ATWDCharacter::OnGrapplePushBack_Implementation(const FVector& Direction) {
}

void ATWDCharacter::OnGrappleGrabbedTarget_Implementation(ATWDCharacter* GrappleTarget, ETWDCharacterGrappleLocation GrappleLocation) {
}

void ATWDCharacter::OnGrappleGrabbedByAttacker_Implementation(ATWDCharacter* GrappleAttacker, ETWDCharacterGrappleLocation GrappleLocation) {
}

void ATWDCharacter::OnGivenInventoryGrabbed(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* HandPtr) {
}

void ATWDCharacter::OnGivenInventory() {
}

void ATWDCharacter::OnDismemberedLimb_Implementation(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& DismemberAxis, const FVector& DismemberFlatAxis, const FVector& ImpactVelocity, bool bKillingBlow, bool bWeakpoint, ATWDCharacter* Target, ETWDCharacterHitRegion Region, ATWDDismemberDroppedLimb* DroppedLimb) {
}

void ATWDCharacter::OnDialogWidgetIsEnabledCallback(bool bEnabled) {
}

void ATWDCharacter::OnDialogueSelected(const FTWDDialogueOption& DialogueOption) {
}

void ATWDCharacter::OnDialogueFinished(UTWDDialogue* FinishedDialogue, bool bCompleted) {
}

void ATWDCharacter::OnCharacterRevival_Implementation(float NewHealth) {
}

void ATWDCharacter::OnCharacterDeath_Implementation(float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser) {
}

void ATWDCharacter::OnCapsuleComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATWDCharacter::OnBulletNearMiss_Implementation(FVector Location, FVector FlyingDirection, AController* ShootingInstigator, bool IsOtherCharacterDamaged, bool IsLikelyFiredAt) {
}

void ATWDCharacter::OnBarkFinished(const FDialogueLine& DialogueLine, bool bCompleted) {
}

void ATWDCharacter::NonVRWeaponShove_Implementation(ASDIHeldActor* Weapon, const FVector& ShoveDirection) {
}

void ATWDCharacter::NonVROnGrapplePushBackOthers_Implementation() {
}

void ATWDCharacter::MulticastPlaySlotAnimation_Implementation(UAnimSequenceBase* AnimSequence, FName SlotName, float PlayRate, int32 LoopCount, float InStartTime, bool ExecuteOnDedicatedServer) const {
}

void ATWDCharacter::MovementAddControlRotation(FRotator ActorRotDelta, FRotator CtrlRotDelta, bool bApplyYaw, bool bApplyPitch) {
}

float ATWDCharacter::ModifyHealingTaken_Implementation(float HealAmount, TSubclassOf<UDamageType> HealTypeClass, AController* EventInstigator, AActor* HealingCauser) {
    return 0.0f;
}

float ATWDCharacter::ModifyDamageTaken_Implementation(float Damage, TSubclassOf<UDamageType> DamageTypeClass, AController* EventInstigator, AActor* DamageCauser, bool bRadialDamage, const FVector& ShotDirection, const FHitResult& HitInfo, const FVector& ImpactVelocity, bool bHeadshot, bool bHeadshotPenetration) {
    return 0.0f;
}

void ATWDCharacter::MeshOnPhysicsStateChange() {
}

void ATWDCharacter::LimbRestored_Implementation(ETWDCharacterHitRegion Region) {
}

void ATWDCharacter::LimbDismembered_Implementation(ETWDCharacterHitRegion Region, int32 CutBoneIdx, const TArray<int32>& KeepBoneIndices, FVector WoundCenter, FVector WoundForward, FVector WoundUp, bool bDroppedLimb, ATWDDismemberLimbCap* LimbCap, ATWDDismemberDroppedLimb* DroppedLimb, FVector ImpulseDirection, bool bFromCopy, FVector RagdollBodyImpulse, FVector RagdollBodyImpulseLocation, FName RagdollBodyImpulseBone, float SplayDuration) {
}

bool ATWDCharacter::KillCharacterBy(ATWDCharacter* Killer) {
    return false;
}

bool ATWDCharacter::KillCharacter() {
    return false;
}

bool ATWDCharacter::K2IsGrapplingTarget(ATWDCharacter* Target, ETWDCharacterGrappleLocation& OutGrappleLocation) const {
    return false;
}

bool ATWDCharacter::K2IsGrapplingAt(ETWDCharacterGrappleLocation GrappleLocation, TArray<ATWDCharacter*>& OutTargets) const {
    return false;
}

bool ATWDCharacter::K2IsBeingGrappledBy(ATWDCharacter* Attacker, ETWDCharacterGrappleLocation& OutGrappleLocation) const {
    return false;
}

bool ATWDCharacter::K2IsBeingGrappledAt(ETWDCharacterGrappleLocation GrappleLocation, ATWDCharacter*& OutAttacker) const {
    return false;
}

bool ATWDCharacter::K2AttemptDismember_Implementation(ATWDWeaponActor* Weapon, const FTWDWeaponDismemberSettings& Settings, const FHitResult& HitInfo, bool bThrown, const FTransform& CapsuleTransform, const FVector& ImpactVelocity, ETWDCharacterHitRegion Region) {
    return false;
}

bool ATWDCharacter::IsWounded() const {
    return false;
}

bool ATWDCharacter::IsWinded() const {
    return false;
}

bool ATWDCharacter::IsWarnTrespassing() const {
    return false;
}

bool ATWDCharacter::IsTrespassingIconDisplay() const {
    return false;
}

bool ATWDCharacter::IsTrespassing() const {
    return false;
}

bool ATWDCharacter::IsStealthModeActive() const {
    return false;
}

bool ATWDCharacter::IsSignificant() const {
    return false;
}

bool ATWDCharacter::IsSeveredTorsoCrawler() const {
    return false;
}

bool ATWDCharacter::IsRagdollQueued() const {
    return false;
}

bool ATWDCharacter::IsRagdollActiveOrQueued() const {
    return false;
}

bool ATWDCharacter::IsRagdollActive() const {
    return false;
}

bool ATWDCharacter::IsPlayingMeleeAttackAnim() const {
    return false;
}

bool ATWDCharacter::IsPlayingGunActionAnim(ETWDGunAction Action) const {
    return false;
}

bool ATWDCharacter::IsPlayingDialogue() const {
    return false;
}

bool ATWDCharacter::IsPlayingBark() const {
    return false;
}

bool ATWDCharacter::IsParticipateInSleepingAI() const {
    return false;
}

bool ATWDCharacter::IsObstacleBroken() const {
    return false;
}

bool ATWDCharacter::IsNonsignificantUntilRender() const {
    return false;
}

bool ATWDCharacter::IsNeverSignificant() const {
    return false;
}

bool ATWDCharacter::IsLimbDismemberPending(ETWDCharacterHitRegion Region) const {
    return false;
}

bool ATWDCharacter::IsLimbDismembered(ETWDCharacterHitRegion Region) const {
    return false;
}

bool ATWDCharacter::IsInStabState(ATWDCharacter*& OutCharacter, ATWDWeaponActor*& OutWeapon) const {
    return false;
}

bool ATWDCharacter::IsInsideMeleeAttackAnimDamageWindow() const {
    return false;
}

bool ATWDCharacter::IsInGrappleBleedOutState() const {
    return false;
}

bool ATWDCharacter::IsInDialogue() {
    return false;
}

bool ATWDCharacter::IsInBrainedState(ATWDCharacter*& OutCharacter, ATWDWeaponActor*& OutWeapon) const {
    return false;
}

bool ATWDCharacter::IsHoldingAWeapon(EControllerHand hand) const {
    return false;
}

bool ATWDCharacter::IsHeadTracking() const {
    return false;
}

bool ATWDCharacter::IsHeadPerturbing() const {
    return false;
}

bool ATWDCharacter::IsGrapplingSomeone() const {
    return false;
}

bool ATWDCharacter::IsGrappleLocationOnCooldown(ETWDCharacterGrappleLocation GrappleLocation) const {
    return false;
}

bool ATWDCharacter::IsGrappleAttacking() const {
    return false;
}

bool ATWDCharacter::IsExecutingAttackMove(FVector& OutMoveLocation, AActor*& OutMoveTarget, FName& OutMoveTargetSocket, bool& bOutFaceTargetYaw, bool& bOutFaceTargetPitch) const {
    return false;
}

bool ATWDCharacter::IsDraggingSomeone() const {
    return false;
}

bool ATWDCharacter::IsDraggedRagdoll() const {
    return false;
}

bool ATWDCharacter::IsDismemberAllowed() const {
    return false;
}

bool ATWDCharacter::IsDead() const {
    return false;
}

bool ATWDCharacter::IsCharacterWithinDialogueRange(ATWDCharacter* OtherCharacter) const {
    return false;
}

bool ATWDCharacter::IsBreakingObstacle() const {
    return false;
}

bool ATWDCharacter::IsBeingGrappled() const {
    return false;
}

bool ATWDCharacter::IsBeingDragged(ASDIPlayerHand*& OutDragHand, ASDIPlayerHand*& OutOtherDragHand) const {
    return false;
}

bool ATWDCharacter::IsAlwaysSignificant() const {
    return false;
}

void ATWDCharacter::InteractWithObstacle_Implementation(AActor* Obstacle, FVector EdgeOfObstacle, FVector OppositeEdge, bool bIsLedge) {
}

void ATWDCharacter::InputMovementActiveReleased() {
}

void ATWDCharacter::InputMovementActivePressed() {
}

void ATWDCharacter::InitCapsuleShadows() {
}

void ATWDCharacter::IncrementStaminaMax(float Amount, bool bResetTimers, bool bReplicate) {
}

void ATWDCharacter::IncrementStamina(float Amount, bool bAllowExtended, bool bResetTimers, bool bReplicate) {
}

float ATWDCharacter::HealDamage(float HealAmount, TSubclassOf<UDamageType> HealTypeClass, AController* EventInstigator, AActor* HealingCauser) {
    return 0.0f;
}

bool ATWDCharacter::HasSkinArmor(ETWDCharacterHitRegion HitRegion, int32& OutAmount, float& OutTimeSinceDestroyed) const {
    return false;
}

bool ATWDCharacter::HasRewardInventory() const {
    return false;
}

bool ATWDCharacter::HasOuterRingTokenForTarget(ATWDCharacter* OuterRingTarget) const {
    return false;
}

bool ATWDCharacter::HasOuterRingToken() const {
    return false;
}

bool ATWDCharacter::HasFeedingTokenForTarget(ATWDCharacter* FeedingTarget) const {
    return false;
}

bool ATWDCharacter::HasFeedingToken() const {
    return false;
}

bool ATWDCharacter::HasAngleOfStrikeWeakpoint(bool& bOutIsDiseased) const {
    return false;
}

bool ATWDCharacter::GrappleSyncToAttacker() const {
    return false;
}

bool ATWDCharacter::GrappleGrab(ATWDCharacter* Other, ETWDCharacterGrappleLocation GrappleLocation) {
    return false;
}

void ATWDCharacter::GiveInventory(TArray<TSubclassOf<ASDIInventoryActor>> InRewardInventoryClasses, const FInventoryGiven& InInventoryGiven, const FInventoryExchanged& InInventoryExchanged) {
}

float ATWDCharacter::GetWindedRecoveryPct() const {
    return 0.0f;
}

int32 ATWDCharacter::GetWindedGrappleCount() const {
    return 0;
}

UTWDWaypointPatrolComponent* ATWDCharacter::GetWaypointPatrolComponent() {
    return NULL;
}

FBox ATWDCharacter::GetTargetBoxForAIRange() const {
    return FBox{};
}

ETWDSuspiciousStates ATWDCharacter::GetSuspicionState() const {
    return ETWDSuspiciousStates::Oblivious;
}

float ATWDCharacter::GetStealthModeRemainingPercentage() const {
    return 0.0f;
}

float ATWDCharacter::GetStealthModeAppliedPercentage() const {
    return 0.0f;
}

ASDIPlayerHand* ATWDCharacter::GetStabOtherHand() const {
    return NULL;
}

FVector ATWDCharacter::GetStableHeadLocationProxy_Implementation() {
    return FVector{};
}

FName ATWDCharacter::GetSkinSectionVariant(ETWDCharacterSkinSection Section) const {
    return NAME_None;
}

void ATWDCharacter::GetSkinSectionInfo(ETWDCharacterSkinSection Section, int32& OutIndex, FName& OutVariant, TMap<FName, float>& OutScalarParams, TMap<FName, FLinearColor>& OutColorParams, TMap<FName, TSoftObjectPtr<UTexture>>& OutTextureParams, FSDISkinSkeletalMeshSet& OutSkinMeshSet) const {
}

ATWDPlayerInventorySlot* ATWDCharacter::GetRightHipInventorySlot() const {
    return NULL;
}

TArray<TSubclassOf<ASDIInventoryActor>> ATWDCharacter::GetRewardInventoryClasses() const {
    return TArray<TSubclassOf<ASDIInventoryActor>>();
}

TArray<FTWDRequiredInventory> ATWDCharacter::GetRequiredInventory() const {
    return TArray<FTWDRequiredInventory>();
}

TSubclassOf<UTWDDialogue> ATWDCharacter::GetReadyDialogue(FName Key) {
    return NULL;
}

UTWDCharacterPersonality* ATWDCharacter::GetPersonality() const {
    return NULL;
}

float ATWDCharacter::GetPerceptionVisibility() const {
    return 0.0f;
}

float ATWDCharacter::GetPerceptionNoiseLevel() const {
    return 0.0f;
}

float ATWDCharacter::GetPeakStaminaPct() const {
    return 0.0f;
}

FVector ATWDCharacter::GetOuterRingSlotLocation(int32 Index, ATWDCharacter* OuterRingTarget) const {
    return FVector{};
}

float ATWDCharacter::GetOuterRingRadius() const {
    return 0.0f;
}

FVector ATWDCharacter::GetOuterRingLocationBasedOnHeldToken() const {
    return FVector{};
}

int32 ATWDCharacter::GetOuterRingIndexBasedOnHeldToken() const {
    return 0;
}

ASDIStimAndResponseActor* ATWDCharacter::GetObstacleToBreak() {
    return NULL;
}

int32 ATWDCharacter::GetNumOuterRingTokens(const ATWDCharacter* OuterRingTarget) const {
    return 0;
}

int32 ATWDCharacter::GetNumGrappleTargets() const {
    return 0;
}

int32 ATWDCharacter::GetNumGrappleAttackers() const {
    return 0;
}

int32 ATWDCharacter::GetNumFeedingTokens(const ATWDCharacter* FeedingTarget) const {
    return 0;
}

ATWDPlayerInventorySlot* ATWDCharacter::GetNotebookInventorySlot() const {
    return NULL;
}

ATWDNotebook* ATWDCharacter::GetNotebook() {
    return NULL;
}

float ATWDCharacter::GetNoiseLevel() const {
    return 0.0f;
}

float ATWDCharacter::GetMaxStaminaFloor() const {
    return 0.0f;
}

float ATWDCharacter::GetMaxNoiseLevel() const {
    return 0.0f;
}

ATWDPlayerInventorySlot* ATWDCharacter::GetLeftHipInventorySlot() const {
    return NULL;
}

float ATWDCharacter::GetLastTrespassingTime() const {
    return 0.0f;
}

ATWDPlayerInventorySlot* ATWDCharacter::GetInventorySlotByIdx(uint8 slotIdx) const {
    return NULL;
}

ATWDHMDCameraActor* ATWDCharacter::GetHMDCameraActor() const {
    return NULL;
}

ETWDCharacterHitRegion ATWDCharacter::GetHitRegion(FName BoneName) const {
    return ETWDCharacterHitRegion::None;
}

bool ATWDCharacter::GetHitReactSFX(TSubclassOf<UDamageType> DamageType, FTWDHitReactSFX& HitReactSFX) {
    return false;
}

ETWDCharacterGrappleLocation ATWDCharacter::GetHeldTokenLocation() {
    return ETWDCharacterGrappleLocation::Unknown;
}

float ATWDCharacter::GetHealthValue() const {
    return 0.0f;
}

float ATWDCharacter::GetHealthPercentage() const {
    return 0.0f;
}

FVector ATWDCharacter::GetHeadLookAtLocation() {
    return FVector{};
}

bool ATWDCharacter::GetGrappleUIInfo(ETWDCharacterGrappleLocation GrappleLocation, ATWDCharacter*& OutAttacker, float& GrappleStrengthPct, float& GrappleStrugglePct) const {
    return false;
}

UGrappleTokenSystem* ATWDCharacter::GetGrappleTokenSystem() {
    return NULL;
}

ATWDCharacter* ATWDCharacter::GetGrappleTokenHolder(ETWDCharacterGrappleLocation Location) const {
    return NULL;
}

ETWDCharacterGrappleLocation ATWDCharacter::GetGrappleTargetLocation(int32 Index) const {
    return ETWDCharacterGrappleLocation::Unknown;
}

ATWDCharacter* ATWDCharacter::GetGrappleTarget(int32 Index) const {
    return NULL;
}

ETWDCharacterGrappleState ATWDCharacter::GetGrappleState() const {
    return ETWDCharacterGrappleState::None;
}

FVector ATWDCharacter::GetGrappleSlotLocationBasedOnHeldToken() const {
    return FVector{};
}

FVector ATWDCharacter::GetGrappleSlotLocation_Implementation(ETWDCharacterGrappleLocation Location, const ATWDCharacter* TargetCharacter) const {
    return FVector{};
}

float ATWDCharacter::GetGrapplePercent() const {
    return 0.0f;
}

FVector ATWDCharacter::GetGrappleOrientationRightVector_Implementation() const {
    return FVector{};
}

ASDIPlayerHand* ATWDCharacter::GetGrappleHand() const {
    return NULL;
}

FTransform ATWDCharacter::GetGrappleAttackTargetTransform(ATWDCharacter* GrappleAttacker) const {
    return FTransform{};
}

ETWDCharacterGrappleLocation ATWDCharacter::GetGrappleAttackerLocation(int32 Index) const {
    return ETWDCharacterGrappleLocation::Unknown;
}

ATWDCharacter* ATWDCharacter::GetGrappleAttacker(int32 Index) const {
    return NULL;
}

EGender ATWDCharacter::GetGender() const {
    return EGender::Male;
}

UObject* ATWDCharacter::GetFootstepSound_Implementation(UPhysicalMaterial* PhysMat, UObject* CurrentSound) const {
    return NULL;
}

ATWDPlayerInventorySlot* ATWDCharacter::GetFlashlightInventorySlot() const {
    return NULL;
}

ATWDFlashlight* ATWDCharacter::GetFlashlight() {
    return NULL;
}

FVector ATWDCharacter::GetFeedingSlotLocation(int32 Index, ATWDCharacter* FeedingTarget) const {
    return FVector{};
}

float ATWDCharacter::GetFeedingRingRadius() const {
    return 0.0f;
}

FVector ATWDCharacter::GetFeedingLocationBasedOnHeldToken() const {
    return FVector{};
}

int32 ATWDCharacter::GetFeedingIndexBasedOnHeldToken() const {
    return 0;
}

EFaction ATWDCharacter::GetFaction() const {
    return EFaction::None;
}

ATWDCharacter* ATWDCharacter::GetEnqueuedAssistAcknowledgeTarget() {
    return NULL;
}

ETWDCharacterHitRegion ATWDCharacter::GetDismemberRegion(FName BoneName) const {
    return ETWDCharacterHitRegion::None;
}

float ATWDCharacter::GetDialogueRange() const {
    return 0.0f;
}

TSubclassOf<UTWDDialogue> ATWDCharacter::GetDialogue(FName Key) {
    return NULL;
}

TSubclassOf<UTWDCharacterArchetype> ATWDCharacter::GetDesiredArchetypeBlueprint_Implementation() const {
    return NULL;
}

UPhysicsAsset* ATWDCharacter::GetDefaultPhysicsAsset() const {
    return NULL;
}

ATWDCharacter* ATWDCharacter::GetCurrentTarget() const {
    return NULL;
}

float ATWDCharacter::GetCurrentStaminaPct() const {
    return 0.0f;
}

float ATWDCharacter::GetCurrentStaminaMax() const {
    return 0.0f;
}

float ATWDCharacter::GetCurrentStamina() const {
    return 0.0f;
}

float ATWDCharacter::GetCurrentSicknessMaxHealthPenalty() const {
    return 0.0f;
}

float ATWDCharacter::GetCurrentPeakMaxStamina() const {
    return 0.0f;
}

float ATWDCharacter::GetCurrentPeakMaxHealthValue() const {
    return 0.0f;
}

float ATWDCharacter::GetCurrentMaxStaminaPct() const {
    return 0.0f;
}

float ATWDCharacter::GetCurrentMaxHealthValue() const {
    return 0.0f;
}

TArray<ETWDCharacterGrappleLocation> ATWDCharacter::GetCurrentGrappleTokenLocations() {
    return TArray<ETWDCharacterGrappleLocation>();
}

TSubclassOf<ATWDCharacter> ATWDCharacter::GetCorpseCleanupSpawnWalkerClass_Implementation(EFaction CorpseFaction) const {
    return NULL;
}

ETWDCharacterType ATWDCharacter::GetCharacterType() const {
    return ETWDCharacterType::Unknown;
}

bool ATWDCharacter::GetCharacterBehaviorFlag(ECharacterBehaviorFlags Flag) const {
    return false;
}

ECharacterBehavior ATWDCharacter::GetCharacterBehavior() const {
    return ECharacterBehavior::Neutral;
}

float ATWDCharacter::GetBeingSeenPerceptionModifier() const {
    return 0.0f;
}

float ATWDCharacter::GetBaseMaxHealthValue() const {
    return 0.0f;
}

float ATWDCharacter::GetBaseHealthPercentage() const {
    return 0.0f;
}

ATWDPlayerInventorySlot* ATWDCharacter::GetBackpackInventorySlot() const {
    return NULL;
}

ATWDBackpack* ATWDCharacter::GetBackpack() {
    return NULL;
}

ATWDPlayerInventorySlot* ATWDCharacter::GetBackInventorySlot() const {
    return NULL;
}

UTWDCharacterArchetype* ATWDCharacter::GetArchetype() const {
    return NULL;
}

FSDITransformCollisionShape ATWDCharacter::GetAngleOfStrikeWeakpointShape() const {
    return FSDITransformCollisionShape{};
}

bool ATWDCharacter::GetAngleOfStrikeWeakpoint(FVector& OutLocation, FVector& OutNormal, float& OutAngle, FSDITransformCollisionShape& OutShape, bool& bOutIsDiseased) const {
    return false;
}

ATWDAmmoPouch* ATWDCharacter::GetAmmoPouch() {
    return NULL;
}

bool ATWDCharacter::GetAdvancedDismemberDebugInfoScopeEnabled() {
    return false;
}

void ATWDCharacter::ForwardMeleeAttackOver() {
}

void ATWDCharacter::ForwardMeleeAttack(float Duration, float Distance) {
}

bool ATWDCharacter::ExecuteAttackMoveLocation(const FVector& TargetLocation, float Time, float MaxSpeed, float Offset, bool bFaceTargetYaw, bool bFaceTargetPitch, FRotator MaxRotVel, float HoldTime, bool bCancelVelocityOnExit) {
    return false;
}

bool ATWDCharacter::ExecuteAttackMoveActor(AActor* MoveTarget, FName MoveTargetSocket, float Time, float MaxSpeed, float Offset, bool bFaceTargetYaw, bool bFaceTargetPitch, FRotator MaxRotVel, float HoldTime, bool bCancelVelocityOnExit, bool bPredictTargetVelocity, bool bOffsetIgnoreCollisions) {
    return false;
}

bool ATWDCharacter::ExecuteAttackMove(const FVector& TargetLocation, AActor* MoveTarget, FName MoveTargetSocket, float Time, float MaxSpeed, float Offset, bool bFaceTargetYaw, bool bFaceTargetPitch, FRotator MaxRotVel, float HoldTime, bool bCancelVelocityOnExit, bool bPredictTargetVelocity, bool bOffsetIgnoreCollisions) {
    return false;
}

void ATWDCharacter::EnableVisualHint(bool bEnable) {
}

void ATWDCharacter::EnableHealthRegen(bool enable) {
}

void ATWDCharacter::EnableHandSlot(bool bEnable) const {
}

void ATWDCharacter::EnableAngleOfStrikeWeakpoint(bool bEnabled) {
}


bool ATWDCharacter::DoesRequireInventory() const {
    return false;
}

bool ATWDCharacter::DismemberLimb(ETWDCharacterHitRegion Region, FName WoundBoneName, FVector WoundCenter, FVector WoundForward, FVector WoundUp, bool bDropLimb, AController* EventInstigator, ATWDWeaponActor* Weapon, UTWDWeaponHitCapsuleComponent* DismemberCapsule, FVector ActorSpaceImpulseDirection, bool bFromCopy, float Delay, float SplayDuration) {
    return false;
}

void ATWDCharacter::DisableHeadTracking() {
}

void ATWDCharacter::DisableCapsuleCollision_Implementation() {
}

void ATWDCharacter::DepleteGrappleHandStruggleStrength() {
}

void ATWDCharacter::DecrementStaminaMax(float Amount, bool bResetTimers, bool bReplicate) {
}

void ATWDCharacter::DecrementStamina(float Amount, bool bResetTimers, bool bReplicate) {
}

FString ATWDCharacter::DebugGetRecentBarkEvents() {
    return TEXT("");
}


void ATWDCharacter::ClientGrappleGrabWithHandFail_Implementation(ATWDCharacter* Other, ETWDCharacterGrappleLocation GrappleLocation) {
}

void ATWDCharacter::ClientAlterStaminaMax_Implementation(float Amount, bool bResetTimers) {
}

void ATWDCharacter::ClientAlterStamina_Implementation(float Amount, bool bAllowExtended, bool bResetTimers) {
}

void ATWDCharacter::CheckForSignificanceChange() {
}

bool ATWDCharacter::CanStealGrappleToken_Implementation(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Stealer) const {
    return false;
}

bool ATWDCharacter::CanReviveFromHeal_Implementation(float HealAmount, TSubclassOf<UDamageType> HealTypeClass, AController* EventInstigator, AActor* HealingCauser) {
    return false;
}

bool ATWDCharacter::CanReapplyNonsignificantUntilRender(const FTransform& ViewerTransform) {
    return false;
}

bool ATWDCharacter::CanGrappleTarget(const ATWDCharacter* Target, bool bAllowStealing, TArray<ETWDCharacterGrappleLocation>& OutValidGrappleLocations) const {
    return false;
}

bool ATWDCharacter::CanGetOuterRingTokenOnTarget(const ATWDCharacter* OuterRingTarget, TArray<int32>& OutValidOuterRingIndexes) const {
    return false;
}

bool ATWDCharacter::CanGetFeedingTokenOnTarget(const ATWDCharacter* FeedingTarget, TArray<int32>& OutValidFeedingIndexes) const {
    return false;
}

bool ATWDCharacter::CanDismemberLimb_Implementation(ETWDCharacterHitRegion Region) const {
    return false;
}

bool ATWDCharacter::CanDieFromDamage_Implementation(float PreDeathHealth, float Damage, TSubclassOf<UDamageType> DamageTypeClass, AController* EventInstigator, AActor* DamageCauser, bool bRadialDamage, const FVector& ShotDirection, const FHitResult& HitInfo, const FVector& ImpactVelocity, bool bHeadshot, bool bHeadshotPenetration) {
    return false;
}

void ATWDCharacter::CancelGrappleAttack() {
}

void ATWDCharacter::CancelAttackMove() {
}

bool ATWDCharacter::CanCallBehaviorEvent(FName EventName) const {
    return false;
}

bool ATWDCharacter::CanBeGrappledByHand_Implementation(ASDIPlayerHand* hand, ESDIInteractRangeType RangeType) const {
    return false;
}

bool ATWDCharacter::CanBeGrappledBy(const ATWDCharacter* Attacker, bool bAllowStealing, TArray<ETWDCharacterGrappleLocation>& OutValidGrappleLocations) const {
    return false;
}

void ATWDCharacter::CallBehaviorEvent(FName EventName) {
}

void ATWDCharacter::BreaksStealthForViewers() {
}

bool ATWDCharacter::BeginGrappleAttack(float Speed, float HoldDuration) {
    return false;
}

void ATWDCharacter::BeginBreakingObstacle(ASDIStimAndResponseActor* Obstacle, bool bIsAssisting) {
}

bool ATWDCharacter::AmIOnTheCorrectGrappleSide() const {
    return false;
}

void ATWDCharacter::AlterStaminaMax(float Amount, bool bResetTimers, bool bReplicate) {
}

void ATWDCharacter::AlterStamina(float Amount, bool bAllowExtended, bool bResetTimers, bool bReplicate) {
}

float ATWDCharacter::AlterSickness(float Delta, ESicknessSourceType SourceType) {
    return 0.0f;
}

void ATWDCharacter::AlterBaseHealthMax(float Amount, bool bRetainCurrentHealthPct, bool bWithHealthUpdatedCallback) {
}

bool ATWDCharacter::AllowWeaponShove_Implementation(ASDIHeldActor* Weapon, const FVector& ShoveDirection, ETWDCharacterHitRegion HitRegion, const FHitResult& HitInfo) const {
    return false;
}

bool ATWDCharacter::AllowStaminaRecovery(float DeltaTime) {
    return false;
}

bool ATWDCharacter::AllowNonVRWeaponShove_Implementation(ASDIHeldActor* Weapon, const FVector& ShoveDirection) const {
    return false;
}

bool ATWDCharacter::AkAudioComponentHasActiveEvents() const {
    return false;
}

bool ATWDCharacter::AddRagdollRadialImpulse(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange) {
    return false;
}

bool ATWDCharacter::AddRagdollImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName) {
    return false;
}

bool ATWDCharacter::AddRagdollImpulse(FVector Impulse, FName BoneName, bool bVelChange) {
    return false;
}

void ATWDCharacter::AddContext_String(const FString& Key, const FString& Value) {
}

void ATWDCharacter::AddContext_Int(const FString& Key, int32 Value) {
}

void ATWDCharacter::AddContext_Float(const FString& Key, float Value) {
}

void ATWDCharacter::AddContext_Bool(const FString& Key, bool bValue) {
}

void ATWDCharacter::ActiveRagdollComponentDeactivated(AActor* Actor, USDIActiveRagdollComponent* Comp) {
}

void ATWDCharacter::ActiveRagdollComponentActivated(AActor* Actor, USDIActiveRagdollComponent* Comp) {
}

bool ATWDCharacter::AcquireOuterRingToken(int32 Index, bool bAllowStealing, ATWDCharacter* OuterRingTarget) {
    return false;
}

bool ATWDCharacter::AcquireGrappleToken(ETWDCharacterGrappleLocation Location, ATWDCharacter* GrappleTarget) {
    return false;
}

bool ATWDCharacter::AcquireFeedingToken(int32 Index, bool bAllowStealing, ATWDCharacter* FeedingTarget) {
    return false;
}

void ATWDCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDCharacter, bRepIsHeadTracking);
    DOREPLIFETIME(ATWDCharacter, RepLookAtLocation);
    DOREPLIFETIME(ATWDCharacter, RepLookAtTargetComponent);
    DOREPLIFETIME(ATWDCharacter, RepLookAtTargetSocket);
    DOREPLIFETIME(ATWDCharacter, RepGrappleAttackers);
    DOREPLIFETIME(ATWDCharacter, RepGrappleTargets);
    DOREPLIFETIME(ATWDCharacter, RepGrappleHand);
    DOREPLIFETIME(ATWDCharacter, RepGrappleRelTransform);
    DOREPLIFETIME(ATWDCharacter, RepGrappleState);
    DOREPLIFETIME(ATWDCharacter, RepGrapplePushBackDirection);
    DOREPLIFETIME(ATWDCharacter, bRepGrappleAttacking);
    DOREPLIFETIME(ATWDCharacter, RepGrappleAttackSpeed);
    DOREPLIFETIME(ATWDCharacter, RepGrappleAttackHoldTime);
    DOREPLIFETIME(ATWDCharacter, RepPerceptionVisibility);
    DOREPLIFETIME(ATWDCharacter, RepCurrentStaminaMax);
    DOREPLIFETIME(ATWDCharacter, RepCurrentStamina);
    DOREPLIFETIME(ATWDCharacter, bRepWinded);
    DOREPLIFETIME(ATWDCharacter, bRepBreakingObstacle);
    DOREPLIFETIME(ATWDCharacter, bRepHelpingBreakObstacle);
    DOREPLIFETIME(ATWDCharacter, RepObstacleToBreak);
    DOREPLIFETIME(ATWDCharacter, CoverState);
    DOREPLIFETIME(ATWDCharacter, IsAttacking);
    DOREPLIFETIME(ATWDCharacter, RepCurrentHealth);
}

ATWDCharacter::ATWDCharacter() {
    this->AkAudioComponent = CreateDefaultSubobject<UTWDAutoTickAkComponent>(TEXT("AkAudioComponent"));
    this->SpeechAudioComponent = CreateDefaultSubobject<UTWDAutoTickAkComponent>(TEXT("SpeechAudioComponent"));
    this->ActiveRagdollComponent = CreateDefaultSubobject<UTWDActiveRagdollComponent>(TEXT("ActiveRagdollComponent"));
    this->RigidBodySleeperComponent = CreateDefaultSubobject<UTWDRigidBodySleeperComponent>(TEXT("RigidBodySleeperComponent"));
    this->VisualHint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualHint"));
    this->VisualHintSwapTime = 0.00f;
    this->WalkerProximityAudioRTPC = TEXT("Walker_Proximity");
    this->WalkerProximityAudioStealthStateGroup = TEXT("GutsMode");
    this->WalkerProximityAudioStealthStateOn = TEXT("On");
    this->WalkerProximityAudioStealthStateOff = TEXT("Off");
    this->WalkerProximityAudioMaxRange = 5000.00f;
    this->ShouldOverrideGenderAndVoice = false;
    this->Faction = EFaction::None;
    this->Gender = EGender::Male;
    this->bDefaultBarksAllowed = false;
    this->ArchetypeBlueprint = NULL;
    this->CharacterHandSlotBlueprint = NULL;
    this->TargetPriorityOverride = ETWDCharacterTargetPriorityOverride::None;
    this->PatrolPath = NULL;
    this->WaypointPatrolComponent = CreateDefaultSubobject<UTWDWaypointPatrolComponent>(TEXT("WaypointPatrolComponent"));
    this->SightLightCurveNormalFactor = 2.00f;
    this->BeingSeenPerceptionModifier = 1.00f;
    this->DragPullMaxHandSpeed = 64.00f;
    this->DragGrabHandSpeed = 256.00f;
    this->GrappleMoveLocationOffset = 30.00f;
    this->GrappleMoveLocationLeftAngle = -45.00f;
    this->GrappleMoveLocationRightAngle = 45.00f;
    this->GrappleTokenLocations.AddDefaulted(3);
    this->NonVRGrappleTokenLocations.AddDefaulted(1);
    this->MaxFeederTokens = 4;
    this->MaxOuterRingTokens = 8;
    this->bCrawlingTemp = false;
    this->HeldToken = NULL;
    this->GrappleGripCollision = NULL;
    this->GrappleBleedOutTime = 2.00f;
    this->GrappleLoopFeedback = NULL;
    this->bHideGrappleHandTrackedMesh = false;
    this->bGrappleSyncToAttacker = true;
    this->GrappleSyncTranslationSpeed = 128.00f;
    this->GrappleSyncHMDTranslationSpeed = 128.00f;
    this->GrappleSyncHMDRotationSpeed = 360.00f;
    this->GrappleSyncHMDMaxYawOffsetDeg = 30.00f;
    this->GrappleSyncRotationSpeedDeg = 360.00f;
    this->GrappleSyncRotationBlend = EAlphaBlendOption::Linear;
    this->bGrappleSyncRotationFadeOut = false;
    this->GrappleSyncRotationFadeOutTime = 0.50f;
    this->GrappleSyncRotationFadeOutMinAngleDeg = 45.00f;
    this->GrappleSyncRotationBlendCustomCurve = NULL;
    this->NonVRGrappleSyncRotationSpeedDeg = 180.00f;
    this->NonVRGrappleCrawlCameraPitchTarget = -45.00f;
    this->GrappleGrabFistDamageTimeThreshold = 0.15f;
    this->GrappleGrabAxis = ESDIAxis::NegX;
    this->bGrappleCanPushBack = false;
    this->GrappleGripTargetStaminaRate = 5.00f;
    this->GrappleAttackerHeadStaminaStart = 5.00f;
    this->GrappleAttackerArmStaminaStart = 5.00f;
    this->NonVRGrappleAttackInitialStamina = 10.00f;
    this->NonVRGrappleAttackStamina = 10.00f;
    this->GrappleIgnorePushBackBreakMoveDuration = 0.15f;
    this->GrappleCooldownTime = 0.00f;
    this->GrappleLeftArmCooldownTimestamp = 0.00f;
    this->GrappleRightArmCooldownTimestamp = 0.00f;
    this->GrappleNeckCooldownTimestamp = 0.00f;
    this->GrappleCooldownRegrowthTime = 0.00f;
    this->bGrappleReleaseCooldownSingleArmOnly = false;
    this->bStabGrappleCooldownSingleArmOnly = false;
    this->bGrabHeadGrappleCooldownSingleArmOnly = false;
    this->GrappleAdditionalLockHandDurationAfterRelease = 0.25f;
    this->GrappleAttackPushBackCurve = NULL;
    this->GrappleAttackPushBackAngleDistancePctExp = 2.00f;
    this->GrappleAttackPushBackBreakPercent = -999.00f;
    this->GrappleAttackPushBackMoveBreakPercent = -0.50f;
    this->GrappleAttackPushBackBreakLoopFeedbackPercent = -0.75f;
    this->GrappleAttackPushBackBreakMaxTimeSinceBreakMove = 0.15f;
    this->GrappleAttackAdditionalLockHandDurationAfterRelease = 0.25f;
    this->GrappleHandShoulderLockArmLengthMultiplier = 1.00f;
    this->GrappleHandShoulderLockAdditionalArmLength = 16.00f;
    this->GrappleAttackHoldDOTClass = NULL;
    this->GrappleAttackLoopFeedback = NULL;
    this->GrappleAttackHoldLoopFeedback = NULL;
    this->GrappleAttackPushBackGrabFeedback = NULL;
    this->GrappleAttackPushBackLoopFeedback = NULL;
    this->GrappleAttackPushBackBreakLoopFeedback = NULL;
    this->GrapplePushBackDistance = 0.00f;
    this->GrapplePushBackTime = 0.00f;
    this->GrappleFailsafeReleaseDistance = 150.00f;
    this->GrappleHandStruggleDelay = 0.50f;
    this->GrappleHandStruggleInterpTime = 0.50f;
    this->GrappleHandStruggleMaxStrength = 100.00f;
    this->GrappleHandStruggleStrengthRecovery = 20.00f;
    this->GrappleHandStruggleStrengthRecoveryDamageDelay = 0.50f;
    this->MaxGrappleHandStruggleBreakAngle = 0.00f;
    this->MaxGrappleHandStrugglePushBackAngle = 45.00f;
    this->GrappleHandStruggleLockRollDeg = 0.00f;
    this->GrappleHandStruggleStartFeedback = NULL;
    this->GrappleHandStrugglePushOffFeedback = NULL;
    this->GrappleHandStruggleLoopFeedback = NULL;
    this->bCanGrapplePlayerHead = false;
    this->bCanGrapplePlayerBothArms = false;
    this->PlayerHeadGrappleSyncVerticalOffset = 0.00f;
    this->PlayerHeadGrappleSyncVerticalTranslationSpeed = 16.00f;
    this->GrappleNeckDeltaDistance = 0.00f;
    this->FeedingMoveLocationOffset = 100.00f;
    this->OuterRingMoveLocationOffset = 200.00f;
    this->StabLoopParticleSystem = NULL;
    this->StabMovementParticleSystem = NULL;
    this->StabMeleeDurabilityModifier = 1.00f;
    this->DismemberMeleeDurabilityModifier = 1.00f;
    this->HitMeleeDurabilityModifier = 1.00f;
    this->bInStabState = false;
    this->bSkipDeathBarkDueToHeadDamage = false;
    this->WoundedDeathDelay = 10.00f;
    this->bSeveredTorsoCrawlAllowed = false;
    this->bSupportAdvancedDismember = false;
    this->bSupportAdvancedDismemberDebugInfo = false;
    this->bAdvancedDismemberDebugInfoScopeEnabled = false;
    this->FallDamageMinSpeed = 0.00f;
    this->FallDamageAKEvent = NULL;
    this->FallDamageTypeClass = NULL;
    this->StealthModeDuration = 30.00f;
    this->StealthModeActivationApplicationCount = 3;
    this->StealthModeApplicationProgress = 0.00f;
    this->StealthModeApplicationDecayRate = 0.05f;
    this->StealthModeApplicationFalloffTime = 10.00f;
    this->StealthModeFootstepSound = NULL;
    this->HeadThreatRadius = 50.00f;
    this->TrespassExitTimeThreshold = 0.50f;
    this->TrespassEnterIconTimeThreshold = 0.25f;
    this->bRepIsHeadTracking = false;
    this->RepLookAtTargetComponent = NULL;
    this->bIsHeadPerturbing = false;
    this->HeadLookAtOffsetAngle = 30.00f;
    this->HeadLookAtOffsetPeriod = 1.00f;
    this->HeadLookAtOffsetTime = 0.00f;
    this->MaxStamina = 100.00f;
    this->MaxStaminaFloorPct = 0.50f;
    this->MaxStaminaDecayFactor = 0.05f;
    this->StaminaRecoveryRateMultiplier = 1.00f;
    this->IdleWindedStaminaRecoveryRateMultiplier = 1.00f;
    this->MovingWindedStaminaRecoveryRateMultiplier = 0.50f;
    this->WindedStamina = 20.00f;
    this->ExtendedStaminaDecayRateMultiplier = 0.00f;
    this->StaminaCostMultiplier = 1.00f;
    this->StaminaBenefitMultiplier = 1.00f;
    this->MaxStaminaCostMultiplier = 1.00f;
    this->MaxStaminaBenefitMultiplier = 1.00f;
    this->SprintStaminaRate = 5.00f;
    this->GrappleGripStaminaRate = 5.00f;
    this->GrappleHandStrugglePushOffStamina = 0.00f;
    this->GrappleHandAttackPushOffStamina = 0.00f;
    this->GrappleHandPushOffStamina = 0.00f;
    this->ClimbingOneHandStaminaRate = 3.00f;
    this->ClimbingTwoHandStaminaRate = 1.00f;
    this->ClimbingConsumeStaminaElevation = 16.00f;
    this->MantleUpStaminaCost = 10.00f;
    this->MantleOverStaminaCost = 10.00f;
    this->StaminaConsumeEventMinTime = 0.75f;
    this->StaminaRecoveryEventMinTime = 0.75f;
    this->StaminaIdleEventMinTime = 0.75f;
    this->StaminaConsumeStartEvent = NULL;
    this->StaminaConsumeLoopEvent = NULL;
    this->StaminaConsumeLoopStopEvent = NULL;
    this->StaminaWindedStartEvent = NULL;
    this->StaminaWindedLoopEvent = NULL;
    this->StaminaWindedLoopStopEvent = NULL;
    this->StaminaWindedEndEvent = NULL;
    this->StaminaRecoveryStartEvent = NULL;
    this->StaminaRecoveryLoopEvent = NULL;
    this->StaminaRecoveryLoopStopEvent = NULL;
    this->StaminaIdleStartEvent = NULL;
    this->StaminaIdleLoopEvent = NULL;
    this->StaminaIdleLoopStopEvent = NULL;
    this->StaminaActionFailedEvent = NULL;
    this->StaminaActionEndedEvent = NULL;
    this->MeshComponentHitHistoryDuration = 0.50f;
    this->SprintInputDoubletapMaxTime = 0.33f;
    this->UVFlashlightToggleInputDoubletapMaxTime = 0.33f;
    this->bTouchMovementActive = false;
    this->bSprintButtonHeld = false;
    this->bMovementInputActive = false;
    this->LastTimeSprintInputHeldDownStart = 0.00f;
    this->LastTimeUVFlashlightToggleInputHeldDownStart = 0.00f;
    this->bCtrlPhysicalCrouch = false;
    this->bCrouchEngagedByPhysicalCrouch = false;
    this->GrappleTokenSystem = CreateDefaultSubobject<UGrappleTokenSystem>(TEXT("GrappleTokenSystem"));
    this->bGrapplePlayerArmCollisionRemoveRequested = false;
    this->GrappleHand = NULL;
    this->StabOtherHand = NULL;
    this->GrapplePercent = 0.00f;
    this->GrappleBleedOutTimer = 0.00f;
    this->GrappleLoopFeedbackId = 0;
    this->GrappleAttackLoopFeedbackLeftId = 0;
    this->GrappleAttackLoopFeedbackRightId = 0;
    this->GrappleAttackPushBackLoopFeedbackId = 0;
    this->RepGrappleHand = EControllerHand::AnyHand;
    this->RepGrappleState = ETWDCharacterGrappleState::None;
    this->bRepGrappleAttacking = false;
    this->RepGrappleAttackSpeed = 0.50f;
    this->RepGrappleAttackHoldTime = 0.00f;
    this->GrappleAttackHoldTimer = 0.00f;
    this->GrappleAttackPushBackBreakTimeSinceBreakMove = 0.00f;
    this->GrappleAdditionalLockHandAfterReleaseTimer = -1.00f;
    this->GrappleIgnorePushBackBreakMoveTimer = 0.00f;
    this->GrappleHandStruggleTimer = 0.00f;
    this->GrappleHandStruggleStrengthLeft = 0.00f;
    this->GrappleHandStruggleStrengthRight = 0.00f;
    this->GrappleHandStruggleStrengthDamageTimestamp = 0.00f;
    this->GrappleHandStruggleLoopFeedbackId = 0;
    this->bADSArmCollisionRemoveRequested = false;
    this->RepPerceptionVisibility = 1.00f;
    this->MaxExternalNoiseRadius = 0.00f;
    this->ResetDialogueSelectionLockTime = 0.35f;
    this->DialogueSkipDuration = 2.00f;
    this->DialogueRange = 250.00f;
    this->DialogueRangeVolume = NULL;
    this->PersonalRange = 50.00f;
    this->PersonalSpaceThreshold = 200.00f;
    this->PersonalSpaceRadiusHead = 13.00f;
    this->PersonalSpaceRadiusChest = 17.00f;
    this->PersonalSpaceRadiusHip = 18.00f;
    this->PersonalSpaceRadiusHand = 8.00f;
    this->SubsequentBarkRange = 500.00f;
    this->SubtitleRange = 1500.00f;
    this->BarkRange = 2000.00f;
    this->bInitGrappleSyncHMD = false;
    this->GrappleSyncHMDYaw = 0.00f;
    this->GrappleSyncHMDYawTimer = 0.00f;
    this->GrappleSyncHMDYawStart = 0.00f;
    this->RepCurrentStaminaMax = 0.00f;
    this->RepCurrentStamina = 0.00f;
    this->LocalCurrentStaminaMax = 0.00f;
    this->LocalCurrentStamina = 0.00f;
    this->StaminaRecoveryTimer = 0.00f;
    this->ExtendedStaminaDecayTimer = 0.00f;
    this->StaminaTickRemainder = 0.00f;
    this->ConsumingStaminaTime = 0.00f;
    this->RecoveringStaminaTime = 0.00f;
    this->IdlingStaminaTime = 0.00f;
    this->bRepWinded = false;
    this->bConsumingStamina = false;
    this->bRecoveringStamina = false;
    this->bDisableStaminaCosts = false;
    this->CurrentStaminaLoopEvent = NULL;
    this->bRepBreakingObstacle = false;
    this->bRepHelpingBreakObstacle = false;
    this->RepObstacleToBreak = NULL;
    this->bIsObstacleBroken = false;
    this->bCachedDamageTakenDataValid = false;
    this->bCachedDamageTakenDataHeadshot = false;
    this->bCachedDamageTakenDataHeadshotPenetration = false;
    this->SkinPhysicsAsset = NULL;
    this->WindedGrappleCount = 0;
    this->bSupportsDeathPooling = false;
    this->bControlsMirrored = false;
    this->bAltControlMapping = false;
    this->bAngleOfStrikeWeakpointEnabled = false;
    this->bAngleOfStrikeWeakpointIsDiseased = false;
    this->AngleOfStrikeWeakpointAngleNormalCurve = NULL;
    this->AngleOfStrikeWeakpointSocket = TEXT("head");
    this->AngleOfStrikeWeakpointWoundBone = TEXT("head");
    this->AngleOfStrikeWeakpointWoundDistanceForward = 13.00f;
    this->AngleOfStrikeWeakpointWoundOffsetDistance = 8.00f;
    this->AngleOfStrikeWeakpointWoundMesh = NULL;
    this->AngleOfStrikeWeakpointWoundMeshComp = NULL;
    this->bSkinArmorInitialized = false;
    this->CharacterType = ETWDCharacterType::Unknown;
    this->HeadHitboxDamageMultiplier = 1.00f;
    this->HeadHitboxNonPenetrationDamageMultiplier = 1.00f;
    this->BodyHitboxDamageMultiplier = 1.00f;
    this->LimbHitBoxDamageMultiplier = 1.00f;
    this->MaxHealth = 0.00f;
    this->MaxSicknessPct = 0.50f;
    this->CurrentMaxHealth = 0.00f;
    this->RegenRate = 0.00f;
    this->TargetAccuracyMultiplier = 1.00f;
    this->EnableRegen = false;
    this->TeamNumber = 0;
    this->bShowDebugHitData = false;
    this->CoverState = ETWDCharacterCoverState::None;
    this->IsAttacking = false;
    this->RepCurrentHealth = 0.00f;
    this->bFallen = false;
    this->Personality = NULL;
    this->DialogueWidgetSnapTarget = CreateDefaultSubobject<UTWDDialogueWidgetSnapTarget>(TEXT("DialogueWidgetSnapTarget"));
    this->OverrideSkin = NULL;
    this->NonVROverrideSkin = NULL;
    this->CharacterHandSlot = NULL;
    this->Archetype = NULL;
    this->bIsWounded = false;
    this->TextToSpeechComponent = NULL;
    this->DialogueResponseCharacter = NULL;
    this->bPSVRSelectDialogueOption1Pressed = false;
    this->bPSVRSelectDialogueOption2Pressed = false;
    this->bPSVRSelectDialogueOption3Pressed = false;
    this->bPSVRSelectDialogueOption4Pressed = false;
    this->InventoryBeingGiven = NULL;
    this->bUseHeadBoneForAIView = false;
    this->DeathTimestamp = 0.00f;
    this->CorpseCleanupCanSpawnWalker = false;
    this->bHighPriorityCorpse = false;
    this->CorpseCleanupSpawnWalkerClass = NULL;
    this->MinDistanceCorpseCleanupFromPlayer = 200.00f;
    this->MinimumSignificanceThreshold = 0.20f;
    this->PartialSignificanceThreshold = 0.50f;
    this->FullSignificanceThreshold = 0.80f;
    this->SignificanceDistFromViewer = 340282346638528859811704183484516925440.00f;
    this->SignificanceGroupForce = -1.00f;
    this->SignificanceDescFlags = 0;
    this->RequestNewSignificance = -1.00f;
    this->SignificanceValue = 1.00f;
    this->bSignificanceBlinkIn = false;
    this->bSignificanceFreeze = false;
    this->SignificanceMaxDistanceFreeze = 2500.00f;
    this->SignificanceMaxDistanceUnfreeze = 2250.00f;
    this->bParticipateInSleepingAI = false;
    this->bNonsignificantUntilRender = true;
    this->ReapplyNonsignificantUntilRenderRadius = 1000.00f;
    this->ResetSightPeripheralAfterPushbackTimer = 3.00f;
    this->MinSuspicionToBreakDoors = 0.40f;
    this->SoundStimReachedRange = 300.00f;
    this->TimeUntilInitialDamage = 1.00f;
    this->ReHitDelay = 1.00f;
    this->HitTimestamp = 0.00f;
    this->CoughAudioEvent = NULL;
    this->CoughSicknessPctThreshold = 0.00f;
    this->CoughRadius = 0.00f;
    this->MinCoughInterval = 0.00f;
    this->MaxCoughInterval = 0.00f;
    this->CustomMinVignetteLevel = 0.00f;
    this->bConstrainHMDToWorld = false;
    this->bConstrainHMDZ = false;
    this->TEMP_ShowDialogSelectionWidgetOverride_DoShow = false;
    this->SplashColorTexture = NULL;
    this->SplashNormalTexture = NULL;
    this->MeatColorTexture = NULL;
    this->MeatNormalTexture = NULL;
    this->CapColorTexture = NULL;
    this->CapNormalTexture = NULL;
    this->WoundSeverityScale = 1.00f;
    this->DraggedRagdollBodyMassScale = 0.20f;
    this->bLastDraggedRagdollState = false;
    this->bOnDeathBeingDraggedRagdoll = false;
    this->AnimInstanceCache = NULL;
    this->bUseActualHeadForStableHead = false;
    this->bRequestDeath = false;
    this->DebugRecentBarkThreshold = 2.00f;
    this->CurrentBehavior = ECharacterBehavior::Neutral;
    this->bShouldAlwaysRunFromExplosives = true;
    this->bShowDebugSplayInfo = false;
    this->bHasDebugSplayInfo = false;
    this->bUseAsyncMovement = false;
}

