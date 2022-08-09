#pragma once
#include "CoreMinimal.h"
#include "SDIGameplayTagActor.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDITuningGameplayTagActor.generated.h"

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDITuningGameplayTagActor : public ASDIGameplayTagActor, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ASDITuningGameplayTagActor();
    
    // Fix for true pure virtual functions not being implemented
};

