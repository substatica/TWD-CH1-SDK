#pragma once
#include "CoreMinimal.h"
#include "EDialogueState.generated.h"

UENUM()
enum class EDialogueState : uint8 {
    Playing,
    Suspended,
    Ended,
};

