#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CoverPointSaved.generated.h"

USTRUCT(BlueprintType)
struct FCoverPointSaved {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    FVector _DirectionToWall;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator RotatorXToWall;
    
    UPROPERTY(BlueprintReadWrite)
    bool bLeftCoverStanding;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRightCoverStanding;
    
    UPROPERTY(BlueprintReadWrite)
    bool bLeftCoverCrouched;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRightCoverCrouched;
    
    UPROPERTY(BlueprintReadWrite)
    bool bFrontCoverCrouched;
    
    UPROPERTY(BlueprintReadWrite)
    bool bCrouchedCover;
    
    COVERGENERATOR_API FCoverPointSaved();
};

