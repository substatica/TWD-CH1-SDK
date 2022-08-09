#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SDIHeldActorGrabbedSignatureDelegate.generated.h"

class ASDIHeldActor;
class ASDIPlayerHand;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSDIHeldActorGrabbedSignature, ASDIHeldActor*, HeldActor, AActor*, GrabbedBy, EControllerHand, hand, ASDIPlayerHand*, HandPtr);

