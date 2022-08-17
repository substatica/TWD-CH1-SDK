#pragma once
#include "CoreMinimal.h"
#include "TWDProp.h"
#include "TWDDurabilityInterface.h"
#include "TWDReplicatedDurabilityInterfaceData.h"
#include "TWDDurabilityInterfaceData.h"
#include "TWDAmmoBox.generated.h"

UCLASS(Blueprintable)
class TWD_API ATWDAmmoBox : public ATWDProp, public ITWDDurabilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMergeBasedOnDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDDurabilityInterfaceData TWDDurabilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepTWDDurabilityData, meta=(AllowPrivateAccess=true))
    FTWDReplicatedDurabilityInterfaceData RepTWDDurabilityData;
    
public:
    ATWDAmmoBox(const FObjectInitializer& ObjectInitializer);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepTWDDurabilityData(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDDurabilityData);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void OnRep_RepTWDDurabilityData_Internal(const FTWDReplicatedDurabilityInterfaceData& OldRepTWDInventoryData) override PURE_VIRTUAL(OnRep_RepTWDDurabilityData_Internal,);
    
};

