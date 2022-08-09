#include "SDIPlayerHandInteractComponent.h"

class USDIPlayerHandInteractComponent;
class APawn;
class APlayerController;
class ASDIPlayerHand;

void USDIPlayerHandInteractComponent::SetPriorityInteractComp(USDIPlayerHandInteractComponent* Comp) {
}

void USDIPlayerHandInteractComponent::PhysicalInteractRelease() {
}

bool USDIPlayerHandInteractComponent::IsInteractionInCapsuleTop(const FSDIPlayerHandInteractComponentEntry& Entry, bool bFullSphere) const {
    return false;
}

bool USDIPlayerHandInteractComponent::IsInteractionInCapsuleSection(const FSDIPlayerHandInteractComponentEntry& Entry, TEnumAsByte<EAxis::Type> Axis, bool bInvertAxis) const {
    return false;
}

bool USDIPlayerHandInteractComponent::IsInteractionInCapsuleBottom(const FSDIPlayerHandInteractComponentEntry& Entry, bool bFullSphere) const {
    return false;
}

ASDIPlayerHand* USDIPlayerHandInteractComponent::GetPlayerHand() const {
    return NULL;
}

APlayerController* USDIPlayerHandInteractComponent::GetPlayerController() const {
    return NULL;
}

APawn* USDIPlayerHandInteractComponent::GetPawn() const {
    return NULL;
}

FTransform USDIPlayerHandInteractComponent::GetInteractCapsuleTransform() const {
    return FTransform{};
}

EControllerHand USDIPlayerHandInteractComponent::GetControllerHand() const {
    return EControllerHand::Left;
}

FHitResult USDIPlayerHandInteractComponent::CheckInteractWorld(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, float Inflation) {
    return FHitResult{};
}

FHitResult USDIPlayerHandInteractComponent::CheckGripWorld(ASDIPlayerHand* hand, float Inflation, bool bAsync) {
    return FHitResult{};
}

USDIPlayerHandInteractComponent::USDIPlayerHandInteractComponent() {
    this->PendingAsyncGripWorldInflation = 0.00f;
    this->AsyncGripWorldInflation = 0.00f;
    this->bRanged = false;
    this->bPhysical = false;
    this->bOrientUsingShoulderToHandDirection = true;
    this->bShoulderToHandUseHMDLocationZ = true;
    this->bShoulderToHandBlendMDDirection = false;
    this->ShoulderToHandHMDDirectionMaxAngleDegrees = 60.00f;
    this->bUseShoulderToHandHybrid = true;
    this->bShoulderToHandHybridCullToCapsuleArc = true;
    this->ShoulderToHandHybridBlend = 0.50f;
    this->ShoulderToHandDirectionOffset = 0.00f;
    this->InventorySlotOverlapRadius = 32.00f;
}

