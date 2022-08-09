#pragma once
#include "CoreMinimal.h"
#include "EDialogueOverlapHandlingMethod.generated.h"

UENUM(BlueprintType)
enum class EDialogueOverlapHandlingMethod : uint8 {
    Interrupt,
    Ignore,
};

