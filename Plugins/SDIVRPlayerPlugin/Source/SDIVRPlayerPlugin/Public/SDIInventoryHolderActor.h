#pragma once
#include "CoreMinimal.h"
#include "SDIInventoryHolderInterface.h"
#include "SDIInteractiveActor.h"
#include "SDIInventoryHolderInterfaceInventoryList.h"
#include "SDIInventoryHolderActor.generated.h"

class ASDIInventoryActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIInventoryHolderActor : public ASDIInteractiveActor, public ISDIInventoryHolderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSDIInventoryHolderInterfaceInventoryList InitialInventory;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepInventoryList)
    TArray<ASDIInventoryActor*> RepInventoryList;
    
public:
    ASDIInventoryHolderActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_RepInventoryList(const TArray<ASDIInventoryActor*>& OldRepInventoryList);
    
    
    // Fix for true pure virtual functions not being implemented
};

