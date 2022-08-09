#pragma once
#include "CoreMinimal.h"
#include "ESignificanceState.generated.h"

UENUM()
enum class ESignificanceState : uint8 {
    NoSignificance,
    MinSignificance,
    PartialSignificance,
    FullSignificance,
};

