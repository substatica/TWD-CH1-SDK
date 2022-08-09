#pragma once
#include "CoreMinimal.h"
#include "SDITuningAccumulator.h"
#include "GameFramework/Character.h"
#include "SDITuningInterface.h"
#include "SDIReplicatedTuningModifier.h"
#include "SDITuningAttribute_CharacterMovementComponent.h"
#include "SDITuningCharacter.generated.h"

class ASDITuningCharacter;

UCLASS()
class SDITUNINGPLUGIN_API ASDITuningCharacter : public ACharacter, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FSDITuningAccumulator TuningAccumulator;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepTuningModifiers)
    TArray<FSDIReplicatedTuningModifier> RepTuningModifiers;
    
public:
    ASDITuningCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    ASDITuningCharacter* TuneCharacterMovementComponent(FSDITuningAttribute_CharacterMovementComponent Attr, float PreModifier, float Add, float PostModifier);
    
protected:
    UFUNCTION()
    void OnRep_RepTuningModifiers();
    
    
    // Fix for true pure virtual functions not being implemented
};

