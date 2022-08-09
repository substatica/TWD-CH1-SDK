#pragma once
#include "CoreMinimal.h"
#include "EBarkCooldownType.generated.h"

UENUM(BlueprintType)
enum class EBarkCooldownType : uint8 {
    None,
    Default,
    Range,
};

