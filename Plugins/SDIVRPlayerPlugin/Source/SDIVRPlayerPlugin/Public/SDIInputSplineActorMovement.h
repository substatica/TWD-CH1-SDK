#pragma once
#include "CoreMinimal.h"
#include "SDIInputSplineActor.h"
#include "SDIInputSplineActorMovement.generated.h"

class ASDIMovementTargetActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIInputSplineActorMovement : public ASDIInputSplineActor {
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
    ASDIInputSplineActorMovement();
};

