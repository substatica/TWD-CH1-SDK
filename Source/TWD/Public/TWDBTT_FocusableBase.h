#pragma once
#include "CoreMinimal.h"
#include "TWDBTT_Base.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETWDFocusAction.h"
#include "TWDBTT_FocusableBase.generated.h"

class AAIController;
class AActor;

UCLASS()
class TWD_API UTWDBTT_FocusableBase : public UTWDBTT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDFocusAction ActivateAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETWDFocusAction DeactivateAction;
    
protected:
    UPROPERTY(Transient)
    AActor* RestoreFocusActor;
    
public:
    UTWDBTT_FocusableBase();
    UFUNCTION(BlueprintCallable)
    void SetFocusToTarget(AAIController* Controller, const FString& CallerLogMsg);
    
    UFUNCTION(BlueprintCallable)
    void RestoreFocus(AAIController* Controller);
    
};

