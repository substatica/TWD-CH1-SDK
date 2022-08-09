#pragma once
#include "CoreMinimal.h"
#include "EQuestLine.generated.h"

UENUM()
enum class EQuestLine : uint8 {
    EQL_0,
    EQL_1,
    EQL_2,
    EQL_3,
    EQL_COUNT,
    EQL_MAX UMETA(Hidden),
};

