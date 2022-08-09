#pragma once
#include "CoreMinimal.h"
#include "EDialogueFinishedState.generated.h"

UENUM(BlueprintType)
enum class EDialogueFinishedState : uint8 {
    Ended,
    Stopped,
};

