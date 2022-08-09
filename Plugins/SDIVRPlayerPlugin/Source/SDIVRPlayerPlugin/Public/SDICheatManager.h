#pragma once
#include "CoreMinimal.h"
#include "SDICoreCheatManager.h"
#include "SDICheatManager.generated.h"

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API USDICheatManager : public USDICoreCheatManager {
    GENERATED_BODY()
public:
    USDICheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void CheatServerCommand(const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatForcePhysicsHandsReset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatForcePhysicsHandsOn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatForcePhysicsHandsOff();
    
};

