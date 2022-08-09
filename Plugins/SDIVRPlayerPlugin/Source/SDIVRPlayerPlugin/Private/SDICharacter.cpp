#include "SDICharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class ASDIHeldActor;
class ASDIInventoryActor;
class AActor;
class ASDIPlayerHand;
class ASDIInteractiveHighlightManager;
class UCameraComponent;

void ASDICharacter::StopNonVRObjectInteraction() {
}

void ASDICharacter::StimulusTick_Implementation(const FGameplayTagContainer& Stimuli, float DeltaTime) {
}

void ASDICharacter::ServerSetTransforms_Implementation(const FSDISpaceTimestampTransform_NetQuantize& HMD, const FSDISpaceTimestampTransform_NetQuantize& LeftHand, const FSDISpaceTimestampTransform_NetQuantize& RightHand, float LHTargetActivityLevel, float LHTargetActivityLevelFadeScale, float RHTargetActivityLevel, float RHTargetActivityLevelFadeScale) {
}
bool ASDICharacter::ServerSetTransforms_Validate(const FSDISpaceTimestampTransform_NetQuantize& HMD, const FSDISpaceTimestampTransform_NetQuantize& LeftHand, const FSDISpaceTimestampTransform_NetQuantize& RightHand, float LHTargetActivityLevel, float LHTargetActivityLevelFadeScale, float RHTargetActivityLevel, float RHTargetActivityLevelFadeScale) {
    return true;
}

void ASDICharacter::ServerSetHeldBy_IFC_Implementation(ASDIHeldActor* HeldActor, const FSDIReplicatedGripInfo& PrimaryGrip, const FSDIReplicatedGripInfo& SecondaryGrip) {
}
bool ASDICharacter::ServerSetHeldBy_IFC_Validate(ASDIHeldActor* HeldActor, const FSDIReplicatedGripInfo& PrimaryGrip, const FSDIReplicatedGripInfo& SecondaryGrip) {
    return true;
}

void ASDICharacter::ServerGiveTo_IFC_Implementation(ASDIInventoryActor* Inventory, AActor* NewOwner) {
}
bool ASDICharacter::ServerGiveTo_IFC_Validate(ASDIInventoryActor* Inventory, AActor* NewOwner) {
    return true;
}

void ASDICharacter::ServerClearHeldBy_IFC_Implementation(ASDIHeldActor* HeldActor, const FTransform& Transform, const FVector& ThrowVelocity, const FVector& AngularVelocityDeg, const FSDIAttachmentInfo& AttachInfo, bool bCustomThrowPhysicsEngaged) {
}
bool ASDICharacter::ServerClearHeldBy_IFC_Validate(ASDIHeldActor* HeldActor, const FTransform& Transform, const FVector& ThrowVelocity, const FVector& AngularVelocityDeg, const FSDIAttachmentInfo& AttachInfo, bool bCustomThrowPhysicsEngaged) {
    return true;
}

void ASDICharacter::OnRep_RepStimulusData() {
}

void ASDICharacter::OnRep_RepRightHandTransform(const FSDISpaceTimestampTransform_NetQuantize& OldRepRightHandTransform) {
}

void ASDICharacter::OnRep_RepRightHandHeldActor(ASDIHeldActor* OldRepRightHandHeldActor) {
}

void ASDICharacter::OnRep_RepLeftHandTransform(const FSDISpaceTimestampTransform_NetQuantize& OldRepLeftHandTransform) {
}

void ASDICharacter::OnRep_RepLeftHandHeldActor(ASDIHeldActor* OldRepLeftHandHeldActor) {
}

void ASDICharacter::OnRep_RepInventoryList(const TArray<ASDIInventoryActor*>& OldRepInventoryList) {
}

void ASDICharacter::OnRep_RepHMDTransform(const FSDISpaceTimestampTransform_NetQuantize& OldRepHMDTransform) {
}

FSDISpaceTimestampTransform_NetQuantize ASDICharacter::K2GetRepRightHandTransform() const {
    return FSDISpaceTimestampTransform_NetQuantize{};
}

FSDISpaceTimestampTransform_NetQuantize ASDICharacter::K2GetRepLeftHandTransform() const {
    return FSDISpaceTimestampTransform_NetQuantize{};
}

FSDISpaceTimestampTransform_NetQuantize ASDICharacter::K2GetLerpRightHandTransform() const {
    return FSDISpaceTimestampTransform_NetQuantize{};
}

