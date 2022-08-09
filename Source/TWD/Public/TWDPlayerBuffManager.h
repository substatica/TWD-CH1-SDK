#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "TWDHealingBuffParams.h"
#include "TWDPlayerBuffManager.generated.h"

class ATWDCharacter;
class ATWDWeaponGun;
class ASDIInventoryActor;
class UTWDDamageType;
class UTWDSaveGame;

UCLASS(Blueprintable)
class TWD_API UTWDPlayerBuffManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<FName> CurrentBuffs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<TSubclassOf<UTWDDamageType>, float> DamageGivenFactors;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<TSubclassOf<UTWDDamageType>, float> DamageTakenFactors;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TMap<TSubclassOf<ASDIInventoryActor>, float> InventoryCapacityFactors;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float NoiseFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float SprintStaminaFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float MeleeStaminaFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float GlobalStaminaFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float StaminaRegenFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float WeaponDurabilityDeltaFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float MeleeWeaponDurabilityDeltaFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float CraftedGunDurabilityDeltaFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float BowDurabilityDeltaFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ArrowBreakChanceFactor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bNoReload;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<TSoftClassPtr<ATWDWeaponGun>> CraftedGuns;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MaxHealthBoostAmount;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MaxStaminaBoostAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName HealthRegenBuffName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HealthRegenDuration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float HealthRegenRate;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float HealthRegenTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FTWDHealingBuffParams> HealBuffParams;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HealingRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HealingTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HealingAmountRemaining;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> TemporaryBuffs;
    
public:
    UTWDPlayerBuffManager();
    UFUNCTION()
    void TickHealthRegen(float DeltaTime);
    
    UFUNCTION()
    void TickHealing(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartHealthRegen();
    
    UFUNCTION(BlueprintCallable)
    void StartHealing(const ATWDCharacter* PlayerCharacter, FName HealBuffName);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxStaminaBoostAmount(float NewMaxStaminaBoostAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxHealthBoostAmount(float NewMaxHealthBoostAmount);
    
    UFUNCTION()
    void SaveTemporaryBuffs(UTWDSaveGame* SaveGame);
    
    UFUNCTION()
    void ResetBuffs();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTemporaryBuffs();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBuff(FName BuffName);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBuffsReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBuffRemoved(FName BuffName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBuffAdded(FName BuffName);
    
public:
    UFUNCTION()
    void LoadTemporaryBuffs(UTWDSaveGame* SaveGame);
    
    UFUNCTION()
    bool IsNoReloadEnabled() const;
    
    UFUNCTION()
    float GetWeaponDurabilityDeltaMultiplier() const;
    
    UFUNCTION()
    float GetStaminaRegenMultiplier() const;
    
    UFUNCTION()
    float GetSprintStaminaMultiplier() const;
    
    UFUNCTION()
    float GetNoiseMultiplier() const;
    
    UFUNCTION()
    float GetMeleeWeaponDurabilityDeltaMultiplier() const;
    
    UFUNCTION()
    float GetMeleeStaminaMultiplier() const;
    
    UFUNCTION()
    float GetMaxStaminaBoostAmount() const;
    
    UFUNCTION()
    float GetMaxHealthBoostAmount() const;
    
    UFUNCTION()
    float GetInventoryCapacityMultiplier(TSubclassOf<ASDIInventoryActor> InventoryType) const;
    
    UFUNCTION()
    float GetHealthRegenTimeRemaining() const;
    
    UFUNCTION()
    float GetHealthRegenRate() const;
    
    UFUNCTION()
    float GetHealingTimeRemaining() const;
    
    UFUNCTION()
    float GetHealingRate() const;
    
    UFUNCTION()
    float GetGlobalStaminaMultiplier() const;
    
    UFUNCTION()
    float GetDamageTakenMultiplier(TSubclassOf<UTWDDamageType> DamageType) const;
    
    UFUNCTION()
    float GetDamageGivenMultiplier(TSubclassOf<UTWDDamageType> DamageType) const;
    
    UFUNCTION()
    float GetCraftedGunDurabilityDeltaMultiplier(TSoftClassPtr<ATWDWeaponGun> GunClass) const;
    
    UFUNCTION()
    float GetBowDurabilityDeltaMultiplier() const;
    
    UFUNCTION()
    float GetArrowBreakChanceMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelHealing();
    
    UFUNCTION(BlueprintCallable)
    void AddBuff(FName BuffName);
    
};

