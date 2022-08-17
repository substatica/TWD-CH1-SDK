#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveActor.h"
#include "SDISyncPoseReceiverInterface.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECustomThrowPhysicsMode.h"
#include "EInitialSimulatePhysics.h"
#include "SDIQuatPIDController.h"
#include "ESDIAxis.h"
#include "SDIMotionHistory.h"
#include "SDIAuxTickFunction.h"
#include "SDIReplicatedGripInfo.h"
#include "SDIGripInfo.h"
#include "SDIHeldActorDroppedSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "SDIAttachmentInfo.h"
#include "SDIHeldActorGrabbedSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "ESDIGripType.h"
#include "ESDIHandPose.h"
#include "SDIHeldActor.generated.h"

class USDICollisionChannelIgnoranceComponent;
class USDIPhysicsMotorComponent;
class USDIImpactEffectsComponent;
class UPrimitiveComponent;
class UHapticFeedbackEffect_Base;
class UAkAudioEvent;
class APawn;
class UActorComponent;
class ASDIPlayerHand;
class AActor;
class USceneComponent;
class ULevel;
class ASDIThrowInputSplineActor;
class UObject;
class USDIWeaponHitCapsuleComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIHeldActor : public ASDIInteractiveActor, public ISDISyncPoseReceiverInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIImpactEffectsComponent* ImpactEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimaryGripCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SecondaryGripCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SimulatePhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDICollisionChannelIgnoranceComponent* CollisionIgnoranceComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPhysicsMotorComponent* PhysicsMotorComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysicsMotorRigidBodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ThirdPersonGripOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyObsoleteRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRangedPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePhysicsCollisionDuringInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowHoldingWithSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSecondaryGripForIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToHolderLevelOnPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToOriginalLevelOnDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabLocationInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabRotationInterpolationSpeedDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabMaxInterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmLengthReleaseFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmLengthReleaseFactorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrabbedFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GrabbedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayGrabbedEffectsAfterInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayGrabbedFeedbackAfterInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThrowInputSplineUseMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManageNonSDISkelMeshesTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysTickNonSDISkelMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonSDISkelMeshesExtraTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitialSimulatePhysics InitialSimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomThrowPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomThrowPhysicsMode CustomThrowPhysicsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIQuatPIDController CustomThrowRotationPIDController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIAxis CustomThrowAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomThrowSpinSpeedDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomThrowPhysicsMinLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugReplicationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsHandGripInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandPoseBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NonVRAnimatedAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMotionHistory NonVRSimulatedPhysicsComponentMotionHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAuxTickFunction NonVRPostPhysicsTick;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 InternalEndPlayReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PhysicsTimerLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PhysicsTimerAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* PrimaryHeldHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* PrimaryHeldHandGripComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIGripInfo PrimaryHeldHandGripCompInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand PrimaryHeldHandEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrimaryHeldHandGripLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrevPrimaryHeldHandGripLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* SecondaryHeldHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* SecondaryHeldHandGripComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIGripInfo SecondaryHeldHandGripCompInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand SecondaryHeldHandEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondaryHeldHandGripLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrevSecondaryHeldHandGripLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRepDropIsAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* RepHeldBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LocalHeldBy;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> LastHeldBy;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIPlayerHand> LastPrimaryHeldHand;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UActorComponent> LastPrimaryHeldHandGripComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIGripInfo LastPrimaryHeldHandGripCompInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand LastPrimaryHeldHandEnum;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIPlayerHand> LastSecondaryHeldHand;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UActorComponent> LastSecondaryHeldHandGripComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIGripInfo LastSecondaryHeldHandGripCompInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand LastSecondaryHeldHandEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepPrimaryHandGripInfo, meta=(AllowPrivateAccess=true))
    FSDIReplicatedGripInfo RepPrimaryHandGripInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepSecondaryHandGripInfo, meta=(AllowPrivateAccess=true))
    FSDIReplicatedGripInfo RepSecondaryHandGripInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PrimaryArmLengthReleaseFactorTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SecondaryArmLengthReleaseFactorTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InterpolationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InterpolationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform InterpolationRelStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform InterpolationAbsStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform InterpolationRelEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* InterpolationEndComp;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIPlayerHand> InterpolationHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName InterpolationEndSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* InterpolationGripComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIGripInfo InterpolationGripCompInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInterpolationUseHandForPivot;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIPlayerHand> GrabbedFeedbackHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayGrabbedEffects;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ULevel> OriginalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIAttachmentInfo DropAttachInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bRepCustomThrowPhysicsEngaged, meta=(AllowPrivateAccess=true))
    bool bRepCustomThrowPhysicsEngaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalCustomThrowPhysicsEngaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDroppedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInsideUpdatePhysicsConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bRepLaunched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSimulatePhysicsComponentGravityEnabledSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSimulatePhysicsComponentGravityEnabled;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIHeldActorGrabbedSignature OnGrabbedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIHeldActorDroppedSignature OnDroppedDelegate;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FOverlapResult> GeoOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName OverrideNonVRAnimatedAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverrideNonVRAnimatedAttachSocketSet;
    
    ASDIHeldActor(const FObjectInitializer& ObjectInitializer);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasThrown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyDropped(float WithinSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLaunched() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasHeldByPlayerHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasHeldByPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasHeldByAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTickEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateThrowInputSpline(ASDIThrowInputSplineActor* Spline, AActor* Destination, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePhysicsConstraints();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttachmentInfos(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocket);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ThrowInputSplineUseMinVelocity(ASDIThrowInputSplineActor* Spline) const;
    
    UFUNCTION(BlueprintCallable)
    bool TeleportHeldActor(const FTransform& Transform, UActorComponent* GripComp, bool bDropIfHeld, bool bStartPhysics, float PhysicsDelay, FVector ThrowVelocity, FVector AngularVelocityDeg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartPhysicsFromTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayGrabbedEffects();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepSecondaryHandGripInfo(const FSDIReplicatedGripInfo& OldRepSecondaryHandGripInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepPrimaryHandGripInfo(const FSDIReplicatedGripInfo& OldRepPrimaryHandGripInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bRepCustomThrowPhysicsEngaged(bool OldbRepCustomThrowPhysicsEngaged);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnImpactEffectsComponentImpact(USDIImpactEffectsComponent* Comp, const FVector& Velocity, const FVector& NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnComponentHitCustomThrowPhysics(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHitCustomThrowPhysics(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void NonVRTickPostPhysics(UObject* TickOwner, float DeltaTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool LaunchHeldActor(const FVector& LinearVelocity, const FVector& AngularVelocityDeg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhysicsMotorActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterpolating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeldByPlayerHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeldByPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeldByAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingHeld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IgnoreSecondaryGripForIK() const;
    
    UFUNCTION(BlueprintCallable)
    bool GrabWithHand(ASDIPlayerHand* hand, bool bPrimary, bool bInterpolate, bool bUseDesiredGripInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Grab(AActor* Grabber, EControllerHand hand, bool bPrimary, ASDIPlayerHand* HandPtr, bool bInterpolate, bool bUseDesiredGripInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetThrowInfo(ASDIPlayerHand* OldPrimaryHeldHand, EControllerHand OldPrimaryHeldHandEnum, ASDIPlayerHand* OldSecondaryHeldHand, EControllerHand OldSecondaryHeldHandEnum, FTransform& OutTransform, FVector& OutLinearVelocity, FVector& OutAngularVelocity, bool& bOutCustomThrowPhysicsEngaged);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetSimulatePhysicsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetSecondaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerHand GetSecondaryHeldHandEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetSecondaryHeldHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetSecondaryGripCollision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRepHeldBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetPrimaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerHand GetPrimaryHeldHandEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetPrimaryHeldHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetPrimaryGripCollision() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLocalHeldBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetLastSecondaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerHand GetLastSecondaryHeldHandEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetLastSecondaryHeldHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetLastPrimaryHeldHandGripComp(FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerHand GetLastPrimaryHeldHandEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetLastPrimaryHeldHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetLastHeldByPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLastHeldBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastDroppedTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHeldState(bool& bOutIsHeldByPlayerHand, bool& bOutWasThrown, bool& bOutWasLaunched) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetHeldByPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHeldBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    UActorComponent* GetGripPoint(const FTransform& HandTransform, EControllerHand hand, ESDIGripType GripType, ESDIHandPose& OutHandPose, FSDIGripInfo& OutGripInfo, bool bUseDesiredGripInfo, bool bDistanceOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHapticFeedbackEffect_Base* GetGrabbedFeedback(ASDIPlayerHand* hand, float InterpolationTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAvgGripLocation(ESDIGripType GripType) const;
    
    UFUNCTION(BlueprintCallable)
    void DroppedFromSpawn(AActor* SimulateLastHeldBy);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dropped();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Drop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DisablePhysicsCollisionDuringInterpolation() const;
    
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanHitComponentApplyDamage(const USDIWeaponHitCapsuleComponent* HitComponent) const;
    
    UFUNCTION(BlueprintCallable)
    void AttachToWithGripTransform(USceneComponent* Parent, FName SocketName, FTransform GripTransform, bool bInterpolate, UActorComponent* GripComp, FSDIGripInfo GripInfo, ASDIPlayerHand* hand, bool bUseHandForPivot);
    
    UFUNCTION(BlueprintCallable)
    void AttachToWithGripComp(USceneComponent* Parent, FName SocketName, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, ASDIPlayerHand* hand);
    
    UFUNCTION(BlueprintCallable)
    void AttachToHandWithGripTransform(ASDIPlayerHand* hand, FTransform GripTransform, bool bInterpolate, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bUseHandForPivot);
    
    UFUNCTION(BlueprintCallable)
    void AttachToHandWithGripComp(ASDIPlayerHand* hand, UActorComponent* GripComp, FSDIGripInfo GripInfo, bool bInterpolate, bool bUseHandForPivot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowRangedPickup() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

