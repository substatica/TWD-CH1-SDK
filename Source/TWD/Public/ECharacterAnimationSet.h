#pragma once
#include "CoreMinimal.h"
#include "ECharacterAnimationSet.generated.h"

UENUM(BlueprintType)
enum class ECharacterAnimationSet : uint8 {
    None,
    Base,
    Beg,
    Cower,
    Flee,
    Armed,
};

