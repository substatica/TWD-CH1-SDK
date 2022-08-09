#pragma once
#include "CoreMinimal.h"
#include "EFactionReaction.h"
#include "EFaction.h"
#include "FactionReactionChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFactionReactionChanged, EFaction, Faction, EFactionReaction, NewReaction, EFactionReaction, PreviousReaction);

