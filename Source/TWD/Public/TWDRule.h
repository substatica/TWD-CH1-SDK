#pragma once
#include "CoreMinimal.h"
#include "TWDInitialContext.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "TWDCriterion.h"
#include "TWDRule.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDRule : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDCriterion> Criteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialResponseGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ResponseGroupHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDInitialContext ApplyContext;
    
public:
    FTWDRule();
};

