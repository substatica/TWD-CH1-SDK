#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationResultCallbackDelegate.generated.h"

class ATWDCharacter;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FPlayAnimationResultCallback, ATWDCharacter*, Owner, bool, bSucceeded);

