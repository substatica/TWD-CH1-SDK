#pragma once
#include "CoreMinimal.h"
#include "TWDGripPhysicsDoorOnInteractDelegate.generated.h"

class ATWDGripPhysicsDoor;
class ATWDCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDGripPhysicsDoorOnInteract, ATWDGripPhysicsDoor*, Door, ATWDCharacter*, Character);

