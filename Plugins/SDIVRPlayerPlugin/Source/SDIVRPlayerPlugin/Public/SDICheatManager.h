#pragma once
#include "CoreMinimal.h"
#include "SDICoreCheatManager.h"
#include "SDICheatManager.generated.h"

UCLASS()
class SDIVRPLAYERPLUGIN_API USDICheatManager : public USDICoreCheatManager {
    GENERATED_BODY()
public:
    USDICheatManager();
    UFUNCTION(Exec)
    void CheatServerCommand(const FString& Cmd);
    
    UFUNCTION(Exec)
    void CheatForcePhysicsHandsReset();
    
    UFUNCTION(Exec)
    void CheatForcePhysicsHandsOn();
    
    UFUNCTION(Exec)
    void CheatForcePhysicsHandsOff();
    
};

