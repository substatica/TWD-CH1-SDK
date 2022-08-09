#pragma once
#include "CoreMinimal.h"
#include "ETWDNotebookSectionIndex.generated.h"

UENUM(BlueprintType)
enum class ETWDNotebookSectionIndex : uint8 {
    Tasks,
    Tracking,
    Character,
    Map,
    Notes,
    Extra,
    END,
    BEGIN = 0x0,
    ETWDNotebookSectionIndex_MAX = 0x7,
};

