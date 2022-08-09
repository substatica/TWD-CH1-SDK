#pragma once
#include "CoreMinimal.h"
#include "ESDIAxis.generated.h"

UENUM(BlueprintType)
enum class ESDIAxis : uint8 {
    Any,
    PosX,
    PosY,
    PosZ,
    NegX,
    NegY,
    NegZ,
    PosNegX,
    PosNegY,
    PosNegZ,
    PlaneXY,
    PlaneXZ,
    PlaneYZ,
};

