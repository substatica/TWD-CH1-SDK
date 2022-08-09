#pragma once
#include "CoreMinimal.h"
#include "TWDCharacterDragTarget.generated.h"

USTRUCT(BlueprintType)
struct FTWDCharacterDragTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Bone;
    
    UPROPERTY(EditAnywhere)
    FName Pivot;
    
    UPROPERTY(EditAnywhere)
    float PivotLength;
    
    TWD_API FTWDCharacterDragTarget();
};