FSDISpaceTimestampTransform_NetQuantize ASDICharacter::K2GetLerpLeftHandTransform() const {
    return FSDISpaceTimestampTransform_NetQuantize{};
}

FSDISpaceTimestampTransform_NetQuantize ASDICharacter::K2GetLerpHMDTransform() const {
    return FSDISpaceTimestampTransform_NetQuantize{};
}

bool ASDICharacter::IsNonVRObjectInteracting() const {
    return false;
}

bool ASDICharacter::GrabItemFromInventory(ASDIInventoryActor* InvActor, EControllerHand PrimaryHand, EControllerHand SecondaryHand) {
    return false;
}

bool ASDICharacter::GrabHeldActor(ASDIHeldActor* HeldActor, EControllerHand PrimaryHand, EControllerHand SecondaryHand, bool bAddToInventory) {
    return false;
}

bool ASDICharacter::GrabClassFromInventory(TSubclassOf<ASDIInventoryActor> InvClass, EControllerHand PrimaryHand, EControllerHand SecondaryHand, bool bExact) {
    return false;
}

ESignificanceState ASDICharacter::GetSignificanceState() const {
    return ESignificanceState::NoSignificance;
}

float ASDICharacter::GetRightHandActivityLevel() const {
    return 0.0f;
}

TSubclassOf<ASDIPlayerHand> ASDICharacter::GetPlayerHandBlueprint(EControllerHand hand) const {
    return NULL;
}

ASDIPlayerHand* ASDICharacter::GetPlayerHand(EControllerHand hand) const {
    return NULL;
}

ASDIPlayerHand* ASDICharacter::GetOtherPlayerHand(EControllerHand hand) const {
    return NULL;
}

float ASDICharacter::GetLeftHandActivityLevel() const {
    return 0.0f;
}

TSubclassOf<ASDIInteractiveHighlightManager> ASDICharacter::GetInteractiveHighlightManagerClass() const {
    return NULL;
}

UCameraComponent* ASDICharacter::GetCamera() const {
    return NULL;
}

bool ASDICharacter::DropHeldActor(ASDIHeldActor* HeldActor, bool bReturnToInventory, bool bRemoveFromInventory) {
    return false;
}

FTransform ASDICharacter::ConvertTransformToSpace(const FSDISpaceTimestampTransform_NetQuantize& Transform, ESDITransformSpace Space) const {
    return FTransform{};
}

void ASDICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDICharacter, RepStimulusData);
    DOREPLIFETIME(ASDICharacter, RepInventoryList);
    DOREPLIFETIME(ASDICharacter, RepLeftHandHeldActor);
    DOREPLIFETIME(ASDICharacter, RepRightHandHeldActor);
    DOREPLIFETIME(ASDICharacter, RepHMDTransform);
    DOREPLIFETIME(ASDICharacter, RepLeftHandTransform);
    DOREPLIFETIME(ASDICharacter, RepRightHandTransform);
    DOREPLIFETIME(ASDICharacter, RepLeftHandTargetActivityLevel);
    DOREPLIFETIME(ASDICharacter, RepLeftHandTargetActivityLevelFadeScale);
    DOREPLIFETIME(ASDICharacter, RepRightHandTargetActivityLevel);
    DOREPLIFETIME(ASDICharacter, RepRightHandTargetActivityLevelFadeScale);
    DOREPLIFETIME(ASDICharacter, RepLastServerHMDHandReplicationTimestamp);
}

ASDICharacter::ASDICharacter() {
    this->InteractiveHighlightManagerClass = NULL;
    this->PlayerHandBlueprint = NULL;
    this->PlayerLeftHandBlueprint = NULL;
    this->ServerHMDHandReplicationFrequency = 0.07f;
    this->LeftHandAttachSocket = TEXT("LeftHandAttach");
    this->RightHandAttachSocket = TEXT("RightHandAttach");
    this->HandActivityLevelFadeDownSpeed = 0.75f;
    this->HandActivityLevelFadeUpSpeed = 2.00f;
    this->RepLeftHandHeldActor = NULL;
    this->RepRightHandHeldActor = NULL;
    this->RepLeftHandTargetActivityLevel = 0.00f;
    this->RepLeftHandTargetActivityLevelFadeScale = 0.00f;
    this->RepRightHandTargetActivityLevel = 0.00f;
    this->RepRightHandTargetActivityLevelFadeScale = 0.00f;
    this->LeftHandActivityLevel = 1.00f;
    this->RightHandActivityLevel = 1.00f;
    this->RepLastServerHMDHandReplicationTimestamp = -1.00f;
}

