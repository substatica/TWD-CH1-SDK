#pragma once
#include "CoreMinimal.h"
#include "Engine/SplineMeshActor.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "SDISplineMeshActor.generated.h"

class USplineMeshComponent;
class USplineComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDISplineMeshActor : public ASplineMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineSegments;
    
public:
    ASDISplineMeshActor();
    UFUNCTION(BlueprintCallable)
    void UpdateSpline();
    
    UFUNCTION(BlueprintCallable)
    void SetStraightEx(const FVector& Start, const FVector& Target, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetStraight(const FVector& Target, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetSineWaveEx(const FVector& Start, const FVector& Target, float Height, float Width, float Cycles, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetSineWave(const FVector& Target, float Height, float Width, float Cycles, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectilePrediction(const FPredictProjectilePathResult& PathData);
    
    UFUNCTION(BlueprintCallable)
    void SetPoints(const TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetPoint(int32 PointIndex, const FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(int32 ElementIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintPure)
    FVector GetPoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace) const;
    
};

