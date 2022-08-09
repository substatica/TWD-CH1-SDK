#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "OnFiredRoundDelegate.h"
#include "TWDAnimInstanceImposterGun.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class TWD_API UTWDAnimInstanceImposterGun : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnFiredRound OnFiredRound;
    
public:
    UTWDAnimInstanceImposterGun();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AnimNotify_FiredRound();
    
};

