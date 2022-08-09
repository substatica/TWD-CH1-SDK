#pragma once
#include "CoreMinimal.h"
#include "TWDGripPhysicsActor.h"
#include "SDIGripInfo.h"
#include "TWDGripPhysicsDoorOnInteractDelegate.h"
#include "Chaos/ChaosEngineInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TWDGripPhysicsDoor.generated.h"

class ASDIPlayerHand;
class UActorComponent;
class ATWDCharacter;
class UPhysicsConstraintComponent;
class USceneComponent;
class AAkAcousticPortal;
class UAkComponent;
class UAkAudioEvent;
class ATWDPlayerCharacter;
class UPrimitiveComponent;
class AActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWD_API ATWDGripPhysicsDoor : public ATWDGripPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* PlayerHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDCharacter* ServerCommPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastTickSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* SimulatePhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakDoorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAIRequiredToBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATWDCharacter*> WalkersBreaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDCharacter* PrimaryBreaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartLocked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularShutZone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearShutZone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoPopOpen;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoPopOpenYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoorPassedShutThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularNavCuttingZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularNavCuttingZoneMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackPlayerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackPlayerMaxSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDGripPhysicsDoorOnInteract OnDoorInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* CurrentlyGrabbedByHandAndLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* CachedGripComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIGripInfo CachedGripInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NonVRDoorTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNonVRDoorAutoOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NonVRDoorOpenDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRMaxAngleVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRAngleDeltaOpenEnough;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoorOpensOutward;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ActiveDoorKnob;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorHealth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAkAcousticPortal* Portal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> AkComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BreakingNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StrainingNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrainingHealthTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakingNoiseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakingNoiseVolume;
    
    ATWDGripPhysicsDoor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UsePlayerKeyIfExists(ATWDPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool UpdatePhysicsConstraint(USceneComponent* HandleComponent, TEnumAsByte<EAngularConstraintMotion>& Swing1Motion, float& Swing1Limit, TEnumAsByte<EAngularConstraintMotion>& Swing2Motion, float& Swing2Limit, TEnumAsByte<EAngularConstraintMotion>& TwistMotion, float& TwistLimit, FRotator& RotationOffset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDoorBreakingState(ATWDCharacter* Breaker, bool bIsLeaving);
    
    UFUNCTION(BlueprintCallable)
    bool SetDoorShut(bool bWillShut, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool SetDoorLocked(bool bWillLock);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDoorLocalAngle(float Angle);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBrokenDoorOcclusion();
    
    UFUNCTION(BlueprintCallable)
    void QuickReleasePlayersHand();
    
    UFUNCTION(BlueprintCallable)
    void PushPlayerAwayFromDoor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorShut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorMoveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorMoveEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorMove();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoorHealthChanged(float NewHealth, float AmountChanged, float PercentRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDoorBreak(FVector Direction);
    
    UFUNCTION(BlueprintCallable)
    bool NonVROpenDoor(ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastPlayDoorNoise(UAkAudioEvent* Event);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsDoorWithinShutRange();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoorWithinNavCuttingRange();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDoorShut();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoorLocked();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorHeldByPlayer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDoorBroken();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDoorLocalAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* GetDoorComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetClosestAkComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableDynamicObstacle(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeBroken();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BreakDoor(FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyPushForce(FVector push);
    
};

