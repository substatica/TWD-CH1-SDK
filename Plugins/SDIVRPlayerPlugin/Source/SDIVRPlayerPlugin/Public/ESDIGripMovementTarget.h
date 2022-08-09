#pragma once
#include "CoreMinimal.h"
#include "ESDIGripMovementTarget.generated.h"

UENUM(BlueprintType)
enum class ESDIGripMovementTarget : uint8 {
    Tracked,
    Shoulder,
    Elbow,
    MeshShoulder,
    MeshElbow,
};

