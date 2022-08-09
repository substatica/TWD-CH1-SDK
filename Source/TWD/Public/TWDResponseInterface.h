#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TWDResponse.h"
#include "TWDResponseInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class TWD_API UTWDResponseInterface : public UInterface {
    GENERATED_BODY()
};

class TWD_API ITWDResponseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool ExecuteResponse(FTWDResponse Response, FName EventName) PURE_VIRTUAL(ExecuteResponse, return false;);
    
};

