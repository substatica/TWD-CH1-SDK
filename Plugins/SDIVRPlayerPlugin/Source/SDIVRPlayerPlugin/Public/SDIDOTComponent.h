#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseDOTComponent.h"
#include "SDIDOTComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIDOTComponent : public USDIStimAndResponseDOTComponent {
    GENERATED_BODY()
public:
    USDIDOTComponent();
};

