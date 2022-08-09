#pragma once
#include "CoreMinimal.h"
#include "ECharacterStance.generated.h"

UENUM(BlueprintType)
enum class ECharacterStance : uint8 {
    Idle,
    Ready,
    Combat,
};

