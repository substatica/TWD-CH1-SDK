#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute_TWDProjectileActor.h"
#include "SDIProjectileActorSphere.h"
#include "TWDTimeDilationActorInterface.h"
#include "SDITuningInterface.h"
#include "TWDTimeDilationActorData.h"
#include "SDITuningAccumulator.h"
#include "TWDProjectileActor.generated.h"

class ATWDProjectileActor;

UCLASS(Blueprintable)
class ATWDProjectileActor : public ASDIProjectileActorSphere, public ITWDTimeDilationActorInterface, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTWDTimeDilationActorData RepTimeDilationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTWDTimeDilationActorData RepPlayerTimeDilationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
public:
    ATWDProjectileActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    ATWDProjectileActor* TuneTWDProjectileActor(FSDITuningAttribute_TWDProjectileActor Attr, float PreModifier, float Add, float PostModifier);
    
    
    // Fix for true pure virtual functions not being implemented
};

