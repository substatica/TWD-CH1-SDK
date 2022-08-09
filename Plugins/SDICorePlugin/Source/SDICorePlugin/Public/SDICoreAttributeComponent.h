#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SDICoreAttributeComponentSettings.h"
#include "DecayInt.h"
#include "SDICoreAttributeComponentChangeSignatureDelegate.h"
#include "SDICoreAttributeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICoreAttributeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSDICoreAttributeComponentSettings RepSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepValue, meta=(AllowPrivateAccess=true))
    int32 RepValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepBoost, meta=(AllowPrivateAccess=true))
    int32 RepBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RegenFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RegenTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRepRegenAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDecayInt> ExternRegens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDecayInt> ExternBoosts;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreAttributeComponentChangeSignature ValueChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreAttributeComponentChangeSignature BoostChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnRep_RepValue(int32 OldRepValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepBoost(int32 OldRepBoost);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 IncAttr(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

