#include "NetworkManager.h"

bool UNetworkManager::WasTicketDowngradedTo1v1() {
    return false;
}

void UNetworkManager::RemoveItemsFromLocalPlayerInventory() {
}

void UNetworkManager::K2GetBackendVersions() {
}

void UNetworkManager::K2GetBackendStatus() {
}

int32 UNetworkManager::GetNumPlayersOnline() {
    return 0;
}

int32 UNetworkManager::GetNumPlayersInMatchmaking(const FString& Region) {
    return 0;
}

void UNetworkManager::GetItemsForLocalPlayerInventory() {
}

FString UNetworkManager::GetClientVersion() const {
    return TEXT("");
}

void UNetworkManager::BPCraftItem(FGuid recipeID) {
}

void UNetworkManager::AddItemsToLocalPlayerInventory(const TArray<FInventoryItemSDI>& ItemsToAdd) {
}

UNetworkManager::UNetworkManager() {
}

