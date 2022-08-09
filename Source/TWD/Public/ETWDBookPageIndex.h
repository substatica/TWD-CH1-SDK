#pragma once
#include "CoreMinimal.h"
#include "ETWDBookPageIndex.generated.h"

UENUM()
enum class ETWDBookPageIndex {
    Left,
    Right,
    END,
    BEGIN = 0x0,
    ETWDBookPageIndex_MAX = 0x3,
};

