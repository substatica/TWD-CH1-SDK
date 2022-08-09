#include "SDIInventoryActorSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

ASDIInventoryActorSkeletalMesh::ASDIInventoryActorSkeletalMesh() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

