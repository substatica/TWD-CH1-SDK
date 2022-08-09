#pragma once
#include "CoreMinimal.h"
#include "TWDGripPhysicsActor.h"
#include "UObject/NoExportTypes.h"
#include "SDIGripInfo.h"
#include "TWDGripPhysicsDoorOnInteractDelegate.h"
#include "Chaos/ChaosEngineInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TWDGripPhysicsDoor.generated.h"

class ASDIPlayerHand;
class ATWDPlayerCharacter;
class ATWDCharacter;
class UPhysicsConstraintComponent;
class UAkAudioEvent;
class USceneComponent;
class UActorComponent;
class AAkAcousticPortal;
class UAkComponent;
class UPrimitiveComponent;
class AActor;
class UStaticMeshComponent;

UCLASS()
class TWD_API ATWDGripPhysicsDoor : public ATWDGripPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ASDIPlayerHand* PlayerHand;
    
    UPROPERTY()
    ATWDCharacter* ServerCommPlayerPawn;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float LastTickSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPhysicsConstraintComponent* SimulatePhysicsConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanBeBroken;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BreakDoorTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumAIRequiredToBreak;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<ATWDCharacter*> WalkersBreaking;
    
    UPROPERTY(BlueprintReadOnly)
    ATWDCharacter* PrimaryBreaker;
    
    UPROPERTY(Transient)
    bool bIsLocked;
    
    UPROPERTY(Transient)
    bool bIsShut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanShut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartLocked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float AngularShutZone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float LinearShutZone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool AutoPopOpen;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float AutoPopOpenYaw;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDoorPassedShutThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularNavCuttingZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularNavCuttingZoneMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushBackPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushBackPlayerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushBackPlayerMaxSpeed;
    
    UPROPERTY(BlueprintAssignable)
    FTWDGripPhysicsDoorOnInteract OnDoorInteract;
    
    UPROPERTY(Transient)
    ASDIPlayerHand* CurrentlyGrabbedByHandAndLocked;
    
    UPROPERTY(Export, Transient)
    UActorComponent* CachedGripComponent;
    
    UPROPERTY(Transient)
    FSDIGripInfo CachedGripInfo;
    
    UPROPERTY(Transient)
    float NonVRDoorTargetAngle;
    
    UPROPERTY(Transient)
    bool bNonVRDoorAutoOpen;
    
    UPROPERTY(Transient)
    float NonVRDoorOpenDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonVRMaxAngleVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonVRAngleDeltaOpenEnough;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDoorOpensOutward;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    USceneComponent* ActiveDoorKnob;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DoorHealth;
    
protected:
    UPROPERTY(Transient)
    AAkAcousticPortal* Portal;
    
    UPROPERTY(Export, Transient)
    TArray<UAkComponent*> AkComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* BreakingNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* StrainingNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrainingHealthTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BreakingNoiseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BreakingNoiseVolume;
    
    ATWDGripPhysicsDoor();
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool UsePlayerKeyIfExists(ATWDPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool UpdatePhysicsConstraint(USceneComponent* HandleComponent, TEnumAsByte<EAngularConstraintMotion>& Swing1Motion, float& Swing1Limit, TEnumAsByte<EAngularConstraintMotion>& Swing2Motion, float& Swing2Limit, TEnumAsByte<EAngularConstraintMotion>& TwistMotion, float& TwistLimit, FRotator& RotationOffset);
    
public:
    UFUNCTION(BlueprintNativeEvent)
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
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorShut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorOpened();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorMoveStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorMoveEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorMove();
    
    UFUNCTION()
    void OnDoorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorHealthChanged(float NewHealth, float AmountChanged, float PercentRemaining);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDoorBreak(FVector Direction);
    
    UFUNCTION()
    bool NonVROpenDoor(ATWDCharacter* Character);
    
    UFUNCTION(NetMulticast, Reliable)
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
    UFUNCTION(BlueprintPure)
    bool IsDoorHeldByPlayer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDoorBroken();
    
protected:
    UFUNCTION(BlueprintPure)
    float GetDoorLocalAngle() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UStaticMeshComponent* GetDoorComponent();
    
public:
    UFUNCTION(BlueprintPure)
    UAkComponent* GetClosestAkComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableDynamicObstacle(bool enable);
    
    UFUNCTION(BlueprintPure)
    bool CanBeBroken();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BreakDoor(FVector Direction);
    
    UFUNCTION(BlueprintNativeEvent)
    void ApplyPushForce(FVector push);
    
};

