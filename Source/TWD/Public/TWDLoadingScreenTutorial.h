#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TWDLoadingScreenTutorial.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TWD_API FTWDLoadingScreenTutorial : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxPercentage;
    
    FTWDLoadingScreenTutorial();
};

