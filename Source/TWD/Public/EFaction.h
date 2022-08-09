#pragma once
#include "CoreMinimal.h"
#include "EFaction.generated.h"

UENUM(BlueprintType)
enum class EFaction : uint8 {
    None,
    Tower,
    Exile,
    Outsider,
    MAX,
};

