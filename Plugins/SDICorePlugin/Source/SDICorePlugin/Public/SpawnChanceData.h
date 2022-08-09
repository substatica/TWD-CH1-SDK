#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Curves/CurveFloat.h"
#include "SpawnChanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSpawnChanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinGoreLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SpawnChanceCurve;
    
    FSpawnChanceData();
};

