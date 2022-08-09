#pragma once
#include "CoreMinimal.h"
#include "SDIMovementTargetActor_OnMovementHighlightChangedDelegate.generated.h"

class ASDIMovementTargetActor;
class ASDICharacter;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSDIMovementTargetActor_OnMovementHighlightChanged, ASDIMovementTargetActor*, MovementTarget, ASDICharacter*, Character, bool, bHighlighted, UPrimitiveComponent*, HighlightedComponent, UPrimitiveComponent*, PrevHighlightedComponent);

