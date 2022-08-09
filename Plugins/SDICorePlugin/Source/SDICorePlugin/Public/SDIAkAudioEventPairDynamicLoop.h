#pragma once
#include "CoreMinimal.h"
#include "SDIAkAudioEventPair.h"
#include "SDIAkAudioEventPairDynamicLoop.generated.h"

class UAkComponent;
class AActor;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAkAudioEventPairDynamicLoop {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDIAkAudioEventPair StartEvent;
    
    UPROPERTY(EditAnywhere)
    FSDIAkAudioEventPair StopEvent;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UAkComponent> LoopPlayingComponent;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> LoopInstigator;
    
    UPROPERTY(Transient)
    bool bPlayedLocalEvent;
    
    FSDIAkAudioEventPairDynamicLoop();
};

