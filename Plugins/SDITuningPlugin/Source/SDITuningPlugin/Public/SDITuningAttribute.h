#pragma once
#include "CoreMinimal.h"
#include "SDITuningAttribute.generated.h"

USTRUCT(BlueprintType)
struct SDITUNINGPLUGIN_API FSDITuningAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName AttributeName;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSubAttributes;
    
    FSDITuningAttribute();
};

