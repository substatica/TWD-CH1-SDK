#pragma once
#include "CoreMinimal.h"
#include "SDIAsyncOverlapGeneratorComponentActorBeginOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDIAsyncOverlapGeneratorComponentActorBeginOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

