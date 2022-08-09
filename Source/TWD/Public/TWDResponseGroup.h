#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TWDResponse.h"
#include "TWDResponseGroup.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDResponseGroup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequential;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowResponseRepeats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteGroupOnce;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDResponse> Responses;
    
public:
    FTWDResponseGroup();
};

