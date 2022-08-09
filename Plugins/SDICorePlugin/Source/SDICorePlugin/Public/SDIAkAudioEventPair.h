#pragma once
#include "CoreMinimal.h"
#include "SDIAkAudioEventPair.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAkAudioEventPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeparateLocalAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LocalAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RemoteAkEvent;
    
    FSDIAkAudioEventPair();
};

