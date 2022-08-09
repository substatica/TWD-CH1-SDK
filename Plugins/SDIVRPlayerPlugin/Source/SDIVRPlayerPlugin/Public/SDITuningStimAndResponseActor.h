#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseActor.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDITuningStimAndResponseActor.generated.h"

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDITuningStimAndResponseActor : public ASDIStimAndResponseActor, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ASDITuningStimAndResponseActor();
    
    // Fix for true pure virtual functions not being implemented
};

