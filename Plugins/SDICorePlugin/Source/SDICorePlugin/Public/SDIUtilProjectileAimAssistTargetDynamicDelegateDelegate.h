#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIUtilProjectileAimAssistTargetDynamicDelegateDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FSDIUtilProjectileAimAssistTargetDynamicDelegate, UPrimitiveComponent*, Component, const TArray<FName>&, OverlapNames, FVector&, OutLocation, bool&, bOutValidTarget);

