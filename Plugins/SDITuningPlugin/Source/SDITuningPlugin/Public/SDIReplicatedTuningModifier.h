#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute.h"
#include "SDIReplicatedTuningModifier.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SDITUNINGPLUGIN_API FSDIReplicatedTuningModifier {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UObject* TunedObject;
    
    UPROPERTY(Transient)
    FSDITuningAttribute Attribute;
    
    UPROPERTY(Transient)
    float PreModifier;
    
    UPROPERTY(Transient)
    float Add;
    
    UPROPERTY(Transient)
    float PostModifier;
    
    FSDIReplicatedTuningModifier();
};

