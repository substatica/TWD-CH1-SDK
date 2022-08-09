#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute.h"
#include "SDIReplicatedTuningModifier.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SDITUNINGPLUGIN_API FSDIReplicatedTuningModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* TunedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDITuningAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PreModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PostModifier;
    
    FSDIReplicatedTuningModifier();
};

