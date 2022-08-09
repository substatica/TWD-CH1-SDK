#include "SDIInteractiveActorSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

ASDIInteractiveActorSkeletalMesh::ASDIInteractiveActorSkeletalMesh() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

