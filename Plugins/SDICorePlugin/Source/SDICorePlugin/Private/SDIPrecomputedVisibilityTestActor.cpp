#include "SDIPrecomputedVisibilityTestActor.h"
#include "Components/CapsuleComponent.h"

ASDIPrecomputedVisibilityTestActor::ASDIPrecomputedVisibilityTestActor() {
    this->bEnablePrecomputedVisibility = false;
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
}

