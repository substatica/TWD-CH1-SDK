#include "SDIStimAndResponseActorStaticMesh.h"
#include "Components/StaticMeshComponent.h"

ASDIStimAndResponseActorStaticMesh::ASDIStimAndResponseActorStaticMesh() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

