#pragma once
#include "CoreMinimal.h"
#include "EFaction.generated.h"

UENUM()
enum class EFaction : uint8 {
    None,
    Tower,
    Exile,
    Outsider,
    MAX,
};

