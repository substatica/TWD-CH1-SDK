#pragma once
#include "CoreMinimal.h"
#include "MotionControllerComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIMotionHistory.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IMotionController.h"
#include "UObject/NoExportTypes.h"
#include "Engine/SpringInterpolator.h"
#include "SDIMotionControllerComponent.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;
class UTextRenderComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIMotionControllerComponent : public UMotionControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorRK4SpringInterpolator MotionSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMotionHistory History;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSReturnLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingReturnLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADSBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxADSControllerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackedRelSpeedSmoothingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DebugSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DebugSphereMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ComponentRotationalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ComponentAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ComponentAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ComponentRotationalAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UStaticMeshComponent*, UMaterialInstanceDynamic*> DebugSphereComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextRenderComponent*> DebugTextComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TrackedRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TrackedRelMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TrackedRelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothedTrackedRelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform AdjustedRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform ADSTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAdjustingForTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAdjustingForADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bADSUsingRightEye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ADSTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform AdjustedRelTransformLerpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AdjustedRelTransformLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AdjustedRelTransformLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETrackingStatus LastTrackingStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform UntrackedRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUntrackedRelTransformValid;
    
public:
    USDIMotionControllerComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetVelocityInfo(float Timespan, FVector& MinVel, FVector& AvgVel, FVector& MaxVel, float& ScalarMinVel, float& ScalarAvgVel, float& ScalarMaxVel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetComponentRotationalVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetComponentRotationalAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetComponentAngularVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

