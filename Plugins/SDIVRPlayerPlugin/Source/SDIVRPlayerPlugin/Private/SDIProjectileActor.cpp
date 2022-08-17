#include "SDIProjectileActor.h"

#include "SDIProjectileMovementComponent.h"

ASDIProjectileActor::ASDIProjectileActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USDIProjectileMovementComponent>(TEXT("ProjectileMovement"))) {
}

