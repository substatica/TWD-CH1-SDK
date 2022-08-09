#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MotionControllerComponent.h"
#include "UObject/NoExportTypes.h"
#include "SDIMotionHistory.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IMotionController.h"
#include "UObject/NoExportTypes.h"
#include "SDIMotionControllerComponent.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;
class UTextRenderComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIMotionControllerComponent : public UMotionControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVectorRK4SpringInterpolator MotionSpring;
    
    UPROPERTY(EditAnywhere)
    FSDIMotionHistory History;
    
    UPROPERTY(EditAnywhere)
    float ADSReturnLerpTime;
    
    UPROPERTY(EditAnywhere)
    float TrackingReturnLerpTime;
    
    UPROPERTY(EditAnywhere)
    float ADSBlendTime;
    
    UPROPERTY(EditAnywhere)
    float MaxADSControllerOffset;
    
    UPROPERTY(EditAnywhere)
    float TrackedRelSpeedSmoothingFactor;
    
    UPROPERTY(VisibleAnywhere)
    UStaticMesh* DebugSphere;
    
    UPROPERTY(VisibleAnywhere)
    UMaterialInterface* DebugSphereMaterial;
    
    UPROPERTY(Transient)
    FRotator ComponentRotationalVelocity;
    
    UPROPERTY(Transient)
    FVector ComponentAngularVelocity;
    
    UPROPERTY(Transient)
    FVector ComponentAcceleration;
    
    UPROPERTY(Transient)
    FRotator ComponentRotationalAcceleration;
    
    UPROPERTY(Transient)
    bool bFirstTick;
    
    UPROPERTY(Transient)
    TMap<UStaticMeshComponent*, UMaterialInstanceDynamic*> DebugSphereComponents;
    
    UPROPERTY(Export, Transient)
    TArray<UTextRenderComponent*> DebugTextComponents;
    
    UPROPERTY(Transient)
    FTransform TrackedRelTransform;
    
    UPROPERTY(Transient)
    FVector TrackedRelMovement;
    
    UPROPERTY(Transient)
    float TrackedRelSpeed;
    
    UPROPERTY(Transient)
    float SmoothedTrackedRelSpeed;
    
    UPROPERTY(Transient)
    FTransform AdjustedRelTransform;
    
    UPROPERTY(Transient)
    FTransform ADSTransform;
    
    UPROPERTY(Transient)
    bool bAdjustingForTracking;
    
    UPROPERTY(Transient)
    bool bAdjustingForADS;
    
    UPROPERTY(Transient)
    bool bADSUsingRightEye;
    
    UPROPERTY(Transient)
    float ADSTime;
    
    UPROPERTY(Transient)
    FTransform AdjustedRelTransformLerpStart;
    
    UPROPERTY(Transient)
    float AdjustedRelTransformLerp;
    
    UPROPERTY(Transient)
    float AdjustedRelTransformLerpTime;
    
    UPROPERTY(Transient)
    ETrackingStatus LastTrackingStatus;
    
    UPROPERTY(Transient)
    FTransform UntrackedRelTransform;
    
    UPROPERTY(Transient)
    bool bUntrackedRelTransformValid;
    
public:
    USDIMotionControllerComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetVelocityInfo(float Timespan, FVector& MinVel, FVector& AvgVel, FVector& MaxVel, float& ScalarMinVel, float& ScalarAvgVel, float& ScalarMaxVel) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSpringVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetMinVelocity(float Timespan, float& ScalarVel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetMinAngularVelocity(float Timespan, float& ScalarAngVel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetMinAcceleration(float Timespan, float& ScalarAcc) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetMaxVelocity(float Timespan, float& ScalarVel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetMaxAngularVelocity(float Timespan, float& ScalarAngVel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetMaxAcceleration(float Timespan, float& ScalarAcc) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetComponentRotationalVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetComponentRotationalAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetComponentAngularVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetComponentAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FBox GetBounds(float Timespan) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetAverageVelocity(float Timespan, float& ScalarVel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetAverageAngularVelocity(float Timespan, float& ScalarAngVel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector GetAverageAcceleration(float Timespan, float& ScalarAcc) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAngularVelocityInfo(float Timespan, FVector& MinAngVel, FVector& AvgAngVel, FVector& MaxAngVel, float& ScalarMinAngVel, float& ScalarAvgAngVel, float& ScalarMaxAngVel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetAccelerationInfo(float Timespan, FVector& MinAcc, FVector& AvgAcc, FVector& MaxAcc, float& ScalarMinAcc, float& ScalarAvgAcc, float& ScalarMaxAcc) const;
    
};

