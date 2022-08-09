#pragma once
#include "CoreMinimal.h"
#include "ESDISkinCacheScope.generated.h"

UENUM(BlueprintType)
enum class ESDISkinCacheScope : uint8 {
    Global,
    Player,
    Map,
    Any,
    All,
};

