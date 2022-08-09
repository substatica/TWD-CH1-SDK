#include "SDICoreWidgetComponent.h"

class UUserWidget;

void USDICoreWidgetComponent::SetWidgetComponentAutoTickControl(bool bInWidgetComponentAutoTickControl) {
}

void USDICoreWidgetComponent::SetWidgetComponentAutoAttachment(bool bInWidgetComponentAutoAttachment) {
}

void USDICoreWidgetComponent::SetOffscreenPivot(const FVector2D& InPivot) {
}

void USDICoreWidgetComponent::SetOffscreenDrawWhenOnscreen(bool InbOffscreenDrawWhenOnscreen) {
}

void USDICoreWidgetComponent::SetOffscreenDrawSize(FVector2D Size) {
}

void USDICoreWidgetComponent::SetOffscreenDrawAtDesiredSize(bool InbOffscreenDrawAtDesiredSize) {
}

void USDICoreWidgetComponent::ResetLastWidgetRenderTime() {
}

UUserWidget* USDICoreWidgetComponent::GetOffscreenUserWidgetObject() const {
    return NULL;
}

FVector2D USDICoreWidgetComponent::GetOffscreenPivot() const {
    return FVector2D{};
}

bool USDICoreWidgetComponent::GetOffscreenDrawWhenOnscreen() const {
    return false;
}

FVector2D USDICoreWidgetComponent::GetOffscreenDrawSize() const {
    return FVector2D{};
}

bool USDICoreWidgetComponent::GetOffscreenDrawAtDesiredSize() const {
    return false;
}

USDICoreWidgetComponent::USDICoreWidgetComponent() {
    this->bIsBillboard = false;
    this->OffscreenWidgetClass = NULL;
    this->bOffscreenDrawWhenOnscreen = false;
    this->bOffscreenDrawAtDesiredSize = true;
    this->bWidgetComponentAutoAttachment = false;
    this->bWidgetComponentAutoTickControl = false;
    this->bWidgetDistanceCulled = false;
    this->OffscreenWidget = NULL;
    this->bOffscreenWidgetAddedToScreen = false;
}

