#pragma once
#include "CoreMinimal.h"
#include "TWDCharacter_OuterRingTokenDelegateDelegate.generated.h"

class ATWDCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDCharacter_OuterRingTokenDelegate, ATWDCharacter*, Character, int32, OuterRingSlotIndex);

