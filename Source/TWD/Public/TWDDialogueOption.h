#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TWDDialogueOption.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TWD_API FTWDDialogueOption : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOptional;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadOnly)
    bool bExecuted;
    
    FTWDDialogueOption();
};

