#pragma once
#include "CoreMinimal.h"
#include "SDIMovementTargetActor_OnMovementHighlightChangedDelegate.generated.h"

class UPrimitiveComponent;
class ASDIMovementTargetActor;
class ASDICharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSDIMovementTargetActor_OnMovementHighlightChanged, ASDIMovementTargetActor*, MovementTarget, ASDICharacter*, Character, bool, bHighlighted, UPrimitiveComponent*, HighlightedComponent, UPrimitiveComponent*, PrevHighlightedComponent);

