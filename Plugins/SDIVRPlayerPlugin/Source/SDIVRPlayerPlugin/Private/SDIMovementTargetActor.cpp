#include "SDIMovementTargetActor.h"
#include "Templates/SubclassOf.h"
#include "Components/SplineComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

class ASDICharacter;
class UPrimitiveComponent;
class ASDIMovementTargetActor;

void ASDIMovementTargetActor::UpdateMovementHighlightTransform_Implementation(ASDICharacter* Character, const FTransform& Transform) {
}

void ASDIMovementTargetActor::OnTeleportSetVisibility_Implementation(ASDICharacter* Character, bool bVisible) {
}

void ASDIMovementTargetActor::OnMovementStopped_Implementation(ASDICharacter* Character, bool bCancelled) {
}

void ASDIMovementTargetActor::OnMovementStarted_Implementation(ASDICharacter* Character) {
}

void ASDIMovementTargetActor::OnMovementHighlightChanged_Implementation(ASDICharacter* Character, bool bHighlighted, UPrimitiveComponent* HighlightedComponent, UPrimitiveComponent* PrevHighlightedComponent) {
}

int32 ASDIMovementTargetActor::GetMovementTargetsInRadius(const FVector& Location, float Radius, TArray<ASDIMovementTargetActor*>& MovementTargetArray, TSubclassOf<ASDIMovementTargetActor> FilterClass, bool bExact) {
    return 0;
}

FTransform ASDIMovementTargetActor::GetMovementTargetFromHitResult(const FHitResult& Hit, const FTransform& CurrentTransform) const {
    return FTransform{};
}

ASDIMovementTargetActor::ASDIMovementTargetActor() {
    this->LocationSpline = CreateDefaultSubobject<USplineComponent>(TEXT("LocationSpline"));
    this->Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->Facing = CreateDefaultSubobject<UArrowComponent>(TEXT("Facing"));
    this->bSnapToDesiredFacing = true;
    this->bSnapToGround = true;
}

