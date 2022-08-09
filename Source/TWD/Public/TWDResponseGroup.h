#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TWDResponse.h"
#include "TWDResponseGroup.generated.h"

USTRUCT()
struct TWD_API FTWDResponseGroup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSequential;
    
    UPROPERTY(EditAnywhere)
    bool bAllowResponseRepeats;
    
    UPROPERTY(EditAnywhere)
    bool bExecuteGroupOnce;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FTWDResponse> Responses;
    
public:
    FTWDResponseGroup();
};

