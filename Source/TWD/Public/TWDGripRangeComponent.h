#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "TWDGripRangeComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDGripRangeComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UTWDGripRangeComponent();
};

