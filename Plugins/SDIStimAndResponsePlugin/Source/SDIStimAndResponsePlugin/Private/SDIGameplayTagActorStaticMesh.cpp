#include "SDIGameplayTagActorStaticMesh.h"
#include "Components/StaticMeshComponent.h"

ASDIGameplayTagActorStaticMesh::ASDIGameplayTagActorStaticMesh() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

