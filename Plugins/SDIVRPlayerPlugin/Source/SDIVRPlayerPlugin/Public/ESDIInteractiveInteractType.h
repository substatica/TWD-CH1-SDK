#pragma once
#include "CoreMinimal.h"
#include "ESDIInteractiveInteractType.generated.h"

UENUM(BlueprintType)
enum class ESDIInteractiveInteractType : uint8 {
    Primary,
    Secondary,
    Tertiary,
    Physical,
};

