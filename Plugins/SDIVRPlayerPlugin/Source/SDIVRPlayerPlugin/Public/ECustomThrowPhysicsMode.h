#pragma once
#include "CoreMinimal.h"
#include "ECustomThrowPhysicsMode.generated.h"

UENUM(BlueprintType)
enum class ECustomThrowPhysicsMode : uint8 {
    OrientToVelocity,
    SpinOnAxis,
};

