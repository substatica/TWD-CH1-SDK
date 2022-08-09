#pragma once
#include "CoreMinimal.h"
#include "EViewType.generated.h"

UENUM()
enum class EViewType : uint8 {
    EventBased,
    ContinuousCheck,
};

