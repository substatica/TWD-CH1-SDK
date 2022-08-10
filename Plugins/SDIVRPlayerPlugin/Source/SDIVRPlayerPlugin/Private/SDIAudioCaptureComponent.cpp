#include "SDIAudioCaptureComponent.h"

USDIAudioCaptureComponent::USDIAudioCaptureComponent(const FObjectInitializer & ObjectInitializer) : Super(ObjectInitializer) {
    this->SampleRate = -1;
    this->PlayerVoiceAkComponent = NULL;
}