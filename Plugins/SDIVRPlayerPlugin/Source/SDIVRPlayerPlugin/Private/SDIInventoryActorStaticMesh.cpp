#include "SDIInventoryActorStaticMesh.h"
#include "Components/StaticMeshComponent.h"

ASDIInventoryActorStaticMesh::ASDIInventoryActorStaticMesh() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

