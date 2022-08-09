#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SDIPlayerHandGrabbedActorSignatureDelegate.generated.h"

class ASDIHeldActor;
class ASDIPlayerHand;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSDIPlayerHandGrabbedActorSignature, ASDIHeldActor*, HeldActor, AActor*, GrabbedBy, EControllerHand, hand, ASDIPlayerHand*, HandPtr);

