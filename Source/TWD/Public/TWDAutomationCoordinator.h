#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDAutomationCoordinator.generated.h"

class ATargetPoint;
class ATWDAutomationSplineActor;

UCLASS()
class ATWDAutomationCoordinator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<TSoftObjectPtr<ATargetPoint>> ObservationPoints;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TSoftObjectPtr<ATWDAutomationSplineActor> WalkThroughSplineActor;
    
public:
    ATWDAutomationCoordinator();
};

