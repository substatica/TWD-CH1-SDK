#pragma once
#include "CoreMinimal.h"
#include "OnFinishedTrackSignatureDelegate.generated.h"

class ATWDSplineTrackBase;
class UTWDSplineMovementComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFinishedTrackSignature, ATWDSplineTrackBase*, Track, UTWDSplineMovementComponent*, Comp);

