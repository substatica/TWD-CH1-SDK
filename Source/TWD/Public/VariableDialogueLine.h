#pragma once
#include "CoreMinimal.h"
#include "DialogueLine.h"
#include "EGender.h"
#include "TWDVariableDialogueData.h"
#include "VariableDialogueLine.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FVariableDialogueLine : public FDialogueLine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EGender, FTWDVariableDialogueData> GenderDialogueLines;
    
public:
    FVariableDialogueLine();
};

