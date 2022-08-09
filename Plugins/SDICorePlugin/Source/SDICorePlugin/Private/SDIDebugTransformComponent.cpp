#include "SDIDebugTransformComponent.h"

USDIDebugTransformComponent::USDIDebugTransformComponent() {
    this->bkeepHistory = false;
    this->bUpdateInitialized = false;
    this->MaxUpdatedLocationDeltaSize = 0.00f;
    this->MaxTickLocationVelocity = 0.00f;
    this->bTickInitialized = false;
}

