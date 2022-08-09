#pragma once
#include "CoreMinimal.h"
#include "EStatusIconState.generated.h"

UENUM(BlueprintType)
enum class EStatusIconState : uint8 {
    Threat,
    Dialogue,
    None,
};

