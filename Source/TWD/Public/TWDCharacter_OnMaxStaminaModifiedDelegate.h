#pragma once
#include "CoreMinimal.h"
#include "TWDCharacter_OnMaxStaminaModifiedDelegate.generated.h"

class ATWDCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTWDCharacter_OnMaxStaminaModified, ATWDCharacter*, Character, float, Delta, float, MaxStaminaPct);

