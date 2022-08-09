#pragma once
#include "CoreMinimal.h"
#include "TWDProp.h"
#include "TWDDurabilityInterface.h"
#include "TWDReplicatedDurabilityInterfaceData.h"
#include "TWDDurabilityInterfaceData.h"
#include "TWDAmmoBox.generated.h"

UCLASS()
class TWD_API ATWDAmmoBox : public ATWDProp, public ITWDDurabilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMergeBasedOnDurability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTWDDurabilityInterfaceData TWDDurabilityData;
    
    UPROPERTY(ReplicatedUsing=OnRep_RepTWDDurabilityData)
    FTWDReplicatedDurabilityInterfaceData RepTWDDurabilityData;
    
public:
    ATWDAmmoBox();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_RepTWDDurabilityData(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDDurabilityData);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void OnRep_RepTWDDurabilityData_Internal(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDInventoryData) override PURE_VIRTUAL(OnRep_RepTWDDurabilityData_Internal,);
    
};

