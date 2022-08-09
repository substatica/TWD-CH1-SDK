#pragma once
#include "CoreMinimal.h"
#include "ETWDUINotificationType.generated.h"

UENUM(BlueprintType)
enum class ETWDUINotificationType : uint8 {
    Added,
    Updated,
    Completed,
    Failed,
    Custom,
};

