#pragma once
#include "CoreMinimal.h"
#include "ESDIVRControllerType.generated.h"

UENUM()
enum class ESDIVRControllerType : uint8 {
    VRController_Any,
    VRController_Rift,
    VRController_Vive,
    VRController_ViveCosmos,
    VRController_Knuckles,
    VRController_PSVR_Move,
    VRController_PSVR_DualShock4,
    VRController_WindowsMR,
    VRController_SteamVRRift,
    VRController_Quest,
    VRController_DelMar,
    VRController_MAX UMETA(Hidden),
};

