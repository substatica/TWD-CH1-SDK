#pragma once
#include "CoreMinimal.h"
#include "ESDICoordinatePivot.generated.h"

UENUM(BlueprintType)
enum class ESDICoordinatePivot : uint8 {
    Top_Left,
    Top_Center,
    Top_Right,
    Center_Left,
    Center,
    Center_Right,
    Bottom_Left,
    Bottom_Center,
    Bottom_Right,
};

