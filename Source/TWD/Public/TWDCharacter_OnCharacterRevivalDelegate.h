#pragma once
#include "CoreMinimal.h"
#include "TWDCharacter_OnCharacterRevivalDelegate.generated.h"

class ATWDCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDCharacter_OnCharacterRevival, ATWDCharacter*, Character, float, NewHealth);

