#include "TWDNonVREquipmentActionDetails.h"

FTWDNonVREquipmentActionDetails::FTWDNonVREquipmentActionDetails() {
    this->HeldActor = NULL;
    this->HeldActorClass = NULL;
    this->ActionType = ETWDNonVREquipmentActionType::None;
    this->Time = 0.00f;
    this->Duration = 0.00f;
}

