#include "TWDNonVRInteractionWidget.h"

class ASDICorePlayerController;

void UTWDNonVRInteractionWidget::UpdateInteraction() {
}

void UTWDNonVRInteractionWidget::StopInteraction() {
}

void UTWDNonVRInteractionWidget::StartInteraction() {
}





void UTWDNonVRInteractionWidget::OnDeviceChanged(ASDICorePlayerController* PC, bool bIsUsingGamePad) {
}

TArray<FTWDNonVRInteractionPrompt> UTWDNonVRInteractionWidget::GatherInteractionPrompts() const {
    return TArray<FTWDNonVRInteractionPrompt>();
}

UTWDNonVRInteractionWidget::UTWDNonVRInteractionWidget() {
    this->bUseNonVRCameraRotation = true;
    this->NonVRCameraRotationTime = 0.40f;
}

