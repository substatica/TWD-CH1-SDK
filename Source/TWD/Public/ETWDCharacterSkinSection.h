#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterSkinSection.generated.h"

UENUM()
enum class ETWDCharacterSkinSection : uint8 {
    Hair,
    Head,
    Torso,
    Leg,
    NUMBER_OF_SECTIONS,
    PreAuthored,
};

