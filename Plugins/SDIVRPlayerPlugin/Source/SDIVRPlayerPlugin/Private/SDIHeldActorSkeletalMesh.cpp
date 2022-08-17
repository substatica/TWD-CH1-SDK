#include "SDIHeldActorSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

ASDIHeldActorSkeletalMesh::ASDIHeldActorSkeletalMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

