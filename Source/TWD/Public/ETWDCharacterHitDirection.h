#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterHitDirection.generated.h"

UENUM()
enum class ETWDCharacterHitDirection : uint8 {
    None,
    Front,
    Back,
    Left,
    Right,
};

