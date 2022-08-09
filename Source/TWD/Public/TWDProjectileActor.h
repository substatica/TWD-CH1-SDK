#pragma once
#include "CoreMinimal.h"
#include "SDIProjectileActorSphere.h"
#include "TWDTimeDilationActorInterface.h"
#include "TWDTimeDilationActorData.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDITuningAttribute_TWDProjectileActor.h"
#include "TWDProjectileActor.generated.h"

class ATWDProjectileActor;

UCLASS()
class ATWDProjectileActor : public ASDIProjectileActorSphere, public ITWDTimeDilationActorInterface, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Replicated)
    FTWDTimeDilationActorData RepTimeDilationData;
    
    UPROPERTY(EditAnywhere, Replicated)
    FTWDTimeDilationActorData RepPlayerTimeDilationData;
    
    UPROPERTY(Transient)
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ATWDProjectileActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    ATWDProjectileActor* TuneTWDProjectileActor(FSDITuningAttribute_TWDProjectileActor Attr, float PreModifier, float Add, float PostModifier);
    
    
    // Fix for true pure virtual functions not being implemented
};

