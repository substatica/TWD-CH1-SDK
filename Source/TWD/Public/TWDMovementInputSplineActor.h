#pragma once
#include "CoreMinimal.h"
#include "TWDInputSplineActor.h"
#include "TWDMovementInputSplineActor.generated.h"

class ASDIMovementTargetActor;

UCLASS(Blueprintable)
class ATWDMovementInputSplineActor : public ATWDInputSplineActor {
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
    ATWDMovementInputSplineActor();
};

