#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDIReplicatedTuningModifier.h"
#include "SDITuningActor.generated.h"

UCLASS()
class SDITUNINGPLUGIN_API ASDITuningActor : public AActor, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FSDITuningAccumulator TuningAccumulator;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepTuningModifiers)
    TArray<FSDIReplicatedTuningModifier> RepTuningModifiers;
    
public:
    ASDITuningActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_RepTuningModifiers();
    
    
    // Fix for true pure virtual functions not being implemented
};

