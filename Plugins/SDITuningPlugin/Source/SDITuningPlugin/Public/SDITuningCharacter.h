#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SDITuningInterface.h"
#include "SDITuningAccumulator.h"
#include "SDIReplicatedTuningModifier.h"
#include "SDITuningAttribute_CharacterMovementComponent.h"
#include "SDITuningCharacter.generated.h"

class ASDITuningCharacter;

UCLASS(Blueprintable)
class SDITUNINGPLUGIN_API ASDITuningCharacter : public ACharacter, public ISDITuningInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAccumulator TuningAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepTuningModifiers, meta=(AllowPrivateAccess=true))
    TArray<FSDIReplicatedTuningModifier> RepTuningModifiers;
    
public:
    ASDITuningCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    ASDITuningCharacter* TuneCharacterMovementComponent(FSDITuningAttribute_CharacterMovementComponent Attr, float PreModifier, float Add, float PostModifier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepTuningModifiers();
    
    
    // Fix for true pure virtual functions not being implemented
};

