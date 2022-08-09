#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TWDTopic.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TWD_API FTWDTopic : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    FTWDTopic();
};

