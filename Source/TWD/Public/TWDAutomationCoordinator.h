#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDAutomationCoordinator.generated.h"

class ATargetPoint;
class ATWDAutomationSplineActor;

UCLASS(Blueprintable)
class ATWDAutomationCoordinator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ATargetPoint>> ObservationPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATWDAutomationSplineActor> WalkThroughSplineActor;
    
public:
    ATWDAutomationCoordinator();
};

