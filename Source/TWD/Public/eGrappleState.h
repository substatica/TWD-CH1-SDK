#pragma once
#include "CoreMinimal.h"
#include "eGrappleState.generated.h"

UENUM(BlueprintType)
enum class eGrappleState : uint8 {
    GS_Inactive,
    GS_GrappleAttempt,
    GS_ActiveGrapple,
    GS_MAX UMETA(Hidden),
};

