#include "TWDAudioCaptureComponent.h"

void UTWDAudioCaptureComponent::OnAudioEnvelopeValueCb(const float EnvelopeValue) {
}

void UTWDAudioCaptureComponent::EndPTTEventCapture() {
}

void UTWDAudioCaptureComponent::BeginPTTEventCapture() {
}

UTWDAudioCaptureComponent::UTWDAudioCaptureComponent() {
    this->BeginSoundEventThreshold = 0.02f;
    this->EndSoundEventPct = 0.20f;
    this->EnvelopeEventRangeScale = 40000.00f;
    this->SoundEventWhisperThreshold = 0.01f;
    this->SoundEventWhisperRadius = 1800.00f;
    this->SoundEventSpeakThreshold = 0.03f;
    this->SoundEventSpeakRadius = 1800.00f;
    this->SoundEventShoutRadius = 5000.00f;
    this->Period = 0.05f;
    this->bPTTSoundEvents = true;
    this->bPTTCaptureSoundEvent = false;
    this->bPTTWasCaptureSoundEvent = false;
    this->FrameHistoryDepth = 10;
    this->FrameHistoryIdx = 0;
    this->FrameHistoryCount = 0;
    this->LastNoiseTime = 0.00f;
    this->LastNoiseEnvelopeValue = 0.00f;
    this->bSoundEventInProgress = false;
    this->bSoundEventTrailingOff = false;
    this->SoundEventEnvelopeValueMax = 0.00f;
    this->EnvelopeValueHistory.AddDefaulted(10);
    this->EnvelopeValueHistoryTotal = 0.00f;
}

