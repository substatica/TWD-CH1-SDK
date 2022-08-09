#pragma once
#include "CoreMinimal.h"
#include "ESubtaskState.generated.h"

UENUM()
enum class ESubtaskState : uint8 {
    Hidden,
    Active,
    Completed,
    Failed,
};

