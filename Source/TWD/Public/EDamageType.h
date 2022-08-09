#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    DT_Sharp,
    DT_Blunt,
    DT_MAX UMETA(Hidden),
};

