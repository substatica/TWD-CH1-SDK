#pragma once
#include "CoreMinimal.h"
#include "SDIInputSplineActor.h"
#include "TWDInputSplineActor.generated.h"

UCLASS(Blueprintable)
class ATWDInputSplineActor : public ASDIInputSplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilationMaxDuration;
    
public:
    ATWDInputSplineActor();
};

