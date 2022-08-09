#pragma once
#include "CoreMinimal.h"
#include "TWDDialogueData.h"
#include "TWDVariableDialogueData.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDVariableDialogueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FTWDDialogueData> DialogueData;
    
    FTWDVariableDialogueData();
};

