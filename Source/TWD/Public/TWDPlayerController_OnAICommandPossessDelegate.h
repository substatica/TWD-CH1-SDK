#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerController_OnAICommandPossessDelegate.generated.h"

class ATWDPlayerController;
class ATWDCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FTWDPlayerController_OnAICommandPossess, ATWDPlayerController*, PC, bool, bSuccess, ATWDCharacter*, Char, float, TimeRemaining, float, Duration);

