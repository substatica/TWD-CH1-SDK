#include "SDIStimAndResponseProjectileActorSphere.h"
#include "Components/SphereComponent.h"

ASDIStimAndResponseProjectileActorSphere::ASDIStimAndResponseProjectileActorSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

