#pragma once
#include "CoreMinimal.h"
#include "TWDBehaviorTreeVars.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTWDBehaviorTreeVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlowDownToAttackDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVelSpeedMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVelSpeedMatchingForNonGrapplers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TotalTimeToAttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlowDownAttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FastAttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackRangeForSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonGrappleSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* NonGrappleSpeedMultiplierCurve;
    
    TWD_API FTWDBehaviorTreeVars();
};

