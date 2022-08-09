#pragma once
#include "CoreMinimal.h"
#include "SDIMotionControllerComponent.h"
#include "TWDMotionControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDMotionControllerComponent : public USDIMotionControllerComponent {
    GENERATED_BODY()
public:
    UTWDMotionControllerComponent();
};

