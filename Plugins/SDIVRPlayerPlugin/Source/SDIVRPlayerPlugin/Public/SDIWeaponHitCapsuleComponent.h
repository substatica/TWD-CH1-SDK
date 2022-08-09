#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "SDIMotionHistory.h"
#include "SDIWeaponHitComponentDamage.h"
#include "SDICachedCollisionInfoShapeScaleOverride.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIComponentReplacement.h"
#include "SDIWeaponHitComponentHitSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "SDIWeaponHitCapsuleComponent.generated.h"

class USDIWeaponHitHistoryComponent;
class UAkAudioEvent;
class UAkComponent;
class USceneComponent;
class UPrimitiveComponent;
class AActor;
class ASDIHeldActor;
class ASDIPlayerHand;
class USDIWeaponHitCapsuleComponent;
class AController;
class APawn;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIWeaponHitCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageHistoryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionHistoryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMotionHistory TopMotionHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMotionHistory BottomMotionHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMotionHistory RelativeTopMotionHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIMotionHistory RelativeBottomMotionHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDIWeaponHitComponentDamage> Damages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityAvgTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDamageVelocityAvgTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageIndexVelocityAvgTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorHitCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverlapHitDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverlapHitDetectionNonVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorForDamageHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageOnImpactOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageOnlyWhenHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDamageInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBroadcastToAllOnWeaponHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysTickWhenActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetachFromHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowActiveInVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowActiveInNonVR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactImpulseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDICachedCollisionInfoShapeScaleOverride> OverlapScaleOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MovementLoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MovementLoopStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MovementLoopRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRankAllAxisTypesEvenly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonVRUsePlaneForOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonVRPlaneCanUseOverlapScaleOverrides;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> NonVRPlaneNormalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRPlaneHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NonVRPlaneScale;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USDIWeaponHitHistoryComponent> HistoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform PrevTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastTickTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRegisteredOnActorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* MovementLoopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayingMovementLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform LastRelativeActorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacement ComponentAttachment;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIWeaponHitComponentHitSignature OnWeaponHit;
    
    USDIWeaponHitCapsuleComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateAttachmentInfo(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementLoopComponent(UAkComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    void ResetMotionHistory(bool bReserveAbs, bool bReserveRel);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileMovementStop(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPhysicsComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnPhysicsComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnHeldActorGrabbed(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* HandPtr);
    
    UFUNCTION(BlueprintCallable)
    void OnHeldActorDropped(ASDIHeldActor* HeldActor, AActor* DroppedBy);
    
    UFUNCTION(BlueprintCallable)
    static bool MeleeWeaponCouldCauseDamageToHitResult(AActor* Weapon, USDIWeaponHitCapsuleComponent*& OutComp, const FHitResult& HitResult, bool bCheckVelocity, bool bCheckHistory, bool bCheckValidDamageValues);
    
    UFUNCTION(BlueprintCallable)
    static bool MeleeWeaponCouldCauseDamage(AActor* Weapon, USDIWeaponHitCapsuleComponent*& OutComp, AActor* Target, bool bCheckVelocity, bool bCheckHistory, bool bCheckValidDamageValues);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTwoHanded() const;
    
    UFUNCTION(BlueprintCallable)
    static bool HandleExternalHitFromActor(AActor* Actor, const FHitResult& HitInfo, bool bCheckHistory, bool bAddToHistory, bool bOnlyActorHitCallback);
    
    UFUNCTION(BlueprintCallable)
    bool HandleExternalHit(const FHitResult& HitInfo, bool bCheckHistory, bool bAddToHistory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWeaponHitCapsuleTransform() const;
    
    UFUNCTION(BlueprintCallable)
    static USDIWeaponHitCapsuleComponent* GetWeaponHit(AActor* Actor, const FHitResult& HitInfo, bool bUseFindBestFallback, bool bOnlyActorHitCallback, bool bOnlyCanDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetMovementLoopComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstigatorInfo(AController*& OutController, APawn*& OutPawn) const;
    
    UFUNCTION(BlueprintCallable)
    static USDIWeaponHitCapsuleComponent* FindBestExternalWeaponHit(AActor* Actor, const FHitResult& HitInfo, bool bOnlyActorHitCallback, bool bOnlyCanDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeVelocityDamagePercent(bool bUseRelativeHistory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ComputeImpactVelocity(const FHitResult& ImpactResult, float& OutScalarVel, bool bUseRelativeHistory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ComputeAvgTopVelocity(float AvgTime, float& ScalarVel, bool bUseRelativeHistory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ComputeAvgBottomVelocity(float AvgTime, float& ScalarVel, bool bUseRelativeHistory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanApplyDamage() const;
    
};

