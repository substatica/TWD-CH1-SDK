#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerController_OnAICommandUnpossessDelegate.generated.h"

class ATWDPlayerController;
class ATWDCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDPlayerController_OnAICommandUnpossess, ATWDPlayerController*, PC, ATWDCharacter*, Char);

