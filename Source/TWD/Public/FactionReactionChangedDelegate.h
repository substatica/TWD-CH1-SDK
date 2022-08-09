#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "EFactionReaction.h"
#include "FactionReactionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFactionReactionChanged, EFaction, Faction, EFactionReaction, NewReaction, EFactionReaction, PreviousReaction);

