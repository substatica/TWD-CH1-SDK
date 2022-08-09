#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AICellModifier.generated.h"

USTRUCT(BlueprintType)
struct FAICellModifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ModValue;
    
    UPROPERTY()
    float Halflife;
    
    UPROPERTY()
    FGuid UniqueId;
    
    TWD_API FAICellModifier();
};

