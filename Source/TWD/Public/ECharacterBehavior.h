#pragma once
#include "CoreMinimal.h"
#include "ECharacterBehavior.generated.h"

UENUM(BlueprintType)
enum class ECharacterBehavior : uint8 {
    Neutral,
    Combat,
    Beg,
    Cower,
};

