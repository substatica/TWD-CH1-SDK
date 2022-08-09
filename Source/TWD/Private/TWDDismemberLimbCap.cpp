#include "TWDDismemberLimbCap.h"
#include "Components/StaticMeshComponent.h"

ATWDDismemberLimbCap::ATWDDismemberLimbCap() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

