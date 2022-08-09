#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SDIPlayerHandDroppedActorSignatureDelegate.generated.h"

class ASDIHeldActor;
class AActor;
class ASDIPlayerHand;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSDIPlayerHandDroppedActorSignature, ASDIHeldActor*, HeldActor, AActor*, DroppedBy, EControllerHand, hand, ASDIPlayerHand*, HandPtr);

