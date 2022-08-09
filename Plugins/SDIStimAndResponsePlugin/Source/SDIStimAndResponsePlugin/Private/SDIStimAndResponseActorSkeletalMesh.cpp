#include "SDIStimAndResponseActorSkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"

ASDIStimAndResponseActorSkeletalMesh::ASDIStimAndResponseActorSkeletalMesh() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

