#pragma once
#include "CoreMinimal.h"
#include "ECharacterPose.generated.h"

UENUM(BlueprintType)
enum class ECharacterPose : uint8 {
    Neutral,
    Angry,
    Annoyed,
    Desperate,
    Determined,
    Friendly,
    Secretive,
    Relaxed,
};

