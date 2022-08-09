#pragma once
#include "CoreMinimal.h"
#include "EThreatLevel.generated.h"

UENUM(BlueprintType)
enum class EThreatLevel : uint8 {
    Low,
    Medium,
    High,
};

