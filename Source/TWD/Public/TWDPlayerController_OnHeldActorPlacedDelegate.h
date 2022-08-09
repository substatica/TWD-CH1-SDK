#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerController_OnHeldActorPlacedDelegate.generated.h"

class ASDIHeldActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTWDPlayerController_OnHeldActorPlaced, ASDIHeldActor*, HeldActorPlaced);

