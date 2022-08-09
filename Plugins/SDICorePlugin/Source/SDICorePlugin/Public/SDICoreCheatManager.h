#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ESDIUtilityAIDifficulty.h"
#include "SDICoreCheatManager.generated.h"

UCLASS()
class SDICOREPLUGIN_API USDICoreCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    USDICoreCheatManager();
    UFUNCTION(BlueprintPure)
    static bool NoRecoil();
    
    UFUNCTION(BlueprintPure)
    static bool NoAmmoDeduction();
    
    UFUNCTION(BlueprintPure)
    static bool InfiniteAmmoCheatEnabled();
    
    UFUNCTION(Exec)
    void CheatSetMonkeyMode(uint8 NewMonkeyMode, ESDIUtilityAIDifficulty NewMonkeyDifficulty);
    
    UFUNCTION(Exec)
    void CheatNoRecoil();
    
    UFUNCTION(Exec)
    void CheatNoAmmoDeduction();
    
    UFUNCTION(Exec)
    void CheatInfiniteAmmo();
    
    UFUNCTION(Exec)
    void CheatForceServerCrash(float Delay);
    
    UFUNCTION(Exec)
    void CheatForceGarbageCollection(bool bFullPurge);
    
    UFUNCTION(Exec)
    void CheatForceCrash(float Delay);
    
};

