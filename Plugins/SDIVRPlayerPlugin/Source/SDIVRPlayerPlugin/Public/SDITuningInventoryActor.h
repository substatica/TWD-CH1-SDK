#pragma once
#include "CoreMinimal.h"
#include "SDITuningInterface.h"
#include "SDIInventoryActor.h"
#include "SDITuningAccumulator.h"
#include "SDITuningInventoryActor.generated.h"

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDITuningInventoryActor : public ASDIInventoryActor, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ASDITuningInventoryActor(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

