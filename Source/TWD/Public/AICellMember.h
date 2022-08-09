#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AICellMember.generated.h"

class ATWDAIController;

USTRUCT(BlueprintType)
struct FAICellMember {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATWDAIController> AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCellIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestinationCellIndex;
    
    TWD_API FAICellMember();
};

