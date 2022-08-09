#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SDISlidingInteractiveActor.generated.h"

class UPrimitiveComponent;
class ASDIHingedActorHandle;
class ASDIPlayerHand;

UCLASS()
class TWD_API ASDISlidingInteractiveActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UPrimitiveComponent* SlidingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ASDIHingedActorHandle* HandleActor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector LocalClosedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector LocalOpenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxOpenSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Deceleration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ASDIPlayerHand* PlayerHand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsLocked;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentOpenPercentage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsClosed;
    
    ASDISlidingInteractiveActor();
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bWillLock);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlidingObjectMoveEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSlidingObjectMoved(float CurrentPosition);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
};

