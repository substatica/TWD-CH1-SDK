#include "SDIInventoryActorSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

ASDIInventoryActorSkeletalMesh::ASDIInventoryActorSkeletalMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

