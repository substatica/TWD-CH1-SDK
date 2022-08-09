#include "SDICoreProjectileActor.h"
#include "SDICoreProjectileMovementComponent.h"

class UPrimitiveComponent;
class AActor;

bool ASDICoreProjectileActor::ShouldStick_Implementation(const FHitResult& Hit) const {
    return false;
}

bool ASDICoreProjectileActor::ShouldBounce_Implementation(const FHitResult& Hit) const {
    return false;
}

void ASDICoreProjectileActor::ProjectileEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASDICoreProjectileActor::ProjectileBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASDICoreProjectileActor::OnProjectileStop_Implementation(const FHitResult& ImpactResult) {
}

void ASDICoreProjectileActor::OnProjectileStick_Implementation(const FHitResult& ImpactResult) {
}

void ASDICoreProjectileActor::OnProjectileBounce_Implementation(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

FTransform ASDICoreProjectileActor::GetStickTransform_Implementation(const FHitResult& ImpactResult) {
    return FTransform{};
}

UPrimitiveComponent* ASDICoreProjectileActor::GetCollisionComponent_Implementation() const {
    return NULL;
}

ASDICoreProjectileActor::ASDICoreProjectileActor() {
    this->ProjectileMovement = CreateDefaultSubobject<USDICoreProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->ProjectileMass = 1.00f;
    this->HitReactImpulseMultiplier = 1.00f;
    this->StickOrientAxis = ESDIAxis::Any;
    this->StickOffset = 1.00f;
}

