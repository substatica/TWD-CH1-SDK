#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TWDCriterion.h"
#include "Engine/DataTable.h"
#include "TWDInitialContext.h"
#include "TWDRule.generated.h"

USTRUCT()
struct TWD_API FTWDRule : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FTWDCriterion> Criteria;
    
    UPROPERTY(EditAnywhere)
    bool bMatchOnce;
    
    UPROPERTY(EditAnywhere)
    bool bSequentialResponseGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataTableRowHandle> ResponseGroupHandles;
    
    UPROPERTY(EditAnywhere)
    FTWDInitialContext ApplyContext;
    
public:
    FTWDRule();
};

