#pragma once
#include "CoreMinimal.h"
#include "SDICollisionCacheFilterDynamicDelegateDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FSDICollisionCacheFilterDynamicDelegate, UPrimitiveComponent*, Component, const TArray<FName>&, BodyNames, TArray<FName>&, ValidBodyNames, bool&, bOutValidCollision);

