#include "SDIAutoTickSkeletalMeshComponent.h"

void USDIAutoTickSkeletalMeshComponent::DisableTickFromTimer() {
}

USDIAutoTickSkeletalMeshComponent::USDIAutoTickSkeletalMeshComponent() {
    this->bAlwaysTick = false;
    this->ExtraTickTime = 1.50f;
}

