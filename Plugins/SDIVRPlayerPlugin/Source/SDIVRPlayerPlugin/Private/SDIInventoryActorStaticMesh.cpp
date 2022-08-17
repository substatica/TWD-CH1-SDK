#include "SDIInventoryActorStaticMesh.h"
#include "Components/StaticMeshComponent.h"

ASDIInventoryActorStaticMesh::ASDIInventoryActorStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

