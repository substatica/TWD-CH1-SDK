#pragma once
#include "CoreMinimal.h"
#include "SDIAsyncOverlapGeneratorComponentActorEndOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDIAsyncOverlapGeneratorComponentActorEndOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

