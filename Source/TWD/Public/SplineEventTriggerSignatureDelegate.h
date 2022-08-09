#pragma once
#include "CoreMinimal.h"
#include "SplineEventTriggerSignatureDelegate.generated.h"

class UTWDSplineTrackEventComponent;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSplineEventTriggerSignature, UTWDSplineTrackEventComponent*, Track, AActor*, Context);

