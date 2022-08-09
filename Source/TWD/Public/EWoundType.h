#pragma once
#include "CoreMinimal.h"
#include "EWoundType.generated.h"

UENUM(BlueprintType)
enum class EWoundType : uint8 {
    None,
    Dent,
    Slash,
    Stub,
    Claw,
    Weakpoint,
    PreSever,
    Disease,
};

