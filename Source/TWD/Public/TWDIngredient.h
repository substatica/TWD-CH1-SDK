#pragma once
#include "CoreMinimal.h"
#include "SDIInventoryActor.h"
#include "TWDIngredient.generated.h"

UCLASS(Blueprintable)
class TWD_API ATWDIngredient : public ASDIInventoryActor {
    GENERATED_BODY()
public:
    ATWDIngredient(const FObjectInitializer& ObjectInitializer);
};

