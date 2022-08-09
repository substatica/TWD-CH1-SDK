#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NetworkManagerGameInstance.generated.h"

class UNetworkManager;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class NETWORKMANAGERPLUGIN_API UNetworkManagerGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BuildInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNetworkManager* NetworkManagerInst;
    
public:
    UNetworkManagerGameInstance();
    UFUNCTION(BlueprintCallable, Exec)
    void ShowBuildVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNetworkManager* GetNetworkManager() const;
    
};

