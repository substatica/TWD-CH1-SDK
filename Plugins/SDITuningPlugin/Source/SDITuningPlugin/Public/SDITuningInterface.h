#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SDITuningInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class SDITUNINGPLUGIN_API USDITuningInterface : public UInterface {
    GENERATED_BODY()
};

class SDITUNINGPLUGIN_API ISDITuningInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TuneObject(UObject* Object) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Retune();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetTuning();
    
};

