#pragma once
#include "CoreMinimal.h"
#include "TWDCraftingTableProgression_OnLevelAdvancedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDCraftingTableProgression_OnLevelAdvanced, TSoftClassPtr<AActor>, CraftingTableType, int32, NewLevel);

