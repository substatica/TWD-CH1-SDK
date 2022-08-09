#pragma once
#include "CoreMinimal.h"
#include "TWDPlayerController_OnGameUserSettingsAppliedDelegate.generated.h"

class ATWDPlayerController;
class UTWDGameUserSettings;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDPlayerController_OnGameUserSettingsApplied, ATWDPlayerController*, PC, UTWDGameUserSettings*, GameUserSettings);

