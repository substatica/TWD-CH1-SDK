#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveActor.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDITuningInteractiveActor.generated.h"

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDITuningInteractiveActor : public ASDIInteractiveActor, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ASDITuningInteractiveActor();
    
    // Fix for true pure virtual functions not being implemented
};

