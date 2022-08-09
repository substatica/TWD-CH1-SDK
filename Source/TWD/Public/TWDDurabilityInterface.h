#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TWDReplicatedDurabilityInterfaceData.h"
#include "TWDDurabilityInterface.generated.h"

class UTWDPlayerBuffManager;

UINTERFACE(Blueprintable)
class UTWDDurabilityInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDDurabilityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void SetDurability(float NewDurability);
    
    UFUNCTION()
    virtual void OnRep_RepTWDDurabilityData_Internal(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDInventoryData) PURE_VIRTUAL(OnRep_RepTWDDurabilityData_Internal,);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDurabilityChanged(float OldDurability, float NewDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDurability(float& MaxDurability) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComputeDurabilityInfo(float& OutCurrent, float& OutMax, float& OutPct, int32& OutUsesRemaining, int32& OutMaxUses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AlterDurabilityWithBuffs(const UTWDPlayerBuffManager* BuffManager, float BaseDurabilityDelta, bool bCanBreak, bool bCanFix);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AlterDurability(float DurabilityDelta, bool bCanBreak, bool bCanFix);
    
};

