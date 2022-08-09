#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TWDTopic.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TWD_API FTWDTopic : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Texture;
    
    FTWDTopic();
};

