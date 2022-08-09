#include "TWDAutomationSplineActor.h"
#include "Components/SplineComponent.h"

ATWDAutomationSplineActor::ATWDAutomationSplineActor() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
}

