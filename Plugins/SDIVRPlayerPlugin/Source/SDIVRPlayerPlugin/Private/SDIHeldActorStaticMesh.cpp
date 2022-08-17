#include "SDIHeldActorStaticMesh.h"
#include "Components/StaticMeshComponent.h"

ASDIHeldActorStaticMesh::ASDIHeldActorStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

