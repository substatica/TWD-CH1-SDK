#pragma once
#include "CoreMinimal.h"
#include "AkCommunicationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkCommunicationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 PoolSize;
    
    UPROPERTY(EditAnywhere)
    uint16 DiscoveryBroadcastPort;
    
    UPROPERTY(EditAnywhere)
    uint16 CommandPort;
    
    UPROPERTY(EditAnywhere)
    uint16 NotificationPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NetworkName;
    
    AKAUDIO_API FAkCommunicationSettings();
};

