#pragma once
#include "CoreMinimal.h"
#include "InteractiveViewEventDelegate.h"
#include "Components/ActorComponent.h"
#include "InteractiveViewTickDelegate.h"
#include "EViewType.h"
#include "InteractiveViewComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UInteractiveViewComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractiveViewTick TickInView;
    
    UPROPERTY(BlueprintAssignable)
    FInteractiveViewTick TickNotInView;
    
    UPROPERTY(BlueprintAssignable)
    FInteractiveViewEvent ViewEventFired;
    
    UPROPERTY(BlueprintAssignable)
    FInteractiveViewEvent ViewContinuousCheckFailed;
    
private:
    UPROPERTY(EditAnywhere)
    EViewType ViewType;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bDisableAfterOneCompletionEvent;
    
    UPROPERTY(EditAnywhere)
    float TimeForViewCompletion;
    
    UPROPERTY(EditAnywhere)
    float MaxContinuousFailTime;
    
    UPROPERTY(EditAnywhere)
    float ViewConeAngle;
    
    UPROPERTY(EditAnywhere)
    float OwnerConeAngle;
    
public:
    UInteractiveViewComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnable(const bool bEnable);
    
};

