#pragma once
#include "CoreMinimal.h"
#include "TWDInteractiveActor.h"
#include "UObject/NoExportTypes.h"
#include "TWDGripPhysicsActor.generated.h"

class UPrimitiveComponent;

UCLASS()
class TWD_API ATWDGripPhysicsActor : public ATWDInteractiveActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceHideHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTickWhileAwake;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* SimulatePhysicsComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GripPhysicsRotator)
    FRotator RepGripPhysicsRotator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonVRMaxInteractDistance;
    
public:
    ATWDGripPhysicsActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRepGripPhysicsRotator(FRotator NewRotator);
    
    UFUNCTION()
    void OnRep_GripPhysicsRotator(FRotator NewRotator);
    
    UFUNCTION()
    void OnPhysicsComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION()
    void OnPhysicsComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintPure)
    FRotator GetRepGripPhysicsRotator() const;
    
};

