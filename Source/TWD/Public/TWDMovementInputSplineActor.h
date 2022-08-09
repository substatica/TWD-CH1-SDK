#pragma once
#include "CoreMinimal.h"
#include "TWDInputSplineActor.h"
#include "TWDMovementInputSplineActor.generated.h"

class ASDIMovementTargetActor;

UCLASS()
class ATWDMovementInputSplineActor : public ATWDInputSplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float VisibleMovementTargetRadius;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOnlyToMovementTargets;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInputFacingOnlyWithMovementTargets;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ASDIMovementTargetActor>> VisibleMovementTargets;
    
public:
    ATWDMovementInputSplineActor();
};

