#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterType.generated.h"

UENUM(BlueprintType)
enum class ETWDCharacterType : uint8 {
    Unknown,
    Player,
    Walker,
    Survivor,
    MAX,
};

