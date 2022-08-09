#pragma once
#include "CoreMinimal.h"
#include "TWDFavorTier.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct TWD_API FTWDFavorTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumFavorRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> UIIcon;
    
    FTWDFavorTier();
};

