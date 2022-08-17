#include "TWDPickup.h"
#include "Net/UnrealNetwork.h"

void ATWDPickup::ServerSetInventorySlotIdx_IFC_Implementation(uint8 InventorySlotIdx) {
}
bool ATWDPickup::ServerSetInventorySlotIdx_IFC_Validate(uint8 InventorySlotIdx) {
    return true;
}

void ATWDPickup::OnRep_RepTWDInventoryData_Timer() {
}

void ATWDPickup::OnRep_RepTWDInventoryData(const FTWDReplicatedInventoryActorInterfaceData& OldRepTWDInventoryData) {
}

void ATWDPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDPickup, RepTWDInventoryData);
}

ATWDPickup::ATWDPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

