#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDITuningObject.generated.h"

UCLASS()
class SDITUNINGPLUGIN_API USDITuningObject : public UObject, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FSDITuningAccumulator TuningAccumulator;
    
public:
    USDITuningObject();
    
    // Fix for true pure virtual functions not being implemented
};

