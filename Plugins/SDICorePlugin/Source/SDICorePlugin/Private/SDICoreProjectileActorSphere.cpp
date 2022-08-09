#include "SDICoreProjectileActorSphere.h"
#include "Components/SphereComponent.h"

ASDICoreProjectileActorSphere::ASDICoreProjectileActorSphere() {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

