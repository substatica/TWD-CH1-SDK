#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ServerOption.generated.h"

USTRUCT(BlueprintType)
struct NETWORKMANAGERPLUGIN_API FServerOption {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString PlatformUsername;
    
    UPROPERTY(Transient)
    FString PlatformPassword;
    
    UPROPERTY(Transient)
    FGuid PlatformLobby;
    
    UPROPERTY(Transient)
    FGuid PlatformGameServer;
    
    UPROPERTY(Transient)
    int32 Port;
    
    UPROPERTY(Transient)
    FGuid MatchGuid;
    
    UPROPERTY(Transient)
    FString AmazonS3Id;
    
    UPROPERTY(Transient)
    FString AmazonS3Key;
    
    UPROPERTY(Transient)
    FString Realm;
    
    UPROPERTY(Transient)
    FString MapName;
    
    UPROPERTY(Transient)
    FGuid MapGuid;
    
    FServerOption();
};

