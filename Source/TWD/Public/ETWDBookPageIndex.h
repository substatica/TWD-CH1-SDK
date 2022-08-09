#pragma once
#include "CoreMinimal.h"
#include "ETWDBookPageIndex.generated.h"

UENUM(BlueprintType)
enum class ETWDBookPageIndex : uint8 {
    Left,
    Right,
    END,
    BEGIN = 0x0,
    ETWDBookPageIndex_MAX = 0x3,
};

