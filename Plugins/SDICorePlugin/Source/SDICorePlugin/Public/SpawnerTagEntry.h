#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnChanceData.h"
#include "Engine/DataTable.h"
#include "Curves/CurveFloat.h"
#include "SpawnerTagEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSpawnerTagEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> PossibleSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> AlternativeSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSpawnChanceData> PossibleSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSpawnChanceData> AlternativePossibleSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve AltProbabilityCurve;
    
    FSpawnerTagEntry();
};

