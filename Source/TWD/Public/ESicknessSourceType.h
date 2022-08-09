#pragma once
#include "CoreMinimal.h"
#include "ESicknessSourceType.generated.h"

UENUM(BlueprintType)
enum class ESicknessSourceType : uint8 {
    WalkerInduced,
    Default,
};

