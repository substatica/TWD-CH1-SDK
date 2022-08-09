#pragma once
#include "CoreMinimal.h"
#include "Components/SynthComponent.h"
#include "SDIAudioCaptureComponent.generated.h"

class USDIPlayerVoiceAkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIAudioCaptureComponent : public USynthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDIPlayerVoiceAkComponent* PlayerVoiceAkComponent;
    
    USDIAudioCaptureComponent();
};

