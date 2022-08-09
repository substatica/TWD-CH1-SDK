#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TWDBTT_FollowPath.generated.h"

class ATWDCharacter;

UCLASS()
class UTWDBTT_FollowPath : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AcceptanceRadius;
    
    UPROPERTY(EditAnywhere)
    bool FindPathIfMissing;
    
    UPROPERTY(EditAnywhere)
    float RadiusRandom;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector WaitTimestampKeySelector;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AnimationTimestampKeySelector;
    
    UPROPERTY(EditAnywhere)
    float AnimFailSafeTime;
    
    UPROPERTY(EditAnywhere)
    float FacingCloseEnough;
    
    UTWDBTT_FollowPath();
    UFUNCTION()
    void PlayAnimationActionCallback(ATWDCharacter* Character, bool bSucceed);
    
};

