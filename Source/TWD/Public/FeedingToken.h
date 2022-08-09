#pragma once
#include "CoreMinimal.h"
#include "AngleToken.h"
#include "FeedingToken.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UFeedingToken : public UAngleToken {
    GENERATED_BODY()
public:
    UFeedingToken();
};

