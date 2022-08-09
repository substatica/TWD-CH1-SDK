#pragma once
#include "CoreMinimal.h"
#include "AngleToken.h"
#include "OuterRingToken.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UOuterRingToken : public UAngleToken {
    GENERATED_BODY()
public:
    UOuterRingToken();
};

