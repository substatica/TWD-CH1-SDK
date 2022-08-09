#include "SDISplineMeshActor.h"
#include "Components/SplineComponent.h"

class UMaterialInterface;

void ASDISplineMeshActor::UpdateSpline() {
}

void ASDISplineMeshActor::SetStraightEx(const FVector& Start, const FVector& Target, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

void ASDISplineMeshActor::SetStraight(const FVector& Target, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

void ASDISplineMeshActor::SetSineWaveEx(const FVector& Start, const FVector& Target, float Height, float Width, float Cycles, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

void ASDISplineMeshActor::SetSineWave(const FVector& Target, float Height, float Width, float Cycles, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

void ASDISplineMeshActor::SetProjectilePrediction(const FPredictProjectilePathResult& PathData) {
}

void ASDISplineMeshActor::SetPoints(const TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) {
}

void ASDISplineMeshActor::SetPoint(int32 PointIndex, const FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline) {
}

void ASDISplineMeshActor::SetMaterial(int32 ElementIndex, UMaterialInterface* Material) {
}

FVector ASDISplineMeshActor::GetPoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector{};
}

ASDISplineMeshActor::ASDISplineMeshActor() {
    this->SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->NumSegments = 10;
    this->SplineSegments.AddDefaulted(1);
}

