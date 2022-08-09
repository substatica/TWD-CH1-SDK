#pragma once
#include "CoreMinimal.h"
#include "SDIInventoryHolderInterface.h"
#include "SDIInteractiveActor.h"
#include "SDIInventoryHolderInterfaceInventoryList.h"
#include "SDIInventoryHolderActor.generated.h"

class ASDIInventoryActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInventoryHolderActor : public ASDIInteractiveActor, public ISDIInventoryHolderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIInventoryHolderInterfaceInventoryList InitialInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepInventoryList, meta=(AllowPrivateAccess=true))
    TArray<ASDIInventoryActor*> RepInventoryList;
    
public:
    ASDIInventoryHolderActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepInventoryList(const TArray<ASDIInventoryActor*>& OldRepInventoryList);
    
    
    // Fix for true pure virtual functions not being implemented
};

