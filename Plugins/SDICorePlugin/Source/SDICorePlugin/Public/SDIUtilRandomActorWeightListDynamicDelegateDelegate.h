#pragma once
#include "CoreMinimal.h"
#include "SDIUtilRandomActorWeightListDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FiveParams(FSDIUtilRandomActorWeightListDynamicDelegate, AActor*, Actor, const TArray<AActor*>&, SelectedActors, const TArray<AActor*>&, ActorPool, int32, Index, float&, Weight);

