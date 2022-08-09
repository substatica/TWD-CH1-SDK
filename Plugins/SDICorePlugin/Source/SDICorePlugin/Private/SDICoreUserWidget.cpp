#include "SDICoreUserWidget.h"

class UUserWidget;
class USDICoreWidgetComponent;
class APlayerState;
class APawn;

void USDICoreUserWidget::SetComponentManuallyRedraw(bool bUseManualRedraw, bool bResetLastWidgetRenderTime) {
}

void USDICoreUserWidget::ResetComponentLastWidgetRenderTime() {
}


APlayerState* USDICoreUserWidget::GetWidgetViewPlayerState(const UUserWidget* Widget) {
    return NULL;
}

APawn* USDICoreUserWidget::GetWidgetViewPawn(const UUserWidget* Widget) {
    return NULL;
}

USDICoreWidgetComponent* USDICoreUserWidget::GetWidgetComponent() const {
    return NULL;
}

APlayerState* USDICoreUserWidget::GetViewPlayerState() const {
    return NULL;
}

APawn* USDICoreUserWidget::GetViewPawn() const {
    return NULL;
}

bool USDICoreUserWidget::GetDistanceToViewPawn(float& OutDistance, bool bXYOnly, bool bUseWidgetComponentLocation) const {
    return false;
}

bool USDICoreUserWidget::GetDeltaToViewPawn(FVector& OutDelta, bool bUseWidgetComponentLocation) const {
    return false;
}

bool USDICoreUserWidget::GetComponentManuallyRedraw() const {
    return false;
}

void USDICoreUserWidget::DestroyWidgetComponent() {
}

void USDICoreUserWidget::ComponentRequestRedraw() {
}

USDICoreUserWidget::USDICoreUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bWidgetComponentAutoVisibility = true;
    this->bWidgetComponentAutoAttachment = true;
    this->bWidgetComponentAutoTickControl = true;
}

