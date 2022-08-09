#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TWDBTT_PerformReaction.generated.h"

class ATWDCharacter;

UCLASS()
class UTWDBTT_PerformReaction : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector PlayBarkKeySelector;
    
    UPROPERTY(EditAnywhere)
    float AnimFailSafeTime;
    
    UPROPERTY(Transient)
    float WaitOverTimestamp;
    
    UPROPERTY(Transient)
    float AnimOverTimestamp;
    
public:
    UTWDBTT_PerformReaction();
    UFUNCTION()
    void PlayAnimationActionCallback(ATWDCharacter* Character, bool bSucceed);
    
};

