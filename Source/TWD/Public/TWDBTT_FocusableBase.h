#pragma once
#include "CoreMinimal.h"
#include "ETWDFocusAction.h"
#include "TWDBTT_Base.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTT_FocusableBase.generated.h"

class AActor;
class AAIController;

UCLASS(Blueprintable)
class TWD_API UTWDBTT_FocusableBase : public UTWDBTT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDFocusAction ActivateAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDFocusAction DeactivateAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* RestoreFocusActor;
    
public:
    UTWDBTT_FocusableBase();
    UFUNCTION(BlueprintCallable)
    void SetFocusToTarget(AAIController* Controller, const FString& CallerLogMsg);
    
    UFUNCTION(BlueprintCallable)
    void RestoreFocus(AAIController* Controller);
    
};

