#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SDIAsyncOverlapGeneratorComponentBeginOverlapSignatureDelegate.generated.h"

class UPrimitiveComponent;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FSDIAsyncOverlapGeneratorComponentBeginOverlapSignature, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult);

