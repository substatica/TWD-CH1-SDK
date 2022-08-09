#pragma once
#include "CoreMinimal.h"
#include "TWDFavorTier.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TWD_API FTWDFavorTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumFavorRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> UIIcon;
    
    FTWDFavorTier();
};

