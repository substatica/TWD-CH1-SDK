#pragma once
#include "CoreMinimal.h"
#include "TWDCharacterDragTarget.generated.h"

USTRUCT(BlueprintType)
struct FTWDCharacterDragTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Pivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PivotLength;
    
    TWD_API FTWDCharacterDragTarget();
};

