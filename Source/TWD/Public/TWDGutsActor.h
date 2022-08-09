#pragma once
#include "CoreMinimal.h"
#include "TWDProp.h"
#include "TWDGutsActor.generated.h"

class ATWDCharacter;

UCLASS()
class TWD_API ATWDGutsActor : public ATWDProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float SwipeAccumulator;
    
    UPROPERTY(BlueprintReadOnly)
    float SwipeDelta;
    
    UPROPERTY(EditAnywhere)
    float SwipeAmountRequired;
    
    UPROPERTY(EditAnywhere)
    float CameraTargetRadius;
    
    UPROPERTY(EditAnywhere)
    float ArmTargetRadius;
    
    UPROPERTY(EditAnywhere)
    bool bShowDebugData;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsApplying;
    
    ATWDGutsActor();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplied(ATWDCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintPure)
    float GetSwipeProgress() const;
    
};

