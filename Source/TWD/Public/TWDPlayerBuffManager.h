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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> CurrentBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTWDDamageType>, float> DamageGivenFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTWDDamageType>, float> DamageTakenFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ASDIInventoryActor>, float> InventoryCapacityFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NoiseFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SprintStaminaFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MeleeStaminaFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GlobalStaminaFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StaminaRegenFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeaponDurabilityDeltaFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MeleeWeaponDurabilityDeltaFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CraftedGunDurabilityDeltaFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BowDurabilityDeltaFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ArrowBreakChanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNoReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<ATWDWeaponGun>> CraftedGuns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealthBoostAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxStaminaBoostAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HealthRegenBuffName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthRegenTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTWDHealingBuffParams> HealBuffParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealingTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealingAmountRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TemporaryBuffs;
    
public:
    UTWDPlayerBuffManager();
    UFUNCTION(BlueprintCallable)
    void TickHealthRegen(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickHealing(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartHealthRegen();
    
    UFUNCTION(BlueprintCallable)
    void StartHealing(const ATWDCharacter* PlayerCharacter, FName HealBuffName);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxStaminaBoostAmount(float NewMaxStaminaBoostAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxHealthBoostAmount(float NewMaxHealthBoostAmount);
    
    UFUNCTION(BlueprintCallable)
    void SaveTemporaryBuffs(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void ResetBuffs();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTemporaryBuffs();
    
    UFUNCTION(BlueprintCallable)
    void RemoveBuff(FName BuffName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuffsReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuffRemoved(FName BuffName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuffAdded(FName BuffName);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadTemporaryBuffs(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    bool IsNoReloadEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    float GetWeaponDurabilityDeltaMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetStaminaRegenMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSprintStaminaMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetNoiseMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMeleeWeaponDurabilityDeltaMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMeleeStaminaMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxStaminaBoostAmount() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxHealthBoostAmount() const;
    
    UFUNCTION(BlueprintCallable)
    float GetInventoryCapacityMultiplier(TSubclassOf<ASDIInventoryActor> InventoryType) const;
    
    UFUNCTION(BlueprintCallable)
    float GetHealthRegenTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHealthRegenRate() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHealingTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHealingRate() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGlobalStaminaMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDamageTakenMultiplier(TSubclassOf<UTWDDamageType> DamageType) const;
    
    UFUNCTION(BlueprintCallable)
    float GetDamageGivenMultiplier(TSubclassOf<UTWDDamageType> DamageType) const;
    
    UFUNCTION(BlueprintCallable)
    float GetCraftedGunDurabilityDeltaMultiplier(TSoftClassPtr<ATWDWeaponGun> GunClass) const;
    
    UFUNCTION(BlueprintCallable)
    float GetBowDurabilityDeltaMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetArrowBreakChanceMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelHealing();
    
    UFUNCTION(BlueprintCallable)
    void AddBuff(FName BuffName);
    
};

