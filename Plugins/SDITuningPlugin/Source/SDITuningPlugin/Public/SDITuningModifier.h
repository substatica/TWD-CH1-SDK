#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute.h"
#include "SDITuningModifier.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct SDITUNINGPLUGIN_API FSDITuningModifier {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FSDITuningAttribute BaseAttribute;
    
    UPROPERTY(Transient)
    FSDITuningAttribute Attribute;
    
    UPROPERTY(Transient)
    UStruct* BaseOwnerDef;
    
    UPROPERTY(Transient)
    UStruct* OwnerDef;
    
    UPROPERTY(Transient)
    float PreModifier;
    
    UPROPERTY(Transient)
    float Add;
    
    UPROPERTY(Transient)
    float PostModifier;
    
    UPROPERTY(Transient)
    bool bReplicated;
    
    FSDITuningModifier();
};

