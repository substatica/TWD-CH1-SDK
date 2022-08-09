#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AICellMember.generated.h"

class ATWDAIController;

USTRUCT(BlueprintType)
struct FAICellMember {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<ATWDAIController> AI;
    
    UPROPERTY()
    float AIValue;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    int32 CurrentCellIndex;
    
    UPROPERTY()
    int32 DestinationCellIndex;
    
    TWD_API FAICellMember();
};

