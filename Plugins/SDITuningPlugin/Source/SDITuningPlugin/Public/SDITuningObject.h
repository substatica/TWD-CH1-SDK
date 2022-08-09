#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDITuningObject.generated.h"

UCLASS(Blueprintable)
class SDITUNINGPLUGIN_API USDITuningObject : public UObject, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
public:
    USDITuningObject();
    
    // Fix for true pure virtual functions not being implemented
};

