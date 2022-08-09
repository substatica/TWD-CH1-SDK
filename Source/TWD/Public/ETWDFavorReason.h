#pragma once
#include "CoreMinimal.h"
#include "ETWDFavorReason.generated.h"

UENUM(BlueprintType)
enum class ETWDFavorReason : uint8 {
    None,
    OrderComplete,
    OrderFailed,
    ExileDamaged,
    ExileKilled,
    Theft,
    Special,
    Debug,
    COUNT,
};

