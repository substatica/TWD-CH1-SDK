#pragma once
#include "CoreMinimal.h"
#include "ECoverType.generated.h"

UENUM(BlueprintType)
enum class ECoverType : uint8 {
    CT_FULLCOVER,
    CT_HALFCOVER,
    CT_MAX UMETA(Hidden),
};

