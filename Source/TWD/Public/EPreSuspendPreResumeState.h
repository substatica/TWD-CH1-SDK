#pragma once
#include "CoreMinimal.h"
#include "EPreSuspendPreResumeState.generated.h"

UENUM(BlueprintType)
enum class EPreSuspendPreResumeState : uint8 {
    Enabled,
    Disabled,
    Ignored,
};

