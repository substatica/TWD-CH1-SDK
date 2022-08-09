#include "SDIGameplayTagActorSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

ASDIGameplayTagActorSkeletalMesh::ASDIGameplayTagActorSkeletalMesh() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

