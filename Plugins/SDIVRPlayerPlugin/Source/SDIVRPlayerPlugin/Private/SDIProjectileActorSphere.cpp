#include "SDIProjectileActorSphere.h"
#include "Components/SphereComponent.h"

ASDIProjectileActorSphere::ASDIProjectileActorSphere() {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

