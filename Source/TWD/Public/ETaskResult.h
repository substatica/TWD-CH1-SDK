#pragma once
#include "CoreMinimal.h"
#include "ETaskResult.generated.h"

UENUM()
enum class ETaskResult : uint8 {
    Completed,
    Failed,
    Updated,
};

