#pragma once
#include "CoreMinimal.h"
#include "TWDCharacter_FeedingTokenDelegateDelegate.generated.h"

class ATWDCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDCharacter_FeedingTokenDelegate, ATWDCharacter*, Character, int32, FeedingSlotIndex);

