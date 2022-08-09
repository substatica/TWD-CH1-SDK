#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDIReplicatedTuningModifier.h"
#include "SDITuningActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDITUNINGPLUGIN_API USDITuningActorComponent : public UActorComponent, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepTuningModifiers, meta=(AllowPrivateAccess=true))
    TArray<FSDIReplicatedTuningModifier> RepTuningModifiers;
    
public:
    USDITuningActorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepTuningModifiers();
    
    
    // Fix for true pure virtual functions not being implemented
};

