#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterCoverState.generated.h"

UENUM(BlueprintType)
enum class ETWDCharacterCoverState : uint8 {
    None,
    FullCover_Right,
    FullCover_Left,
    HalfCover_Right,
    HalfCover_Left,
    NoCover_Prone,
};

