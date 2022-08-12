#pragma once
#include "CoreMinimal.h"
#include "Components/SynthComponent.h"
#include "SDIAudioCaptureComponent.generated.h"

class USDIPlayerVoiceAkComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API USDIAudioCaptureComponent : public USynthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
public:
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPlayerVoiceAkComponent* PlayerVoiceAkComponent;
    
    USDIAudioCaptureComponent(const FObjectInitializer & ObjectInitializer);
};

