#pragma once
#include "CoreMinimal.h"
#include "SDIPIDControllerSettings.h"
#include "SDIQuatPIDController.h"
#include "Components/ActorComponent.h"
#include "SDIVectorPIDController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIPhysicsMotorComponent.generated.h"

class USceneComponent;
class UCurveFloat;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDIPhysicsMotorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIPIDControllerSettings LocationPIDSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIPIDControllerSettings RotationPIDSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* RotationProportionalGainCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* RotationDerivativeGainCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationGainCurveMinMass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNeedsDesiredTransformEveryFrame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUpdateDesiredTransformDuringPhysics;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> RigidBodyComponent;
    
    UPROPERTY(Transient)
    FName RigidBodyName;
    
    UPROPERTY(Transient)
    FSDIVectorPIDController LocationPIDController;
    
    UPROPERTY(Transient)
    FSDIQuatPIDController RotationPIDController;
    
    UPROPERTY(Transient)
    FQuat RootBoneQuat;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> DesiredRelativeComp;
    
    UPROPERTY(Transient)
    FName DesiredRelativeSocket;
    
    UPROPERTY(Transient)
    FTransform DesiredRelativeCompTransform;
    
    UPROPERTY(Transient)
    FVector RelativeDesiredLocation;
    
    UPROPERTY(Transient)
    FQuat RelativeDesiredRotation;
    
    UPROPERTY(Transient)
    uint32 DesiredTransformSetFrame;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> PendingDesiredRelativeComp;
    
    UPROPERTY(Transient)
    FName PendingDesiredRelativeSocket;
    
    UPROPERTY(Transient)
    FVector PendingRelativeDesiredLocation;
    
    UPROPERTY(Transient)
    FQuat PendingRelativeDesiredRotation;
    
    UPROPERTY(Transient)
    bool bPendingDesiredTransform;
    
    UPROPERTY(Transient)
    bool bPendingClearDesiredTransform;
    
    UPROPERTY(Transient)
    bool bPendingClearResetPID;
    
public:
    USDIPhysicsMotorComponent();
    UFUNCTION(BlueprintCallable)
    void SetUpdateDesiredTransformDuringPhysics(bool bUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationPIDSettings(FSDIPIDControllerSettings Settings);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationGainCurves(UCurveFloat* InProportionalGainCurve, UCurveFloat* InDerivativeGainCurve, float MinMass);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationGainCurveMinMass(float MinMass);
    
    UFUNCTION(BlueprintCallable)
    void SetNeedsDesiredTransformEveryFrame(bool bRefreshEveryFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationPIDSettings(FSDIPIDControllerSettings Settings);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredWorldTransform(const FTransform& NewDesiredTransform, USceneComponent* NewDesiredRelativeComp, FName NewDesiredRelativeSocket);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredWorldLocationAndRotation(FVector NewDesiredLocation, FRotator NewDesiredRotation, USceneComponent* NewDesiredRelativeComp, FName NewDesiredRelativeSocket);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredRelativeTransform(const FTransform& NewDesiredTransform, USceneComponent* NewDesiredRelativeComp, FName NewDesiredRelativeSocket);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredRelativeLocationAndRotation(FVector NewDesiredLocation, FRotator NewDesiredRotation, USceneComponent* NewDesiredRelativeComp, FName NewDesiredRelativeSocket);
    
    UFUNCTION(BlueprintCallable)
    void ResetPID();
    
    UFUNCTION(BlueprintPure)
    FName GetRigidBodyName() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetRigidBodyComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachFromRigidBody();
    
    UFUNCTION(BlueprintCallable)
    void ClearDesiredTransform(bool bResetPID);
    
    UFUNCTION(BlueprintCallable)
    void AttachToRigidBody(UPrimitiveComponent* Component, FName BodyName);
    
};

