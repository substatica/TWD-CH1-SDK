#pragma once
#include "CoreMinimal.h"
#include "ESDITransformSpace.generated.h"

UENUM(BlueprintType)
enum class ESDITransformSpace : uint8 {
    World,
    Actor,
    Mesh,
    Camera,
};

