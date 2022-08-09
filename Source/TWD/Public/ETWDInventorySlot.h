#pragma once
#include "CoreMinimal.h"
#include "ETWDInventorySlot.generated.h"

UENUM()
namespace ETWDInventorySlot {
    enum Type {
        None,
        LeftHip,
        RightHip,
        LeftShoulder,
        RightShoulder,
        Belt_Notebook,
        Belt_Flashlight,
        Chest,
        Mouth,
        Backpack_LeftSide,
        Backpack_RightSide,
        Procedural_Slot_Start,
    };
}

