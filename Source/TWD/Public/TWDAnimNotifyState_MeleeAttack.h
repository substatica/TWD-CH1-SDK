#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "TWDAnimNotifyState_MeleeAttack.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UTWDAnimNotifyState_MeleeAttack : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MovementDuration;
    
    UPROPERTY(EditAnywhere)
    float MovementMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float MovementHoldTime;
    
    UPROPERTY(EditAnywhere)
    float MovementDistance;
    
    UPROPERTY(EditAnywhere)
    float NoTargetMovementDistance;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationMaxVelocity;
    
public:
    UTWDAnimNotifyState_MeleeAttack();
};

