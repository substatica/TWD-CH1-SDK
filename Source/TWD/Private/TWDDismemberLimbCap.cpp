#include "TWDDismemberLimbCap.h"
#include "Components/StaticMeshComponent.h"

ATWDDismemberLimbCap::ATWDDismemberLimbCap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

