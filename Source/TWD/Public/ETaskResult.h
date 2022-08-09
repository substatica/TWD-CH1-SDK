#pragma once
#include "CoreMinimal.h"
#include "ETaskResult.generated.h"

UENUM(BlueprintType)
enum class ETaskResult : uint8 {
    Completed,
    Failed,
    Updated,
};

