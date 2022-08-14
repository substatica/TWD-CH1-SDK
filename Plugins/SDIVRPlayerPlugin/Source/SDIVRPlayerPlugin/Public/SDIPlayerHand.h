#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SDISkinnedPlayerHandBase.h"
#include "SDIStimAndResponseInterface.h"
#include "GameplayTagAssetInterface.h"
#include "SDIDynamicGameplayTagAssetInterface.h"
#include "SDIPlayerHandDroppedActorSignatureDelegate.h"
#include "ESDIGripType.h"
#include "ESDIInteractRangeType.h"
#include "SDIGripInfo.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerHandStimulusChangedSignatureDelegate.h"
#include "ESDIHandPose.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "SDIReplicatedStimAndResponseInterfaceDataContainer.h"
#include "SDIStimAndResponseInterfaceDataContainer.h"
#include "SDIPlayerHandGrabbedActorSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerHandLock.h"
#include "UObject/NoExportTypes.h"
#include "ESDIInteractiveInteractType.h"
#include "ESDIPlayerHandGripInputMode.h"
#include "GameplayTagContainer.h"
#include "SDIPlayerHand.generated.h"

class UPrimitiveComponent;
class UPhysicsConstraintComponent;
class USDIPlayerHandInteractComponent;
class ASDIInventorySlot;
class USDIPlayerHandPhysicalInteractComponent;
class UPhysicsHandleComponent;
class UHapticFeedbackEffect_Base;
class UCurveFloat;
class ASDIThrowInputSplineActor;
class USDIWeaponHitCapsuleComponent;
class AActor;
class UDamageType;
class UActorComponent;
class UObject;
class ASDIPlayerHand;
class ASDIInventoryActor;
class USceneComponent;
class AController;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIPlayerHand : public ASDISkinnedPlayerHandBase, public IGameplayTagAssetInterface, public ISDIDynamicGameplayTagAssetInterface, public ISDIStimAndResponseInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPlayerHandInteractComponent* InteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPlayerHandInteractComponent* RangedInteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPlayerHandPhysicalInteractComponent* PhysicalInteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* GripPhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* NonVRPhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollideHeldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollidePhysicalInteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollidePhysicalInteractComponentShapeInflation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeldActorAttachPointSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GripPressThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GripReleaseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnucklesGripPressThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnucklesGripReleaseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGripValidInteractionHighlightsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGripAllowOffscreenRanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGripAllowOffscreenClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRangedGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRangedInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GripOffScreenAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractPressThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractReleaseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractValidInteractionHighlightsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSimulatingPhysicsMassToPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrabPhysicsFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowAvgVelocityBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowAvgVelocityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ThrowVelocityMultiplierMassCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ThrowMaxVelocityMassCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowVelocityPhysicsOverrideBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASDIThrowInputSplineActor> ThrowInputSplineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTeleportWhileGrippingWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTeleportWhileGrippingPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTeleportWhileGrippingInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportMaxSimulatingPhysicsMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateHeldActorWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedHeldActorWeightMinMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedGravityTorqueAngularAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedGravityLinearAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedInertiaTorqueAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedInertiaLinearAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedAngularVelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedAngularVelocityDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedLinearVelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedLinearVelocityDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedHandTorqueAngularAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedHandLinearAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIWeaponHitCapsuleComponent* FistWeaponCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIWeaponHitCapsuleComponent* OpenHandWeaponCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FistWeaponGripInputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandActivityLevelActiveSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandActivityLevelActiveAccelThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandActivityIdleTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodySlotMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodySlotOnscreenAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator CosmeticGripLocationSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator CosmeticGripTwistSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator CosmeticGripSwing1Spring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRK4SpringInterpolator CosmeticGripSwing2Spring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIHandPose DefaultHighlightHandPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESDIHandPose> GripAllowedHighlightHandPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIReplicatedStimAndResponseInterfaceDataContainer RepStimulusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIStimAndResponseInterfaceDataContainer StimulusData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandStimulusChangedSignature OnStimulusChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandGrabbedActorSignature OnHeldActorGrabbedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandDroppedActorSignature OnHeldActorDroppedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult GripResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> InteractResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGripPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInputModalGripPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripInputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripPressedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGripLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGripDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInsideGripRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> bInteractPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> InteractInputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> InteractPressedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> bInteractLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> bInteractDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInsideInteractRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIThrowInputSplineActor* ThrowInputSpline;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> CachedHolderActor;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> CachedInventoryOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandLock TwoHandIKLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIPlayerHandLock GripAttachPhysicsLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SimulatedAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SimulatedLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHandPhysicsAllowed;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> GrippingPhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName GrippingPhysicsComponentBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GrippingPhysicsComponentArmLengthReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandActivityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandTargetActivityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandTargetActivityLevelFadeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandActivityLevelIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform HandActivityLevelLastActorRelTransform;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UActorComponent> CosmeticGripComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIGripInfo CosmeticGripInfo;
    
