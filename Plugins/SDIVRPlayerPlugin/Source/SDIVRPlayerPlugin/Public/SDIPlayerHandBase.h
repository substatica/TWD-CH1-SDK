#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "SDIPlayerHandLock.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "ESDIHandPose.h"
#include "SDIPlayerHandMove.h"
#include "SDIPlayerHandBase.generated.h"

class USDIMotionControllerComponent;
class USkeletalMeshComponent;
class USDICollisionChannelIgnoranceComponent;
class UMaterialInstanceDynamic;
class USceneComponent;
class UObject;
class UHapticFeedbackEffect_Base;
class APawn;
class APlayerController;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIPlayerHandBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDIMotionControllerComponent* MotionController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HandMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TrackedHandMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CosmeticHandMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDICollisionChannelIgnoranceComponent* HandMeshCollisionIgnoranceComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocitySmoothingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShoulderOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoulderHeadRotationDeltaPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoulderHeadRotationPitchThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmDebugOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EditorCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackedHandMeshFadeInStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackedHandMeshFadeInDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackedHandMeshFadeInExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackedHandMeshFadeInAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHandCollisionIgnoranceRestorationPullback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandCollisionIgnoranceRestorationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportMinArmLengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSimulatingPhysicsMassToPushAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WristBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ElbowBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShoulderBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmMeshLengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ArmMeshWidthMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandLock HandLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandLock ShoulderLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRotator> RelativeRotationPerControllerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVector> RelativeLocationPerControllerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CosmeticHandMeshReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand ControllerHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> TrackedHandMaterialInstances;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USceneComponent> HandMeshTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector HandOffsetDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform PreLockHandModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform HandModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHandMeshHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTrackedHandMeshHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWristBoneValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bElbowBoneValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShoulderBoneValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BaseForeArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BaseUpperArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForeArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UpperArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastHandTeleportTimestamp;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UObject> ShoulderLockOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShoulderLockLimitedTime;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<USDICollisionChannelIgnoranceComponent>> CollisionIgnoranceRestorationPullbackComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHandCollisionIgnoranceRestorationTargetCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CosmeticHandMeshReturnLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform CosmeticHandMeshReturnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform RelativeControllerTransform;
    
public:
    ASDIPlayerHandBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateHandHidden(bool bHandHidden);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockShoulder(UObject* LockOwner);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockHandRotation(UObject* LockOwner, bool bInterpolate);
    
    UFUNCTION(BlueprintCallable)
    bool UnlockHandLocation(UObject* LockOwner, bool bInterpolate);
    
    UFUNCTION(BlueprintCallable)
    void UnlockHandClench();
    
    UFUNCTION(BlueprintCallable)
    bool UnlockHand(UObject* LockOwner, bool bInterpolate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool StopHapticsByValue(UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool StopHapticEffectId(int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool StopHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool StopAllHapticEffects(UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable)
    void SetTrackedHandMeshHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool SetHapticsByValue(const float Frequency, const float Amplitude, UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable)
    void SetHandPose(ESDIHandPose NewPose, float BlendSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetHandMeshHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetHandClench(float NewClench);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, float Scale, bool bLoop, int32 Priority, UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    bool LockShoulder(UObject* LockOwner, float ArmLengthMultiplier, float AdditionalArmLength);
    
    UFUNCTION(BlueprintCallable)
    bool LockHandToComponent(UObject* LockOwner, USceneComponent* Comp, FName SocketName, FRotator Extent, float SpringStiffness, float SpringDamp, USceneComponent* Ref, FName RefSocketName, bool bInterpolate, bool bResetInterpolation, ESDIHandPose Pose, float ArmLengthReleaseFactor, bool bIgnoreCollisionsWithOtherHand);
    
    UFUNCTION(BlueprintCallable)
    bool LockHandRotationToComponent(UObject* LockOwner, USceneComponent* Comp, FName SocketName, FRotator Extent, USceneComponent* Ref, FName RefSocketName, bool bInterpolate, bool bResetInterpolation, ESDIHandPose Pose);
    
    UFUNCTION(BlueprintCallable)
    bool LockHandRotation(UObject* LockOwner, FRotator Rotation, FRotator Extent, USceneComponent* Parent, FName ParentSocketName, USceneComponent* Ref, FName RefSocketName, bool bInterpolate, bool bResetInterpolation, ESDIHandPose Pose);
    
    UFUNCTION(BlueprintCallable)
    bool LockHandLocationToComponent(UObject* LockOwner, USceneComponent* Comp, FName SocketName, float SpringStiffness, float SpringDamp, USceneComponent* Ref, FName RefSocketName, bool bInterpolate, bool bResetInterpolation, ESDIHandPose Pose, float ArmLengthReleaseFactor, bool bIgnoreCollisionsWithOtherHand);
    
    UFUNCTION(BlueprintCallable)
    void LockHandClench(float NewClench);
    
    UFUNCTION(BlueprintCallable)
    bool K2LockHandLocation(UObject* LockOwner, FVector Extents, FTransform Transform, USceneComponent* Parent, FName ParentSocketName, float SpringStiffness, float SpringDamp, USceneComponent* Ref, FName RefSocketName, bool bInterpolate, bool bResetInterpolation, ESDIHandPose Pose, float ArmLengthReleaseFactor, bool bIgnoreCollisionsWithOtherHand);
    
    UFUNCTION(BlueprintCallable)
    bool K2LockHand(UObject* LockOwner, FVector Extents, FTransform Transform, FRotator Extent, USceneComponent* Parent, FName ParentSocketName, float SpringStiffness, float SpringDamp, USceneComponent* Ref, FName RefSocketName, bool bInterpolate, bool bResetInterpolation, ESDIHandPose Pose, float ArmLengthReleaseFactor, bool bIgnoreCollisionsWithOtherHand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2IsHandPoseLocked(ESDIHandPose& OutPose) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2IsHandClenchLocked(float& OutLockedClench) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float K2ComputeHandMove(const FSDIPlayerHandMove& Move, FVector DesiredDirection, FVector& OutVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackedHandMeshHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShoulderLockedBy(const UObject* Obj) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShoulderLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingHapticsByValue(UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingHapticEffectId(int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, UObject* EffectOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandMeshHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandLockInterpolating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandLockExceedingArmLengthReleaseFactor(float& OutTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandLockedBy(const UObject* Obj) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandLocked() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeHand();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCosmeticHandMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandWasTeleported(const FTransform& OldTransform, const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetVisualHandMeshTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetVisualHandMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUpperArmLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTrackedHandMeshTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetTrackedHandMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastHandTeleport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetShoulderTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetShoulderOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShoulderLockLimitedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetPhysicalHandMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDIMotionControllerComponent* GetMotionController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsIndicatingDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHapticFeedbackEffect_Base* GetHapticFeedbackEffect(int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIHandPose GetHandPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHandOffsetDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHandMeshWristTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHandMeshTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHandMeshShoulderTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHandMeshElbowTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForeArmLength() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetDesiredHandMeshTransform(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerHand GetControllerHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetCameraTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraRight2D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraForward2D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRuntimeFloatCurve GetArmMeshWidthMultiplierCurve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetArmMeshScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmMeshLengthMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetArmDebugOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ComputeTheoreticalElbowLocation(const FVector& DesiredWristLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool AdjustHapticEffectScaleId(int32 ID, float Scale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool AdjustHapticEffectScale(UHapticFeedbackEffect_Base* HapticEffect, float Scale, UObject* EffectOwner) const;
    
};

