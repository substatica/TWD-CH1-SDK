#pragma once
#include "CoreMinimal.h"
#include "SDIPIDControllerSettings.h"
#include "Components/SplineComponent.h"
#include "SDIGripComponentInterface.h"
#include "ESDIHandPose.h"
#include "InputCoreTypes.h"
#include "ESDIGripMovementTarget.h"
#include "ESDIGripType.h"
#include "UObject/NoExportTypes.h"
#include "ESDIGripMovement.h"
#include "ESDIVRControllerType.h"
#include "SDIComponentReplacement.h"
#include "SDISplineGripComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDISplineGripComponent : public USplineComponent, public ISDIGripComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EControllerHand hand;
    
    UPROPERTY(EditAnywhere)
    ESDIHandPose HandPose;
    
    UPROPERTY(EditAnywhere)
    ESDIGripType GripType;
    
    UPROPERTY(EditAnywhere)
    ESDIGripMovement LocationGripMovement;
    
    UPROPERTY(EditAnywhere)
    ESDIGripMovement RotationGripMovement;
    
    UPROPERTY(EditAnywhere)
    ESDIGripMovementTarget RotationGripMovementTarget;
    
    UPROPERTY(EditAnywhere)
    bool bUseTrackedHandForConstraintAdjustments;
    
    UPROPERTY(EditAnywhere)
    bool bApplyRotationConstraintsOnGrab;
    
    UPROPERTY(EditAnywhere)
    bool bPreferredForGrabFromInventory;
    
    UPROPERTY(EditAnywhere)
    bool bPreferredForNonVR;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainAttachment;
    
    UPROPERTY(EditAnywhere)
    FTransform HandRelativeOffset;
    
    UPROPERTY(EditAnywhere)
    TMap<ESDIVRControllerType, FTransform> SingleHandedRelativeOffsetPerController;
    
    UPROPERTY(EditAnywhere)
    TMap<ESDIVRControllerType, FTransform> TwoHandedRelativeOffsetPerController;
    
    UPROPERTY(EditAnywhere)
    float LinearDistanceUpdateThreshold;
    
    UPROPERTY(EditAnywhere)
    float AngularDistanceUpdateThresholdDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverrideSinglePhysicsHandLocationPID;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIPIDControllerSettings SinglePhysicsHandLocationPID;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverrideSinglePhysicsHandRotationPID;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIPIDControllerSettings SinglePhysicsHandRotationPID;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverrideDualPhysicsHandLocationPID;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIPIDControllerSettings DualPhysicsHandLocationPID;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverrideDualPhysicsHandRotationPID;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIPIDControllerSettings DualPhysicsHandRotationPID;
    
    UPROPERTY(EditAnywhere)
    float DesiredGripPercent;
    
    UPROPERTY(EditAnywhere)
    float NonVRGripPercent;
    
    UPROPERTY(Transient)
    FSDIComponentReplacement ComponentReplacement;
    
public:
    USDISplineGripComponent();
    
    // Fix for true pure virtual functions not being implemented
};

