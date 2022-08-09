#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIGripInfo.h"
#include "UObject/NoExportTypes.h"
#include "ESDIHandPose.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerHandLock.generated.h"

class UObject;
class USceneComponent;
class UActorComponent;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIPlayerHandLock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDebugRender;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> LockOwner;
    
    UPROPERTY(Transient)
    bool bLockLocation;
    
    UPROPERTY(Transient)
    bool bResetLocationSpring;
    
    UPROPERTY(Transient)
    FVectorRK4SpringInterpolator LocationSpring;
    
    UPROPERTY(Transient)
    FTransform LocationTransform;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> LocationParent;
    
    UPROPERTY(Transient)
    FName LocationParentSocketName;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> LocationRef;
    
    UPROPERTY(Transient)
    FName LocationRefSocketName;
    
    UPROPERTY(Transient)
    FTransform LastLocationParentTransform;
    
    UPROPERTY(Transient)
    float LocationArmLengthReleaseFactor;
    
    UPROPERTY(Transient)
    float LocationExceedingArmLengthReleaseFactorTime;
    
    UPROPERTY(Transient)
    bool bIgnoreCollisionsWithOtherHand;
    
    UPROPERTY(Transient)
    bool bLockRotation;
    
    UPROPERTY(Transient)
    FRotator Rotation;
    
    UPROPERTY(Transient)
    FRotator RotationExtent;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> RotationParent;
    
    UPROPERTY(Transient)
    FName RotationParentSocketName;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USceneComponent> RotationRef;
    
    UPROPERTY(Transient)
    FName RotationRefSocketName;
    
    UPROPERTY(Transient)
    FTransform LastRotationParentTransform;
    
    UPROPERTY(Transient)
    FVector LastLimitedLocation;
    
    UPROPERTY(Transient)
    FVector LastLimitedLocationLerp;
    
    UPROPERTY(Transient)
    float LocationLimitLerp;
    
    UPROPERTY(Transient)
    bool bLocationLimitLerpReset;
    
    UPROPERTY(Transient)
    FQuat LastLimitedRotation;
    
    UPROPERTY(Transient)
    FQuat LastLimitedRotationLerp;
    
    UPROPERTY(Transient)
    float RotationLimitLerp;
    
    UPROPERTY(Transient)
    bool bRotationLimitLerpReset;
    
    UPROPERTY(Transient)
    ESDIHandPose LockHandPose;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UActorComponent> LockGripComponent;
    
    UPROPERTY(Transient)
    FSDIGripInfo LockGripInfo;
    
    UPROPERTY(Transient)
    bool bLockGripCollisionIgnored;
    
public:
    FSDIPlayerHandLock();
};

