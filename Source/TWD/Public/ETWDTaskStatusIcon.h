#pragma once
#include "CoreMinimal.h"
#include "ETWDTaskStatusIcon.generated.h"

UENUM(BlueprintType)
enum class ETWDTaskStatusIcon : uint8 {
    New,
    Normal,
    Updated,
};

