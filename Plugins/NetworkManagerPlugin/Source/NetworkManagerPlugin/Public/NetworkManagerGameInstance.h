#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NetworkManagerGameInstance.generated.h"

class UNetworkManager;

UCLASS(NonTransient, Config=Engine)
class NETWORKMANAGERPLUGIN_API UNetworkManagerGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FString BuildInfo;
    
protected:
    UPROPERTY(Transient)
    UNetworkManager* NetworkManagerInst;
    
public:
    UNetworkManagerGameInstance();
    UFUNCTION(Exec)
    void ShowBuildVersion();
    
    UFUNCTION(BlueprintPure)
    UNetworkManager* GetNetworkManager() const;
    
};

