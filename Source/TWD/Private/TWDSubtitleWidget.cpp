#include "TWDSubtitleWidget.h"

void UTWDSubtitleWidget::RemoveSubtitle(int32 Key) {
}


FText UTWDSubtitleWidget::GetSubtitleText() const {
    return FText::GetEmpty();
}

int32 UTWDSubtitleWidget::AddSubtitle(const FText& Name, const FText& Subtitle, TArray<FSubtitleSplit> SubtitleSplits, float Duration) {
    return 0;
}

int32 UTWDSubtitleWidget::AddLineSubtitle(const FText& Name, FDialogueLine DialogueLine, EGender Gender, const FString& VoiceId) {
    return 0;
}

UTWDSubtitleWidget::UTWDSubtitleWidget() {
    this->SubtitleTextBlock = NULL;
}

