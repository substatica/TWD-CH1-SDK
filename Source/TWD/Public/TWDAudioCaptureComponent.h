#pragma once
#include "CoreMinimal.h"
#include "SDIAudioCaptureComponent.h"
#include "TWDAudioCaptureComponent.generated.h"

class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDAudioCaptureComponent : public USDIAudioCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeginSoundEventThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndSoundEventPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnvelopeEventRangeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundEventWhisperThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundEventWhisperRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundEventSpeakThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundEventSpeakRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundEventShoutRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Period;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bPTTSoundEvents;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bPTTCaptureSoundEvent;
    
    UPROPERTY(Transient)
    bool bPTTWasCaptureSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FrameHistoryDepth;
    
    UPROPERTY(Transient)
    int32 FrameHistoryIdx;
    
    UPROPERTY(Transient)
    int32 FrameHistoryCount;
    
    UPROPERTY(Transient)
    float LastNoiseTime;
    
    UPROPERTY(Transient)
    float LastNoiseEnvelopeValue;
    
    UPROPERTY(Transient)
    bool bSoundEventInProgress;
    
    UPROPERTY(Transient)
    bool bSoundEventTrailingOff;
    
    UPROPERTY(Transient)
    float SoundEventEnvelopeValueMax;
    
    UPROPERTY(Transient)
    TArray<float> EnvelopeValueHistory;
    
    UPROPERTY(Transient)
    float EnvelopeValueHistoryTotal;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> AttachedParent;
    
    UTWDAudioCaptureComponent();
private:
    UFUNCTION()
    void OnAudioEnvelopeValueCb(const float EnvelopeValue);
    
    UFUNCTION(BlueprintCallable)
    void EndPTTEventCapture();
    
    UFUNCTION(BlueprintCallable)
    void BeginPTTEventCapture();
    
};

