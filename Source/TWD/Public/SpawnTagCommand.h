#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpawnTagCommand.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSpawnTagCommand : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSpawnCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* SpawnCurveOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bLimitToPlayerProximity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bDoNotSpawnInLineOfSight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bSpawnEvenlyAroundPlayer;
    
    TWD_API FSpawnTagCommand();
};

