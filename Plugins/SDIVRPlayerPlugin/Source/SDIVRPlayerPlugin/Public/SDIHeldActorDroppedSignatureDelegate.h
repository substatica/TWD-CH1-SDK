#pragma once
#include "CoreMinimal.h"
#include "SDIHeldActorDroppedSignatureDelegate.generated.h"

class ASDIHeldActor;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDIHeldActorDroppedSignature, ASDIHeldActor*, HeldActor, AActor*, DroppedBy);

