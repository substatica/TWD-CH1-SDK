#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "OnFiredRoundDelegate.h"
#include "TWDAnimInstanceImposterGun.generated.h"

UCLASS(Abstract, NonTransient)
class TWD_API UTWDAnimInstanceImposterGun : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FOnFiredRound OnFiredRound;
    
public:
    UTWDAnimInstanceImposterGun();
    UFUNCTION(BlueprintImplementableEvent)
    void OnReload();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFire();
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimNotify_FiredRound();
    
};

