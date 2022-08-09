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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTWDCharacterDragTarget Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIDoubleRubberBandVector RubberBand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClampToArmLength;
    
    TWD_API FTWDCharacterDragEntry();
};

