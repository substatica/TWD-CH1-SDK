#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider_QueryParams.h"
#include "TWDAIDataProvider_PerPlatform.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class TWD_API UTWDAIDataProvider_PerPlatform : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float HighSpec;
    
    UPROPERTY(EditAnywhere)
    float LowSpec;
    
public:
    UTWDAIDataProvider_PerPlatform();
};

