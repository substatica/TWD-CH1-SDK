#pragma once
#include "CoreMinimal.h"
#include "SDIDoubleRubberBandVector.h"
#include "TWDCharacterDragTarget.h"
#include "TWDCharacterDragEntry.generated.h"

class ASDIPlayerHand;

USTRUCT(BlueprintType)
struct FTWDCharacterDragEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ASDIPlayerHand* hand;
    
    UPROPERTY(Transient)
    FTWDCharacterDragTarget Bone;
    
    UPROPERTY(Transient)
    FSDIDoubleRubberBandVector RubberBand;
    
    UPROPERTY(Transient)
    bool bClampToArmLength;
    
    TWD_API FTWDCharacterDragEntry();
};

