#include "TWDPlayerCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Components/ChildActorComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "SDIPlayerVoiceAkComponent.h"
#include "TWDWidgetComponent.h"

class ASDIInteractiveActor;
class ATWDPlayerCharacter;
class ATWDWeaponActor;
class ASDIInventoryActor;
class UTWDSaveGame;
class AActor;
class ATWDWeaponGun;

bool ATWDPlayerCharacter::UseNonVRMeleeButtonCharge() const {
    return false;
}

void ATWDPlayerCharacter::UpdateVoiceAndAppearance() {
}


ATWDPlayerCharacter* ATWDPlayerCharacter::TuneTWDPlayerCharacter(FSDITuningAttribute_TWDPlayerCharacter Attr, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

ATWDPlayerCharacter* ATWDPlayerCharacter::TuneTWDCharacterMovementComponent(FSDITuningAttribute_TWDCharacterMovementComponent Attr, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

void ATWDPlayerCharacter::StopSpecialMelee() {
}

void ATWDPlayerCharacter::StabStarted_Implementation(ATWDWeaponActor* Weapon) {
}

void ATWDPlayerCharacter::StabEnding_Implementation(ATWDWeaponActor* Weapon, bool bRemoveWeapon) {
}

void ATWDPlayerCharacter::SetOnTopOfBox(bool bTopOfBox, FVector Min, FVector Max, FTransform XForm) {
}

ASDIInventoryActor* ATWDPlayerCharacter::SetNonVREquipment(ETWDNonVREquipmentSlot Slot, ASDIInventoryActor* NewItem) {
    return NULL;
}

void ATWDPlayerCharacter::SetGenderAndAppearanceVariant(EGender NewGender, int32 NewAppearanceVariant) {
}

void ATWDPlayerCharacter::SetGender(EGender NewGender) {
}

void ATWDPlayerCharacter::SetAppearanceVariant(int32 NewAppearance) {
}

void ATWDPlayerCharacter::SaveHeldInventory(bool bDestroySavedItems) {
}

void ATWDPlayerCharacter::SaveDataToGameProgression(UTWDSaveGame* SaveGame) {
}

void ATWDPlayerCharacter::RestartPlayer_Implementation(const FTransform& LootDropTransform, const FTransform& PlayerStartTransform) {
}

bool ATWDPlayerCharacter::RemoveNonVREquipment(ASDIInventoryActor* NewItem) {
    return false;
}

void ATWDPlayerCharacter::PutAwayHeldInventory(bool bLimitToKeyItems) {
}

void ATWDPlayerCharacter::OnRep_RepTuningModifiers() {
}

void ATWDPlayerCharacter::NonVRUnEquip(bool bImmediate) {
}

void ATWDPlayerCharacter::NonVREquip(ETWDNonVREquipmentSlot Slot, bool bImmediate) {
}

void ATWDPlayerCharacter::NonVRConsumeEnd(ASDIInteractiveActor* ConsumableActor) {
}

void ATWDPlayerCharacter::NonVRConsumeBegin(ASDIInteractiveActor* ConsumableActor, bool bEquip) {
}

void ATWDPlayerCharacter::LoadDataFromGameProgression() {
}

bool ATWDPlayerCharacter::IsWeaponStuckOrStabbed(ATWDWeaponActor*& OutWeapon, FHitResult& OutHitInfo, float& OutProgress, float& OutAngle, float& OutRemoval, float& OutInputAngle, float& OutDelay, bool& bOutCharged, bool& bOutWeakpoint, bool& bOutWeakpointIsDiseased, bool& bOutPlayerExtraction) const {
    return false;
}

bool ATWDPlayerCharacter::IsSpecialMeleeAllowed_Implementation(ETWDNonVRMeleeAttackType Type) const {
    return false;
}

bool ATWDPlayerCharacter::IsSpecialMeleeActiveDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const {
    return false;
}

bool ATWDPlayerCharacter::IsSpecialMeleeActive(ETWDNonVRMeleeAttackType& OutType) const {
    return false;
}

bool ATWDPlayerCharacter::IsSpecialInventory(AActor* Actor) const {
    return false;
}

bool ATWDPlayerCharacter::IsPreparingMeleeAttackDetailed(FTWDNonVRMeleeAttackDetails& OutDetails, bool bFindTarget) const {
    return false;
}

bool ATWDPlayerCharacter::IsPreparingMeleeAttack() const {
    return false;
}

bool ATWDPlayerCharacter::IsPreciseThrowControlEngaged(EControllerHand hand) const {
    return false;
}

bool ATWDPlayerCharacter::IsPlayingMeleeAttackAnimDetailed(FTWDNonVRMeleeAttackDetails& OutDetails) const {
    return false;
}

bool ATWDPlayerCharacter::IsPlayingGunActionAnimWithInfo(ETWDGunAction Action, ATWDWeaponGun*& OutGun) const {
    return false;
}

bool ATWDPlayerCharacter::IsPlayingGrappleAnim() const {
    return false;
}

bool ATWDPlayerCharacter::IsPlayingEquipmentActionAnimDetailed(FTWDNonVREquipmentActionDetails& OutDetails) const {
    return false;
}

bool ATWDPlayerCharacter::IsPlayingEquipmentActionAnim() const {
    return false;
}

bool ATWDPlayerCharacter::IsOnTopOfBox(FVector& Min, FVector& Max, FTransform& XForm) const {
    return false;
}

bool ATWDPlayerCharacter::IsNonVRConsuming() const {
    return false;
}

bool ATWDPlayerCharacter::IsHoldingSpecialInventory(EControllerHand hand) const {
    return false;
}

bool ATWDPlayerCharacter::IsHoldingNotebook() const {
    return false;
}

bool ATWDPlayerCharacter::IsHoldingInventory(EControllerHand hand) const {
    return false;
}

bool ATWDPlayerCharacter::IsHoldingFlashlight() const {
    return false;
}

bool ATWDPlayerCharacter::IsHoldingBackpack() const {
    return false;
}

bool ATWDPlayerCharacter::IsHipFiring(ATWDWeaponGun*& OutGun) const {
    return false;
}

void ATWDPlayerCharacter::InputVirtualMoveControl(float Value) {
}

void ATWDPlayerCharacter::InputSecondaryActionReleased() {
}

void ATWDPlayerCharacter::InputSecondaryActionPressed() {
}

void ATWDPlayerCharacter::InputReverseVirtualMoveControl(float Value) {
}

void ATWDPlayerCharacter::InputReloadReleased() {
}

void ATWDPlayerCharacter::InputReloadPressed() {
}

void ATWDPlayerCharacter::InputPrimaryActionReleased() {
}

void ATWDPlayerCharacter::InputPrimaryActionPressed() {
}

void ATWDPlayerCharacter::InputInventoryNotebookReleased() {
}

void ATWDPlayerCharacter::InputInventoryNotebookPressed() {
}

void ATWDPlayerCharacter::InputInventoryFlashlightReleased() {
}

void ATWDPlayerCharacter::InputInventoryFlashlightPressed() {
}

void ATWDPlayerCharacter::InputInventoryBackpackReleased() {
}

void ATWDPlayerCharacter::InputInventoryBackpackPressed() {
}

void ATWDPlayerCharacter::InputInteractReleased() {
}

void ATWDPlayerCharacter::InputInteractPressed() {
}

void ATWDPlayerCharacter::InputGrabWorldReleased() {
}

void ATWDPlayerCharacter::InputGrabWorldPressed() {
}

void ATWDPlayerCharacter::InputEquipSmallReleased() {
}

void ATWDPlayerCharacter::InputEquipSmallPressed() {
}

void ATWDPlayerCharacter::InputEquipLargeReleased() {
}

void ATWDPlayerCharacter::InputEquipLargePressed() {
}

void ATWDPlayerCharacter::InputEquipConsumable2Released() {
}

void ATWDPlayerCharacter::InputEquipConsumable2Pressed() {
}

void ATWDPlayerCharacter::InputEquipConsumable1Released() {
}

void ATWDPlayerCharacter::InputEquipConsumable1Pressed() {
}

void ATWDPlayerCharacter::InputADSReleased() {
}

void ATWDPlayerCharacter::InputADSPressed() {
}

bool ATWDPlayerCharacter::HasPendingNonVRLongHeldInteraction() const {
    return false;
}

ASDIInventoryActor* ATWDPlayerCharacter::GetNonVRPendingPickup(ETWDNonVREquipmentSlot& OutSlot) const {
    return NULL;
}

ETWDNonVRGrappleMinigameState ATWDPlayerCharacter::GetNonVRGrappleMinigameState(float& OutTimeRemaining, float& OutDuration, float& OutNextDuration) const {
    return ETWDNonVRGrappleMinigameState::None;
}

ETWDNonVRGrappleAnimState ATWDPlayerCharacter::GetNonVRGrappleAnimState() const {
    return ETWDNonVRGrappleAnimState::None;
}

ETWDNonVREquipmentType ATWDPlayerCharacter::GetNonVREquipmentType(ASDIInventoryActor* Item) const {
    return ETWDNonVREquipmentType::None;
}

ETWDNonVREquipmentSlot ATWDPlayerCharacter::GetNonVREquipmentSlot(ASDIInventoryActor* Item) const {
    return ETWDNonVREquipmentSlot::Any;
}

ASDIInventoryActor* ATWDPlayerCharacter::GetNonVREquipment(ETWDNonVREquipmentSlot Slot) const {
    return NULL;
}

ETWDNonVREquipmentSlot ATWDPlayerCharacter::GetDesiredNonVREquipmentSlot(ETWDNonVREquipmentType EquipmentType) const {
    return ETWDNonVREquipmentSlot::Any;
}

ASDIInventoryActor* ATWDPlayerCharacter::GetCurrentNonVREquipment(ETWDNonVREquipmentSlot& OutSlot) const {
    return NULL;
}

bool ATWDPlayerCharacter::GetClosestWalkerDistance(float& Distance) {
    return false;
}

void ATWDPlayerCharacter::ExitAllNonVRInteractionStates() {
}

void ATWDPlayerCharacter::CompleteNonVRPendingPickup() {
}

void ATWDPlayerCharacter::CancelGunAction() {
}

void ATWDPlayerCharacter::CancelEquipmentAction() {
}

void ATWDPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDPlayerCharacter, RepTuningModifiers);
}

