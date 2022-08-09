#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "SDIPlayerVoiceAkComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIPlayerVoiceAkComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
    USDIPlayerVoiceAkComponent();
    UFUNCTION(BlueprintPure)
    bool HasAGC() const;
    
};

