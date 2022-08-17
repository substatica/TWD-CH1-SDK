#include "SDIProjectileActorSphere.h"
#include "Components/SphereComponent.h"

ASDIProjectileActorSphere::ASDIProjectileActorSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

