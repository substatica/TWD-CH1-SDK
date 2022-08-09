#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SDICoreAttributeComponentSettings.h"
#include "DecayInt.h"
#include "SDICoreAttributeComponentChangeSignatureDelegate.h"
#include "SDICoreAttributeComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICoreAttributeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FSDICoreAttributeComponentSettings RepSettings;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepValue)
    int32 RepValue;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepBoost)
    int32 RepBoost;
    
    UPROPERTY(Transient)
    float RegenFraction;
    
    UPROPERTY(Transient)
    float RegenTimer;
    
    UPROPERTY(Replicated, Transient)
    bool bRepRegenAllowed;
    
    UPROPERTY(Transient)
    TArray<FDecayInt> ExternRegens;
    
    UPROPERTY(Transient)
    TArray<FDecayInt> ExternBoosts;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSDICoreAttributeComponentChangeSignature ValueChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSDICoreAttributeComponentChangeSignature BoostChangeDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSDICoreAttributeComponentChangeSignature TotalChangeDelegate;
    
    USDICoreAttributeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRegenAllowed(bool bRegenAllowed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 SetAttrPctNonZeroMinimum(float Pct, int32 NonZeroMinimumValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 SetAttrPct(float Pct);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 SetAttr(int32 NewValue, bool bInitial);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllRegens();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllBoostsAndRegens();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllBoosts();
    
protected:
    UFUNCTION()
    void OnRep_RepValue(int32 OldRepValue);
    
    UFUNCTION()
    void OnRep_RepBoost(int32 OldRepBoost);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 IncAttr(int32 Amount);
    
    UFUNCTION(BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetPercent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMax() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBoost() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 DecAttrWithEffectiveness(int32& InOutAmount, float Effectiveness);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 DecAttr(int32 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AlterAttr(int32 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddRegen(FDecayInt Regen);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AddBoost(FDecayInt Boost, bool bApplyToValueFirst);
    
};

