#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "TWDAIPerceptionStimuliSource.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDAIPerceptionStimuliSource : public UAIPerceptionStimuliSourceComponent {
    GENERATED_BODY()
public:
    UTWDAIPerceptionStimuliSource();
};

