#pragma once
#include "CoreMinimal.h"
#include "EViewType.generated.h"

UENUM(BlueprintType)
enum class EViewType : uint8 {
    EventBased,
    ContinuousCheck,
};

