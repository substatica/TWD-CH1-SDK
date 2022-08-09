#pragma once
#include "CoreMinimal.h"
#include "Components/SynthComponent.h"
#include "SDIAudioCaptureComponent.generated.h"

class USDIPlayerVoiceAkComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIAudioCaptureComponent : public USynthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleAnywhere)
    int32 SampleRate;
    
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USDIPlayerVoiceAkComponent* PlayerVoiceAkComponent;
    
    USDIAudioCaptureComponent();
};

