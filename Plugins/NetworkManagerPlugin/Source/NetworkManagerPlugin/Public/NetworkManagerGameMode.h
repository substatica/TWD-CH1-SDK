#pragma once
#include "CoreMinimal.h"
#include "SDICoreGameMode.h"
#include "ServerOption.h"
#include "NetworkManagerGameMode.generated.h"

UCLASS(NonTransient)
class NETWORKMANAGERPLUGIN_API ANetworkManagerGameMode : public ASDICoreGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FServerOption ServerOptions;
    
    UPROPERTY(Transient)
    FName SDICallbackState;
    
    UPROPERTY(Transient)
    bool bSDICallbackSucceeded;
    
    UPROPERTY(Transient)
    FName MatchSubState;
    
    UPROPERTY(Transient)
    bool PendingGameServerUpdate;
    
    UPROPERTY(Transient)
    int32 PendingGameServerStatus;
    
    UPROPERTY(Transient)
    int32 PendingGameServerPort;
    
    UPROPERTY(Transient)
    bool bIsRunningOnAWS;
    
public:
    ANetworkManagerGameMode();
};

