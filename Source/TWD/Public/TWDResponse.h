#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBarkCooldownType.h"
#include "UObject/NoExportTypes.h"
#include "TWDSubsequentBark.h"
#include "TWDResponse.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle DialogueHandle;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreBarkCooldown;
    
    UPROPERTY(EditAnywhere)
    bool bRespondOnce;
    
    UPROPERTY(EditAnywhere)
    EBarkCooldownType BarkCooldownType;
    
    UPROPERTY(EditAnywhere)
    FTWDSubsequentBark SubsequentBark;
    
protected:
    UPROPERTY(EditAnywhere)
    FFloatRange ResponseCooldown;
    
    UPROPERTY(EditAnywhere)
    FFloatRange GlobalResponseCooldown;
    
    UPROPERTY(EditAnywhere)
    FFloatRange BarkCooldown;
    
public:
    FTWDResponse();
};

