#pragma once
#include "CoreMinimal.h"
#include "ETWDNonVRGrappleMinigameState.h"
#include "TWDPlayerController_OnNonVRGrappleMinigameStateChangedDelegate.generated.h"

class ATWDPlayerController;
class ATWDPlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FTWDPlayerController_OnNonVRGrappleMinigameStateChanged, ATWDPlayerController*, PC, ATWDPlayerCharacter*, Char, ETWDNonVRGrappleMinigameState, PrevState, ETWDNonVRGrappleMinigameState, NewState, float, Duration, float, NextDuration);

