#include "SDIStimAndResponseProjectileActorSphere.h"
#include "Components/SphereComponent.h"

ASDIStimAndResponseProjectileActorSphere::ASDIStimAndResponseProjectileActorSphere() {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

