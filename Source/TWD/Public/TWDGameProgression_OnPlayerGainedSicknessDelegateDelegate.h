#pragma once
#include "CoreMinimal.h"
#include "ESicknessSourceType.h"
#include "TWDGameProgression_OnPlayerGainedSicknessDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDGameProgression_OnPlayerGainedSicknessDelegate, ESicknessSourceType, SourceType, float, GainedAmount);

