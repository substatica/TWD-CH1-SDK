#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIInventoryHolderInterfaceInventoryList.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SDIInventoryHolderInterfaceInventoryListEntry.h"
#include "SDIInventoryHolderInterface.generated.h"

class ASDIInventoryActor;
class AActor;

UINTERFACE(Blueprintable)
class SDIVRPLAYERPLUGIN_API USDIInventoryHolderInterface : public UInterface {
    GENERATED_BODY()
};

class SDIVRPLAYERPLUGIN_API ISDIInventoryHolderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerGiveTo(ASDIInventoryActor* Inventory, AActor* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RemoveInventoryItemsByGuid(const FGuid& InvGuid, TArray<ASDIInventoryActor*>& RemovedInventory, bool bExact, bool bDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RemoveInventoryItems(TSubclassOf<ASDIInventoryActor> InvClass, TArray<ASDIInventoryActor*>& RemovedInventory, bool bExact, bool bDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInventoryRemoved(ASDIInventoryActor* Inv);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInventoryCountChanged(ASDIInventoryActor* Inv, int32 OldCount, int32 NewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInventoryAdded(ASDIInventoryActor* Inv);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASDIInventoryActor* GetNextInventory(ASDIInventoryActor* Current, int32 Dir, TSubclassOf<ASDIInventoryActor> InvClass, bool bExact, bool bLoop) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetInventoryOfType(TSubclassOf<ASDIInventoryActor> InvClass, TArray<ASDIInventoryActor*>& OutInventory, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetInventoryByGuid(const FGuid& InvGuid, TArray<ASDIInventoryActor*>& OutInventory, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowStore(ASDIInventoryActor* Inventory, AActor* CurrentInvOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowGrab(ASDIInventoryActor* Inventory, AActor* Grabber) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    ASDIInventoryActor* AddInventoryItemListEntry(const FSDIInventoryHolderInterfaceInventoryListEntry& Entry);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void AddInventoryItemList(const FSDIInventoryHolderInterfaceInventoryList& List);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    ASDIInventoryActor* AddInventoryItemByGuid(const FGuid& InvGuid, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    ASDIInventoryActor* AddInventoryItem(TSubclassOf<ASDIInventoryActor> InvClass, int32 Count);
    
};

