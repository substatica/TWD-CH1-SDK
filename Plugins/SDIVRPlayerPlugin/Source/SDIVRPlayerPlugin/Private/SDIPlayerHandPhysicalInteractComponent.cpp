#include "SDIPlayerHandPhysicalInteractComponent.h"

class AActor;

FHitResult USDIPlayerHandPhysicalInteractComponent::K2GetPhysicalInteractResult() const {
    return FHitResult{};
}

AActor* USDIPlayerHandPhysicalInteractComponent::GetGetPhysicalInteractActor() const {
    return NULL;
}

USDIPlayerHandPhysicalInteractComponent::USDIPlayerHandPhysicalInteractComponent() {
    this->DebounceTime = 0.10f;
    this->MinPhysicalInteractPushTime = 0.05f;
    this->PhysicalInteractPushThreshold = 2.00f;
    this->PhysicalInteractPushReleaseThreshold = 2.00f;
    this->PhysicalInteractMagnetEngageDistance = 3.00f;
    this->PhysicalInteractMagnetDisengageDistance = 4.00f;
    this->DebounceTimer = 0.00f;
    this->bPhysicalInteractionPushed = false;
    this->PhysicalInteractionPushPosition = 0.00f;
    this->bPhysicalInteractPushCollisionValid = true;
    this->PhysicalInteractPushTime = 0.00f;
}

