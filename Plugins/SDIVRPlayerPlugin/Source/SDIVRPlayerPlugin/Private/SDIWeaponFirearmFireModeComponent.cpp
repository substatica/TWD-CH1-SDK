#include "SDIWeaponFirearmFireModeComponent.h"

class USceneComponent;
class UHapticFeedbackEffect_Base;

void USDIWeaponFirearmFireModeComponent::UpdateTickEnabled() {
}

void USDIWeaponFirearmFireModeComponent::UpdateAttachmentInfo(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocketName) {
}

void USDIWeaponFirearmFireModeComponent::RequestStopFire() {
}

void USDIWeaponFirearmFireModeComponent::RequestFire() {
}

bool USDIWeaponFirearmFireModeComponent::IsReadyToFire() const {
    return false;
}

bool USDIWeaponFirearmFireModeComponent::IsFiring() const {
    return false;
}

FTransform USDIWeaponFirearmFireModeComponent::GetShotTransform(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, bool bIgnoreSpread) {
    return FTransform{};
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetSecondaryStopFireFeedback() const {
    return NULL;
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetSecondaryStartFireFeedback() const {
    return NULL;
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetSecondaryRefireFeedback() const {
    return NULL;
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetSecondaryFireRoundFeedback() const {
    return NULL;
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetSecondaryDryFireFeedback() const {
    return NULL;
}

FSDIRecoil USDIWeaponFirearmFireModeComponent::GetRecoil(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo) const {
    return FSDIRecoil{};
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetPrimaryStopFireFeedback() const {
    return NULL;
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetPrimaryStartFireFeedback() const {
    return NULL;
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetPrimaryRefireFeedback() const {
    return NULL;
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetPrimaryFireRoundFeedback() const {
    return NULL;
}

UHapticFeedbackEffect_Base* USDIWeaponFirearmFireModeComponent::GetPrimaryDryFireFeedback() const {
    return NULL;
}

FSDICameraRecoilSettings USDIWeaponFirearmFireModeComponent::GetNonVRRecoil(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo) const {
    return FSDICameraRecoilSettings{};
}

FTransform USDIWeaponFirearmFireModeComponent::GetFireModeTransform() const {
    return FTransform{};
}

FSDIComponentReplacement USDIWeaponFirearmFireModeComponent::GetFireModeComponentAttachment() const {
    return FSDIComponentReplacement{};
}

ESDIInteractiveInteractType USDIWeaponFirearmFireModeComponent::GetDefaultInteractionType() const {
    return ESDIInteractiveInteractType::Primary;
}

int32 USDIWeaponFirearmFireModeComponent::GetBurstCounter() const {
    return 0;
}

bool USDIWeaponFirearmFireModeComponent::AutoChamberNextRound() const {
    return false;
}

FTransform USDIWeaponFirearmFireModeComponent::ApplySpread(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform, float AdditionalSpread) {
    return FTransform{};
}

USDIWeaponFirearmFireModeComponent::USDIWeaponFirearmFireModeComponent() {
    this->DefaultInteractionType = ESDIInteractiveInteractType::Primary;
    this->bRepeatingFire = true;
    this->bVariableFireRate = false;
    this->ShotsPerSecond = 1.00f;
    this->ShotsPerSecondTrigger = 2.00f;
    this->bBurstFire = false;
    this->BurstShots = 3;
    this->BurstShotsPerSecond = 10.00f;
    this->SpreadDegrees = 0.00f;
    this->bAutoChamberNextRound = true;
    this->PrimaryStartFireFeedback = NULL;
    this->PrimaryRefireFeedback = NULL;
    this->PrimaryStopFireFeedback = NULL;
    this->PrimaryFireRoundFeedback = NULL;
    this->PrimaryDryFireFeedback = NULL;
    this->SecondaryStartFireFeedback = NULL;
    this->SecondaryRefireFeedback = NULL;
    this->SecondaryStopFireFeedback = NULL;
    this->SecondaryFireRoundFeedback = NULL;
    this->SecondaryDryFireFeedback = NULL;
    this->bIsFiring = false;
    this->bFiringRequested = false;
    this->bFiringRequestHeld = false;
    this->RefireTimer = -1.00f;
    this->BurstCounter = 0;
    this->BurstTimer = 0.00f;
    this->RoundsFired = 0;
}

