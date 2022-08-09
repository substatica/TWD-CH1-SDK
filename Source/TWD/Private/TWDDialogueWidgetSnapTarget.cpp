#include "TWDDialogueWidgetSnapTarget.h"

void UTWDDialogueWidgetSnapTarget::SetSnapThreshold(float NewThreshold) {
}

void UTWDDialogueWidgetSnapTarget::SetOffset(FVector NewOffset) {
}

void UTWDDialogueWidgetSnapTarget::SetEnabled(bool bNewEnabled) {
}

bool UTWDDialogueWidgetSnapTarget::IsEnabled() const {
    return false;
}

float UTWDDialogueWidgetSnapTarget::GetSnapThreshold() const {
    return 0.0f;
}

FVector UTWDDialogueWidgetSnapTarget::GetOffset() const {
    return FVector{};
}

UTWDDialogueWidgetSnapTarget::UTWDDialogueWidgetSnapTarget() {
    this->SnapThreshold = 0.70f;
    this->bEnabled = true;
}

