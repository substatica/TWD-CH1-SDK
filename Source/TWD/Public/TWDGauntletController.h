#pragma once
#include "CoreMinimal.h"
#include "GauntletTestController.h"
#include "TWDGauntletController.generated.h"

UCLASS(Blueprintable)
class UTWDGauntletController : public UGauntletTestController {
    GENERATED_BODY()
public:
    UTWDGauntletController(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void OnTestsRefreshed();
    
    UFUNCTION(BlueprintCallable)
    void OnTestsComplete();
    
};


