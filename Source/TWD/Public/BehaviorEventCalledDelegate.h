#pragma once
#include "CoreMinimal.h"
#include "BehaviorEventCalledDelegate.generated.h"

class ATWDCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBehaviorEventCalled, ATWDCharacter*, Character, FName, EventName);

