#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "TWDPlayerController_OnFactionAlertedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTWDPlayerController_OnFactionAlerted, EFaction, Faction, bool, bAlert, bool, bWasHeadshot);

