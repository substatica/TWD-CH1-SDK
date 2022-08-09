#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDAutomationSplineActor.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ATWDAutomationSplineActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ATWDAutomationSplineActor();
};

