#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "SDIVectorPIDController.h"
#include "SDIQuatPIDController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIHandMeshComponent.generated.h"

class USceneComponent;
class UCurveFloat;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIHandMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bUsePhysics;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIVectorPIDController LocationPIDController;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIQuatPIDController RotationPIDController;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* RotationProportionalGainCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* RotationDerivativeGainCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float SingleHandedRotationGainCurveMinMass;
    
    UPROPERTY(EditDefaultsOnly)
    float TwoHandedRotationGainCurveMinMass;
    
    UPROPERTY(EditDefaultsOnly)
    float TwoHandedGrabScalar;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> DesiredRelativeComp;
    
    UPROPERTY(Transient)
    FTransform DesiredRelativeCompTransform;
    
    UPROPERTY(Transient)
    FVector RelativeDesiredLocation;
    
    UPROPERTY(Transient)
    FQuat RelativeDesiredRotation;
    
    UPROPERTY(Transient)
    FQuat RootBoneQuat;
    
public:
    USDIHandMeshComponent();
};

