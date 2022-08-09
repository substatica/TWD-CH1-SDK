#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "FactionReputationChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFactionReputationChanged, EFaction, Faction, float, Reputation);

