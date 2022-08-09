#pragma once
#include "CoreMinimal.h"
#include "SDIMotionControllerComponent.h"
#include "TWDMotionControllerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDMotionControllerComponent : public USDIMotionControllerComponent {
    GENERATED_BODY()
public:
    UTWDMotionControllerComponent();
};

