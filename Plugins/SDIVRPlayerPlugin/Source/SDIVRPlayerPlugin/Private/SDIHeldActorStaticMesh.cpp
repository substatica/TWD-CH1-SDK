#include "SDIHeldActorStaticMesh.h"
#include "Components/StaticMeshComponent.h"

ASDIHeldActorStaticMesh::ASDIHeldActorStaticMesh() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

