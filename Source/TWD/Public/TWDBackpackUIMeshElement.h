#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDBackpackUIMeshElement.generated.h"

USTRUCT(BlueprintType)
struct FTWDBackpackUIMeshElement {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bVisible;
    
    UPROPERTY(Transient)
    FLinearColor Color;
    
    TWD_API FTWDBackpackUIMeshElement();
};

