#pragma once
#include "CoreMinimal.h"
#include "ESubtaskState.generated.h"

UENUM(BlueprintType)
enum class ESubtaskState : uint8 {
    Hidden,
    Active,
    Completed,
    Failed,
};

