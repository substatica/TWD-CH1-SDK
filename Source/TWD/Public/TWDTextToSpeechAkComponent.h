#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "TWDTextToSpeechAkComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDTextToSpeechAkComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 SampleRate;
    
public:
    UTWDTextToSpeechAkComponent();
};

