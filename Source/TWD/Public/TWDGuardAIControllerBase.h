#pragma once
#include "CoreMinimal.h"
#include "TWDAIController.h"
#include "TWDGuardAIControllerBase.generated.h"

UCLASS(Blueprintable)
class TWD_API ATWDGuardAIControllerBase : public ATWDAIController {
    GENERATED_BODY()
public:
    ATWDGuardAIControllerBase();
};

