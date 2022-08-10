#pragma once
#include "CoreMinimal.h"

#include "CollisionShape.generated.h"

UENUM()
enum ECollisionShape2 {
    Line,
    Box,
    Sphere,
    Capsule,
    ECollisionShape_MAX,
};