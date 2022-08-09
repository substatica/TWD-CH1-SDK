#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ESDIUtilityAIDifficulty.h"
#include "SDICoreCheatManager.generated.h"

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDICoreCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    USDICoreCheatManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NoRecoil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NoAmmoDeduction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InfiniteAmmoCheatEnabled();
    
    UFUNCTION(Exec)
    void CheatSetMonkeyMode(uint8 NewMonkeyMode, ESDIUtilityAIDifficulty NewMonkeyDifficulty);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatNoRecoil();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatNoAmmoDeduction();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatForceServerCrash(float Delay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatForceGarbageCollection(bool bFullPurge);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatForceCrash(float Delay);
    
};

