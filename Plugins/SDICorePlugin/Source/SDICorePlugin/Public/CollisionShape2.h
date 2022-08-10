#pragma once
#include "CoreMinimal.h"

#include "CollisionShape2.generated.h"

UENUM()
enum ECollisionShape2 {
    Line,
    Box,
    Sphere,
    Capsule,
    ECollisionShape_MAX,
};