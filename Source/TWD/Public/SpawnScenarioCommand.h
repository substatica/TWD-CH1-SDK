#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpawnScenarioCommand.generated.h"

USTRUCT(BlueprintType)
struct FSpawnScenarioCommand : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> SublevelsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> SublevelsToUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LoadingPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LoadProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> IdentifyingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ProhibitedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DebugTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNightScenario;
    
    TWD_API FSpawnScenarioCommand();
};

