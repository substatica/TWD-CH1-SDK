#pragma once
#include "CoreMinimal.h"
#include "TWDCharacter_OnPostSignificanceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDCharacter_OnPostSignificance, float, oldSignificance, float, newSignificance);

