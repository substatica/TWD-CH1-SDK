#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SDIHeldActorGrabbedSignatureDelegate.generated.h"

class ASDIHeldActor;
class AActor;
class ASDIPlayerHand;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSDIHeldActorGrabbedSignature, ASDIHeldActor*, HeldActor, AActor*, GrabbedBy, EControllerHand, hand, ASDIPlayerHand*, HandPtr);

