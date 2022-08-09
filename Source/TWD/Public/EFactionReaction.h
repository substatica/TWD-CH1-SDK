#pragma once
#include "CoreMinimal.h"
#include "EFactionReaction.generated.h"

UENUM(BlueprintType)
enum class EFactionReaction : uint8 {
    Hated,
    Disliked,
    Neutral,
    Liked,
    Revered,
    Count,
};

