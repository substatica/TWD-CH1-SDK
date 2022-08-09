#include "TWDRequiredInventory.h"

FTWDRequiredInventory::FTWDRequiredInventory() {
    this->RequiredType = ERequiredInventoryType::None;
    this->InventoryActor = NULL;
    this->LootType = ETWDLootType::Default;
    this->Count = 0;
}

