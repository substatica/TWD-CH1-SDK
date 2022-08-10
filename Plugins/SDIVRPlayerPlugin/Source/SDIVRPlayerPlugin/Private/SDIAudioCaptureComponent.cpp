#include "SDIAudioCaptureComponent.h"

USDIAudioCaptureComponent::U(const FObjectInitializer & ObjectInitializer) : USynthComponent(ObjectInitializer) {
    this->SampleRate = -1;SDIAudioCaptureComponent
    this->PlayerVoiceAkComponent = NULL;
}