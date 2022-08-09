#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider_QueryParams.h"
#include "TWDAIDataProvider_PerPlatform.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TWD_API UTWDAIDataProvider_PerPlatform : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowSpec;
    
public:
    UTWDAIDataProvider_PerPlatform();
};

