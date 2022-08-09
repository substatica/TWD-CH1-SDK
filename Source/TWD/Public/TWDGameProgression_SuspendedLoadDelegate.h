#pragma once
#include "CoreMinimal.h"
#include "TWDGameProgression_SuspendedLoadDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTWDGameProgression_SuspendedLoad, const TArray<FString>&, SaveContext);

