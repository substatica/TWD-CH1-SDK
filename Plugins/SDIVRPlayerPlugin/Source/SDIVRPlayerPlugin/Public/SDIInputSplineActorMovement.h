#pragma once
#include "CoreMinimal.h"
#include "SDIInputSplineActor.h"
#include "SDIInputSplineActorMovement.generated.h"

class ASDIMovementTargetActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInputSplineActorMovement : public ASDIInputSplineActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleMovementTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyToMovementTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputFacingOnlyWithMovementTargets;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ASDIMovementTargetActor>> VisibleMovementTargets;
    
public:
    ASDIInputSplineActorMovement();
};

