#pragma once
#include "CoreMinimal.h"
#include "TWDCharacter_OnWindedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTWDCharacter_OnWindedChanged, bool, bWinded);

