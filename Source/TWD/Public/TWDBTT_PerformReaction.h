#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TWDBTT_PerformReaction.generated.h"

class ATWDCharacter;

UCLASS(Blueprintable)
class UTWDBTT_PerformReaction : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector PlayBarkKeySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimFailSafeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WaitOverTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimOverTimestamp;
    
public:
    UTWDBTT_PerformReaction();
    UFUNCTION(BlueprintCallable)
    void PlayAnimationActionCallback(ATWDCharacter* Character, bool bSucceed);
    
};

