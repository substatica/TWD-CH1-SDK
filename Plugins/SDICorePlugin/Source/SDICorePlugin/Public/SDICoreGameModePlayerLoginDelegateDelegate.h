#pragma once
#include "CoreMinimal.h"
#include "SDICoreGameModePlayerLoginDelegateDelegate.generated.h"

class ASDICoreGameMode;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDICoreGameModePlayerLoginDelegate, ASDICoreGameMode*, GameMode, APlayerController*, PC);

