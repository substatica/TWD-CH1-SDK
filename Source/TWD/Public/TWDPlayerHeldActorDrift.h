#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDPlayerHeldActorDrift.generated.h"

class UCurveFloat;

UCLASS(BlueprintType, Transient)
class UTWDPlayerHeldActorDrift : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultItemDistanceFromCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ItemDistanceFromCameraMultiplierMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ItemDistanceFromCameraMultiplierMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDriftOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* DriftBoundaryFactorCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector DriftBoundaryPushbackStrength;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Drift;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ItemPosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector CurrentVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector VelocityInterp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator CurrentAimRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator AimRotationVel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ItemDistanceFromCamera;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ItemDistanceFrom_Z_Axis;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CentripetalAccelerationFromYawInterp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CentripetalAccelerationFromPitchInterp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator TangentialVelocity;
    
public:
    UTWDPlayerHeldActorDrift();
    UFUNCTION(BlueprintCallable)
    void UpdateDrift(const FVector& Vel, const FRotator& AimRot, const float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FVector& Vel, const FRotator& AimRot);
    
    UFUNCTION(BlueprintPure)
    FRotator GetTangentialVelocity() const;
    
};

