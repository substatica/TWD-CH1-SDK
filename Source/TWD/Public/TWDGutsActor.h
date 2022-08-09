#pragma once
#include "CoreMinimal.h"
#include "TWDProp.h"
#include "TWDGutsActor.generated.h"

class ATWDCharacter;

UCLASS(Blueprintable)
class TWD_API ATWDGutsActor : public ATWDProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwipeAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwipeDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwipeAmountRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsApplying;
    
    ATWDGutsActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplied(ATWDCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSwipeProgress() const;
    
};