public:
    ASDIPlayerHand();
    UFUNCTION(BlueprintCallable)
    void UpdatePhysicsHandle();
    
    UFUNCTION(BlueprintCallable)
    bool SwapGripActor(AActor* NewGripActor, UPrimitiveComponent* NewGripComp);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StimulusTick(const FGameplayTagContainer& Stimuli, float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetPreciseThrowControlEngaged(bool bEngaged);
    
    UFUNCTION(BlueprintCallable)
    bool SetInteractLocked(ESDIInteractiveInteractType Type, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractDisabled(ESDIInteractiveInteractType Type, bool bDisabled, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetHandPhysicsAllowed(bool bAllowed);
    
    UFUNCTION(BlueprintCallable)
    bool SetGripLocked(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetGripDisabled(bool bDisabled, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetAllInteractLocked(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetAllInteractDisabled(bool bDisabled, bool bLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponHit(bool bPrimaryHand, USDIWeaponHitCapsuleComponent* WeaponHitComponent, AActor* HitActor, UPrimitiveComponent* HitComp, const FVector& HitVelocity, const FTransform& HitTransform, const UDamageType* DamageTypeObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHandEndOverlap(USDIPlayerHandInteractComponent* InteractComp, ESDIInteractRangeType RangeType, AActor* Other, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHandBeginOverlap(USDIPlayerHandInteractComponent* InteractComp, ESDIInteractRangeType RangeType, AActor* Other, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    bool LockHandToGripComponent(UObject* LockOwner, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, bool bResetInterpolation, ESDIHandPose OverrideHandPose, float ArmLengthReleaseFactor, bool bIgnoreCollisionsWithOtherHand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult K2GetInteractResult(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult K2GetGripResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreciseThrowControlEngaged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingInteractionActorWithWidgetComponent(ESDIInteractRangeType RangeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractPressed(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractLocked(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractingWithWorld(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractingWithPhysics(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractingWithInteractive(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteracting(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractDisabled(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandUsingPhysics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGripPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrippingWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrippingPhysics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrippingModal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrippingInteractive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrippingAttachPhysics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGripping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGripPhysicsConstraintAttachedTo(const UPrimitiveComponent* Other, FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGripLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGripDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyInteractingWithWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyInteractingWithPhysics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyInteractingWithInteractive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyInteracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyInteractDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InteractReleaseAll();
    
    UFUNCTION(BlueprintCallable)
    void InteractRelease(ESDIInteractiveInteractType Type);
    
    UFUNCTION(BlueprintCallable)
    void InteractPress(ESDIInteractiveInteractType Type);
    
    UFUNCTION(BlueprintCallable)
    void InputPreciseThrowReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputPreciseThrowPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputPreciseThrowFacingLR(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputPreciseThrowFacingFB(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputPreciseThrowAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputInteractType(ESDIInteractiveInteractType Type, float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputInteractTertiary(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputInteractSecondary(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputInteractPrimary(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputInteract(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputGrip(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HighlightHandPoseAllowsGrip(ESDIHandPose HighlightHandPose) const;
    
    UFUNCTION(BlueprintCallable)
    void GripRelease();
    
    UFUNCTION(BlueprintCallable)
    void GripPress();
    
    UFUNCTION(BlueprintCallable)
    bool GripPhysicsComponent(UPrimitiveComponent* GripComp, FName BoneName, const FVector& GripPoint, bool bLockRotation);
    
    UFUNCTION(BlueprintCallable)
    void GripDetachPhysics(bool bInterpolate);
    
    UFUNCTION(BlueprintCallable)
    bool GripAttachPhysics(UPrimitiveComponent* PhysicsComp, FName BoneName, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, bool bResetInterpolation, ESDIHandPose OverrideHandPose, float ArmLengthReleaseFactor, float ArmLengthReleaseTime, bool bIgnoreCollisionsWithOtherHand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetVisualHeldActorAttachPointTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTrackedHeldActorAttachPointTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetActivityLevelFadeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetActivityLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDIPlayerHandInteractComponent* GetRangedInteractComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreciseThrowVelocity(FVector& OutVelocity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsHandleComponent* GetPhysicsHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDIPlayerHandPhysicalInteractComponent* GetPhysicalInteractComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetOtherPlayerHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInventorySlot* GetInventorySlot(ASDIInventoryActor* Inv, bool bIgnoreInventoryAllowed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInventoryOwner(bool bReset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractPressedTime(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractInputValue(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDIPlayerHandInteractComponent* GetInteractComponentByType(ESDIInteractRangeType RangeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDIPlayerHandInteractComponent* GetInteractComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractActor(ESDIInteractiveInteractType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHolderActor(bool bReset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHeldActorAttachPointTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetHeldActorAttachPoint(FName& SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGripPressedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGrippingPhysicsComponentBoneName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetGrippingPhysicsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicsConstraintComponent* GetGripPhysicsConstraint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGripInputValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIPlayerHandGripInputMode GetGripInputMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetGripComponent(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGripActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIHandPose GetDefaultHighlightHandPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* FindBestGrip(const USceneComponent* ParentComp, FTransform& RelTransform, ESDIHandPose& HandPose, FSDIGripInfo& OutGripInfo, ESDIGripType GripType, bool bUseTracked, bool bRecurse, bool bActiveOnly, bool bApplyRotationConstraints, bool bUseDesiredGripInfo, bool bDistanceOnly) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyThrowInputSpline();
    
    UFUNCTION(BlueprintCallable)
    void CreateThrowInputSpline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHandUsePhysics() const;
    
    UFUNCTION(BlueprintCallable)
    bool BreakGripPhysicsConstraintWith(UPrimitiveComponent* Other, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreGripPhysicsConstraintsAttachedToSameComponent(const ASDIPlayerHand* OtherHand, bool bSameBone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllInteractDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void AdjustThrowInfo(UPrimitiveComponent* ThrownComponent, FTransform& InOutTransform, FVector& InOutLinearVelocity, FVector& InOutAngularVelocity) const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveGameplayTag(FGameplayTag Tag, bool bUpdateStimuli) override PURE_VIRTUAL(RemoveGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool ClearGameplayTags(bool bUpdateStimuli) override PURE_VIRTUAL(ClearGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void AppendGameplayTags(const FGameplayTagContainer& Other, bool bUpdateStimuli) override PURE_VIRTUAL(AppendGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    bool AddGameplayTag(FGameplayTag Tag, bool bLeaf, bool bUpdateStimuli) override PURE_VIRTUAL(AddGameplayTag, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopStimulusTick() override PURE_VIRTUAL(StopStimulusTick,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartStimulusTick() override PURE_VIRTUAL(StartStimulusTick,);
    
private:
    UFUNCTION()
    void SaR_UpdateStimuli() override PURE_VIRTUAL(SaR_UpdateStimuli,);
    
    UFUNCTION()
    void SaR_OnTick() override PURE_VIRTUAL(SaR_OnTick,);
    
    UFUNCTION()
    void SaR_OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) override PURE_VIRTUAL(SaR_OnTakeAnyDamage,);
    
    UFUNCTION()
    void SaR_OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override PURE_VIRTUAL(SaR_OnComponentHit,);
    
    UFUNCTION()
    void SaR_OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override PURE_VIRTUAL(SaR_OnComponentEndOverlap,);
    
    UFUNCTION()
    void SaR_OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override PURE_VIRTUAL(SaR_OnComponentBeginOverlap,);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterMultipleComponentCallbacks(TArray<UPrimitiveComponent*> Comps, bool bOverlap, bool bHit) override PURE_VIRTUAL(RegisterMultipleComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterComponentCallbacks(UPrimitiveComponent* Comp, bool bOverlap, bool bHit) override PURE_VIRTUAL(RegisterComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterAllComponentCallbacks(bool bOverlap, bool bHit) override PURE_VIRTUAL(RegisterAllComponentCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterAllCallbacks(bool bDamage, bool bOverlap, bool bHit) override PURE_VIRTUAL(RegisterAllCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterActorCallbacks(bool bDamage) override PURE_VIRTUAL(RegisterActorCallbacks,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void K2UpdateStimuli(const FGameplayTagContainer& IncomingStimuli, bool bNonLatent) override PURE_VIRTUAL(K2UpdateStimuli,);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsComponentOverlapRegistered(UPrimitiveComponent* Comp) const override PURE_VIRTUAL(IsComponentOverlapRegistered, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetNumOverlappingStimuli(const FGameplayTagQuery& Query) const override PURE_VIRTUAL(GetNumOverlappingStimuli, return 0;);
    
};

