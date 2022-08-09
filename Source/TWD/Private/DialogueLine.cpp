#include "DialogueLine.h"

FDialogueLine::FDialogueLine() {
    this->Emotion = ECharacterEmotion::Neutral;
    this->Pose = ECharacterPose::Neutral;
    this->Gesture = ECharacterGesture::None;
    this->bSkippable = false;
    this->CachedAudioEvent = NULL;
}

