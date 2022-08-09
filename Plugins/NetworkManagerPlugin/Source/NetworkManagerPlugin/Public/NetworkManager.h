#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerLoginSuccessfulDelegate.h"
#include "UObject/Object.h"
#include "NetworkManagerLoginFailedDelegate.h"
#include "NetworkManagerInventoryUpdatedDelegate.h"
#include "NetworkManagerInventoryRemovedFromBackpackDelegate.h"
#include "NetworkManagerInventoryAddedToBackpackDelegate.h"
#include "NetworkManagerBackendStatusUpdatedDelegate.h"
#include "NetworkManagerBackendVersionsUpdatedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemSDI.h"
#include "NetworkManager.generated.h"

UCLASS(BlueprintType)
class NETWORKMANAGERPLUGIN_API UNetworkManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FNetworkManagerLoginSuccessful NetworkManagerLoginSuccessful;
    
    UPROPERTY(BlueprintAssignable)
    FNetworkManagerLoginFailed NetworkManagerLoginFailed;
    
    UPROPERTY(BlueprintAssignable)
    FNetworkManagerInventoryUpdated NetworkManagerInventoryUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FNetworkManagerInventoryAddedToBackpack NetworkManagerInventoryAddedToBackpack;
    
    UPROPERTY(BlueprintAssignable)
    FNetworkManagerInventoryRemovedFromBackpack NetworkManagerInventoryRemovedFromBackpack;
    
    UPROPERTY(BlueprintAssignable)
    FNetworkManagerBackendStatusUpdated NetworkManagerBackendStatusUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FNetworkManagerBackendVersionsUpdated NetworkManagerBackendVersionsUpdated;
    
    UNetworkManager();
    UFUNCTION(BlueprintCallable)
    bool WasTicketDowngradedTo1v1();
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemsFromLocalPlayerInventory();
    
    UFUNCTION(BlueprintCallable)
    void K2GetBackendVersions();
    
    UFUNCTION(BlueprintCallable)
    void K2GetBackendStatus();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPlayersOnline();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPlayersInMatchmaking(const FString& Region);
    
    UFUNCTION(BlueprintCallable)
    void GetItemsForLocalPlayerInventory();
    
    UFUNCTION(BlueprintPure)
    FString GetClientVersion() const;
    
    UFUNCTION(BlueprintCallable)
    void BPCraftItem(FGuid recipeID);
    
    UFUNCTION(BlueprintCallable)
    void AddItemsToLocalPlayerInventory(const TArray<FInventoryItemSDI>& ItemsToAdd);
    
};

