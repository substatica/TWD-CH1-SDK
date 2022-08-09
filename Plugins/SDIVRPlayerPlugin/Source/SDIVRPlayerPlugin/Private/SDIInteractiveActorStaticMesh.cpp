#include "SDIInteractiveActorStaticMesh.h"
#include "Components/StaticMeshComponent.h"

ASDIInteractiveActorStaticMesh::ASDIInteractiveActorStaticMesh() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

