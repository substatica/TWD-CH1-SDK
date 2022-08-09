#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SDIPIDControllerSettings.h"
#include "SDIQuatPIDController.h"
#include "SDIVectorPIDController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIPhysicsMotorComponent.generated.h"

class UCurveFloat;
class USceneComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDIPhysicsMotorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPIDControllerSettings LocationPIDSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPIDControllerSettings RotationPIDSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotationProportionalGainCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotationDerivativeGainCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationGainCurveMinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsDesiredTransformEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateDesiredTransformDuringPhysics;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> RigidBodyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RigidBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIVectorPIDController LocationPIDController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIQuatPIDController RotationPIDController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat RootBoneQuat;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USceneComponent> DesiredRelativeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName DesiredRelativeSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform DesiredRelativeCompTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RelativeDesiredLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat RelativeDesiredRotation;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 DesiredTransformSetFrame;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USceneComponent> PendingDesiredRelativeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PendingDesiredRelativeSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PendingRelativeDesiredLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat PendingRelativeDesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingDesiredTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingClearDesiredTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRigidBodyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetRigidBodyComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachFromRigidBody();
    
    UFUNCTION(BlueprintCallable)
    void ClearDesiredTransform(bool bResetPID);
    
    UFUNCTION(BlueprintCallable)
    void AttachToRigidBody(UPrimitiveComponent* Component, FName BodyName);
    
};