ATWDPlayerCharacter::ATWDPlayerCharacter() {
    this->bInTutorial = false;
    this->NonVRLeftHandPhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("NonVRLeftHandPhysicsConstraint"));
    this->NonVRRightHandPhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("NonVRRightHandPhysicsConstraint"));
    this->HybridMaxPitchAngleDeg = 45.00f;
    this->HybridMaxUprightAngleDeg = 75.00f;
    this->HybridMaxForwardAngleDeg = 60.00f;
    this->bHybridEngageHMDDelta = false;
    this->HybridEngageHMDDeltaZ = -8.00f;
    this->HybridDisengageHMDRange = 4.00f;
    this->bHybridEngageWhenHoldingItem = true;
    this->BeltInventoryRootOffset = -65.00f;
    this->ChestInventoryRootOffset = -30.00f;
    this->bAttachBackInventorySlotsToShoulders = false;
    this->BeltInventoryRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BeltInventoryRoot"));
    this->ChestInventoryRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ChestInventoryRoot"));
    this->BeltInventoryGripComponent = NULL;
    this->ChestInventoryGripComponent = NULL;
    this->BackInventoryComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackInventoryComponent"));
    this->BackpackInventoryComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("BackpackInventoryComponent"));
    this->LeftHipInventoryComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("LeftHipInventoryComponent"));
    this->RightHipInventoryComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("RightHipInventoryComponent"));
    this->NotebookInventoryComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("NotebookInventoryComponent"));
    this->FlashlightInventoryComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("FlashlightInventoryComponent"));
    this->AmmoPouchComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("AmmoPouchComponent"));
    this->PlayerLootDropClass = NULL;
    this->LeftHipInventorySlot = NULL;
    this->RightHipInventorySlot = NULL;
    this->BackInventorySlot = NULL;
    this->BackpackInventorySlot = NULL;
    this->NotebookInventorySlot = NULL;
    this->FlashlightInventorySlot = NULL;
    this->AmmoPouch = NULL;
    this->Backpack = NULL;
    this->Notebook = NULL;
    this->Flashlight = NULL;
    this->PPMatCollection = NULL;
    this->AkePlayTinnitus = NULL;
    this->AkeStopTinnitus = NULL;
    this->NonVRCameraSocket = TEXT("CameraRoot");
    this->bNonVRCameraClampToCapsule = false;
    this->NonVRCameraClampOffset = 1.00f;
    this->bNonVRCameraCollideWithWorld = false;
    this->NonVRCameraCollisionChannel = ECC_Camera;
    this->NonVRCameraCollisionRadius = 10.00f;
    this->NonVRMaxYawOffsetDeg = 60.00f;
    this->HipFireDelay = 0.15f;
    this->HipFireHoldTime = 1.00f;
    this->ADSMovementSpeedFactor = 0.75f;
    this->NonVRDryFireAutoHelperDelay = 0.15f;
    this->AngleOfStrikeMovementSpeedFactor = 0.75f;
    this->PrecisionStabMovementSpeedFactor = 0.75f;
    this->bAngleOfStrikeForceReEngage = false;
    this->AngleOfStrikeChargeEngageLevel = 0.90f;
    this->AngleOfStrikeChargeDisengageLevel = 0.80f;
    this->bBasicMeleeAnglesUseBothMoveAndLookInput = true;
    this->bBasicMeleeAnglesUseLookInput = false;
    this->bInvertBasicMeleeAngles = true;
    this->MeleeFaceTargetPitchAngleMax = 30.00f;
    this->WeaponStickSplayDuration = 4.00f;
    this->WeaponStickSplaySpeed = 2.00f;
    this->WeaponStickSplayRecoverySpeed = 1.00f;
    this->WeaponStickSplayDelay = 0.50f;
    this->WeaponStickEjectDuration = 5.00f;
    this->WeaponStickWeakpointEjectDuration = 2.50f;
    this->WeaponStickRemovalSpeed = 2.00f;
    this->WeaponStickWeakpointRemovalSpeed = 2.00f;
    this->WeaponStickRemovalRecoverySpeed = 1.00f;
    this->WeaponStickRemovalDelay = 0.15f;
    this->AkePlayStabWeakpoint = NULL;
    this->NonVRGrappleMinigamePressWindow = 0.25f;
    this->NonVRAttackChargeSoundLoopRTPC = TEXT("AOS_Charge");
    this->AkeSpecialMeleeEngageFailure = NULL;
    this->PlayerVoiceLocalComponent = CreateDefaultSubobject<USDIPlayerVoiceAkComponent>(TEXT("PlayerVoiceLocalComponent"));
    this->TinnitusDecayRate = 0.00f;
    this->TinnitusLevel = 0.00f;
    this->bIsPlayingTinnitus = false;
    this->LastSetGutsAmount = -1.00f;
    this->bHybridMovementEngaged = false;
    this->CachedNonVRCameraFrame = 4294967295;
    this->bCachedInteractionActorLongHeld = false;
    this->DesiredNonVRSlotEquipped = ETWDNonVREquipmentSlot::Any;
    this->CurrentNonVRSlotEquipped = ETWDNonVREquipmentSlot::None;
    this->NonVRPendingPickupSlot = ETWDNonVREquipmentSlot::None;
    this->bNonVRPendingPickupEquip = false;
    this->HipFireRequestedTimestamp = 0.00f;
    this->bHipFiring = false;
    this->bNeedsRetune = false;
    this->SpecialMeleeActive = ETWDNonVRMeleeAttackType::None;
    this->LastSpecialMeleeTargetMode = ETWDNonVRMeleeAttackType::None;
    this->bAngleOfStrikeWasSet = false;
    this->AngleOfStrike = 0.00f;
    this->AngleOfStrikeCharge = 0.00f;
    this->bAngleOfStrikeIsCharged = false;
    this->bBasicMeleeAngleWasSet = false;
    this->BasicMeleeAngle = 0.00f;
    this->WeaponStickAngle = 0.00f;
    this->WeaponStickInputAngle = 0.00f;
    this->WeaponStickRemoval = 0.00f;
    this->WeaponStickRemovalDelayTimer = 0.00f;
    this->WeaponStickEjectTimer = 0.00f;
    this->ConsumingItem = NULL;
    this->WeaponCharge = 0.00f;
    this->bWeaponIsCharged = false;
    this->WeaponChargeHoldStartTime = 0.00f;
    this->NonVRGrappleMinigameState = ETWDNonVRGrappleMinigameState::None;
    this->NonVRGrappleMinigameTimer = 0.00f;
    this->NonVRGrappleAnimState = ETWDNonVRGrappleAnimState::None;
    this->GenderSwitchGroup = TEXT("Gender");
    this->bIsOnTopOfBox = false;
    this->ClosestSignificantWalkerDistance = 340282346638528859811704183484516925440.00f;
    this->LastPhysicalCrouchZDelta = 0.00f;
    this->SpectatorWidgetComponent = CreateDefaultSubobject<UTWDWidgetComponent>(TEXT("SpectatorWidgetComponent"));
    this->MeleeButtonChargeTime = 1.00f;
}

