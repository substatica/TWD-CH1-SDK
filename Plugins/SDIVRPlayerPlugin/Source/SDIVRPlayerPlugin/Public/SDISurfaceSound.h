#pragma once
#include "CoreMinimal.h"
#include "SDISurfaceSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDISurfaceSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SoundSurfaceSwitchGroup;
    
    FSDISurfaceSound();
};

