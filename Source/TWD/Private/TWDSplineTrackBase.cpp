#include "TWDSplineTrackBase.h"
#include "Components/SplineComponent.h"

class UTWDSplineTrackEventComponent;

FRotator ATWDSplineTrackBase::GetRotationAtDistance(float Dist) const {
    return FRotator{};
}

FVector ATWDSplineTrackBase::GetLocationAtDistance(float Dist) const {
    return FVector{};
}

void ATWDSplineTrackBase::GetLocationAndRotationAtDistance(float Dist, FVector& OutDist, FRotator& OutRot) const {
}

float ATWDSplineTrackBase::GetLength() const {
    return 0.0f;
}

TArray<UTWDSplineTrackEventComponent*> ATWDSplineTrackBase::GetEvents() const {
    return TArray<UTWDSplineTrackEventComponent*>();
}

ATWDSplineTrackBase::ATWDSplineTrackBase() {
    this->bDrawDebug = true;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
}

