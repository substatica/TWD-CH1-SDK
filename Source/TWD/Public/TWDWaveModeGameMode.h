#pragma once
#include "CoreMinimal.h"
#include "TWDGameMode.h"
#include "TWDWaveModeGameMode.generated.h"

class ASDIWeaponFirearm;
class UTWDCraftingTableProgression;
class AController;
class APawn;
class USDIWeaponFirearmFireModeComponent;
class ASDIWeaponFirearmAmmo;

UCLASS(Blueprintable, NonTransient)
class TWD_API ATWDWaveModeGameMode : public ATWDGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalancedWaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UTWDCraftingTableProgression*> CraftingTableProgressions;
    
    ATWDWaveModeGameMode();
    UFUNCTION(BlueprintCallable)
    void SetAllWavesCompleted(bool bSet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFiringWeapon(AController* Controller, APawn* Pawn, ASDIWeaponFirearm* Firearm, USDIWeaponFirearmFireModeComponent* Firemode, ASDIWeaponFirearmAmmo* Ammo, int32 ShotID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllWavesCompleted() const;
    
};

