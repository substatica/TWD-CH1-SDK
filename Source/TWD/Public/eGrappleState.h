#pragma once
#include "CoreMinimal.h"
#include "eGrappleState.generated.h"

UENUM()
enum class eGrappleState {
    GS_Inactive,
    GS_GrappleAttempt,
    GS_ActiveGrapple,
    GS_MAX UMETA(Hidden),
};

