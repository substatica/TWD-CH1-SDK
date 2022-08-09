#include "InteractiveViewComponent.h"

void UInteractiveViewComponent::SetEnable(const bool bEnable) {
}

UInteractiveViewComponent::UInteractiveViewComponent() {
    this->ViewType = EViewType::EventBased;
    this->bEnabled = true;
    this->bDisableAfterOneCompletionEvent = false;
    this->TimeForViewCompletion = 3.00f;
    this->MaxContinuousFailTime = 5.00f;
    this->ViewConeAngle = 20.00f;
    this->OwnerConeAngle = -180.00f;
}

