#include "SDICoreCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "SDICollisionChannelIgnoranceComponent.h"

class APlayerController;
class USDICoreUtilityAI;

bool ASDICoreCharacter::UtilityAIConsumingInput() const {
    return false;
}

void ASDICoreCharacter::SetADS(bool bADS) {
}

void ASDICoreCharacter::ServerSetADS_Implementation(bool bADS) {
}
bool ASDICoreCharacter::ServerSetADS_Validate(bool bADS) {
    return true;
}

void ASDICoreCharacter::ResetInputs() {
}

void ASDICoreCharacter::PlayerControllerDetached_Implementation(APlayerController* PC) {
}

void ASDICoreCharacter::PlayerControllerAttached_Implementation(APlayerController* PC) {
}

void ASDICoreCharacter::OnRep_RepDamageTakenData(const FSDIReplicatedDamageData& OldRepDamageTakenData) {
}

void ASDICoreCharacter::OnRep_RepDamageInflictedData(const FSDIReplicatedDamageData& OldRepDamageInflictedData) {
}

void ASDICoreCharacter::OnRep_bRepADS(bool bOldRepADS) {
}

void ASDICoreCharacter::OnADSChanged_Implementation(bool bADS) {
}

bool ASDICoreCharacter::IsThirdPerson() const {
    return false;
}

bool ASDICoreCharacter::IsInImmobileState_Implementation() const {
    return false;
}

bool ASDICoreCharacter::IsFirstPerson() const {
    return false;
}

bool ASDICoreCharacter::IsADSAllowed_Implementation() const {
    return false;
}

bool ASDICoreCharacter::IsADS() const {
    return false;
}

void ASDICoreCharacter::InputToggleSprintReleased() {
}

void ASDICoreCharacter::InputToggleSprintPressed() {
}

void ASDICoreCharacter::InputToggleCrouchReleased() {
}

void ASDICoreCharacter::InputToggleCrouchPressed() {
}

void ASDICoreCharacter::InputSprintReleased() {
}

void ASDICoreCharacter::InputSprintPressed() {
}

void ASDICoreCharacter::InputMoveRightAxis(float Value) {
}

void ASDICoreCharacter::InputMoveRight(float Value) {
}

void ASDICoreCharacter::InputMoveLeft(float Value) {
}

void ASDICoreCharacter::InputMoveForwardAxis(float Value) {
}

void ASDICoreCharacter::InputMoveForward(float Value) {
}

void ASDICoreCharacter::InputMoveBackward(float Value) {
}

void ASDICoreCharacter::InputCrouchReleased() {
}

void ASDICoreCharacter::InputCrouchPressed() {
}

TSubclassOf<USDICoreUtilityAI> ASDICoreCharacter::GetUtilityAIClass() const {
    return NULL;
}

FSDIReplicatedDamageData ASDICoreCharacter::GetLastDamageTaken() const {
    return FSDIReplicatedDamageData{};
}

FSDIReplicatedDamageData ASDICoreCharacter::GetLastDamageInflicted() const {
    return FSDIReplicatedDamageData{};
}

void ASDICoreCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASDICoreCharacter, RepRagdollBones);
    DOREPLIFETIME(ASDICoreCharacter, bRepADS);
    DOREPLIFETIME(ASDICoreCharacter, RepDamageTakenData);
    DOREPLIFETIME(ASDICoreCharacter, RepDamageInflictedData);
}

ASDICoreCharacter::ASDICoreCharacter() {
    this->CapsuleCollisionIgnoranceComp = CreateDefaultSubobject<USDICollisionChannelIgnoranceComponent>(TEXT("CapsuleCollisionIgnorance"));
    this->MeshCollisionIgnoranceComp = CreateDefaultSubobject<USDICollisionChannelIgnoranceComponent>(TEXT("MeshCollisionIgnorance"));
    this->SprintCancelMinVelocityPct = 0.50f;
    this->SprintCancelTime = 0.50f;
    this->SprintMinAnalogInput = 0.50f;
    this->UtilityAIClass = NULL;
    this->NetObstructedCullDistanceSquared = 16777216.00f;
    this->bRepADS = false;
    this->bCtrlSprint = false;
    this->bCtrlSprintWasToggled = false;
    this->SprintCancelTimer = 0.00f;
    this->bCtrlCrouch = false;
    this->bCtrlCrouchWasToggled = false;
    this->bAnyRagdollBonesUpdated = false;
}

