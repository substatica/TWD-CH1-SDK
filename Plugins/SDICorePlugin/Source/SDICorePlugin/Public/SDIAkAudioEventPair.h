#pragma once
#include "CoreMinimal.h"
#include "SDIAkAudioEventPair.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAkAudioEventPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSeparateLocalAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* LocalAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* RemoteAkEvent;
    
    FSDIAkAudioEventPair();
};

