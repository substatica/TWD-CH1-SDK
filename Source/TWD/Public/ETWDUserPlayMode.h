#pragma once
#include "CoreMinimal.h"
#include "ETWDUserPlayMode.generated.h"

UENUM()
enum class ETWDUserPlayMode : uint8 {
    Seated,
    Standing_FixedHeight,
    Standing_ActualHeight,
};

