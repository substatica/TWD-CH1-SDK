#include "SDIHeldActorSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

ASDIHeldActorSkeletalMesh::ASDIHeldActorSkeletalMesh() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

