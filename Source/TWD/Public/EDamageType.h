#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM()
enum class EDamageType {
    DT_Sharp,
    DT_Blunt,
    DT_MAX UMETA(Hidden),
};

