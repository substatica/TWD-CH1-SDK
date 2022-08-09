#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TWDDismemberInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UTWDDismemberInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDDismemberInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool UseAdvancedDismember() const PURE_VIRTUAL(UseAdvancedDismember, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ShowAdvancedDismemberDebugInfo() const PURE_VIRTUAL(ShowAdvancedDismemberDebugInfo, return false;);
    
};

