#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AICellModifier.h"
#include "AICell.generated.h"

USTRUCT(BlueprintType)
struct FAICell {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector Bounds;
    
    UPROPERTY()
    int32 CurrentCount;
    
    UPROPERTY()
    float fCurrentValue;
    
    UPROPERTY()
    int32 iCurrentValue;
    
    UPROPERTY()
    bool bContainsPlayer;
    
    UPROPERTY()
    TArray<FAICellModifier> ActiveModifiers;
    
    TWD_API FAICell();
};

