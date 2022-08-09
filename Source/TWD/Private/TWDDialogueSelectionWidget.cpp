#include "TWDDialogueSelectionWidget.h"

void UTWDDialogueSelectionWidget::StartHiding_Implementation() {
}

void UTWDDialogueSelectionWidget::Show_Implementation(const TArray<FTWDDialogueOption>& InOptions) {
}

bool UTWDDialogueSelectionWidget::SelectWithOptionName_Implementation(const FName& OptionName) {
    return false;
}

void UTWDDialogueSelectionWidget::SelectOption_Implementation(int32 Index) {
}

void UTWDDialogueSelectionWidget::SelectDirection_Implementation(FVector2D Input) {
}

bool UTWDDialogueSelectionWidget::Select_Implementation() {
    return false;
}

float UTWDDialogueSelectionWidget::GetTimeRemainingPercent() const {
    return 0.0f;
}

FVector2D UTWDDialogueSelectionWidget::GetOptionPosition_Implementation(int32 Index) const {
    return FVector2D{};
}

void UTWDDialogueSelectionWidget::FinishHiding_Implementation() {
}

UTWDDialogueSelectionWidget::UTWDDialogueSelectionWidget() {
    this->SelectionThreshold = 0.10f;
    this->SelectedIndex = -1;
    this->bIsInHidingProcess = false;
}

