#pragma once
#include "CoreMinimal.h"
#include "SDIUtilRandomActorWeightDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FSDIUtilRandomActorWeightDynamicDelegate, AActor*, Actor, float&, Weight);

