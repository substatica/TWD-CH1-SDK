#pragma once
#include "CoreMinimal.h"
#include "ETWDConsumableQuality.generated.h"

UENUM(BlueprintType)
enum class ETWDConsumableQuality : uint8 {
    Low,
    Medium,
    High,
    Prepared,
};

