#pragma once
#include "CoreMinimal.h"
#include "SDIGameplayTagActor.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDITuningGameplayTagActor.generated.h"

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDITuningGameplayTagActor : public ASDIGameplayTagActor, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ASDITuningGameplayTagActor();
    
    // Fix for true pure virtual functions not being implemented
};

