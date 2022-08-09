#pragma once
#include "CoreMinimal.h"
#include "TWDCraftingTableProgression_OnSpecificUnlockDelegate.generated.h"

class AActor;
class UTWDRecipe;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDCraftingTableProgression_OnSpecificUnlock, TSoftClassPtr<AActor>, CraftingTableType, TSoftClassPtr<UTWDRecipe>, NewRecipe);

