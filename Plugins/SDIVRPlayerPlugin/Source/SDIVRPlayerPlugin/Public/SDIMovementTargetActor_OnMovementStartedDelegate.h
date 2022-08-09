#pragma once
#include "CoreMinimal.h"
#include "SDIMovementTargetActor_OnMovementStartedDelegate.generated.h"

class ASDIMovementTargetActor;
class ASDICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDIMovementTargetActor_OnMovementStarted, ASDIMovementTargetActor*, MovementTarget, ASDICharacter*, Character);

