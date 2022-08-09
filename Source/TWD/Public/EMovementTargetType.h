#pragma once
#include "CoreMinimal.h"
#include "EMovementTargetType.generated.h"

UENUM(BlueprintType)
enum class EMovementTargetType : uint8 {
    MTT_AI,
    MTT_Player,
    MTT_Both,
    MTT_None,
    MTT_MAX UMETA(Hidden),
};

