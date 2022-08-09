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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAkAudioEventPair StartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAkAudioEventPair StopEvent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UAkComponent> LoopPlayingComponent;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> LoopInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayedLocalEvent;
    
    FSDIAkAudioEventPairDynamicLoop();
};

