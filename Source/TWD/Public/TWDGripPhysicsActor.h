#pragma once
#include "CoreMinimal.h"
#include "TWDInteractiveActor.h"
#include "UObject/NoExportTypes.h"
#include "TWDGripPhysicsActor.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class TWD_API ATWDGripPhysicsActor : public ATWDInteractiveActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceHideHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickWhileAwake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SimulatePhysicsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GripPhysicsRotator, meta=(AllowPrivateAccess=true))
    FRotator RepGripPhysicsRotator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRMaxInteractDistance;
    
public:
    ATWDGripPhysicsActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRepGripPhysicsRotator(FRotator NewRotator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GripPhysicsRotator(FRotator NewRotator);
    
    UFUNCTION(BlueprintCallable)
    void OnPhysicsComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnPhysicsComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRepGripPhysicsRotator() const;
    
};

