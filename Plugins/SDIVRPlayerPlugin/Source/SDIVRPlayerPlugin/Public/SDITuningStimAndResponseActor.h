#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseActor.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDITuningStimAndResponseActor.generated.h"

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDITuningStimAndResponseActor : public ASDIStimAndResponseActor, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ASDITuningStimAndResponseActor();
    
    // Fix for true pure virtual functions not being implemented
};

