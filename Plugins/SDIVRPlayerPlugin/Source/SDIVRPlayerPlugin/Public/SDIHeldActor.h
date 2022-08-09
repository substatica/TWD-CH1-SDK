#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveActor.h"
#include "Engine/EngineTypes.h"
#include "SDISyncPoseReceiverInterface.h"
#include "UObject/NoExportTypes.h"
#include "EInitialSimulatePhysics.h"
#include "ECustomThrowPhysicsMode.h"
#include "SDIHeldActorGrabbedSignatureDelegate.h"
#include "ESDIAxis.h"
#include "SDIQuatPIDController.h"
#include "SDIMotionHistory.h"
#include "SDIAuxTickFunction.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIReplicatedGripInfo.h"
#include "SDIGripInfo.h"
#include "InputCoreTypes.h"
#include "SDIAttachmentInfo.h"
#include "SDIHeldActorDroppedSignatureDelegate.h"
#include "ESDIGripType.h"
#include "ESDIHandPose.h"
#include "SDIHeldActor.generated.h"

class USDICollisionChannelIgnoranceComponent;
class UPrimitiveComponent;
class USDIImpactEffectsComponent;
class USDIPhysicsMotorComponent;
class UHapticFeedbackEffect_Base;
class APawn;
class UAkAudioEvent;
class USDIWeaponHitCapsuleComponent;
class UActorComponent;
class ASDIPlayerHand;
class AActor;
class USceneComponent;
class ULevel;
class ASDIThrowInputSplineActor;
class UObject;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIHeldActor : public ASDIInteractiveActor, public ISDISyncPoseReceiverInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDIImpactEffectsComponent* ImpactEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* PrimaryGripCollision;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* SecondaryGripCollision;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* SimulatePhysicsComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDICollisionChannelIgnoranceComponent* CollisionIgnoranceComp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    USDIPhysicsMotorComponent* PhysicsMotorComp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PhysicsMotorRigidBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTransform ThirdPersonGripOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDestroyObsoleteRootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowRangedPickup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDisablePhysicsCollisionDuringInterpolation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowHoldingWithSecondary;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIgnoreSecondaryGripForIK;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bMoveToHolderLevelOnPickup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bMoveToOriginalLevelOnDrop;
    
    UPROPERTY(EditDefaultsOnly)
    float GrabLocationInterpolationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float GrabRotationInterpolationSpeedDeg;
    
    UPROPERTY(EditDefaultsOnly)
    float GrabMaxInterpolationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ArmLengthReleaseFactor;
    
    UPROPERTY(EditDefaultsOnly)
    float ArmLengthReleaseFactorTime;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrabbedFeedback;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* GrabbedSound;
    
    UPROPERTY(EditAnywhere)
    bool bPlayGrabbedEffectsAfterInterpolation;
    
    UPROPERTY(EditAnywhere)
    bool bPlayGrabbedFeedbackAfterInterpolation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bThrowInputSplineUseMinVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool bManageNonSDISkelMeshesTick;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAlwaysTickNonSDISkelMeshes;
    
    UPROPERTY(EditDefaultsOnly)
    float NonSDISkelMeshesExtraTickTime;
    
    UPROPERTY(EditAnywhere)
    EInitialSimulatePhysics InitialSimulatePhysics;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCustomThrowPhysics;
    
    UPROPERTY(EditDefaultsOnly)
    ECustomThrowPhysicsMode CustomThrowPhysicsMode;
    
    UPROPERTY(EditDefaultsOnly)
    FSDIQuatPIDController CustomThrowRotationPIDController;
    
    UPROPERTY(EditDefaultsOnly)
    ESDIAxis CustomThrowAxis;
    
    UPROPERTY(EditDefaultsOnly)
    float CustomThrowSpinSpeedDeg;
    
    UPROPERTY(EditDefaultsOnly)
    float CustomThrowPhysicsMinLinearVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDebugReplicationInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PhysicsHandGripInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HandPoseBlendSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NonVRAnimatedAttachSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIMotionHistory NonVRSimulatedPhysicsComponentMotionHistory;
    
    UPROPERTY()
    FSDIAuxTickFunction NonVRPostPhysicsTick;
    
    UPROPERTY(Transient)
    uint8 InternalEndPlayReason;
    
    UPROPERTY(Transient)
    FVector PhysicsTimerLinearVelocity;
    
    UPROPERTY(Transient)
    FVector PhysicsTimerAngularVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIPlayerHand* PrimaryHeldHand;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UActorComponent* PrimaryHeldHandGripComp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDIGripInfo PrimaryHeldHandGripCompInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EControllerHand PrimaryHeldHandEnum;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrimaryHeldHandGripLerp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevPrimaryHeldHandGripLerp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIPlayerHand* SecondaryHeldHand;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UActorComponent* SecondaryHeldHandGripComp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDIGripInfo SecondaryHeldHandGripCompInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EControllerHand SecondaryHeldHandEnum;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SecondaryHeldHandGripLerp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevSecondaryHeldHandGripLerp;
    
    UPROPERTY(Replicated, Transient)
    bool bRepDropIsAttached;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AActor* RepHeldBy;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* LocalHeldBy;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> LastHeldBy;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ASDIPlayerHand> LastPrimaryHeldHand;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UActorComponent> LastPrimaryHeldHandGripComp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDIGripInfo LastPrimaryHeldHandGripCompInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EControllerHand LastPrimaryHeldHandEnum;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ASDIPlayerHand> LastSecondaryHeldHand;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UActorComponent> LastSecondaryHeldHandGripComp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDIGripInfo LastSecondaryHeldHandGripCompInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EControllerHand LastSecondaryHeldHandEnum;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepPrimaryHandGripInfo)
    FSDIReplicatedGripInfo RepPrimaryHandGripInfo;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepSecondaryHandGripInfo)
    FSDIReplicatedGripInfo RepSecondaryHandGripInfo;
    
    UPROPERTY(Transient)
    float PrimaryArmLengthReleaseFactorTimer;
    
    UPROPERTY(Transient)
    float SecondaryArmLengthReleaseFactorTimer;
    
    UPROPERTY(Transient)
    float InterpolationDuration;
    
    UPROPERTY(Transient)
    float InterpolationTimer;
    
    UPROPERTY(Transient)
    FTransform InterpolationRelStart;
    
    UPROPERTY(Transient)
    FTransform InterpolationAbsStart;
    
    UPROPERTY(Transient)
    FTransform InterpolationRelEnd;
    
    UPROPERTY(Export, Transient)
    USceneComponent* InterpolationEndComp;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIPlayerHand> InterpolationHand;
    
    UPROPERTY(Transient)
    FName InterpolationEndSocket;
    
    UPROPERTY(Export, Transient)
    UActorComponent* InterpolationGripComp;
    
    UPROPERTY(Transient)
    FSDIGripInfo InterpolationGripCompInfo;
    
    UPROPERTY(Transient)
    bool bInterpolationUseHandForPivot;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIPlayerHand> GrabbedFeedbackHand;
    
    UPROPERTY(Transient)
    bool bPlayGrabbedEffects;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ULevel> OriginalLevel;
    
    UPROPERTY(Transient)
    FSDIAttachmentInfo DropAttachInfo;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bRepCustomThrowPhysicsEngaged)
    bool bRepCustomThrowPhysicsEngaged;
    
    UPROPERTY(Transient)
    bool bLocalCustomThrowPhysicsEngaged;
    
    UPROPERTY(Transient)
    float LastDroppedTimestamp;
    
    UPROPERTY(Transient)
    bool bInsideUpdatePhysicsConstraints;
    
    UPROPERTY(Replicated, Transient)
    bool bRepLaunched;
    
    UPROPERTY(Transient)
    bool bSimulatePhysicsComponentGravityEnabledSet;
    
    UPROPERTY(Transient)
    bool bSimulatePhysicsComponentGravityEnabled;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSDIHeldActorGrabbedSignature OnGrabbedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSDIHeldActorDroppedSignature OnDroppedDelegate;
    
    UPROPERTY(Transient)
    TArray<FOverlapResult> GeoOverlaps;
    
    UPROPERTY(Transient)
    FName OverrideNonVRAnimatedAttachSocket;
    
    UPROPERTY(Transient)
    bool bOverrideNonVRAnimatedAttachSocketSet;
    
    ASDIHeldActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool WasThrown() const;
    
    UFUNCTION(BlueprintPure)
    bool WasRecentlyDropped(float WithinSeconds) const;
    
    UFUNCTION(BlueprintPure)
    bool WasLaunched() const;
    
    UFUNCTION(BlueprintPure)
    bool WasHeldByPlayerHand() const;
    
    UFUNCTION(BlueprintPure)
    bool WasHeldByPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool WasHeldByAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTickEnabled();
    
    UFUNCTION(BlueprintNativeEvent)
    bool UpdateThrowInputSpline(ASDIThrowInputSplineActor* Spline, AActor* Destination, float DeltaSeconds);
    
    UFUNCTION()
    void UpdatePhysicsConstraints();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttachmentInfos(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocket);
    
    UFUNCTION(BlueprintNativeEvent)
    bool ThrowInputSplineUseMinVelocity(ASDIThrowInputSplineActor* Spline) const;
    
    UFUNCTION(BlueprintCallable)
    bool TeleportHeldActor(const FTransform& Transform, UActorComponent* GripComp, bool bDropIfHeld, bool bStartPhysics, float PhysicsDelay, FVector ThrowVelocity, FVector AngularVelocityDeg);
    
