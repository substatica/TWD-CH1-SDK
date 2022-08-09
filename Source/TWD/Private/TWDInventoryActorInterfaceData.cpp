#include "TWDInventoryActorInterfaceData.h"

FTWDInventoryActorInterfaceData::FTWDInventoryActorInterfaceData() {
    this->InventoryType = ETWDInventoryType::Default;
    this->LootType = ETWDLootType::Default;
    this->NonVREquipmentType = ETWDNonVREquipmentType::None;
    this->SharpnessRating = 0.00f;
    this->DurabilityRating = 0.00f;
    this->ThrowRating = 0.00f;
    this->bNearbyHighlightShown = false;
    this->bIgnorePositioningForInventoryData = false;
    this->bNeverShowInventoryData = false;
    this->bDropOnArmGrapple = false;
    this->bDropOnArmGrappleOnlyIfTwoHanded = false;
    this->bApplyPrimaryGripPitchOffsetUserSetting = false;
    this->bNonVRInteractTransformIsValid = false;
    this->bSheathed = false;
    this->LocalInventorySlotIdx = 0;
    this->bIgnoreReturnToInventoryAudio = false;
    this->AudioStoreInInventory = NULL;
    this->AudioRemoveFromInventory = NULL;
}

