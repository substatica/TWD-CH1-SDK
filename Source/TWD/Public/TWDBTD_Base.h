#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TWDBTD_Base.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDBTD_Base : public UBTDecorator {
    GENERATED_BODY()
public:
    UTWDBTD_Base();
};

