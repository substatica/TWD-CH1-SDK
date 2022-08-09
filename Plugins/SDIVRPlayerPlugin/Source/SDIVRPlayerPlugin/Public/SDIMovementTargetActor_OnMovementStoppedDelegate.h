#pragma once
#include "CoreMinimal.h"
#include "SDIMovementTargetActor_OnMovementStoppedDelegate.generated.h"

class ASDIMovementTargetActor;
class ASDICharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSDIMovementTargetActor_OnMovementStopped, ASDIMovementTargetActor*, MovementTarget, ASDICharacter*, Character, bool, bCancelled);

