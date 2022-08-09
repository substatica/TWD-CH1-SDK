#pragma once
#include "CoreMinimal.h"
#include "ETWDSuspiciousStates.generated.h"

UENUM()
enum class ETWDSuspiciousStates : uint8 {
    Oblivious,
    Perceiving,
    Suspicious,
    FoundTarget,
    Cautious,
    Reaction,
    None,
    Count,
};

