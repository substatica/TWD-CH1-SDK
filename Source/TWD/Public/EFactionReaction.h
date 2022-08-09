#pragma once
#include "CoreMinimal.h"
#include "EFactionReaction.generated.h"

UENUM()
enum class EFactionReaction : uint8 {
    Hated,
    Disliked,
    Neutral,
    Liked,
    Revered,
    Count,
};

