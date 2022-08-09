#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESubtaskState.h"
#include "ETWDTaskStatusIcon.h"
#include "TWDSerializedTask.generated.h"

class UTWDTask;

USTRUCT(BlueprintType)
struct FTWDSerializedTask {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UTWDTask> TaskClass;
    
    UPROPERTY()
    TArray<ESubtaskState> SubclassStates;
    
    UPROPERTY()
    TArray<int32> SubclassValues;
    
    UPROPERTY()
    ETWDTaskStatusIcon CurrentStatusIcon;
    
    UPROPERTY()
    float LastUpdatedTime;
    
    TWD_API FTWDSerializedTask();
};

