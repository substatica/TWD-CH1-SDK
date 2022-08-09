#pragma once
#include "CoreMinimal.h"
#include "EDialogueState.generated.h"

UENUM(BlueprintType)
enum class EDialogueState : uint8 {
    Playing,
    Suspended,
    Ended,
};

