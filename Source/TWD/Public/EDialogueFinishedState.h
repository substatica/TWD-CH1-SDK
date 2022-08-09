#pragma once
#include "CoreMinimal.h"
#include "EDialogueFinishedState.generated.h"

UENUM()
enum class EDialogueFinishedState : uint8 {
    Ended,
    Stopped,
};

