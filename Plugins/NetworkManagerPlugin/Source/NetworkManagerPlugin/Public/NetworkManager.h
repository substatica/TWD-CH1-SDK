#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerLoginFailedDelegate.h"
#include "UObject/Object.h"
#include "NetworkManagerLoginSuccessfulDelegate.h"
#include "NetworkManagerInventoryAddedToBackpackDelegate.h"
#include "NetworkManagerInventoryUpdatedDelegate.h"
#include "NetworkManagerInventoryRemovedFromBackpackDelegate.h"
#include "NetworkManagerBackendStatusUpdatedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "NetworkManagerBackendVersionsUpdatedDelegate.h"
#include "InventoryItemSDI.h"
#include "NetworkManager.generated.h"

UCLASS(Blueprintable)
class NETWORKMANAGERPLUGIN_API UNetworkManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkManagerLoginSuccessful NetworkManagerLoginSuccessful;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkManagerLoginFailed NetworkManagerLoginFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkManagerInventoryUpdated NetworkManagerInventoryUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkManagerInventoryAddedToBackpack NetworkManagerInventoryAddedToBackpack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkManagerInventoryRemovedFromBackpack NetworkManagerInventoryRemovedFromBackpack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkManagerBackendStatusUpdated NetworkManagerBackendStatusUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetClientVersion() const;
    
    UFUNCTION(BlueprintCallable)
    void BPCraftItem(FGuid recipeID);
    
    UFUNCTION(BlueprintCallable)
    void AddItemsToLocalPlayerInventory(const TArray<FInventoryItemSDI>& ItemsToAdd);
    
};

