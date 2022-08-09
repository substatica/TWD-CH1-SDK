#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CoverPoint.generated.h"

class AController;

UCLASS(BlueprintType)
class COVERGENERATOR_API UCoverPoint : public UObject {
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
    
    UPROPERTY(BlueprintReadWrite)
    AController* OccupiedBy;
    
    UCoverPoint();
};

