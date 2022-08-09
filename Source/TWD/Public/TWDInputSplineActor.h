#pragma once
#include "CoreMinimal.h"
#include "SDIInputSplineActor.h"
#include "TWDInputSplineActor.generated.h"

UCLASS()
class ATWDInputSplineActor : public ASDIInputSplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float TimeDilation;
    
    UPROPERTY(EditDefaultsOnly)
    float TimeDilationMaxDuration;
    
public:
    ATWDInputSplineActor();
};

