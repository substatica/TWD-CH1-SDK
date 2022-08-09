#pragma once
#include "CoreMinimal.h"
#include "ESDIPlayerHandGripInputMode.generated.h"

UENUM(BlueprintType)
enum class ESDIPlayerHandGripInputMode : uint8 {
    Normal,
    Hybrid,
    Modal,
    HybridInteract,
};

