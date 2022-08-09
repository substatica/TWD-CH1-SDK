#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIHingedInteractiveActor.generated.h"

class UAkAudioEvent;
class UPrimitiveComponent;
class ASDIHingedActorHandle;
class ASDIPlayerHand;
class UArrowComponent;

UCLASS()
class TWD_API ASDIHingedInteractiveActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UPrimitiveComponent* DoorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ASDIHingedActorHandle* HandleActor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator DoorMinRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator DoorMaxRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float YawDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bOpensAwayFromPlayerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxYawSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ImpulseMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float OnHitTimerIteration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly)
    float DoorShutBufferZoneSize;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ASDIPlayerHand* PlayerHand;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bHandleGripped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDoorIsLocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDoorIsClosed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UArrowComponent* PositiveRotationArrow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UArrowComponent* GripPointArrow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* DoorOpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* DoorClosedSound;
    
    ASDIHingedInteractiveActor();
    UFUNCTION(BlueprintCallable)
    void SetDoorLocked(bool bLocked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRotatingObjectMoveEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRotatingObjectMoved(float CurrentYaw);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorOpened();
    
protected:
    UFUNCTION()
    void OnDoorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoorClosed();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoorLocked();
    
protected:
    UFUNCTION()
    void DoorHitTimerCompleted();
    
};

