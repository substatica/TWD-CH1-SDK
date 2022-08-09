#include "TWDWeaponAttachment.h"
#include "Net/UnrealNetwork.h"

void ATWDWeaponAttachment::ServerSetInventorySlotIdx_IFC_Implementation(uint8 InventorySlotIdx) {
}
bool ATWDWeaponAttachment::ServerSetInventorySlotIdx_IFC_Validate(uint8 InventorySlotIdx) {
    return true;
}

void ATWDWeaponAttachment::OnRep_RepTWDInventoryData_Timer() {
}

void ATWDWeaponAttachment::OnRep_RepTWDInventoryData(const FTWDReplicatedInventoryActorInterfaceData& OldRepTWDInventoryData) {
}

void ATWDWeaponAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDWeaponAttachment, RepTWDInventoryData);
}

ATWDWeaponAttachment::ATWDWeaponAttachment() {
    this->AttachmentEditor = NULL;
}

