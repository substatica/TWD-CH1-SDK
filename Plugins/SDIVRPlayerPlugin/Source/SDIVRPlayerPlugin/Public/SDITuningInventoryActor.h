#pragma once
#include "CoreMinimal.h"
#include "SDITuningInterface.h"
#include "SDIInventoryActor.h"
#include "SDITuningAccumulator.h"
#include "SDITuningInventoryActor.generated.h"

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDITuningInventoryActor : public ASDIInventoryActor, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ASDITuningInventoryActor();
    
    // Fix for true pure virtual functions not being implemented
};

