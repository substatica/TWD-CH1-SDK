#pragma once
#include "CoreMinimal.h"
#include "AkMainOutputSettings.h"
#include "AkSpatialAudioSettings.h"
#include "AkCommonInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkCommonInitializationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 MaximumNumberOfMemoryPools;
    
    UPROPERTY(EditAnywhere)
    uint32 MaximumNumberOfPositioningPaths;
    
    UPROPERTY(EditAnywhere)
    uint32 CommandQueueSize;
    
    UPROPERTY(EditAnywhere)
    uint32 SamplesPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkMainOutputSettings MainOutputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreamingLookAheadRatio;
    
    UPROPERTY(EditAnywhere)
    uint16 NumberOfRefillsInVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkSpatialAudioSettings SpatialAudioSettings;
    
    AKAUDIO_API FAkCommonInitializationSettings();
};

