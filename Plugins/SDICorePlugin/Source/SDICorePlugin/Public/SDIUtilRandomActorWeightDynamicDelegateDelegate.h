#pragma once
#include "CoreMinimal.h"
#include "SDIUtilRandomActorWeightDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSDIUtilRandomActorWeightDynamicDelegate, AActor*, Actor, float&, Weight);