protected:
    UFUNCTION()
    void StartPhysicsFromTimer();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldTickBeEnabled() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOverrideNonVRAnimatedAttachSocket(FName Socket);
    
    UFUNCTION(BlueprintCallable)
    void SetHeldActorTransform(const FTransform& Transform, bool bMoveHands);
    
    UFUNCTION(BlueprintCallable)
    bool SetDropAttachInfo(USceneComponent* Parent, FName SocketName, const FTransform& RelTransform);
    
    UFUNCTION(BlueprintCallable)
    void RecreatePhysicsConstraints();
    
    UFUNCTION(BlueprintNativeEvent)
    void PlayGrabbedEffects();
    
    UFUNCTION()
    void OnRep_RepSecondaryHandGripInfo(const FSDIReplicatedGripInfo& OldRepSecondaryHandGripInfo);
    
    UFUNCTION()
    void OnRep_RepPrimaryHandGripInfo(const FSDIReplicatedGripInfo& OldRepPrimaryHandGripInfo);
    
    UFUNCTION()
    void OnRep_bRepCustomThrowPhysicsEngaged(bool OldbRepCustomThrowPhysicsEngaged);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnImpactEffectsComponentImpact(USDIImpactEffectsComponent* Comp, const FVector& Velocity, const FVector& NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION()
    void OnComponentHitCustomThrowPhysics(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnActorHitCustomThrowPhysics(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION()
    void NonVRTickPostPhysics(UObject* TickOwner, float DeltaTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool LaunchHeldActor(const FVector& LinearVelocity, const FVector& AngularVelocityDeg);
    
    UFUNCTION(BlueprintPure)
    bool IsPhysicsMotorActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInterpolating() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeldByPlayerHand() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeldByPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHeldByAI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingHeld() const;
    
    UFUNCTION(BlueprintPure)
    bool IgnoreSecondaryGripForIK() const;
    
    UFUNCTION(BlueprintCallable)
    bool GrabWithHand(ASDIPlayerHand* hand, bool bPrimary, bool bInterpolate, bool bUseDesiredGripInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Grab(AActor* Grabber, EControllerHand hand, bool bPrimary, ASDIPlayerHand* HandPtr, bool bInterpolate, bool bUseDesiredGripInfo);
    
    UFUNCTION(BlueprintNativeEvent)
    void GetThrowInfo(ASDIPlayerHand* OldPrimaryHeldHand, EControllerHand OldPrimaryHeldHandEnum, ASDIPlayerHand* OldSecondaryHeldHand, EControllerHand OldSecondaryHeldHandEnum, FTransform& OutTransform, FVector& OutLinearVelocity, FVector& OutAngularVelocity, bool& bOutCustomThrowPhysicsEngaged);
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetSimulatePhysicsComponent() const;
    
    UFUNCTION(BlueprintPure)
    UActorComponent* GetSecondaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintPure)
    EControllerHand GetSecondaryHeldHandEnum() const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetSecondaryHeldHand() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetSecondaryGripCollision() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetRepHeldBy() const;
    
    UFUNCTION(BlueprintPure)
    UActorComponent* GetPrimaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintPure)
    EControllerHand GetPrimaryHeldHandEnum() const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetPrimaryHeldHand() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetPrimaryGripCollision() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLocalHeldBy() const;
    
    UFUNCTION(BlueprintPure)
    UActorComponent* GetLastSecondaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintPure)
    EControllerHand GetLastSecondaryHeldHandEnum() const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetLastSecondaryHeldHand() const;
    
    UFUNCTION(BlueprintPure)
    UActorComponent* GetLastPrimaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintPure)
    EControllerHand GetLastPrimaryHeldHandEnum() const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetLastPrimaryHeldHand() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetLastHeldByPawn() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetLastHeldBy() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastDroppedTimestamp() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHeldState(bool& bOutIsHeldByPlayerHand, bool& bOutWasThrown, bool& bOutWasLaunched) const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetHeldByPawn() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetHeldBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    UActorComponent* GetGripPoint(const FTransform& HandTransform, EControllerHand hand, ESDIGripType GripType, ESDIHandPose& OutHandPose, FSDIGripInfo& OutGripInfo, bool bUseDesiredGripInfo, bool bDistanceOnly) const;
    
    UFUNCTION(BlueprintNativeEvent)
    UHapticFeedbackEffect_Base* GetGrabbedFeedback(ASDIPlayerHand* hand, float InterpolationTime) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAvgGripLocation(ESDIGripType GripType) const;
    
    UFUNCTION(BlueprintCallable)
    void DroppedFromSpawn(AActor* SimulateLastHeldBy);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Dropped();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Drop();
    
    UFUNCTION(BlueprintPure)
    bool DisablePhysicsCollisionDuringInterpolation() const;
    
    UFUNCTION()
    void DisableNonSDISkelMeshTickFromTimer();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideNonVRAnimatedAttachSocket();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearLaunched();
    
    UFUNCTION(BlueprintCallable)
    void ClearDropAttachInfo();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeHandGrip(ASDIPlayerHand* hand, UActorComponent* NewGripComp, FSDIGripInfo NewGripInfo, bool bInterpolate, bool bUseHandForPivot, ESDIHandPose Pose);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeGrip(EControllerHand hand, UActorComponent* NewGripComp, FSDIGripInfo NewGripInfo, bool bInterpolate, bool bUseHandForPivot, ESDIHandPose Pose);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanHitComponentApplyDamage(const USDIWeaponHitCapsuleComponent* HitComponent) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachToWithGripTransform(USceneComponent* Parent, FName SocketName, FTransform GripTransform, bool bInterpolate, UActorComponent* GripComp, FSDIGripInfo GripInfo, ASDIPlayerHand* hand, bool bUseHandForPivot);
    
    UFUNCTION(BlueprintCallable)
    void AttachToWithGripComp(USceneComponent* Parent, FName SocketName, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, ASDIPlayerHand* hand);
    
    UFUNCTION(BlueprintCallable)
    void AttachToHandWithGripTransform(ASDIPlayerHand* hand, FTransform GripTransform, bool bInterpolate, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bUseHandForPivot);
    
    UFUNCTION(BlueprintCallable)
    void AttachToHandWithGripComp(ASDIPlayerHand* hand, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, bool bUseHandForPivot);
    
    UFUNCTION(BlueprintPure)
    bool AllowRangedPickup() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

