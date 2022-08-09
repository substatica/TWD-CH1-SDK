#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "TWDTextToSpeechAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDTextToSpeechAkComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
public:
    UTWDTextToSpeechAkComponent();
};

